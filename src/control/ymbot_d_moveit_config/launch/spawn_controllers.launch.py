"""Spawn ros2_control controllers in one process (avoids controller_manager service storms).

Order matches moveit_controllers.yaml plus joint_state_broadcaster first so
/joint_states and TF exist before trajectory controllers finish loading.
Keep controller list in sync with config/moveit_controllers.yaml if you add axes.
"""

from launch import LaunchDescription
from launch_ros.actions import Node


def generate_launch_description():
    return LaunchDescription(
        [
            Node(
                package="controller_manager",
                executable="spawner",
                arguments=[
                    "joint_state_broadcaster",
                    "body_controller",
                    "neck_controller",
                    "left_arm_controller",
                    "right_arm_controller",
                    "--controller-manager-timeout",
                    "60.0",
                    "--service-call-timeout",
                    "30.0",
                ],
                output="screen",
            )
        ]
    )
