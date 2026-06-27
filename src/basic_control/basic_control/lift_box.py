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

        # 可按需通过 ros2 param 调整
        self.declare_parameter("segment_duration", 3.0)   # 每个路点段运动时间，单位 s
        self.declare_parameter("point_num", 50)           # 每段轨迹插值点数
        self.declare_parameter("side_offset", 0.08)       # 旁边偏移，单位 m
        self.declare_parameter("side_offset2", 0.005)     # 旁边偏移，单位 m
        self.declare_parameter("lift_offset", 0.14)       # 第三个点向上偏移，单位 m
        self.declare_parameter("settle_time", 0.2)        # 每段发布后额外等待时间，单位 s

        self.segment_duration = float(self.get_parameter("segment_duration").value)
        self.point_num = int(self.get_parameter("point_num").value)
        self.side_offset = float(self.get_parameter("side_offset").value)
        self.side_offset2 = float(self.get_parameter("side_offset2").value)
        self.lift_offset = float(self.get_parameter("lift_offset").value)
        self.settle_time = float(self.get_parameter("settle_time").value)

        self.left_pose: Optional[PoseStamped] = None
        self.right_pose: Optional[PoseStamped] = None
        self.left_joint_value: Optional[List[float]] = None
        self.right_joint_value: Optional[List[float]] = None

        self.has_run = False
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
            self.get_logger().info("按 s 启动双臂任务；任务只会执行一次。按 q 退出。")
        else:
            self.get_logger().warn("当前 stdin 不是 TTY，无法读取键盘。请在终端中运行本节点。")

    def destroy_node(self) -> bool:
        if self.old_terminal_settings is not None:
            termios.tcsetattr(sys.stdin, termios.TCSADRAIN, self.old_terminal_settings)
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
            if self.has_run:
                self.get_logger().warn("任务已经执行过，本节点不会再次启动。")
                return
            if self.is_executing:
                self.get_logger().warn("任务正在执行中。")
                return

            threading.Thread(target=self.execute_task, daemon=True).start()

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

        self.is_executing = True
        self.has_run = True

        try:
            left_target_pos, left_target_quat = self.pose_to_numpy(left_pose)
            right_target_pos, right_target_quat = self.pose_to_numpy(right_pose)
            
            # 补偿
            left_target_pos = left_target_pos + np.array([-0.24, 0, -0.15])
            right_target_pos = right_target_pos + np.array([-0.24, 0, -0.15])

            # 坐标轴定义：X 正方向向前，Y 正方向向左，Z 正方向向上。
            # 第一点：左手到目标左边 0.04 m，即 +Y；右手到目标右边 0.04 m，即 -Y。
            left_wp1 = left_target_pos + np.array([0.0, +self.side_offset, 0.0])
            right_wp1 = right_target_pos + np.array([0.0, -self.side_offset, 0.0])

            # 第二点：目标位姿。
            left_wp2 = left_target_pos + np.array([0.0, +self.side_offset2, 0.0])
            right_wp2 = right_target_pos + np.array([0.0, -self.side_offset2, 0.0])

            # 第三点：从目标位姿向上 0.04 m，即 +Z。
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
                self.get_logger().info(
                    f"规划并发布第 {idx}/3 段：{name} | "
                    f"left_pos={left_pos.tolist()} right_pos={right_pos.tolist()}"
                )

                # 直接调用附件控制代码中的 getJointTrajectoryMsg()，由目标位姿逆解并生成轨迹消息。
                left_traj_msg = self.left_ik.getJointTrajectoryMsg(
                    current_left_joint,
                    left_pos.tolist(),
                    left_target_quat.tolist(),
                    self.segment_duration,
                    self.point_num,
                )
                right_traj_msg = self.right_ik.getJointTrajectoryMsg(
                    current_right_joint,
                    right_pos.tolist(),
                    right_target_quat.tolist(),
                    self.segment_duration,
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

                time.sleep(self.segment_duration + self.settle_time)

            self.get_logger().info("双臂三路点任务执行完成，本节点不会再次执行任务。")

        except Exception as exc:
            self.get_logger().error(f"任务执行失败：{exc}")
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
