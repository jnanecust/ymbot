"""PyBullet IK lift-box node: initial EE poses + grasp poses -> dual arm trajectory."""

import copy
import math
import os
import tempfile
import threading
import time

import pybullet as p
import rclpy
from builtin_interfaces.msg import Duration
from geometry_msgs.msg import PoseStamped
from rclpy.duration import Duration as RclpyDuration
from rclpy.executors import MultiThreadedExecutor
from rclpy.node import Node
from sensor_msgs.msg import JointState
from tf2_ros import Buffer, TransformException, TransformListener
from trajectory_msgs.msg import JointTrajectory, JointTrajectoryPoint

try:
    import tf2_geometry_msgs  # noqa: F401
except Exception:
    tf2_geometry_msgs = None


LEFT_JOINTS = [f"Left_Arm_Joint{i}" for i in range(1, 8)]
RIGHT_JOINTS = [f"Right_Arm_Joint{i}" for i in range(1, 8)]
ARM_JOINTS = LEFT_JOINTS + RIGHT_JOINTS
BODY_JOINTS = [f"Body_Joint{i}" for i in range(1, 5)]
REQUIRED_JOINTS = BODY_JOINTS + ARM_JOINTS

BODY_LINK = "Body_Link5"
LEFT_EE = "Left_Arm_Link8"
RIGHT_EE = "Right_Arm_Link8"


def sec_msg(seconds):
    sec = int(seconds)
    return Duration(sec=sec, nanosec=int((seconds - sec) * 1e9))


def pose_tuple(msg):
    return (
        (msg.pose.position.x, msg.pose.position.y, msg.pose.position.z),
        (
            msg.pose.orientation.x,
            msg.pose.orientation.y,
            msg.pose.orientation.z,
            msg.pose.orientation.w,
        ),
    )


def quat_error(q1, q2):
    diff = p.getDifferenceQuaternion(q1, q2)
    xyz = math.sqrt(diff[0] ** 2 + diff[1] ** 2 + diff[2] ** 2)
    return 2.0 * math.atan2(xyz, abs(diff[3]))


