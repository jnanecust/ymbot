import time

import rclpy
from rclpy.node import Node

from tf2_ros import Buffer, TransformListener

from moveit_cartesian_control import MoveitCartesianControl

'''
测试moveit笛卡尔空间控制
'''

class CurrentPoseReader(Node):
    def __init__(self):
        super().__init__("current_pose_reader")
        self.tf_buffer = Buffer()
        self.tf_listener = TransformListener(self.tf_buffer, self)

    def get_current_pose(
        self,
        target_frame: str,
        source_frame: str,
        timeout_sec: float = 3.0,
    ):
        """
        获取 source_frame 相对于 target_frame 的当前位姿。
        返回:
            [x, y, z, qx, qy, qz, qw]
        """
        start_time = time.time()

        while rclpy.ok():
            rclpy.spin_once(self, timeout_sec=0.1)

            try:
                trans = self.tf_buffer.lookup_transform(
                    target_frame,
                    source_frame,
                    rclpy.time.Time(),
                )

                pose = [
                    trans.transform.translation.x,
                    trans.transform.translation.y,
                    trans.transform.translation.z,
                    trans.transform.rotation.x,
                    trans.transform.rotation.y,
                    trans.transform.rotation.z,
                    trans.transform.rotation.w,
                ]

                return pose

            except Exception as e:
                if time.time() - start_time > timeout_sec:
                    self.get_logger().error(
                        f"读取 TF 超时: {target_frame} -> {source_frame}, error={e}"
                    )
                    return None


def print_pose(name, pose):
    print(f"\n========== {name} ==========")
    print(f"x : {pose[0]:.6f}")
    print(f"y : {pose[1]:.6f}")
    print(f"z : {pose[2]:.6f}")
    print(f"qx: {pose[3]:.6f}")
    print(f"qy: {pose[4]:.6f}")
    print(f"qz: {pose[5]:.6f}")
    print(f"qw: {pose[6]:.6f}")


def main(args=None):
    rclpy.init(args=args)

    reference_frame = "Body_Link5"
    left_ee_link = "Left_Arm_Link8"
    right_ee_link = "Right_Arm_Link8"

    reader = CurrentPoseReader()

    # ===================================================
    # =================  测试左臂  =======================
    # ===================================================
    left_current_pose = reader.get_current_pose(
        target_frame=reference_frame,
        source_frame=left_ee_link,
        timeout_sec=3.0,
    )
    if left_current_pose is None:
        print("读取左臂当前末端位姿失败，退出")
        reader.destroy_node()
        rclpy.shutdown()
        return
    print_pose("当前左臂末端位姿", left_current_pose)

    left_target_pose = left_current_pose.copy()
    left_target_pose[0] += 0.01
    # left_target_pose[2] += 0.01
    print_pose("左臂测试目标位姿", left_target_pose)
    input("\n确认执行左臂测试运动？按 Enter 继续，Ctrl+C 取消...")

    # ===================================================
    # =================  测试右臂  =======================
    # ===================================================
    right_current_pose = reader.get_current_pose(
        target_frame=reference_frame,
        source_frame=right_ee_link,
        timeout_sec=3.0,
    )
    if right_current_pose is None:
        print("读取左臂当前末端位姿失败，退出")
        reader.destroy_node()
        rclpy.shutdown()
        return
    print_pose("当前左臂末端位姿", right_current_pose)

    right_target_pose = right_current_pose.copy()
    right_target_pose[0] += 0.01
    # right_target_pose[2] += 0.01
    print_pose("右臂测试目标位姿", right_target_pose)
    input("\n确认执行右臂测试运动？按 Enter 继续，Ctrl+C 取消...")

    # 开始测试
    cartesian_control = MoveitCartesianControl()
    # success = cartesian_control.move_left_arm(left_target_pose)
    # success = cartesian_control.move_right_arm(right_target_pose)
    success = cartesian_control.move_both_arms(left_target_pose, right_target_pose)
    if success:
        print("MoveIt 左臂笛卡尔空间测试执行成功")
    else:
        print("MoveIt 左臂笛卡尔空间测试执行失败")

    # 先删除 MoveIt 控制对象，再 shutdown，减少退出时析构段错误概率
    del cartesian_control

    time.sleep(0.5)
    reader.destroy_node()

    if rclpy.ok():
        rclpy.shutdown()


if __name__ == "__main__":
    main()