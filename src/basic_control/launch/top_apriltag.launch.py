from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import (
    ExecuteProcess,
    TimerAction,
    RegisterEventHandler,
)
from launch.event_handlers import OnProcessStart
from ament_index_python.packages import get_package_share_directory
import os


def generate_launch_description():
    pkg_share = get_package_share_directory('ymbot_camera_test')
    tag_config = os.path.join(pkg_share, 'config', 'tags_36h11_top.yaml')

    head_camera_launch = ExecuteProcess(
        cmd=[
            'ros2', 'launch', 'start_robot',
            'gemini2L_recorder_launch.py'
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

    top_camera_extrinsic_tf = Node(
        package='tf2_ros',
        executable='static_transform_publisher',
        name='top_camera_extrinsic_tf',
        arguments=[
            '--x', '0.017001106478886134',
            '--y', '-0.0010085308315865987',
            '--z', '0.32779437316292953',
            '--qx', '-0.6290346561392619',
            '--qy', '0.6266029318530252',
            '--qz', '-0.31472334246889455',
            '--qw', '0.33560897615254637',
            '--frame-id', 'Body_Link5',
            '--child-frame-id', 'top_color_optical_frame',
        ],
    )

    camera_extrinsic_resolver = Node(
        package='ymbot_camera_test',
        executable='camera_extrinsic_resolver',
        name='camera_extrinsic_resolver',
        output='screen',
        parameters=[{
            'robot_base_frame': 'Body_Link5',
            'camera_root_frame': 'top_link',
            'camera_optical_frame': 'top_color_optical_frame',
            'body_to_optical.x': 0.017001106478886134,
            'body_to_optical.y': -0.0010085308315865987,
            'body_to_optical.z': 0.32779437316292953,
            'body_to_optical.qx': -0.6290346561392619,
            'body_to_optical.qy': 0.6266029318530252,
            'body_to_optical.qz': -0.31472334246889455,
            'body_to_optical.qw': 0.33560897615254637,
        }],
    )
    
    box_right_grasp_tf = Node(
        package='tf2_ros',
        executable='static_transform_publisher',
        name='box_right_grasp_tf',
        arguments=[
            '--x', '0.175',
            '--y', '0.00',
            '--z', '-0.15',
            '--qx', '0.0',
            '--qy', '0.0',
            '--qz', '0.707',
            '--qw', '0.707',
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
            '--qy', '0.0',
            '--qz', '0.707',
            '--qw', '0.707',
            '--frame-id', 'tag_top_9',
            '--child-frame-id', 'box_left_grasp',
        ],
    )
    stable_grasp_pose_publisher = Node(
        package='ymbot_camera_test',
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

    return LaunchDescription([
        camera_extrinsic_resolver,
        head_camera_launch,
        head_cam_handler,

        top_nodes_handler,

        box_left_grasp_tf,
        box_right_grasp_tf,
        
        stable_grasp_pose_publisher,
    ])
