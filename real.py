from pathlib import Path
import argparse
import time

import numpy as np
import pyarrow.parquet as pq

import rclpy
from rclpy.node import Node
from trajectory_msgs.msg import JointTrajectory, JointTrajectoryPoint
from builtin_interfaces.msg import Duration


LEFT_ARM_JOINTS = [
    "Left_Arm_Joint1",
    "Left_Arm_Joint2",
    "Left_Arm_Joint3",
    "Left_Arm_Joint4",
    "Left_Arm_Joint5",
    "Left_Arm_Joint6",
    "Left_Arm_Joint7",
]

RIGHT_ARM_JOINTS = [
    "Right_Arm_Joint1",
    "Right_Arm_Joint2",
    "Right_Arm_Joint3",
    "Right_Arm_Joint4",
    "Right_Arm_Joint5",
    "Right_Arm_Joint6",
    "Right_Arm_Joint7",
]


def make_duration(seconds: float) -> Duration:
    sec = int(seconds)
    nanosec = int((seconds - sec) * 1e9)
    return Duration(sec=sec, nanosec=nanosec)


class LeRobotRealArmReplayer(Node):
    def __init__(self, episode_path: Path, replay_hz: float, start_time: float):
        super().__init__("lerobot_real_arm_replayer")

        self.left_pub = self.create_publisher(
            JointTrajectory,
            "/left_arm_controller/joint_trajectory",
            10,
        )
        self.right_pub = self.create_publisher(
            JointTrajectory,
            "/right_arm_controller/joint_trajectory",
            10,
        )

        self.replay_hz = replay_hz
        self.dt = 1.0 / replay_hz
        self.start_time = start_time

        table = pq.read_table(episode_path)
        df = table.to_pandas()

        self.actions = np.stack(df["action"].to_numpy()).astype(np.float32)

        if self.actions.shape[1] != 16:
            raise RuntimeError(f"Expected action dim 16, got {self.actions.shape[1]}")

        self.get_logger().info(f"Loaded actions: {self.actions.shape}")

    def _split_action(self, action):
        left = action[0:7]
        left_grasp = action[7]
        right = action[8:15]
        right_grasp = action[15]
        return left, right, left_grasp, right_grasp

    def _publish_arm(self, pub, joint_names, positions, duration):
        msg = JointTrajectory()
        msg.joint_names = joint_names

        point = JointTrajectoryPoint()
        point.positions = [float(x) for x in positions]
        point.time_from_start = make_duration(duration)

        msg.points = [point]
        pub.publish(msg)

    def replay(self):
        self.get_logger().info("Waiting 2s for subscribers...")
        time.sleep(2.0)

        first_left, first_right, _, _ = self._split_action(self.actions[0])

        self.get_logger().info("Moving to first frame slowly...")
        self._publish_arm(self.left_pub, LEFT_ARM_JOINTS, first_left, self.start_time)
        self._publish_arm(self.right_pub, RIGHT_ARM_JOINTS, first_right, self.start_time)
        time.sleep(self.start_time + 0.5)

        self.get_logger().info("Start replay...")

        last_left = first_left
        last_right = first_right

        for i, action in enumerate(self.actions):
            left, right, _, _ = self._split_action(action)

            if np.max(np.abs(left - last_left)) > 0.5:
                self.get_logger().warn(f"Skip frame {i}: left joint jump too large")
                continue

            if np.max(np.abs(right - last_right)) > 0.5:
                self.get_logger().warn(f"Skip frame {i}: right joint jump too large")
                continue

            self._publish_arm(self.left_pub, LEFT_ARM_JOINTS, left, self.dt)
            self._publish_arm(self.right_pub, RIGHT_ARM_JOINTS, right, self.dt)

            last_left = left
            last_right = right

            if i % 20 == 0:
                self.get_logger().info(f"Replay frame {i}/{len(self.actions)}")

            time.sleep(self.dt)

        self.get_logger().info("Replay finished.")


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("--episode", required=True)
    parser.add_argument("--replay_hz", type=float, default=5.0)
    parser.add_argument("--start_time", type=float, default=8.0)
    args = parser.parse_args()

    rclpy.init()
    node = LeRobotRealArmReplayer(
        episode_path=Path(args.episode),
        replay_hz=args.replay_hz,
        start_time=args.start_time,
    )

    try:
        node.replay()
    finally:
        node.destroy_node()
        if rclpy.ok():
            rclpy.shutdown()


if __name__ == "__main__":
    main()