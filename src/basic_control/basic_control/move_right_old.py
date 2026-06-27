import rclpy
from rclpy.node import Node

from geometry_msgs.msg import PoseStamped
from std_msgs.msg import Float64MultiArray

from moveit.planning import MoveItPy

"""
MoveIt API轨迹规划节点
"""

class MoveItRight(Node):
    def __init__(self):
        super().__init__("moveit_right")

        self.declare_parameter("planning_group", "right_arm")
        self.declare_parameter("end_effector_link", "Right_Arm_Link7")
        self.declare_parameter("reference_frame", "Body_Link5")
        self.declare_parameter("process_interval_sec", 3.0)

        self.planning_group = self.get_parameter("planning_group").value
        self.end_effector_link = self.get_parameter("end_effector_link").value
        self.reference_frame = self.get_parameter("reference_frame").value
        self.process_interval_sec = float(self.get_parameter("process_interval_sec").value)

        # MoveIt 2 Python 接口
        # 运行本节点前，需要确保 MoveIt 2 配置已经启动，并已加载：
        # robot_description、robot_description_semantic、joint_states、planning pipeline 等。
        self.moveit = MoveItPy(node_name="moveit_py_right")
        self.arm = self.moveit.get_planning_component(self.planning_group)

        self.pub_motor = self.create_publisher(
            Float64MultiArray,
            "/trajectory_right",
            10,
        )
        self.pub_right_data = self.create_publisher(
            Float64MultiArray,
            "/trajectory_right_point",
            10,
        )

        # 订阅目标末端位姿
        self.goal_sub = self.create_subscription(
            Float64MultiArray,
            "/goal_position",
            self.right_callback,
            10,
        )

        # None 表示第一帧目标点不需要等待 process_interval_sec，可以立即处理。
        self.last_processed_time = None

        self.get_logger().info("右手 MoveIt 节点启动成功。")
        self.get_logger().info(f"planning_group: {self.planning_group}")
        self.get_logger().info(f"end_effector_link: {self.end_effector_link}")
        self.get_logger().info(f"reference_frame: {self.reference_frame}")

    def should_process_now(self) -> bool:
        """根据 process_interval_sec 控制目标点处理频率。"""
        now = self.get_clock().now()

        if self.last_processed_time is None:
            self.last_processed_time = now
            return True

        elapsed = (now - self.last_processed_time).nanoseconds / 1e9

        if elapsed < self.process_interval_sec:
            return False

        self.last_processed_time = now
        return True

    def make_pose(self, x, y, z, qw, qx, qy, qz) -> PoseStamped:
        """
        输入格式：
            [x, y, z, qw, qx, qy, qz]

        注意：
            你的输入姿态顺序是 qw, qx, qy, qz。
            ROS PoseStamped 中 orientation 字段顺序是 x, y, z, w。
        """
        pose = PoseStamped()
        pose.header.frame_id = self.reference_frame
        pose.header.stamp = self.get_clock().now().to_msg()

        pose.pose.position.x = float(x)
        pose.pose.position.y = float(y)
        pose.pose.position.z = float(z)

        pose.pose.orientation.x = float(qx)
        pose.pose.orientation.y = float(qy)
        pose.pose.orientation.z = float(qz)
        pose.pose.orientation.w = float(qw)

        return pose

    def plan_to_pose(self, target_pose: PoseStamped):
        """规划到单个末端位姿目标，返回 joint_trajectory.points。"""
        try:
            self.arm.set_start_state_to_current_state()

            self.arm.set_goal_state(
                pose_stamped_msg=target_pose,
                pose_link=self.end_effector_link,
            )

            plan_result = self.arm.plan()

            if plan_result is None:
                self.get_logger().error("MoveIt 规划失败：plan_result 为 None。")
                return []

            trajectory = plan_result.trajectory

            if trajectory is None:
                self.get_logger().error("MoveIt 规划失败：trajectory 为 None。")
                return []

            points = list(trajectory.joint_trajectory.points)

            if not points:
                self.get_logger().error("MoveIt 规划失败：轨迹点为空。")
                return []

            self.get_logger().info(f"MoveIt 规划成功，轨迹点数量：{len(points)}")
            return points

        except Exception as exc:
            self.get_logger().error(f"MoveIt 规划异常: {exc}")
            return []

    def publish_planned_points(self, points):
        """
        发布规划得到的轨迹点。

        /trajectory_right_point：
            每个轨迹点单独发布一次，例如 [j1, j2, ..., j7]

        /trajectory_right：
            所有轨迹点展开成一个大数组发布，例如
            [p0_j1, ..., p0_j7, p1_j1, ..., p1_j7, ...]
        """
        all_positions_right = []

        for point in points:
            positions = [float(v) for v in point.positions]

            if not positions:
                continue

            all_positions_right.extend(positions)

            point_msg = Float64MultiArray()
            point_msg.data = positions
            self.pub_right_data.publish(point_msg)

        if not all_positions_right:
            self.get_logger().warn("轨迹中没有有效关节位置，未发布。")
            return

        motor_msg = Float64MultiArray()
        motor_msg.data = all_positions_right
        self.pub_motor.publish(motor_msg)

        self.get_logger().info("publish right")

    def right_callback(self, msg: Float64MultiArray):
        data = list(msg.data)

        if len(data) < 7:
            self.get_logger().warn(
                f"/goal_position 至少需要 7 个数据：[x, y, z, qw, qx, qy, qz]，"
                f"实际收到 {len(data)} 个。"
            )
            return

        if not self.should_process_now():
            return

        x = data[0]
        y = data[1]
        z = data[2]
        qw = data[3]
        qx = data[4]
        qy = data[5]
        qz = data[6]

        self.get_logger().info(
            f"收到目标位姿：x={x:.4f}, y={y:.4f}, z={z:.4f}, "
            f"qw={qw:.4f}, qx={qx:.4f}, qy={qy:.4f}, qz={qz:.4f}"
        )

        try:
            target_pose = self.make_pose(x, y, z, qw, qx, qy, qz)
        except ValueError as exc:
            self.get_logger().error(f"目标位姿无效：{exc}")
            return

        target_poses = [target_pose]

        for pose in target_poses:
            points = self.plan_to_pose(pose)

            if not points:
                self.get_logger().warn("目标规划失败，跳过该目标。")
                continue

            self.publish_planned_points(points)


def main(args=None):
    rclpy.init(args=args)

    node = MoveItRight()

    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == "__main__":
    main()