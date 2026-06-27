import rclpy
import time

from moveit_joint_control import MoveitJointControl
import numpy as np

'''
测试moveit关节空间控制
'''

def main(args=None):
    rclpy.init(args=args)
    try:
        moveit_control = MoveitJointControl()

        # 左臂目标关节角，单位 rad
        '''
        Left_Arm_Joint1: 0.125786
        Left_Arm_Joint2: 0.432774
        Left_Arm_Joint3: -0.390302
        Left_Arm_Joint4: -0.910897
        Left_Arm_Joint5: -0.287909
        Left_Arm_Joint6: 0.645135
        Left_Arm_Joint7: -0.176887

        '''
        left_target = [0.125786, 0.432774, -0.390302, -0.910897, -0.287909, 0.645135, -0.176887]

        # 右臂目标关节角，单位 rad
        '''
        ========== 当前右臂关节角 ==========
        Right_Arm_Joint1: -0.127320
        Right_Arm_Joint2: -0.429227
        Right_Arm_Joint3: 0.382153
        Right_Arm_Joint4: 0.931797
        Right_Arm_Joint5: 0.039308
        Right_Arm_Joint6: 0.762293
        Right_Arm_Joint7: 0.180626
        '''
        right_target = [-0.127320, -0.429227, 0.382153, 0.931797, 0.039308, 0.762293, 0.180626]

        # 测试 1：只控制左臂
        success = moveit_control.move_left_arm(left_target)

        # 测试 2：只控制右臂
        # success = moveit_control.move_right_arm(right_target)

        # 测试 3：同时控制双臂
        # success = moveit_control.move_both_arms(left_target, right_target)

        if success:
            print("MoveIt 关节空间测试执行成功")
        else:
            print("MoveIt 关节空间测试执行失败")

            time.sleep(0.5)

    finally:
        # 先显式释放 MoveItPy / MoveItCpp
        if moveit_control is not None:
            del moveit_control

        time.sleep(0.5)

        # 最后再 shutdown rclpy
        if rclpy.ok():
            rclpy.shutdown()

    rclpy.shutdown()

if __name__ == "__main__":
    main()