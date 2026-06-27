import os

import launch
from launch import LaunchDescription
from launch_ros.actions import Node
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

from ament_index_python.packages import get_package_share_directory

_THIS_DIR = os.path.dirname(os.path.abspath(__file__))


def generate_launch_description():
    pkg_share = get_package_share_directory('basic_control')
    tag_config = os.path.join(pkg_share, 'cfg', 'tags_36h11_top.yaml')

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

    # 外参节点
    camera_extrinsic_resolver = Node(
        package='basic_control',
        executable='camera_extrinsic_resolver',
        name='camera_extrinsic_resolver',
        output='screen',
        parameters=[{
            'robot_base_frame': 'Body_Link5',
            'camera_root_frame': 'top_link',
            'camera_optical_frame': 'top_color_optical_frame',
            'body_to_optical.x': 0.0568151794009229,
            'body_to_optical.y': -0.0060688009024244816,
            'body_to_optical.z': 0.33263189859053577,
            'body_to_optical.qx': -0.6207464016089812,
            'body_to_optical.qy': 0.6477069071334154,
            'body_to_optical.qz': -0.31257857340859097,
            'body_to_optical.qw': 0.3121607002603249,
        }],
    )

    # 抓取位姿解算
    box_right_grasp_tf = Node(
        package='tf2_ros',
        executable='static_transform_publisher',
        name='box_right_grasp_tf',
        arguments=[
            '--x', '0.175',
            '--y', '0.00',
            '--z', '-0.15',
            '--qx', '0.0',
            '--qy', '0.0397275',
            '--qz', '0.6753676',
            '--qw', '0.7364105',
            '--frame-id', 'tag_top_9',
            '--child-frame-id', 'box_right_grasp',
        ],
    )
    box_left_grasp_tf = Node(
        package='tf2_ros',
        executable='static_transform_publisher',
        name='box_left_grasp_tf',
        arguments=[
            '--x', '-0.175',
            '--y', '0.00',
            '--z', '-0.15',
            '--qx', '0.0',
            '--qy', '-0.037766',
            '--qz', '0.7930863 ',
            '--qw', '0.6079374',
            '--frame-id', 'tag_top_9',
            '--child-frame-id', 'box_left_grasp',
        ],
    )
    stable_grasp_pose_publisher = Node(
        package='basic_control',
        executable='stable_grasp_pose_publisher',
        name='stable_grasp_pose_publisher',
        output='screen',
        parameters=[{
            'parent_frame': 'Body_Link5',
            'left_frame': 'box_left_grasp',
            'right_frame': 'box_right_grasp',
            'sample_count': 10,
            'position_tolerance': 0.01,
            'orientation_tolerance_deg': 3.0,
            'timer_period': 0.05,
            'freeze_when_stable': True,
        }],
    )

    # apriltag码识别节点
    top_rectify_node = Node(
        package='image_proc',
        executable='rectify_node',
        name='top_rectify_node',
        output='screen',
        remappings=[
            ('image', '/top/top/color/image_raw'),
            ('camera_info', '/top/top/color/camera_info'),
            ('image_rect', '/top/top/color/image_rect'),
        ],
    )

    apriltag_top_node = Node(
        package='apriltag_ros',
        executable='apriltag_node',
        name='apriltag_top',
        output='screen',
        parameters=[tag_config],
        remappings=[
            ('image_rect', '/top/top/color/image_rect'),
            ('camera_info', '/top/top/color/camera_info'),
            ('detections', '/apriltag/top/detections'),
        ],
    )
    top_nodes_handler = RegisterEventHandler(
        OnProcessStart(
            target_action=head_camera_launch,
            on_start=[
                TimerAction(
                    period=10.0,
                    actions=[
                        top_rectify_node,
                        apriltag_top_node,
                    ]
                )
            ]
        )
    )

    return LaunchDescription(
        [
            real_robot_arg,
            demo_timer_arg,
            rviz_timer_arg,

            # 机器人驱动
            driver_excutable,
            neck_initialization,
            # moveit + rviz
             staged,
            # 头部相机启动
            head_camera_launch,
            head_cam_handler,
            # 外参
            camera_extrinsic_resolver,
            # 抓取位姿结算
            box_left_grasp_tf,
            box_right_grasp_tf,
            stable_grasp_pose_publisher,
            # 启动识别节点
            top_nodes_handler,
        ]
    )
