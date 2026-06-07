"""MoveIt demo stack without RViz: controllers fully spawned before move_group."""

import sys
from pathlib import Path

from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription, RegisterEventHandler
from launch.conditions import IfCondition
from launch.event_handlers import OnProcessExit
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node

from moveit_configs_utils import MoveItConfigsBuilder
from moveit_configs_utils.launches import DeclareBooleanLaunchArg

_LAUNCH_DIR = Path(__file__).resolve().parent
if _LAUNCH_DIR.as_posix() not in sys.path:
    sys.path.insert(0, _LAUNCH_DIR.as_posix())
from ymbot_moveit_srdf import ymbot_srdf_path  # noqa: E402


def generate_launch_description():
    moveit_config = MoveItConfigsBuilder(
        "ymbot_d", package_name="ymbot_d_moveit_config"
    ).robot_description_semantic(ymbot_srdf_path()).to_moveit_configs()
    launch_package_path = moveit_config.package_path

    ld = LaunchDescription()
    ld.add_action(
        DeclareBooleanLaunchArg(
            "db",
            default_value=False,
            description="By default, we do not start a database (it can be large)",
        )
    )
    ld.add_action(
        DeclareBooleanLaunchArg(
            "debug",
            default_value=False,
            description="By default, we are not in debug mode",
        )
    )

    virtual_joints_launch = launch_package_path / "launch/static_virtual_joint_tfs.launch.py"
    if virtual_joints_launch.exists():
        ld.add_action(
            IncludeLaunchDescription(
                PythonLaunchDescriptionSource(str(virtual_joints_launch)),
            )
        )

    ld.add_action(
        IncludeLaunchDescription(
            PythonLaunchDescriptionSource(str(launch_package_path / "launch/rsp.launch.py")),
        )
    )

    ld.add_action(
        Node(
            package="controller_manager",
            executable="ros2_control_node",
            parameters=[str(moveit_config.package_path / "config/ros2_controllers.yaml")],
            remappings=[("/controller_manager/robot_description", "/robot_description")],
        )
    )

    # Keep this list identical to launch/spawn_controllers.launch.py (joint_state_broadcaster first).
    controller_spawner = Node(
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
    ld.add_action(controller_spawner)

    move_group_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            str(launch_package_path / "launch/move_group.launch.py")
        )
    )
    ld.add_action(
        RegisterEventHandler(
            OnProcessExit(
                target_action=controller_spawner,
                on_exit=[move_group_launch],
            )
        )
    )

    ld.add_action(
        IncludeLaunchDescription(
            PythonLaunchDescriptionSource(
                str(launch_package_path / "launch/warehouse_db.launch.py")
            ),
            condition=IfCondition(LaunchConfiguration("db")),
        )
    )

    return ld
