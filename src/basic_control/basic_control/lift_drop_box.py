import copy
import select
import sys
import termios
import threading
import time
import tty
from typing import List, Optional, Tuple

import numpy as np
import rclpy
from geometry_msgs.msg import PoseStamped
from rclpy.node import Node
from sensor_msgs.msg import JointState
from trajectory_msgs.msg import JointTrajectory

from pybullet_control import ym_ikFast

LEFT_JOINT_NAMES = [
    "Left_Arm_Joint1",
    "Left_Arm_Joint2",
    "Left_Arm_Joint3",
    "Left_Arm_Joint4",
    "Left_Arm_Joint5",
    "Left_Arm_Joint6",
    "Left_Arm_Joint7",
]

RIGHT_JOINT_NAMES = [
    "Right_Arm_Joint1",
    "Right_Arm_Joint2",
    "Right_Arm_Joint3",
    "Right_Arm_Joint4",
    "Right_Arm_Joint5",
    "Right_Arm_Joint6",
    "Right_Arm_Joint7",
]


class DualArmGraspTaskOnce(Node):
    def __init__(self) -> None:
        super().__init__("dual_arm_grasp_task_once")

        # 调参部分
        self.declare_parameter("segment_duration", 3.0)   # 每个路点段运动时间，单位 s
        self.declare_parameter("segment_duration2", 1.0)   # 每个路点段运动时间，单位 s
        self.declare_parameter("point_num", 50)           # 每段轨迹插值点数
        ## 视觉识别补偿
        self.declare_parameter("x_offset", -0.2) # -0.24, 0.0, -0.15
        self.declare_parameter("y_offset", 0.0)
        self.declare_parameter("z_offset", -0.0)
        ## 抓起任务路点偏移
        self.declare_parameter("side_offset", 0.12)       # 旁边偏移，单位 m
        self.declare_parameter("side_offset2", 0.005)     # 旁边偏移，单位 m
        self.declare_parameter("lift_offset", 0.14)       # 第三个点向上偏移，单位 m
        ## 放下任务路点偏移
        self.declare_parameter("side_offset3", 0.01)     # 往两侧多打开一点

        self.declare_parameter("settle_time", 0.0)        # 每段发布后额外等待时间，单位 s

        self.segment_duration = float(self.get_parameter("segment_duration").value)
        self.segment_duration2 = float(self.get_parameter("segment_duration2").value)
        self.point_num = int(self.get_parameter("point_num").value)
        self.x_offset = float(self.get_parameter("x_offset").value)
        self.y_offset = float(self.get_parameter("y_offset").value)
        self.z_offset = float(self.get_parameter("z_offset").value)
        self.side_offset = float(self.get_parameter("side_offset").value)
        self.side_offset2 = float(self.get_parameter("side_offset2").value)
        self.lift_offset = float(self.get_parameter("lift_offset").value)
        self.side_offset3 = float(self.get_parameter("side_offset3").value)
        self.settle_time = float(self.get_parameter("settle_time").value)

        self.left_pose: Optional[PoseStamped] = None
        self.right_pose: Optional[PoseStamped] = None
        self.left_joint_value: Optional[List[float]] = None
        self.right_joint_value: Optional[List[float]] = None

        # execute_task 只允许启动一次；
        # execute_task 完整完成后，才允许按 e 启动 execute_task2；
        # execute_task2 启动/完成后，不再执行任何任务。
        self.has_run = False
        self.task1_done = False
        self.has_run2 = False
        self.task2_done = False
        self.is_executing = False

        self.data_lock = threading.Lock()

        self.left_ik = ym_ikFast("left")
        self.right_ik = ym_ikFast("right")

        self.left_traj_pub = self.create_publisher(
            JointTrajectory,
            "/left_arm_controller/joint_trajectory",
            10,
        )
        self.right_traj_pub = self.create_publisher(
            JointTrajectory,
            "/right_arm_controller/joint_trajectory",
            10,
        )

        self.create_subscription(
            PoseStamped,
            "/box_left_grasp/stable_pose",
            self.left_pose_cb,
            10,
        )
        self.create_subscription(
            PoseStamped,
            "/box_right_grasp/stable_pose",
            self.right_pose_cb,
            10,
        )
        self.create_subscription(
            JointState,
            "/joint_states",
            self.joint_state_cb,
            50,
        )

        self.old_terminal_settings = None
        if sys.stdin.isatty():
            self.old_terminal_settings = termios.tcgetattr(sys.stdin)
            tty.setcbreak(sys.stdin.fileno())
            self.keyboard_timer = self.create_timer(0.05, self.keyboard_timer_cb)
            self.get_logger().info(
                "按 s 启动 execute_task；execute_task 完成后按 e 启动 execute_task2；"
                "execute_task2 完成后不再执行任务。按 q 退出。"
            )
        else:
            self.get_logger().warn("当前 stdin 不是 TTY，无法读取键盘。请在终端中运行本节点。")

    def destroy_node(self) -> bool:
        if self.old_terminal_settings is not None:
            termios.tcsetattr(sys.stdin, termios.TCSADRAIN, self.old_terminal_settings)

        self.left_ik.close()
        self.right_ik.close()

        return super().destroy_node()

    def left_pose_cb(self, msg: PoseStamped) -> None:
        with self.data_lock:
            self.left_pose = msg

    def right_pose_cb(self, msg: PoseStamped) -> None:
        with self.data_lock:
            self.right_pose = msg

    def joint_state_cb(self, msg: JointState) -> None:
        name_to_pos = dict(zip(msg.name, msg.position))

        left_ok = all(name in name_to_pos for name in LEFT_JOINT_NAMES)
        right_ok = all(name in name_to_pos for name in RIGHT_JOINT_NAMES)

        with self.data_lock:
            if left_ok:
                self.left_joint_value = [float(name_to_pos[name]) for name in LEFT_JOINT_NAMES]
            if right_ok:
                self.right_joint_value = [float(name_to_pos[name]) for name in RIGHT_JOINT_NAMES]

    def keyboard_timer_cb(self) -> None:
        readable, _, _ = select.select([sys.stdin], [], [], 0.0)
        if not readable:
            return

        key = sys.stdin.read(1).lower()

        if key == "s":
            if self.is_executing:
                self.get_logger().warn("当前有任务正在执行中，请等待任务完成。")
                return

            if self.task2_done or self.has_run2:
                self.get_logger().warn("execute_task2 已经执行过，所有任务已结束，不再执行任何任务。")
                return

            if self.has_run:
                if self.task1_done:
                    self.get_logger().warn("execute_task 已经完成，请按 e 执行 execute_task2。")
                else:
                    self.get_logger().warn("execute_task 已经启动过但未完整完成，请检查状态；不会再次启动。")
                return

            self.is_executing = True
            threading.Thread(target=self.execute_task, daemon=True).start()

        elif key == "e":
            if self.is_executing:
                self.get_logger().warn("当前有任务正在执行中，请等待任务完成。")
                return

            if self.task2_done or self.has_run2:
                self.get_logger().warn("execute_task2 已经执行过，所有任务已结束，不再执行任何任务。")
                return

            if not self.has_run:
                self.get_logger().warn("请先按 s 执行 execute_task，等待其完成后再按 e。")
                return

            if not self.task1_done:
                self.get_logger().warn("execute_task 尚未完整完成，暂时不能执行 execute_task2。")
                return

            self.is_executing = True
            threading.Thread(target=self.execute_task2, daemon=True).start()

        elif key == "q":
            self.get_logger().info("收到退出按键 q，关闭节点。")
            rclpy.shutdown()

    @staticmethod
    def pose_to_numpy(msg: PoseStamped) -> Tuple[np.ndarray, np.ndarray]:
        pos = np.array(
            [
                msg.pose.position.x,
                msg.pose.position.y,
                msg.pose.position.z,
            ],
            dtype=float,
        )
        quat = np.array(
            [
                msg.pose.orientation.x,
                msg.pose.orientation.y,
                msg.pose.orientation.z,
                msg.pose.orientation.w,
            ],
            dtype=float,
        )
        return pos, quat

    def execute_task(self) -> None:
        try:
            with self.data_lock:
                left_pose = copy.deepcopy(self.left_pose)
                right_pose = copy.deepcopy(self.right_pose)
                left_start = copy.deepcopy(self.left_joint_value)
                right_start = copy.deepcopy(self.right_joint_value)

            if left_pose is None or right_pose is None:
                self.get_logger().error(
                    "目标位姿还没有收全：需要 /box_left_grasp/stable_pose 和 /box_right_grasp/stable_pose。"
                )
                return

            if left_start is None or right_start is None:
                self.get_logger().error(
                    "还没有收到双臂当前关节角：需要 /joint_states 中包含左右臂 7 个关节名。"
                )
                return

            self.has_run = True

            left_target_pos, left_target_quat = self.pose_to_numpy(left_pose)
            right_target_pos, right_target_quat = self.pose_to_numpy(right_pose)

            
            # 初始补偿
            left_target_pos = left_target_pos + np.array([self.x_offset, self.y_offset, self.z_offset])
            right_target_pos = right_target_pos + np.array([self.x_offset, self.y_offset, self.z_offset])

            # 坐标轴定义：X 正方向向前，Y 正方向向左，Z 正方向向上。
            # 第一点：左手到目标左边 side_offset，即 +Y；右手到目标右边 side_offset，即 -Y。
            left_wp1 = left_target_pos + np.array([0.0, +self.side_offset, 0.0])
            right_wp1 = right_target_pos + np.array([0.0, -self.side_offset, 0.0])

            # 第二点：靠近目标位姿，保留很小的侧向偏移。
            left_wp2 = left_target_pos + np.array([0.0, +self.side_offset2, 0.0])
            right_wp2 = right_target_pos + np.array([0.0, -self.side_offset2, 0.0])

            # 第三点：从目标位姿向上 lift_offset，即 +Z。
            left_wp3 = left_target_pos + np.array([0.0, 0.0, +self.lift_offset])
            right_wp3 = right_target_pos + np.array([0.0, 0.0, +self.lift_offset])

            waypoints = [
                ("waypoint_1_side", left_wp1, right_wp1),
                ("waypoint_2_target", left_wp2, right_wp2),
                ("waypoint_3_lift", left_wp3, right_wp3),
            ]

            current_left_joint = list(left_start)
            current_right_joint = list(right_start)

            for idx, (name, left_pos, right_pos) in enumerate(waypoints, start=1):
                segment_duration = self.segment_duration if idx == 1 else self.segment_duration2
                self.get_logger().info(
                    f"规划并发布第 {idx}/3 段：{name} | "
                    f"left_pos={left_pos.tolist()} right_pos={right_pos.tolist()}"
                )

                # 直接调用附件控制代码中的 getJointTrajectoryMsg()，由目标位姿逆解并生成轨迹消息。
                left_traj_msg = self.left_ik.getJointTrajectoryMsg(
                    current_left_joint,
                    left_pos.tolist(),
                    left_target_quat.tolist(),
                    segment_duration,
                    self.point_num,
                )
                right_traj_msg = self.right_ik.getJointTrajectoryMsg(
                    current_right_joint,
                    right_pos.tolist(),
                    right_target_quat.tolist(),
                    segment_duration,
                    self.point_num,
                )

                now_msg = self.get_clock().now().to_msg()
                left_traj_msg.header.stamp = now_msg
                right_traj_msg.header.stamp = now_msg

                self.left_traj_pub.publish(left_traj_msg)
                self.right_traj_pub.publish(right_traj_msg)

                # 下一段规划的起点使用上一段规划末端，保证三段轨迹关节空间连续。
                current_left_joint = list(left_traj_msg.points[-1].positions)
                current_right_joint = list(right_traj_msg.points[-1].positions)

                time.sleep(segment_duration + self.settle_time)

            self.task1_done = True
            self.get_logger().info("execute_task 执行完成。现在可以按 e 执行 execute_task2。")

        except Exception as exc:
            self.get_logger().exception(f"execute_task 执行失败：{exc}")
        finally:
            self.is_executing = False

    def execute_task2(self) -> None:
        try:
            with self.data_lock:
                left_pose = copy.deepcopy(self.left_pose)
                right_pose = copy.deepcopy(self.right_pose)
                left_start2 = copy.deepcopy(self.left_joint_value)
                right_start2 = copy.deepcopy(self.right_joint_value)

            if left_pose is None or right_pose is None:
                self.get_logger().error(
                    "目标位姿还没有收全：需要 /box_left_grasp/stable_pose 和 /box_right_grasp/stable_pose。"
                )
                return

            if left_start2 is None or right_start2 is None:
                self.get_logger().error(
                    "还没有收到双臂当前关节角：需要 /joint_states 中包含左右臂 7 个关节名。"
                )
                return

            self.has_run2 = True

            left_target_pos, left_target_quat = self.pose_to_numpy(left_pose)
            right_target_pos, right_target_quat = self.pose_to_numpy(right_pose)

            # 视觉识别补偿
            left_target_pos = left_target_pos + np.array([self.x_offset, self.y_offset, self.z_offset])
            right_target_pos = right_target_pos + np.array([self.x_offset, self.y_offset, self.z_offset])

            # 坐标轴定义：X 正方向向前，Y 正方向向左，Z 正方向向上。
            # 第四点：从抬起位置下降回接近目标的位置。
            left_wp4 = left_target_pos + np.array([0.0, +self.side_offset2, 0.0])
            right_wp4 = right_target_pos + np.array([0.0, -self.side_offset2, 0.0])

            # 第五点：双臂向外侧打开，放下箱子后退出。
            left_wp5 = left_target_pos + np.array([0.0, +(self.side_offset + self.side_offset3), 0.0])
            right_wp5 = right_target_pos + np.array([0.0, -(self.side_offset + self.side_offset3), 0.0])

            waypoints2 = [
                ("waypoint_4_down", left_wp4, right_wp4),
                ("waypoint_5_release", left_wp5, right_wp5),
            ]

            current_left_joint = list(left_start2)
            current_right_joint = list(right_start2)

            for idx, (name, left_pos, right_pos) in enumerate(waypoints2, start=1):
                segment_duration = self.segment_duration2
                self.get_logger().info(
                    f"规划并发布 execute_task2 第 {idx}/2 段：{name} | "
                    f"left_pos={left_pos.tolist()} right_pos={right_pos.tolist()}"
                )

                # 这里不新增函数，和 execute_task 一样直接规划并生成轨迹消息。
                left_traj_msg = self.left_ik.getJointTrajectoryMsg(
                    current_left_joint,
                    left_pos.tolist(),
                    left_target_quat.tolist(),
                    segment_duration,
                    self.point_num,
                )
                right_traj_msg = self.right_ik.getJointTrajectoryMsg(
                    current_right_joint,
                    right_pos.tolist(),
                    right_target_quat.tolist(),
                    segment_duration,
                    self.point_num,
                )

                now_msg = self.get_clock().now().to_msg()
                left_traj_msg.header.stamp = now_msg
                right_traj_msg.header.stamp = now_msg

                self.left_traj_pub.publish(left_traj_msg)
                self.right_traj_pub.publish(right_traj_msg)

                # 下一段规划的起点使用上一段规划末端，保证两段轨迹关节空间连续。
                current_left_joint = list(left_traj_msg.points[-1].positions)
                current_right_joint = list(right_traj_msg.points[-1].positions)

                time.sleep(segment_duration + self.settle_time)

            self.task2_done = True
            self.get_logger().info("execute_task2 放下箱子任务完成。所有任务已结束，不再执行任何任务。")

        except Exception as exc:
            self.get_logger().exception(f"execute_task2 执行失败：{exc}")
        finally:
            self.is_executing = False


def main(args=None) -> None:
    rclpy.init(args=args)
    node = DualArmGraspTaskOnce()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        if rclpy.ok():
            rclpy.shutdown()


if __name__ == "__main__":
    main()