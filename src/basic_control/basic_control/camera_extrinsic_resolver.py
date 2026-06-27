import math

import rclpy
from geometry_msgs.msg import TransformStamped
from rclpy.duration import Duration
from rclpy.node import Node
from tf2_ros import Buffer, StaticTransformBroadcaster, TransformException, TransformListener


def _normalize_quat(q):
    norm = math.sqrt(q[0] * q[0] + q[1] * q[1] + q[2] * q[2] + q[3] * q[3])
    if norm == 0.0:
        return (0.0, 0.0, 0.0, 1.0)
    return (q[0] / norm, q[1] / norm, q[2] / norm, q[3] / norm)


def _quat_multiply(a, b):
    ax, ay, az, aw = a
    bx, by, bz, bw = b
    return (
        aw * bx + ax * bw + ay * bz - az * by,
        aw * by - ax * bz + ay * bw + az * bx,
        aw * bz + ax * by - ay * bx + az * bw,
        aw * bw - ax * bx - ay * by - az * bz,
    )


def _quat_inverse(q):
    x, y, z, w = _normalize_quat(q)
    return (-x, -y, -z, w)


def _rotate_vector(q, v):
    qv = (v[0], v[1], v[2], 0.0)
    qr = _quat_multiply(_quat_multiply(q, qv), _quat_inverse(q))
    return (qr[0], qr[1], qr[2])


def _compose(a_t, a_q, b_t, b_q):
    rotated = _rotate_vector(a_q, b_t)
    return (
        (a_t[0] + rotated[0], a_t[1] + rotated[1], a_t[2] + rotated[2]),
        _normalize_quat(_quat_multiply(a_q, b_q)),
    )


def _inverse(t, q):
    qi = _quat_inverse(q)
    ti = _rotate_vector(qi, (-t[0], -t[1], -t[2]))
    return ti, qi


class CameraExtrinsicResolver(Node):
    def __init__(self):
        super().__init__("camera_extrinsic_resolver")

        self.robot_base_frame = self.declare_parameter("robot_base_frame", "Body_Link5").value
        self.camera_root_frame = self.declare_parameter("camera_root_frame", "top_link").value
        self.camera_optical_frame = self.declare_parameter("camera_optical_frame", "top_color_optical_frame").value

        self.body_to_optical_t = (
            self.declare_parameter("body_to_optical.x", 0.0568151794009229).value,
            self.declare_parameter("body_to_optical.y", -0.0060688009024244816).value,
            self.declare_parameter("body_to_optical.z", 0.33263189859053577).value,
        )
        self.body_to_optical_q = _normalize_quat((
            self.declare_parameter("body_to_optical.qx", -0.6207464016089812).value,
            self.declare_parameter("body_to_optical.qy", 0.6477069071334154).value,
            self.declare_parameter("body_to_optical.qz", -0.31257857340859097).value,
            self.declare_parameter("body_to_optical.qw", 0.3121607002603249).value,
        ))

        self.tf_buffer = Buffer(cache_time=Duration(seconds=5.0))
        self.tf_listener = TransformListener(self.tf_buffer, self)
        self.static_broadcaster = StaticTransformBroadcaster(self)
        self.published = False
        self.create_timer(0.2, self._on_timer)

        self.get_logger().info(
            "Resolving %s -> %s from calibrated %s -> %s"
            % (
                self.robot_base_frame,
                self.camera_root_frame,
                self.robot_base_frame,
                self.camera_optical_frame,
            )
        )

    def _on_timer(self):
        if self.published:
            return

        try:
            root_to_optical = self.tf_buffer.lookup_transform(
                self.camera_root_frame,
                self.camera_optical_frame,
                rclpy.time.Time(),
                timeout=Duration(seconds=0.05),
            )
        except TransformException as exc:
            self.get_logger().debug(
                "Waiting for %s -> %s: %s" % (self.camera_root_frame, self.camera_optical_frame, exc)
            )
            return

        root_to_optical_t = (
            root_to_optical.transform.translation.x,
            root_to_optical.transform.translation.y,
            root_to_optical.transform.translation.z,
        )
        root_to_optical_q = (
            root_to_optical.transform.rotation.x,
            root_to_optical.transform.rotation.y,
            root_to_optical.transform.rotation.z,
            root_to_optical.transform.rotation.w,
        )

        optical_to_root_t, optical_to_root_q = _inverse(root_to_optical_t, root_to_optical_q)
        body_to_root_t, body_to_root_q = _compose(
            self.body_to_optical_t,
            self.body_to_optical_q,
            optical_to_root_t,
            optical_to_root_q,
        )

        transform = TransformStamped()
        transform.header.stamp = self.get_clock().now().to_msg()
        transform.header.frame_id = self.robot_base_frame
        transform.child_frame_id = self.camera_root_frame
        transform.transform.translation.x = body_to_root_t[0]
        transform.transform.translation.y = body_to_root_t[1]
        transform.transform.translation.z = body_to_root_t[2]
        transform.transform.rotation.x = body_to_root_q[0]
        transform.transform.rotation.y = body_to_root_q[1]
        transform.transform.rotation.z = body_to_root_q[2]
        transform.transform.rotation.w = body_to_root_q[3]

        self.static_broadcaster.sendTransform(transform)
        self.published = True
        self.get_logger().info(
            "Published static transform %s -> %s: t=(%.6f, %.6f, %.6f), q=(%.6f, %.6f, %.6f, %.6f)"
            % (
                self.robot_base_frame,
                self.camera_root_frame,
                body_to_root_t[0],
                body_to_root_t[1],
                body_to_root_t[2],
                body_to_root_q[0],
                body_to_root_q[1],
                body_to_root_q[2],
                body_to_root_q[3],
            )
        )


def main(args=None):
    rclpy.init(args=args)
    node = CameraExtrinsicResolver()
    try:
        rclpy.spin(node)
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == "__main__":
    main()
