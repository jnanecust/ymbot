from typing import Sequence

from rclpy.logging import get_logger
from geometry_msgs.msg import PoseStamped,Pose

from moveit.planning import MoveItPy
from moveit.core.robot_state import RobotState
from moveit_configs_utils import MoveItConfigsBuilder

from moveit_msgs.msg import Constraints
from moveit.core.kinematic_constraints import construct_link_constraint

from tf_transformations import quaternion_matrix, quaternion_from_matrix
import numpy as np

"""
moveit 笛卡尔空间控制类:
    实例化后分别调用下述方法实现末端位姿控制
    .move_left_arm([x, y, z, qx, qy, qz, qw])
    .move_right_arm([x, y, z, qx, qy, qz, qw])
    .move_both_arms(
        [left_x, left_y, left_z, left_qx, left_qy, left_qz, left_qw],
        [right_x, right_y, right_z, right_qx, right_qy, right_qz, right_qw],
    )
"""
from moveit_msgs.msg import Constraints, PositionConstraint, OrientationConstraint
from shape_msgs.msg import SolidPrimitive
from geometry_msgs.msg import PoseStamped



class MoveitCartesianControl:
    def __init__(self, node_name: str = "moveit_cartesian_control"):
        self.logger = get_logger(node_name)

        # 规划组
        self.left_arm_group = "left_arm"
        self.right_arm_group = "right_arm"
        self.dual_arm_group = "arms"

        # 末端link
        self.left_ee_link = "Left_Arm_Link8"
        self.right_ee_link = "Right_Arm_Link8"
        self.reference_frame = "Body_Link5"

        # 初始化moveit
        self.logger.info("正在初始化 MoveItPy...")
        moveit_config = (
            MoveItConfigsBuilder(
                robot_name="ymbot_d",
                package_name="ymbot_d_moveit_config",
            )
            .robot_description()
            .robot_description_semantic(file_path="config/ymbot_d.srdf")
            .robot_description_kinematics()
            .planning_pipelines(
                pipelines=["ompl"],
                default_planning_pipeline="ompl",
            )
            .trajectory_execution()
            .planning_scene_monitor()
            .to_moveit_configs()
        )

        config_dict = moveit_config.to_dict()
        config_dict.update({
            "planning_pipelines": {
                "pipeline_names": ["ompl"],
                "default_planning_pipeline": "ompl",
            },
            "plan_request_params": {
                "planning_attempts": 1,
                "planning_pipeline": "ompl",
                "planner_id": "RRTConnectkConfigDefault",
                "max_velocity_scaling_factor": 0.2,
                "max_acceleration_scaling_factor": 0.2,
                "planning_time": 5.0,
            },
        })

        if "ompl" not in config_dict:
            config_dict["ompl"] = {}
        config_dict["ompl"]["planning_plugin"] = "ompl_interface/OMPLPlanner"
        config_dict["ompl"]["request_adapters"] = [
            "default_planning_request_adapters/ResolveConstraintFrames",
            "default_planning_request_adapters/ValidateWorkspaceBounds",
            "default_planning_request_adapters/CheckStartStateBounds",
            "default_planning_request_adapters/CheckStartStateCollision",
        ]
        config_dict["ompl"]["response_adapters"] = [
            "default_planning_response_adapters/AddTimeOptimalParameterization",
            "default_planning_response_adapters/ValidateSolution",
            "default_planning_response_adapters/DisplayMotionPath",
        ]
        config_dict["ompl"]["start_state_max_bounds_error"] = 0.1

        self.moveit_py = MoveItPy(
            node_name=node_name,
            config_dict=config_dict,
        )

        self.robot_model = self.moveit_py.get_robot_model()
        # 实例化规划组
        self.left_arm = self.moveit_py.get_planning_component(self.left_arm_group)
        self.right_arm = self.moveit_py.get_planning_component(self.right_arm_group)
        self.dual_arm = self.moveit_py.get_planning_component(self.dual_arm_group)

        self.logger.info("MoveIt 笛卡尔空间控制类初始化完成")

    def move_left_arm(self, left_pose: Sequence[float]) -> bool:
        if len(left_pose) != 7:
            self.logger.error("左臂目标位姿长度必须为 7: [x, y, z, qx, qy, qz, qw]")
            return False

        pose_msg = self._make_pose_stamped(left_pose)

        return self._plan_and_execute_pose(
            planning_component=self.left_arm,
            pose_msg=pose_msg,
            pose_link=self.left_ee_link,
            group_name=self.left_arm_group,
        )

    def move_right_arm(self, right_pose: Sequence[float]) -> bool:
        if len(right_pose) != 7:
            self.logger.error("右臂目标位姿长度必须为 7: [x, y, z, qx, qy, qz, qw]")
            return False

        pose_msg = self._make_pose_stamped(right_pose)

        return self._plan_and_execute_pose(
            planning_component=self.right_arm,
            pose_msg=pose_msg,
            pose_link=self.right_ee_link,
            group_name=self.right_arm_group,
        )

    def move_both_arms(
        self,
        left_pose: Sequence[float],
        right_pose: Sequence[float],
    ) -> bool:
        if len(left_pose) != 7:
            self.logger.error("左臂目标位姿长度必须为 7")
            return False

        if len(right_pose) != 7:
            self.logger.error("右臂目标位姿长度必须为 7")
            return False

        left_pose_msg = self._make_pose_stamped(left_pose)
        right_pose_msg = self._make_pose_stamped(right_pose)

        return self._plan_and_execute_dual_pose(
            left_pose_msg=left_pose_msg,
            right_pose_msg=right_pose_msg,
        )

    def _make_pose_stamped(self, pose: Sequence[float]) -> PoseStamped:
        """
        把 [x, y, z, qx, qy, qz, qw] 转成 PoseStamped。
        """
        pose_msg = PoseStamped()
        pose_msg.header.frame_id = self.reference_frame

        pose_msg.pose.position.x = float(pose[0])
        pose_msg.pose.position.y = float(pose[1])
        pose_msg.pose.position.z = float(pose[2])

        pose_msg.pose.orientation.x = float(pose[3])
        pose_msg.pose.orientation.y = float(pose[4])
        pose_msg.pose.orientation.z = float(pose[5])
        pose_msg.pose.orientation.w = float(pose[6])
        return pose_msg

    def _plan_and_execute_pose(
        self,
        planning_component,
        pose_msg: PoseStamped,
        pose_link: str,
        group_name: str,
    ) -> bool:
        planning_component.set_start_state_to_current_state()

        planning_component.set_goal_state(
            pose_stamped_msg=pose_msg,
            pose_link=pose_link,
        )

        self.logger.info(f"[{group_name}] 开始规划...")
        plan_result = planning_component.plan()

        if not plan_result:
            self.logger.error(f"[{group_name}] 规划失败")
            return False

        self.logger.info(f"[{group_name}] 规划成功，开始执行...")

        self.moveit_py.execute(
            plan_result.trajectory,
            controllers=[],
        )

        self.logger.info(f"[{group_name}] 执行完成")
        return True

    def _plan_and_execute_dual_pose(
        self,
        left_pose_msg: PoseStamped,
        right_pose_msg: PoseStamped,
    ) -> bool:
        self.logger.info("[arms] 开始双末端位姿联合规划...")

        goal_constraints = self._make_pose_goal_constraints(
            left_pose_msg,
            right_pose_msg,
            pos_tol=0.005,
            rot_tol=0.02,
        )

        self.dual_arm.set_start_state_to_current_state()

        self.dual_arm.set_goal_state(
            motion_plan_constraints=[goal_constraints]
        )

        self.logger.info("[arms] 开始联合规划...")
        plan_result = self.dual_arm.plan()
        self.logger.info("[arms] plan() 已返回")

        if not plan_result:
            self.logger.error("[arms] 双臂联合规划失败")
            return False

        self.logger.info("[arms] 双臂联合规划成功，开始执行...")

        execute_result = self.moveit_py.execute(
            plan_result.trajectory,
            controllers=[],
        )

        self.logger.info(f"[arms] execute_result: {execute_result}")

        self.logger.info("[arms] 双臂执行完成")
        return True
    
    def _make_pose_goal_constraints(
        self,
        left_pose_msg: PoseStamped,
        right_pose_msg: PoseStamped,
        pos_tol: float = 0.005,
        rot_tol: float = 0.02,
    ) -> Constraints:
        constraints = Constraints()
        constraints.name = "dual_arm_pose_goal"

        def add_link_pose_constraint(pose_msg: PoseStamped, link_name: str):
            # 位置约束：以目标点为中心的小球
            pc = PositionConstraint()
            pc.header.frame_id = pose_msg.header.frame_id
            pc.link_name = link_name
            pc.weight = 1.0

            sphere = SolidPrimitive()
            sphere.type = SolidPrimitive.SPHERE
            sphere.dimensions = [pos_tol]

            pc.constraint_region.primitives.append(sphere)
            pc.constraint_region.primitive_poses.append(pose_msg.pose)

            constraints.position_constraints.append(pc)

            # 姿态约束
            oc = OrientationConstraint()
            oc.header.frame_id = pose_msg.header.frame_id
            oc.link_name = link_name
            oc.orientation = pose_msg.pose.orientation
            oc.absolute_x_axis_tolerance = rot_tol
            oc.absolute_y_axis_tolerance = rot_tol
            oc.absolute_z_axis_tolerance = rot_tol
            oc.weight = 1.0

            constraints.orientation_constraints.append(oc)

        add_link_pose_constraint(left_pose_msg, self.left_ee_link)
        add_link_pose_constraint(right_pose_msg, self.right_ee_link)

        return constraints
