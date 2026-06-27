import math
from collections import deque

import rclpy
from geometry_msgs.msg import PoseStamped
from rclpy.duration import Duration
from rclpy.node import Node
from tf2_ros import Buffer, TransformException, TransformListener


def _position_distance(a, b):
    dx = a.translation.x - b.translation.x
    dy = a.translation.y - b.translation.y
    dz = a.translation.z - b.translation.z
    return math.sqrt(dx * dx + dy * dy + dz * dz)


def _quaternion_angle(a, b):
    dot = (
        a.rotation.x * b.rotation.x
        + a.rotation.y * b.rotation.y
        + a.rotation.z * b.rotation.z
        + a.rotation.w * b.rotation.w
    )
    dot = max(-1.0, min(1.0, abs(dot)))
    return 2.0 * math.acos(dot)


def _to_pose_stamped(transform_stamped):
    pose = PoseStamped()
    pose.header = transform_stamped.header
    pose.pose.position.x = transform_stamped.transform.translation.x
    pose.pose.position.y = transform_stamped.transform.translation.y
    pose.pose.position.z = transform_stamped.transform.translation.z
    pose.pose.orientation = transform_stamped.transform.rotation
    return pose


class StableGraspPosePublisher(Node):
    def __init__(self):
        super().__init__("stable_grasp_pose_publisher")

        self.parent_frame = self.declare_parameter("parent_frame", "Body_Link5").value
        self.left_frame = self.declare_parameter("left_frame", "box_left_grasp").value
        self.right_frame = self.declare_parameter("right_frame", "box_right_grasp").value
        self.sample_count = self.declare_parameter("sample_count", 10).value
        self.position_tolerance = self.declare_parameter("position_tolerance", 0.01).value
        orientation_tolerance_deg = self.declare_parameter("orientation_tolerance_deg", 3.0).value
        self.orientation_tolerance = math.radians(orientation_tolerance_deg)
        self.timer_period = self.declare_parameter("timer_period", 0.05).value
        self.freeze_when_stable = self.declare_parameter("freeze_when_stable", False).value

        self.tf_buffer = Buffer(cache_time=Duration(seconds=5.0))
        self.tf_listener = TransformListener(self.tf_buffer, self)

        self.samples = {
            self.left_frame: deque(maxlen=self.sample_count),
            self.right_frame: deque(maxlen=self.sample_count),
        }
        self.pose_publishers = {
            self.left_frame: self.create_publisher(PoseStamped, "/box_left_grasp/stable_pose", 10),
            self.right_frame: self.create_publisher(PoseStamped, "/box_right_grasp/stable_pose", 10),
        }
        self.frozen_poses = {
            self.left_frame: None,
            self.right_frame: None,
        }

        self.create_timer(self.timer_period, self._on_timer)
        self.get_logger().info(
            "Publishing stable grasp poses in %s using %d samples, %.4f m and %.2f deg tolerances, freeze=%s"
            % (
                self.parent_frame,
                self.sample_count,
                self.position_tolerance,
                orientation_tolerance_deg,
                self.freeze_when_stable,
            )
        )

    def _on_timer(self):
        for frame in (self.left_frame, self.right_frame):
            frozen_pose = self.frozen_poses[frame]
            if frozen_pose is not None:
                frozen_pose.header.stamp = self.get_clock().now().to_msg()
                self.pose_publishers[frame].publish(frozen_pose)
                continue

            try:
                transform = self.tf_buffer.lookup_transform(
                    self.parent_frame,
                    frame,
                    rclpy.time.Time(),
                    timeout=Duration(seconds=0.02),
                )
            except TransformException as exc:
                self.get_logger().debug("Waiting for %s -> %s: %s" % (self.parent_frame, frame, exc))
                continue

            frame_samples = self.samples[frame]
            frame_samples.append(transform.transform)
            if len(frame_samples) < self.sample_count:
                continue

            latest = frame_samples[-1]
            max_position_error = max(_position_distance(sample, latest) for sample in frame_samples)
            max_orientation_error = max(_quaternion_angle(sample, latest) for sample in frame_samples)

            if max_position_error <= self.position_tolerance and max_orientation_error <= self.orientation_tolerance:
                stable_pose = _to_pose_stamped(transform)
                self.pose_publishers[frame].publish(stable_pose)
                if self.freeze_when_stable:
                    self.frozen_poses[frame] = stable_pose
                    self.get_logger().info(
                        "%s frozen: position %.4f m, orientation %.2f deg"
                        % (frame, max_position_error, math.degrees(max_orientation_error))
                    )
                else:
                    self.get_logger().debug(
                    "%s stable: position %.4f m, orientation %.2f deg"
                    % (frame, max_position_error, math.degrees(max_orientation_error))
                    )


def main(args=None):
    rclpy.init(args=args)
    node = StableGraspPosePublisher()
    try:
        rclpy.spin(node)
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == "__main__":
    main()
