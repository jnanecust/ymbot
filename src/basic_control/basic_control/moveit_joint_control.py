from typing import Sequence, Dict

from moveit.planning import MoveItPy
from moveit.core.robot_state import RobotState

from moveit_configs_utils import MoveItConfigsBuilder
from moveit_msgs.msg import Constraints, JointConstraint
import numpy as np
"""
moveit 关节控制类:
    实例化后分别调用下述方法实现关节空间驱动控制
    .move_left_arm([left_joint1, ..., left_joint7])
    .move_right_arm([right_joint1, ..., right_joint7])
    .move_both_arms([left_joint1, ..., left_joint7],
                    [right_joint1, ..., right_joint7])
"""

class MoveitJointControl:
    def __init__(self, node_name: str = "moveit_joint_control",
    ):
        self.left_arm_group = 'left_arm'
        self.right_arm_group = 'right_arm'
        self.dual_arm_group = 'arms'

        self.left_arm_joint_names = [
            "Left_Arm_Joint1",
            "Left_Arm_Joint2",
            "Left_Arm_Joint3",
            "Left_Arm_Joint4",
            "Left_Arm_Joint5",
            "Left_Arm_Joint6",
            "Left_Arm_Joint7",
        ]

        self.right_arm_joint_names = [
            "Right_Arm_Joint1",
            "Right_Arm_Joint2",
            "Right_Arm_Joint3",
            "Right_Arm_Joint4",
            "Right_Arm_Joint5",
            "Right_Arm_Joint6",
            "Right_Arm_Joint7",
        ]

        self.dual_arm_joint_names = (
            self.left_arm_joint_names + self.right_arm_joint_names
        )

        # 初始化moveit
        print("正在初始化 MoveItPy...")

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

        self.left_arm = self.moveit_py.get_planning_component(self.left_arm_group)
        self.right_arm = self.moveit_py.get_planning_component(self.right_arm_group)
        self.dual_arm = self.moveit_py.get_planning_component(self.dual_arm_group)

        print("MoveIt 双臂控制类初始化完成")

    def move_left_arm(self, left_positions: Sequence[float]) -> bool:
        if len(left_positions) != 7:
            self.logger.error("左臂目标关节角长度必须为 7")
            return False

        joint_goal = dict(zip(self.left_arm_joint_names, left_positions))

        return self._plan_and_execute(
            planning_component=self.left_arm,
            joint_goal=joint_goal,
            group_name=self.left_arm_group,
        )

    def move_right_arm(self, right_positions: Sequence[float]) -> bool:
        if len(right_positions) != 7:
            self.logger.error("右臂目标关节角长度必须为 7")
            return False

        joint_goal = dict(zip(self.right_arm_joint_names, right_positions))

        return self._plan_and_execute(
            planning_component=self.right_arm,
            joint_goal=joint_goal,
            group_name=self.right_arm_group,
        )

    def move_both_arms(
        self,
        left_positions: Sequence[float],
        right_positions: Sequence[float],
    ) -> bool:
        if len(left_positions) != 7:
            self.logger.error("左臂目标关节角长度必须为 7")
            return False

        if len(right_positions) != 7:
            self.logger.error("右臂目标关节角长度必须为 7")
            return False

        both_positions = list(left_positions) + list(right_positions)

        joint_goal = dict(zip(self.dual_arm_joint_names, both_positions))

        return self._plan_and_execute(
            planning_component=self.dual_arm,
            joint_goal=joint_goal,
            group_name=self.dual_arm_group,
        )

    def _plan_and_execute(
        self,
        planning_component,
        joint_goal: Dict[str, float],
        group_name: str,
    ) -> bool:
        print(f"[{group_name}] 目标关节角: {joint_goal}")

        if group_name == self.left_arm_group:
            ordered_joint_names = self.left_arm_joint_names
        elif group_name == self.right_arm_group:
            ordered_joint_names = self.right_arm_joint_names
        elif group_name == self.dual_arm_group:
            ordered_joint_names = self.dual_arm_joint_names
        else:
            self.logger.error(f"未知规划组: {group_name}")
            return False

        # 确保 joint_goal 只包含该规划组需要的关节，并且 value 都是 float
        ordered_joint_goal = {
            joint_name: float(joint_goal[joint_name])
            for joint_name in ordered_joint_names
        }

        print(f"[{group_name}] ordered joint goal: {ordered_joint_goal}")

        goal_state = RobotState(self.robot_model)

        goal_state.joint_positions = ordered_joint_goal

        goal_state.update()

        planning_component.set_start_state_to_current_state()
        planning_component.set_goal_state(robot_state=goal_state)

        print(f"[{group_name}] 开始规划...")
        plan_result = planning_component.plan()

        if not plan_result:
            self.logger.error(f"[{group_name}] 规划失败")
            return False

        print(f"[{group_name}] 规划成功，开始执行...")

        self.moveit_py.execute(
            plan_result.trajectory,
            controllers=[],
        )

        print(f"[{group_name}] 执行完成")
        return True
