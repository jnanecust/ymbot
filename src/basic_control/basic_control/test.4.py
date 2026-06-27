#!/usr/bin/env python3
"""Test ym_ikFast with controller_state as the initial joint state."""

import threading
import time

import rclpy
from control_msgs.msg import JointTrajectoryControllerState
from rclpy.duration import Duration as RclpyDuration
from rclpy.executors import MultiThreadedExecutor
from rclpy.node import Node
from trajectory_msgs.msg import JointTrajectory

from basic_control.basic_control.pybullet_control_1 import LEFT_ARM_JOINTS, RIGHT_ARM_JOINTS, ym_ikFast


class YmIkFastControllerStateTest(Node):
    def __init__(self):
        super().__init__("ym_ikfast_controller_state_test")

        self.declare_parameter("left_state_topic", "/left_arm_controller/controller_state")
        self.declare_parameter("right_state_topic", "/right_arm_controller/controller_state")
        self.declare_parameter("left_command_topic", "/left_arm_controller/joint_trajectory")
        self.declare_parameter("right_command_topic", "/right_arm_controller/joint_trajectory")

        # Target poses are in Body_Link5 frame: [x, y, z], [qx, qy, qz, qw].
        self.declare_parameter("left_target_position", [0.24, 0.41, -0.19])
        self.declare_parameter("left_target_orientation", [0.038, -0.62, -0.3, 0.72])
        self.declare_parameter("right_target_position", [0.201, -0.3, -0.231])
        self.declare_parameter("right_target_orientation", [0.083, -0.65, 0.18, 0.73])

        self.declare_parameter("duration", 3.0)
        self.declare_parameter("point_num", 50)
        self.declare_parameter("start_delay", 0.2)
        self.declare_parameter("execute_motion", False)
        self.declare_parameter("auto_start", False)

        self.left_state = None
        self.right_state = None
        self.started = bool(self.get_parameter("auto_start").value)
        self.executed = False
        self.running = False
        self.lock = threading.Lock()

        self.left_pub = self.create_publisher(
            JointTrajectory,
            self.get_parameter("left_command_topic").value,
            10,
        )
        self.right_pub = self.create_publisher(
            JointTrajectory,
            self.get_parameter("right_command_topic").value,
            10,
        )

        self.create_subscription(
            JointTrajectoryControllerState,
            self.get_parameter("left_state_topic").value,
            self.on_left_state,
            10,
        )
        self.create_subscription(
            JointTrajectoryControllerState,
            self.get_parameter("right_state_topic").value,
            self.on_right_state,
            10,
        )
        self.create_timer(0.1, self.try_start)

        if not self.started:
            threading.Thread(target=self.keyboard_loop, daemon=True).start()

        mode = "publish" if self.get_parameter("execute_motion").value else "plan only"
        self.get_logger().info(
            "ym_ikFast controller_state test started\n"
            f"  mode={mode}\n"
            "  press s + Enter to run once, q + Enter to quit."
        )

    def keyboard_loop(self):
        while rclpy.ok():
            try:
                cmd = input("\n输入 s 后回车开始测试，输入 q 后回车退出：").strip().lower()
            except EOFError:
                self.get_logger().warn("stdin unavailable; cannot start from keyboard")
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
                self.get_logger().info("start requested")
                return

            self.get_logger().warn("please input s to start, or q to quit")

    def on_left_state(self, msg):
        state = self.extract_positions(msg, LEFT_ARM_JOINTS, "left")
        if state is not None:
            with self.lock:
                self.left_state = state

    def on_right_state(self, msg):
        state = self.extract_positions(msg, RIGHT_ARM_JOINTS, "right")
        if state is not None:
            with self.lock:
                self.right_state = state

    def extract_positions(self, msg, expected_names, arm_name):
        if len(msg.actual.positions) == len(expected_names) and not msg.joint_names:
            return [float(v) for v in msg.actual.positions]

        by_name = dict(zip(msg.joint_names, msg.actual.positions))
        missing = [name for name in expected_names if name not in by_name]
        if missing:
            self.get_logger().warn(f"{arm_name} controller_state missing joints: {missing}")
            return None
        return [float(by_name[name]) for name in expected_names]

    def try_start(self):
        with self.lock:
            if self.executed or self.running or not self.started:
                return
            if self.left_state is None or self.right_state is None:
                self.get_logger().warn("waiting for left/right controller_state actual.positions")
                return

            self.executed = True
            self.running = True
            left_start = list(self.left_state)
            right_start = list(self.right_state)

        threading.Thread(target=self.run_test, args=(left_start, right_start), daemon=True).start()

    def run_test(self, left_start, right_start):
        try:
            self.compute_and_optionally_publish(left_start, right_start)
            self.get_logger().info("test done")
        except Exception as exc:
            self.get_logger().exception(f"test failed: {exc}")
        finally:
            self.running = False
            time.sleep(0.2)
            if rclpy.ok():
                rclpy.shutdown()

    def compute_and_optionally_publish(self, left_start, right_start):
        duration = float(self.get_parameter("duration").value)
        point_num = int(self.get_parameter("point_num").value)

        left_pos = self.get_parameter("left_target_position").value
        left_quat = self.get_parameter("left_target_orientation").value
        right_pos = self.get_parameter("right_target_position").value
        right_quat = self.get_parameter("right_target_orientation").value

        self.get_logger().info(f"left start joints: {self.format_values(left_start)}")
        self.get_logger().info(f"right start joints: {self.format_values(right_start)}")

        left_solver = ym_ikFast("left")
        right_solver = ym_ikFast("right")

        left_traj = left_solver.getJointTrajectoryMsg(
            left_start,
            left_pos,
            left_quat,
            duration,
            point_num,
        )
        right_traj = right_solver.getJointTrajectoryMsg(
            right_start,
            right_pos,
            right_quat,
            duration,
            point_num,
        )

        self.log_final_goal("left IK goal", left_traj)
        self.log_final_goal("right IK goal", right_traj)

        if not bool(self.get_parameter("execute_motion").value):
            self.get_logger().info("execute_motion=false; trajectory not published")
            return

        stamp = (self.get_clock().now() + RclpyDuration(seconds=float(self.get_parameter("start_delay").value))).to_msg()
        left_traj.header.stamp = stamp
        right_traj.header.stamp = stamp
        left_traj.header.frame_id = "Body_Link5"
        right_traj.header.frame_id = "Body_Link5"

        self.left_pub.publish(left_traj)
        self.right_pub.publish(right_traj)
        self.get_logger().info("published left/right JointTrajectory")

    def log_final_goal(self, label, traj):
        if not traj.points:
            self.get_logger().warn(f"{label}: empty trajectory")
            return
        self.get_logger().info(f"{label}: {self.format_values(traj.points[-1].positions)}")

    @staticmethod
    def format_values(values):
        return "[" + ", ".join(f"{float(v):.4f}" for v in values) + "]"


def main(args=None):
    rclpy.init(args=args)
    node = YmIkFastControllerStateTest()
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
