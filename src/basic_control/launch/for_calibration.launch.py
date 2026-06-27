import os

import launch
from launch import LaunchDescription
from launch.actions import (
    DeclareLaunchArgument,
    ExecuteProcess,
    GroupAction,
    IncludeLaunchDescription,
    RegisterEventHandler,
    OpaqueFunction,
    TimerAction,
)
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import EnvironmentVariable, LaunchConfiguration
from launch.event_handlers import OnProcessStart

_THIS_DIR = os.path.dirname(os.path.abspath(__file__))


def generate_launch_description():
    real_robot_arg = DeclareLaunchArgument(
        "real_robot",
        default_value="true",
        description="Whether to start the real robot driver",
    )
    real_robot = LaunchConfiguration("real_robot")

    # 底层电机驱动（控制+反馈话题）
    ws_root = os.path.abspath(os.path.join(_THIS_DIR, "..", "..", "..", "..", ".."))
    ymbot_d_sharedmemory_driver_path = os.path.join(ws_root, "utils", "ymbot_d_sharedmemory_driver")
    driver_executable_candidates = (
        os.path.join(ymbot_d_sharedmemory_driver_path, "build_local", "ymbot_d_eumotor_interface"),
        os.path.join(ymbot_d_sharedmemory_driver_path, "build", "ymbot_d_eumotor_interface"),
    )
    executable_path = next(
        (path for path in driver_executable_candidates if os.path.exists(path)),
        driver_executable_candidates[-1],
    )
    driver_lib_path = os.path.join(ymbot_d_sharedmemory_driver_path, "lib")
    driver_excutable = ExecuteProcess(
        cmd=[executable_path],
        output="screen",
        additional_env={
            "LD_LIBRARY_PATH": [
                driver_lib_path,
                ":",
                EnvironmentVariable("LD_LIBRARY_PATH", default_value=""),
            ],
        },
        condition=launch.conditions.IfCondition(real_robot),
    )

    # Moveit + rviz
    moveit_config_path = os.path.join(ws_root, "install", "ymbot_d_moveit_config", "share", "ymbot_d_moveit_config", "launch")
    # /home/oy/ymbot/install/ymbot_d_moveit_config/share/ymbot_d_moveit_config/launch
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
        PythonLaunchDescriptionSource(os.path.join(moveit_config_path, "demo_moveit_backend.launch.py"))
    )
    rviz = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(os.path.join(moveit_config_path, "moveit_rviz.launch.py"))
    )

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
    
    # 初始化头部相机位置（延迟5s）
    neck_initialization = TimerAction(
        period=5.0,
        actions=[
            ExecuteProcess(
                cmd=[
                    'ros2',
                    'run',
                    'remote_operate_pkg',
                    'neck_control',
                    '--ros-args',
                    '-p',
                    'target_positions:=[0.0, -0.959931]'
                ],
                output='screen',
                name='neck_initialization'
            )
        ]
    )

    # 手部控制
    # TODO    

    # 头部相机
    head_camera_launch = ExecuteProcess(
        cmd=[
            'bash', '-lc',
            'ros2 run orbbec_camera orbbec_camera_node --ros-args '
            '-r __node:=top '
            '-r __ns:=/top/top '
            '-p camera_name:=top '
            '-p depth_registration:=true '
            '-p device_num:=1 '
            '-p enable_point_cloud:=false '
            '-p enable_colored_point_cloud:=false '
            '-p color_width:=640 '
            '-p color_height:=400 '
            '-p color_fps:=30 '
            '-p color_format:=RGB8 '
            '-p enable_color:=true '
            '-p enable_color_auto_exposure:=false '
            '-p color_exposure:=8000 '
            '-p color_gain:=20 '
            '-p enable_color_auto_white_balance:=true '
            '-p depth_width:=640 '
            '-p depth_height:=400 '
            '-p depth_fps:=30 '
            '-p depth_format:=Y16 '
            '-p enable_depth:=false '
            '-p enable_ir:=false '
            '-p publish_tf:=true '
            '-p enable_frame_sync:=true '
            '-p use_hardware_time:=true '
            '-p enable_depth_scale:=true '
            '-p align_mode:=HW'
        ],
        output='log',
        name='head_camera_launch'
    )
    set_head_camera_params = ExecuteProcess(
        cmd=[
            'bash', '-c',
            'set -e; '
            'echo "[head_cam] waiting for /top/top/set_color_exposure ..."; '
            'until ros2 service type /top/top/set_color_exposure >/dev/null 2>&1; do sleep 0.2; done; '
            'ros2 service call /top/top/set_color_auto_exposure std_srvs/srv/SetBool "{data: false}"; '
            'ros2 service call /top/top/set_color_exposure orbbec_camera_msgs/srv/SetInt32 "{data: 5000}"; '
            'ros2 service call /top/top/set_color_gain orbbec_camera_msgs/srv/SetInt32 "{data: 1}"; '
            'ros2 service call /top/top/get_color_exposure orbbec_camera_msgs/srv/GetInt32 "{}"; '
            'ros2 service call /top/top/get_color_gain orbbec_camera_msgs/srv/GetInt32 "{}"; '
        ],
        output='screen',
        name='set_head_camera_params'
    )
    head_cam_handler = RegisterEventHandler(
        OnProcessStart(
            target_action=head_camera_launch,
            on_start=[
                TimerAction(
                    period=9.0,
                    actions=[set_head_camera_params]
                )
            ]
        )
    )

    return LaunchDescription(
        [
            real_robot_arg,
            demo_timer_arg,
            rviz_timer_arg,
            driver_excutable,
            neck_initialization,
            staged,
            head_camera_launch,
            head_cam_handler,
        ]
    )
