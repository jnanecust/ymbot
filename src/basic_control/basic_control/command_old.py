import rclpy
from rclpy.node import Node

from std_msgs.msg import Float64MultiArray
from trajectory_msgs.msg import JointTrajectory, JointTrajectoryPoint
from control_msgs.msg import JointTrajectoryControllerState
from builtin_interfaces.msg import Duration

"""
老版监听信号节点
"""

JOINT_NAMES_RIGHT = [
    'Right_Arm_Joint1',
    'Right_Arm_Joint2',
    'Right_Arm_Joint3',
    'Right_Arm_Joint4',
    'Right_Arm_Joint5',
    'Right_Arm_Joint6',
    'Right_Arm_Joint7'
]

JOINT_NAMES_LEFT = [
    'Left_Arm_Joint1',
    'Left_Arm_Joint2',
    'Left_Arm_Joint3',
    'Left_Arm_Joint4',
    'Left_Arm_Joint5',
    'Left_Arm_Joint6',
    'Left_Arm_Joint7'
]


class MonitorCtlSignalNode(Node):
    def __init__(self):
        super().__init__('monitor_ctrl_signal')

        self.right_state = None
        self.left_state = None

        # 订阅双臂控制信号
        self.right_target_sub = self.create_subscription(
            Float64MultiArray,
            '/trajectory_right_point',
            self.right_callback,
            10
        )
        self.left_target_sub = self.create_subscription(
            Float64MultiArray,
            '/trajectory_left_point',
            self.left_callback,
            10
        )

        # 订阅双臂状态
        self.right_state_sub = self.create_subscription(
            JointTrajectoryControllerState,
            '/right_arm_controller/state',
            self.right_state_callback,
            10
        )
        self.left_state_sub = self.create_subscription(
            JointTrajectoryControllerState,
            '/left_arm_controller/state',
            self.left_state_callback,
            10
        )

        # 发布控制底层控制器
        self.right_pub = self.create_publisher(
            JointTrajectory,
            '/right_arm_controller/joint_trajectory',
            10
        )
        self.left_pub = self.create_publisher(
            JointTrajectory,
            '/left_arm_controller/joint_trajectory',
            10
        )

        self.get_logger().info('监听控制信号节点启动......')

    def right_state_callback(self, msg: JointTrajectoryControllerState):
        self.right_state = msg

    def left_state_callback(self, msg: JointTrajectoryControllerState):
        self.left_state = msg

    def build_trajectory(
        self,
        joint_names,
        target_positions,
        controller_state: JointTrajectoryControllerState,
        frame_id='Body_Link5'
    ) -> JointTrajectory:

        joint_count = len(joint_names)

        if len(target_positions) != joint_count:
            raise ValueError(
                f'目标点维度错误: 期望 {joint_count} 个关节值, '
                f'实际收到 {len(target_positions)} 个'
            )

        plan = JointTrajectory()
        plan.header.stamp = self.get_clock().now().to_msg()
        plan.header.frame_id = frame_id
        plan.joint_names = joint_names

        current_point = JointTrajectoryPoint()
        current_point.positions = list(controller_state.actual.positions)

        current_velocities = list(controller_state.actual.velocities)
        if len(current_velocities) != joint_count:
            current_velocities = [0.0] * joint_count

        current_point.velocities = current_velocities
        current_point.accelerations = [0.0] * joint_count
        current_point.effort = []
        current_point.time_from_start = Duration(sec=0, nanosec=0)

        target_point = JointTrajectoryPoint()
        target_point.positions = list(target_positions)
        target_point.velocities = [0.0] * joint_count
        target_point.accelerations = [0.0] * joint_count
        target_point.effort = []
        target_point.time_from_start = Duration(sec=1, nanosec=3220)

        plan.points.append(current_point)
        plan.points.append(target_point)

        return plan

    def right_callback(self, msg: Float64MultiArray):
        if self.right_state is None:
            self.get_logger().warn(
                '还没有收到 /right_arm_controller/state，暂不发布右臂轨迹。'
            )
            return

        try:
            target_positions = list(msg.data)
            plan = self.build_trajectory(
                JOINT_NAMES_RIGHT,
                target_positions,
                self.right_state
            )
            self.right_pub.publish(plan)
            self.get_logger().info('publish right')

        except Exception as e:
            self.get_logger().error(f'右臂轨迹发布失败: {e}')

    def left_callback(self, msg: Float64MultiArray):
        if self.left_state is None:
            self.get_logger().warn(
                '还没有收到 /left_arm_controller/state，暂不发布左臂轨迹。'
            )
            return

        try:
            target_positions = list(msg.data)
            plan = self.build_trajectory(
                JOINT_NAMES_LEFT,
                target_positions,
                self.left_state
            )
            self.left_pub.publish(plan)
            self.get_logger().info('publish left')

        except Exception as e:
            self.get_logger().error(f'左臂轨迹发布失败: {e}')


def main(args=None):
    rclpy.init(args=args)

    node = MonitorCtlSignalNode()

    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()