class PyBulletDualArmIkLiftBox(Node):
    def __init__(self):
        super().__init__("pybullet_dual_arm_ik_lift_box")

        default_root = "/home/z/YMbot_ROS2/src/control/ymbot_d_description"
        self.declare_parameter("urdf_root", default_root)
        self.declare_parameter("urdf_file", default_root + "/urdf/ymbot_d.urdf")
        self.declare_parameter("reference_frame", BODY_LINK)
        self.declare_parameter("initial_left_topic", "/left_arm/initial_pose")
        self.declare_parameter("initial_right_topic", "/right_arm/initial_pose")
        self.declare_parameter("left_topic", "/box_left_grasp/stable_pose")
        self.declare_parameter("right_topic", "/box_right_grasp/stable_pose")
        self.declare_parameter("joint_state_topic", "/joint_states")
        self.declare_parameter("left_command_topic", "/left_arm_controller/joint_trajectory")
        self.declare_parameter("right_command_topic", "/right_arm_controller/joint_trajectory")
        self.declare_parameter("execute_motion", False)
        self.declare_parameter("motion_duration", 3.0)
        self.declare_parameter("side_offset", 0.04)
        self.declare_parameter("up_offset", 0.04)
        self.declare_parameter("approach_x_offset", -0.08)
        self.declare_parameter("approach_z_offset", 0.22)
        self.declare_parameter("position_tolerance", 0.03)
        self.declare_parameter("orientation_tolerance", 0.35)
        self.declare_parameter("max_iterations", 200)
        self.declare_parameter("residual_threshold", 1e-4)
        self.declare_parameter("tf_timeout", 1.0)
        self.declare_parameter("cartesian_steps", 20)
        self.declare_parameter("trajectory_mode", "min_jerk")
        self.declare_parameter("start_delay", 0.2)
        self.declare_parameter("wait_for_execution", True)
        self.declare_parameter("require_initial_pose", True)
        self.declare_parameter("publish_continuous_trajectory", False)
        self.declare_parameter("segment_pause", 3.0)
        self.declare_parameter("joint_goal_tolerance", 0.03)
        self.declare_parameter("execution_timeout", 8.0)

        self.reference_frame = self.param("reference_frame")
        self.execute_motion = bool(self.param("execute_motion"))
        self.motion_duration = float(self.param("motion_duration"))
        self.side_offset = float(self.param("side_offset"))
        self.up_offset = float(self.param("up_offset"))
        self.approach_x_offset = float(self.param("approach_x_offset"))
        self.approach_z_offset = float(self.param("approach_z_offset"))
        self.position_tolerance = float(self.param("position_tolerance"))
        self.orientation_tolerance = float(self.param("orientation_tolerance"))
        self.max_iterations = int(self.param("max_iterations"))
        self.residual_threshold = float(self.param("residual_threshold"))
        self.tf_timeout = float(self.param("tf_timeout"))
        self.cartesian_steps = max(2, int(self.param("cartesian_steps")))
        self.trajectory_mode = str(self.param("trajectory_mode")).lower()
        self.start_delay = float(self.param("start_delay"))
        self.wait_for_execution = bool(self.param("wait_for_execution"))
        self.require_initial_pose = bool(self.param("require_initial_pose"))
        self.publish_continuous_trajectory = bool(self.param("publish_continuous_trajectory"))
        self.segment_pause = float(self.param("segment_pause"))
        self.joint_goal_tolerance = float(self.param("joint_goal_tolerance"))
        self.execution_timeout = float(self.param("execution_timeout"))

        self.initial_left_pose = None
        self.initial_right_pose = None
        self.left_pose = None
        self.right_pose = None
        self.joints = {}
        self.started = False
        self.executed = False
        self.running = False
        self.lock = threading.Lock()

        self.tf_buffer = Buffer()
        self.tf_listener = TransformListener(self.tf_buffer, self)
        self.load_pybullet_robot()

        self.left_pub = self.create_publisher(JointTrajectory, self.param("left_command_topic"), 10)
        self.right_pub = self.create_publisher(JointTrajectory, self.param("right_command_topic"), 10)
        self.create_subscription(PoseStamped, self.param("initial_left_topic"), self.on_initial_left_pose, 10)
        self.create_subscription(PoseStamped, self.param("initial_right_topic"), self.on_initial_right_pose, 10)
        self.create_subscription(PoseStamped, self.param("left_topic"), self.on_left_pose, 10)
        self.create_subscription(PoseStamped, self.param("right_topic"), self.on_right_pose, 10)
        self.create_subscription(JointState, self.param("joint_state_topic"), self.on_joint_state, 20)
        self.create_timer(0.1, self.try_start)

        threading.Thread(target=self.keyboard_loop, daemon=True).start()

        mode = "发布轨迹" if self.execute_motion else "只求 IK，不发布轨迹"
        self.get_logger().info(
            "PyBullet IK 节点已启动\n"
            f"  mode={mode}\n"
            f"  reference_frame={self.reference_frame}\n"
            f"  require_initial_pose={self.require_initial_pose}\n"
            f"  publish_continuous_trajectory={self.publish_continuous_trajectory}\n"
            f"  segment_pause={self.segment_pause:.2f}s\n"
            f"  trajectory_mode={self.trajectory_mode}, cartesian_steps={self.cartesian_steps}\n"
            "  输入 s 后回车开始一次任务，输入 q 后回车退出。"
        )

    def param(self, name):
        return self.get_parameter(name).value

    def destroy_node(self):
        if hasattr(self, "client"):
            p.disconnect(self.client)
        if hasattr(self, "temp_urdf") and os.path.exists(self.temp_urdf):
            os.remove(self.temp_urdf)
        super().destroy_node()

    def load_pybullet_robot(self):
        urdf_root = os.path.abspath(os.path.expanduser(self.param("urdf_root")))
        urdf_file = os.path.abspath(os.path.expanduser(self.param("urdf_file")))
        with open(urdf_file, "r", encoding="utf-8") as src:
            urdf_text = src.read().replace("package://ymbot_d_description/", urdf_root + "/")

        fd, self.temp_urdf = tempfile.mkstemp(prefix="ymbot_d_pybullet_", suffix=".urdf")
        with os.fdopen(fd, "w", encoding="utf-8") as dst:
            dst.write(urdf_text)

        self.client = p.connect(p.DIRECT)
        self.robot = p.loadURDF(self.temp_urdf, useFixedBase=True, flags=p.URDF_USE_INERTIA_FROM_FILE)

        self.joint_index = {}
        self.link_index = {}
        self.movable = []
        self.lower = []
        self.upper = []
        self.ranges = []

        for idx in range(p.getNumJoints(self.robot)):
            info = p.getJointInfo(self.robot, idx)
            joint_name = info[1].decode()
            link_name = info[12].decode()
            self.joint_index[joint_name] = idx
            self.link_index[link_name] = idx
            if info[2] == p.JOINT_FIXED:
                continue
            self.movable.append(idx)
            low, high = float(info[8]), float(info[9])
            if low >= high:
                low, high = -math.pi, math.pi
            self.lower.append(low)
            self.upper.append(high)
            self.ranges.append(high - low)

        for name in REQUIRED_JOINTS + [BODY_LINK, LEFT_EE, RIGHT_EE]:
            source = self.joint_index if "Joint" in name else self.link_index
            if name not in source:
                raise RuntimeError(f"URDF 中找不到 {name}")

        self.ik_slot = {joint_idx: slot for slot, joint_idx in enumerate(self.movable)}
        self.left_idx = [self.joint_index[name] for name in LEFT_JOINTS]
        self.right_idx = [self.joint_index[name] for name in RIGHT_JOINTS]
        self.body_idx = self.link_index[BODY_LINK]
        self.left_ee_idx = self.link_index[LEFT_EE]
        self.right_ee_idx = self.link_index[RIGHT_EE]

    def keyboard_loop(self):
        while rclpy.ok():
            try:
                cmd = input("\n输入 s 后回车开始执行一次任务，输入 q 后回车退出：").strip().lower()
            except EOFError:
                self.get_logger().warn("标准输入不可用，无法通过键盘启动")
                return
            except KeyboardInterrupt:
                rclpy.shutdown()
                return
            if cmd in ("q", "quit", "exit"):
                rclpy.shutdown()
                return
            if cmd in ("", "s", "start"):
                with self.lock:
                    self.started = True
                self.get_logger().info("已收到启动指令")
                return
            self.get_logger().warn("请输入 s 启动，或 q 退出")

    def on_left_pose(self, msg):
        with self.lock:
            self.left_pose = msg

    def on_right_pose(self, msg):
        with self.lock:
            self.right_pose = msg

    def on_initial_left_pose(self, msg):
        with self.lock:
            self.initial_left_pose = msg

    def on_initial_right_pose(self, msg):
        with self.lock:
            self.initial_right_pose = msg

    def on_joint_state(self, msg):
        with self.lock:
            for name, value in zip(msg.name, msg.position):
                self.joints[name] = float(value)

    def try_start(self):
        with self.lock:
            if self.executed or self.running or not self.started:
                return
            missing = [name for name in REQUIRED_JOINTS if name not in self.joints]
            missing_initial_pose = (
                self.require_initial_pose
                and (self.initial_left_pose is None or self.initial_right_pose is None)
            )
            if self.left_pose is None or self.right_pose is None or missing or missing_initial_pose:
                self.get_logger().warn(
                    "等待初始左右末端位姿、左右 stable_pose 和 /joint_states 中的 Body/左右臂关节"
                )
                return
            self.executed = True
            self.running = True
            initial_left_pose = copy.deepcopy(self.initial_left_pose)
            initial_right_pose = copy.deepcopy(self.initial_right_pose)
            left_pose = copy.deepcopy(self.left_pose)
            right_pose = copy.deepcopy(self.right_pose)
            joints = dict(self.joints)

        threading.Thread(
            target=self.run_task,
            args=(initial_left_pose, initial_right_pose, left_pose, right_pose, joints),
            daemon=True,
        ).start()

    def run_task(self, initial_left_pose, initial_right_pose, left_pose, right_pose, joints):
        try:
            ok = self.execute(initial_left_pose, initial_right_pose, left_pose, right_pose, joints)
            self.get_logger().info("任务完成" if ok else "任务失败")
        except Exception as exc:
            self.get_logger().exception(f"任务异常: {exc}")
        finally:
            self.running = False
            time.sleep(0.2)
            if rclpy.ok():
                rclpy.shutdown()

    def execute(self, initial_left_pose, initial_right_pose, left_pose, right_pose, joints):
        if initial_left_pose is not None:
            initial_left_pose = self.to_reference(initial_left_pose)
        if initial_right_pose is not None:
            initial_right_pose = self.to_reference(initial_right_pose)
        if self.require_initial_pose and (initial_left_pose is None or initial_right_pose is None):
            return False

        left_pose = self.to_reference(left_pose)
        right_pose = self.to_reference(right_pose)
        if left_pose is None or right_pose is None:
            return False

        current = dict(joints)
        self.reset_robot(current)
        self.log_model_pose()

        left_waypoints = self.waypoints(left_pose, "left")
        right_waypoints = self.waypoints(right_pose, "right")
        start_left_world = self.body_pose_to_world(*pose_tuple(initial_left_pose)) if initial_left_pose else None
        start_right_world = self.body_pose_to_world(*pose_tuple(initial_right_pose)) if initial_right_pose else None

        if self.publish_continuous_trajectory:
            return self.plan_and_publish_continuous(
                left_waypoints,
                right_waypoints,
                current,
                start_left_world,
                start_right_world,
            )

        step_count = len(left_waypoints)
        for step, (left_wp, right_wp) in enumerate(zip(left_waypoints, right_waypoints), start=1):
            left_start = start_left_world if step == 1 else None
            right_start = start_right_world if step == 1 else None
            result = self.plan_segment(step, left_wp, right_wp, current, left_start, right_start)
            if result is None:
                return False

            left_path, right_path = result
            self.log_q(step, left_path[-1], right_path[-1])
            reached_snapshot = None
            if self.execute_motion:
                self.publish_trajectory(left_path, right_path, current)
                if self.wait_for_execution:
                    reached_snapshot = self.wait_until_reached(
                        left_path[-1],
                        right_path[-1],
                        self.motion_duration,
                    )
                    if reached_snapshot is None:
                        return False
                else:
                    time.sleep(self.motion_duration + 0.5)
            else:
                self.get_logger().info(f"路点 {step}: execute_motion=false，未发布轨迹")

            if reached_snapshot is None:
                current.update(zip(LEFT_JOINTS, left_path[-1]))
                current.update(zip(RIGHT_JOINTS, right_path[-1]))
            else:
                current.update(
                    {name: reached_snapshot[name] for name in REQUIRED_JOINTS if name in reached_snapshot}
                )

            if self.execute_motion and step < step_count and self.segment_pause > 0.0:
                self.get_logger().info(
                    f"路点 {step} 已执行完成，停顿 {self.segment_pause:.1f}s 后执行下一段"
                )
                time.sleep(self.segment_pause)
        return True

    def plan_and_publish_continuous(
        self,
        left_waypoints,
        right_waypoints,
        current,
        start_left_world=None,
        start_right_world=None,
    ):
        original_current = dict(current)
        all_left_path = []
        all_right_path = []

        for step, (left_wp, right_wp) in enumerate(zip(left_waypoints, right_waypoints), start=1):
            left_start = start_left_world if step == 1 else None
            right_start = start_right_world if step == 1 else None
            result = self.plan_segment(step, left_wp, right_wp, current, left_start, right_start)
            if result is None:
                return False

            left_path, right_path = result
            all_left_path.extend(left_path)
            all_right_path.extend(right_path)
            current.update(zip(LEFT_JOINTS, left_path[-1]))
            current.update(zip(RIGHT_JOINTS, right_path[-1]))
            self.log_q(step, left_path[-1], right_path[-1])

        total_duration = self.motion_duration * len(left_waypoints)
        if self.execute_motion:
            self.publish_trajectory(
                all_left_path,
                all_right_path,
                original_current,
                duration=total_duration,
            )
            if self.wait_for_execution:
                return (
                    self.wait_until_reached(all_left_path[-1], all_right_path[-1], total_duration)
                    is not None
                )
            time.sleep(total_duration + 0.5)
        else:
            self.get_logger().info("execute_motion=false，已完成连续轨迹规划但未发布轨迹")
        return True

    def plan_segment(self, step, left_wp, right_wp, current, left_start_override=None, right_start_override=None):
        self.reset_robot(current)
        left_start = left_start_override or self.link_pose(self.left_ee_idx)
        right_start = right_start_override or self.link_pose(self.right_ee_idx)
        left_goal = self.body_pose_to_world(*pose_tuple(left_wp))
        right_goal = self.body_pose_to_world(*pose_tuple(right_wp))

        left_targets = self.interpolate_pose(left_start, left_goal, self.cartesian_steps)
        right_targets = self.interpolate_pose(right_start, right_goal, self.cartesian_steps)

        seed = dict(current)
        left_path = []
        right_path = []
        max_pos_err = 0.0
        max_ori_err = 0.0

        for target_idx, (left_target, right_target) in enumerate(
            zip(left_targets, right_targets),
            start=1,
        ):
            self.reset_robot(seed)
            left_q = self.solve_ik(self.left_ee_idx, self.left_idx, left_target, seed)

            seed_with_left = dict(seed)
            seed_with_left.update(zip(LEFT_JOINTS, left_q))
            self.reset_robot(seed_with_left)
            right_q = self.solve_ik(self.right_ee_idx, self.right_idx, right_target, seed_with_left)

            self.reset_robot(seed)
            self.set_arm_q(left_q, right_q)
            left_real = self.link_pose(self.left_ee_idx)
            right_real = self.link_pose(self.right_ee_idx)

            l_pos_err = math.dist(left_real[0], left_target[0])
            r_pos_err = math.dist(right_real[0], right_target[0])
            l_ori_err = quat_error(left_real[1], left_target[1])
            r_ori_err = quat_error(right_real[1], right_target[1])
            max_pos_err = max(max_pos_err, l_pos_err, r_pos_err)
            max_ori_err = max(max_ori_err, l_ori_err, r_ori_err)

            if max(l_pos_err, r_pos_err) > self.position_tolerance:
                self.get_logger().error(
                    f"路点 {step}.{target_idx} 位置误差过大: "
                    f"L={l_pos_err:.4f}m, R={r_pos_err:.4f}m"
                )
                return None
            if max(l_ori_err, r_ori_err) > self.orientation_tolerance:
                self.get_logger().error(
                    f"路点 {step}.{target_idx} 姿态误差过大: "
                    f"L={l_ori_err:.3f}rad, R={r_ori_err:.3f}rad"
                )
                return None

            left_path.append(left_q)
            right_path.append(right_q)
            seed.update(zip(LEFT_JOINTS, left_q))
            seed.update(zip(RIGHT_JOINTS, right_q))

        self.get_logger().info(
            f"路点 {step} 段规划完成: {len(left_path)} 个插值点, "
            f"max_pos_err={max_pos_err:.4f}m, max_ori_err={max_ori_err:.3f}rad"
        )
        return left_path, right_path

    def solve_ik(self, ee_idx, arm_indices, target, current):
        lower = list(self.lower)
        upper = list(self.upper)
        ranges = list(self.ranges)
        rest = []
        active = set(arm_indices)

        for slot, joint_idx in enumerate(self.movable):
            name = p.getJointInfo(self.robot, joint_idx)[1].decode()
            value = current.get(name, p.getJointState(self.robot, joint_idx)[0])
            rest.append(value)
            if joint_idx not in active:
                lower[slot] = value - 1e-6
                upper[slot] = value + 1e-6
                ranges[slot] = 2e-6

        q_all = p.calculateInverseKinematics(
            bodyUniqueId=self.robot,
            endEffectorLinkIndex=ee_idx,
            targetPosition=target[0],
            targetOrientation=target[1],
            lowerLimits=lower,
            upperLimits=upper,
            jointRanges=ranges,
            restPoses=rest,
            jointDamping=[0.05] * len(self.movable),
            maxNumIterations=self.max_iterations,
            residualThreshold=self.residual_threshold,
        )
        return [float(q_all[self.ik_slot[idx]]) for idx in arm_indices]

    def reset_robot(self, joints):
        for name, value in joints.items():
            idx = self.joint_index.get(name)
            if idx is not None:
                p.resetJointState(self.robot, idx, value)

    def set_arm_q(self, left_q, right_q):
        for idx, value in zip(self.left_idx, left_q):
            p.resetJointState(self.robot, idx, value)
        for idx, value in zip(self.right_idx, right_q):
            p.resetJointState(self.robot, idx, value)

    def link_pose(self, idx):
        state = p.getLinkState(self.robot, idx, computeForwardKinematics=True)
        return tuple(state[4]), tuple(state[5])

    def body_pose_to_world(self, pos, quat):
        body_pos, body_quat = self.link_pose(self.body_idx)
        world_pos, world_quat = p.multiplyTransforms(body_pos, body_quat, pos, quat)
        return tuple(world_pos), tuple(world_quat)

    def log_model_pose(self):
        body = self.link_pose(self.body_idx)
        left = self.link_pose(self.left_ee_idx)
        right = self.link_pose(self.right_ee_idx)
        self.get_logger().info(
            "PyBullet 当前模型位姿："
            f" Body_Link5={self.format_pose(body)},"
            f" Left_Arm_Link8={self.format_pose(left)},"
            f" Right_Arm_Link8={self.format_pose(right)}"
        )

    @staticmethod
    def format_pose(link_pose):
        pos, quat = link_pose
        return (
            f"pos=({pos[0]:.3f},{pos[1]:.3f},{pos[2]:.3f}),"
            f" quat=({quat[0]:.3f},{quat[1]:.3f},{quat[2]:.3f},{quat[3]:.3f})"
        )

    def publish_trajectory(self, left_path, right_path, current, duration=None):
        if duration is None:
            duration = self.motion_duration
        stamp = (self.get_clock().now() + RclpyDuration(seconds=self.start_delay)).to_msg()
        self.left_pub.publish(self.make_trajectory(LEFT_JOINTS, left_path, current, stamp, duration))
        self.right_pub.publish(self.make_trajectory(RIGHT_JOINTS, right_path, current, stamp, duration))
        self.get_logger().info(
            f"已发布左右臂 JointTrajectory，每臂 {len(left_path) + 1} 个轨迹点, "
            f"duration={duration:.2f}s"
        )

    def make_trajectory(self, names, joint_path, current, stamp, duration):
        traj = JointTrajectory()
        traj.header.stamp = stamp
        traj.header.frame_id = self.reference_frame
        traj.joint_names = list(names)

        start = JointTrajectoryPoint()
        start.positions = [current.get(name, 0.0) for name in names]
        start.time_from_start = sec_msg(0.0)
        traj.points.append(start)

        count = len(joint_path)
        for idx, q in enumerate(joint_path, start=1):
            point = JointTrajectoryPoint()
            point.positions = list(q)
            point.time_from_start = sec_msg(duration * idx / count)
            traj.points.append(point)
        return traj

    def wait_until_reached(self, left_goal, right_goal, duration):
        goals = dict(zip(LEFT_JOINTS, left_goal))
        goals.update(zip(RIGHT_JOINTS, right_goal))
        deadline = time.time() + duration + self.execution_timeout

        while rclpy.ok() and time.time() < deadline:
            with self.lock:
                snapshot = dict(self.joints)
            if all(name in snapshot for name in goals):
                max_err = max(abs(snapshot[name] - value) for name, value in goals.items())
                if max_err <= self.joint_goal_tolerance:
                    self.get_logger().info(f"关节反馈已到位，max_err={max_err:.4f} rad")
                    return snapshot
            time.sleep(0.05)

        self.get_logger().error("等待真实机器人关节反馈到位超时，停止后续路点")
        return None

    def interpolate_pose(self, start, goal, steps):
        return [
            (
                self.interpolate_position(start[0], goal[0], self.path_alpha(i, steps)),
                p.getQuaternionSlerp(start[1], goal[1], self.path_alpha(i, steps)),
            )
            for i in range(1, steps + 1)
        ]

    def interpolate_position(self, start, goal, alpha):
        return tuple((1.0 - alpha) * start[i] + alpha * goal[i] for i in range(3))

    def path_alpha(self, idx, steps):
        alpha = idx / steps
        if self.trajectory_mode in ("linear", "line"):
            return alpha
        if self.trajectory_mode in ("min_jerk", "minimum_jerk"):
            return 10 * alpha**3 - 15 * alpha**4 + 6 * alpha**5
        self.get_logger().warn(f"未知 trajectory_mode={self.trajectory_mode}，按 min_jerk 处理")
        return 10 * alpha**3 - 15 * alpha**4 + 6 * alpha**5

    def to_reference(self, msg):
        frame = msg.header.frame_id.strip()
        if frame == "":
            copied = copy.deepcopy(msg)
            copied.header.frame_id = self.reference_frame
            return copied
        if frame == self.reference_frame:
            return copy.deepcopy(msg)
        try:
            return self.tf_buffer.transform(
                msg,
                self.reference_frame,
                timeout=RclpyDuration(seconds=self.tf_timeout),
            )
        except (TransformException, Exception) as exc:
            self.get_logger().error(f"TF 转换失败: {frame} -> {self.reference_frame}: {exc}")
            return None

    def waypoints(self, target, hand):
        approach = copy.deepcopy(target)
        goal = copy.deepcopy(target)
        up = copy.deepcopy(target)

        approach.pose.position.x += self.approach_x_offset
        approach.pose.position.z += self.approach_z_offset
        approach.pose.position.y += self.side_offset if hand == "left" else -self.side_offset
        up.pose.position.z += self.up_offset
        return [approach, goal, up]

    def log_q(self, step, left_q, right_q):
        left = ", ".join(f"{name}={value:.4f}" for name, value in zip(LEFT_JOINTS, left_q))
        right = ", ".join(f"{name}={value:.4f}" for name, value in zip(RIGHT_JOINTS, right_q))
        self.get_logger().info(f"路点 {step} 左臂: {left}")
        self.get_logger().info(f"路点 {step} 右臂: {right}")


def main(args=None):
    rclpy.init(args=args)
    node = PyBulletDualArmIkLiftBox()
    executor = MultiThreadedExecutor(num_threads=4)
    executor.add_node(node)
    try:
        executor.spin()
    except KeyboardInterrupt:
        pass
    finally:
        executor.remove_node(node)
        node.destroy_node()
        if rclpy.ok():
            rclpy.shutdown()


if __name__ == "__main__":
    main()
