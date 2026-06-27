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
from launch.substitutions import LaunchConfiguration
from launch.event_handlers import OnProcessStart

_THIS_DIR = os.path.dirname(os.path.abspath(__file__))


def generate_launch_description():
    # 头部相机
    head_camera_launch = ExecuteProcess(
    cmd=[
        'bash', '-lc',
        'ros2 run orbbec_camera orbbec_camera_node --ros-args '
        '-r __node:=top '
        '-r __ns:=/top/top '
        '-p camera_name:=top '
        '-p depth_registration:=true '
        '-p align_mode:=HW '
        '-p align_target_stream:=COLOR '
        '-p device_num:=1 '

        # 只发布图像，不发布点云
        '-p enable_point_cloud:=false '
        '-p enable_colored_point_cloud:=false '

        # 彩色图
        '-p enable_color:=true '
        '-p color_width:=640 '
        '-p color_height:=400 '
        '-p color_fps:=30 '
        '-p color_format:=RGB8 '
        '-p enable_color_auto_exposure:=false '
        '-p color_exposure:=8000 '
        '-p color_gain:=20 '
        '-p enable_color_auto_white_balance:=true '

        # 深度图
        '-p enable_depth:=true ' 
        '-p depth_width:=640 '
        '-p depth_height:=400 '
        '-p depth_fps:=30 '
        '-p depth_format:=Y16 '
        '-p enable_depth_scale:=true '

        # 不发布 IR
        '-p enable_ir:=false '

        # TF 和同步
        '-p publish_tf:=true '
        '-p enable_frame_sync:=true '
        '-p use_hardware_time:=true '
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
            head_camera_launch,
            head_cam_handler,
        ]
    )
