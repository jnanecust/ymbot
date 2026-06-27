import rclpy
from rclpy.node import Node
from sensor_msgs.msg import JointState

'''
获取当前关节角度
'''

class JointStateReader(Node):
    def __init__(self):
        super().__init__("joint_state_reader")

        self.latest_msg = None

        self.subscription = self.create_subscription(
            JointState,
            "/joint_states",
            self.joint_state_callback,
            10,
        )

    def joint_state_callback(self, msg: JointState):
        self.latest_msg = msg

    def get_joint_positions(self, joint_names, timeout_sec=3.0):
        """
        从 /joint_states 中读取指定关节的位置。

        参数:
            joint_names:
                需要读取的关节名列表

            timeout_sec:
                等待 /joint_states 的超时时间

        返回:
            dict:
                {
                    "JointName": position,
                    ...
                }
            如果失败返回 None
        """

        start_time = self.get_clock().now()

        while rclpy.ok():
            rclpy.spin_once(self, timeout_sec=0.1)

            if self.latest_msg is not None:
                name_to_pos = dict(
                    zip(self.latest_msg.name, self.latest_msg.position)
                )

                missing_joints = [
                    name for name in joint_names
                    if name not in name_to_pos
                ]

                if not missing_joints:
                    return {
                        name: name_to_pos[name]
                        for name in joint_names
                    }

                self.get_logger().warn(
                    f"/joint_states 中缺少关节: {missing_joints}"
                )

            elapsed = self.get_clock().now() - start_time
            if elapsed.nanoseconds / 1e9 > timeout_sec:
                self.get_logger().error("等待 /joint_states 超时")
                return None

def main(args=None):
    rclpy.init(args=args)

    left_arm_joint_names = [
        "Left_Arm_Joint1",
        "Left_Arm_Joint2",
        "Left_Arm_Joint3",
        "Left_Arm_Joint4",
        "Left_Arm_Joint5",
        "Left_Arm_Joint6",
        "Left_Arm_Joint7",
    ]

    right_arm_joint_names = [
        "Right_Arm_Joint1",
        "Right_Arm_Joint2",
        "Right_Arm_Joint3",
        "Right_Arm_Joint4",
        "Right_Arm_Joint5",
        "Right_Arm_Joint6",
        "Right_Arm_Joint7",
    ]

    reader = JointStateReader()

    left_positions = reader.get_joint_positions(
        left_arm_joint_names,
        timeout_sec=3.0,
    )

    right_positions = reader.get_joint_positions(
        right_arm_joint_names,
        timeout_sec=3.0,
    )

    print("\n========== 当前左臂关节角 ==========")
    if left_positions is not None:
        for name, pos in left_positions.items():
            print(f"{name}: {pos:.6f}")
    else:
        print("读取左臂失败")

    print("\n========== 当前右臂关节角 ==========")
    if right_positions is not None:
        for name, pos in right_positions.items():
            print(f"{name}: {pos:.6f}")
    else:
        print("读取右臂失败")

    reader.destroy_node()
    rclpy.shutdown()


if __name__ == "__main__":
    main()