import os

import launch
from launch import LaunchDescription
from launch.actions import (
    DeclareLaunchArgument,
    ExecuteProcess,
    GroupAction,
    IncludeLaunchDescription,
    OpaqueFunction,
    TimerAction,
)
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import LaunchConfiguration

_THIS_DIR = os.path.dirname(os.path.abspath(__file__))


def generate_launch_description():
    real_robot_arg = DeclareLaunchArgument(
        "real_robot",
        default_value="false",
        description="Whether to start the real robot driver",
    )
    real_robot = LaunchConfiguration("real_robot")

    ws_root = os.path.abspath(os.path.join(_THIS_DIR, "..", "..", "..", "..", ".."))
    ymbot_d_sharedmemory_driver_path = os.path.join(ws_root, "utils", "ymbot_d_sharedmemory_driver")
    executable_path = os.path.join(
        ymbot_d_sharedmemory_driver_path, "build/ymbot_d_eumotor_interface"
    )
    driver_excutable = ExecuteProcess(
        cmd=[executable_path],
        output="screen",
        condition=launch.conditions.IfCondition(real_robot),
    )

    # After real driver + controllers: wait before RViz so /joint_states and TF exist
    # (avoids "Link ... does not exist" spam on startup).
    demo_timer_arg = DeclareLaunchArgument(
        "demo_start_delay",
        default_value="3.0",
        description="Seconds after launch before starting MoveIt stack (real driver settle time).",
    )
    rviz_timer_arg = DeclareLaunchArgument(
        "rviz_start_delay",
        default_value="2.0",
        description="Extra seconds after MoveIt backend starts before RViz (joint_state_broadcaster runs first).",
    )

    backend = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(os.path.join(_THIS_DIR, "demo_moveit_backend.launch.py"))
    )
    rviz = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(os.path.join(_THIS_DIR, "moveit_rviz.launch.py"))
    )

    # TimerAction period must be numeric; use OpaqueFunction for substitutable delays.
    def _staged_launch(context, *args, **kwargs):
        demo_delay = float(context.perform_substitution(LaunchConfiguration("demo_start_delay")))
        rviz_delay = float(context.perform_substitution(LaunchConfiguration("rviz_start_delay")))
        return [
            TimerAction(
                period=demo_delay,
                actions=[
                    GroupAction(
                        [
                            backend,
                            TimerAction(period=rviz_delay, actions=[rviz]),
                        ]
                    )
                ],
            )
        ]

    staged = OpaqueFunction(function=_staged_launch)

    return LaunchDescription(
        [
            real_robot_arg,
            demo_timer_arg,
            rviz_timer_arg,
            driver_excutable,
            staged,
        ]
    )
