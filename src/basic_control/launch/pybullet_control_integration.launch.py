import os

import launch
from launch import LaunchDescription
from launch.actions import (
    DeclareLaunchArgument,
    ExecuteProcess,
    GroupAction,
    IncludeLaunchDescription,
    OpaqueFunction,
    RegisterEventHandler,
    TimerAction,
)
from launch.event_handlers import OnProcessStart
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node

from ament_index_python.packages import get_package_share_directory

_THIS_DIR = os.path.dirname(os.path.abspath(__file__))


def generate_launch_description():
    pkg_share = get_package_share_directory("basic_control")
    tag_config = os.path.join(pkg_share, "cfg", "tags_36h11_top.yaml")

    ymbot_moveit_share = get_package_share_directory("ymbot_d_moveit_config")
    ymbot_moveit_launch = os.path.join(ymbot_moveit_share, "launch")
    ros2_controllers_path = os.path.join(ymbot_moveit_share, "config", "ros2_controllers.yaml")

    real_robot_arg = DeclareLaunchArgument(
        "real_robot",
        default_value="true",
        description="Whether to start the real robot driver",
    )
    control_start_delay_arg = DeclareLaunchArgument(
        "control_start_delay",
        default_value="3.0",
        description="Seconds after launch before starting ros2_control stack.",
    )
    real_robot = LaunchConfiguration("real_robot")

    # Real robot shared-memory motor driver.
    ws_root = os.path.abspath(os.path.join(_THIS_DIR, "..", "..", "..", "..", ".."))
    ymbot_d_sharedmemory_driver_path = os.path.join(ws_root, "utils", "ymbot_d_sharedmemory_driver")
    local_executable_path = os.path.join(
        ymbot_d_sharedmemory_driver_path, "build_local/ymbot_d_eumotor_interface"
    )
    executable_path = (
        local_executable_path
        if os.path.exists(local_executable_path)
        else os.path.join(ymbot_d_sharedmemory_driver_path, "build/ymbot_d_eumotor_interface")
    )
    driver_lib_path = os.path.join(ymbot_d_sharedmemory_driver_path, "lib")
    conda_base_lib_path = os.path.expanduser("~/miniconda3/lib")
    conda_ymbot_lib_path = os.path.expanduser("~/miniconda3/envs/ymbot/lib")
    driver_ld_library_path = ":".join(
        path
        for path in [
            conda_ymbot_lib_path,
            conda_base_lib_path,
            driver_lib_path,
            os.environ.get("LD_LIBRARY_PATH", ""),
        ]
        if path
    )
    driver_executable = ExecuteProcess(
        cmd=[executable_path],
        output="screen",
        additional_env={"LD_LIBRARY_PATH": driver_ld_library_path},
        condition=launch.conditions.IfCondition(real_robot),
    )

    # Robot description + ros2_control controllers only. No move_group, no RViz.
    robot_state_publisher = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(os.path.join(ymbot_moveit_launch, "rsp.launch.py"))
    )
    static_virtual_joint_tfs = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(os.path.join(ymbot_moveit_launch, "static_virtual_joint_tfs.launch.py"))
    )
    ros2_control_node = Node(
        package="controller_manager",
        executable="ros2_control_node",
        parameters=[ros2_controllers_path],
        remappings=[("/controller_manager/robot_description", "/robot_description")],
        output="screen",
    )
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

    def _staged_control_launch(context, *args, **kwargs):
        control_delay = float(context.perform_substitution(LaunchConfiguration("control_start_delay")))
        return [
            TimerAction(
                period=control_delay,
                actions=[
                    GroupAction(
                        [
                            static_virtual_joint_tfs,
                            robot_state_publisher,
                            ros2_control_node,
                            controller_spawner,
                        ]
                    )
                ],
            )
        ]

    staged_control = OpaqueFunction(function=_staged_control_launch)

    # Initialize neck/camera pose after controllers have had time to start.
    neck_initialization = TimerAction(
        period=5.0,
        actions=[
            ExecuteProcess(
                cmd=[
                    "ros2",
                    "run",
                    "remote_operate_pkg",
                    "neck_control",
                    "--ros-args",
                    "-p",
                    "target_positions:=[0.0, -0.959931]",
                ],
                output="screen",
                name="neck_initialization",
            )
        ],
    )

    # Top Orbbec color camera.
    head_camera_launch = ExecuteProcess(
        cmd=[
            "bash",
            "-lc",
            "ros2 run orbbec_camera orbbec_camera_node --ros-args "
            "-r __node:=top "
            "-r __ns:=/top/top "
            "-p camera_name:=top "
            "-p depth_registration:=true "
            "-p device_num:=1 "
            "-p enable_point_cloud:=false "
            "-p enable_colored_point_cloud:=false "
            "-p color_width:=640 "
            "-p color_height:=400 "
            "-p color_fps:=30 "
            "-p color_format:=RGB8 "
            "-p enable_color:=true "
            "-p enable_color_auto_exposure:=false "
            "-p color_exposure:=8000 "
            "-p color_gain:=20 "
            "-p enable_color_auto_white_balance:=true "
            "-p depth_width:=640 "
            "-p depth_height:=400 "
            "-p depth_fps:=30 "
            "-p depth_format:=Y16 "
            "-p enable_depth:=false "
            "-p enable_ir:=false "
            "-p publish_tf:=true "
            "-p enable_frame_sync:=true "
            "-p use_hardware_time:=true "
            "-p enable_depth_scale:=true "
            "-p align_mode:=HW",
        ],
        output="log",
        name="head_camera_launch",
    )
    set_head_camera_params = ExecuteProcess(
        cmd=[
            "bash",
            "-c",
            "set -e; "
            'echo "[head_cam] waiting for /top/top/set_color_exposure ..."; '
            "until ros2 service type /top/top/set_color_exposure >/dev/null 2>&1; do sleep 0.2; done; "
            'ros2 service call /top/top/set_color_auto_exposure std_srvs/srv/SetBool "{data: false}"; '
            'ros2 service call /top/top/set_color_exposure orbbec_camera_msgs/srv/SetInt32 "{data: 5000}"; '
            'ros2 service call /top/top/set_color_gain orbbec_camera_msgs/srv/SetInt32 "{data: 1}"; '
            'ros2 service call /top/top/get_color_exposure orbbec_camera_msgs/srv/GetInt32 "{}"; '
            'ros2 service call /top/top/get_color_gain orbbec_camera_msgs/srv/GetInt32 "{}"; ',
        ],
        output="screen",
        name="set_head_camera_params",
    )
    head_cam_handler = RegisterEventHandler(
        OnProcessStart(
            target_action=head_camera_launch,
            on_start=[TimerAction(period=9.0, actions=[set_head_camera_params])],
        )
    )

    camera_extrinsic_resolver = Node(
        package="basic_control",
        executable="camera_extrinsic_resolver",
        name="camera_extrinsic_resolver",
        output="screen",
        parameters=[
            {
                "robot_base_frame": "Body_Link5",
                "camera_root_frame": "top_link",
                "camera_optical_frame": "top_color_optical_frame",
                "body_to_optical.x": 0.017001106478886134,
                "body_to_optical.y": -0.0010085308315865987,
                "body_to_optical.z": 0.32779437316292953,
                "body_to_optical.qx": -0.6290346561392619,
                "body_to_optical.qy": 0.6266029318530252,
                "body_to_optical.qz": -0.31472334246889455,
                "body_to_optical.qw": 0.33560897615254637,
            }
        ],
    )

    box_right_grasp_tf = Node(
        package="tf2_ros",
        executable="static_transform_publisher",
        name="box_right_grasp_tf",
        arguments=[
            "--x",
            "0.175",
            "--y",
            "0.00",
            "--z",
            "-0.15",
            "--qx",
            "0.0",
            "--qy",
            "0.0",
            "--qz",
            "0.707",
            "--qw",
            "0.707",
            "--frame-id",
            "tag_top_9",
            "--child-frame-id",
            "box_right_grasp",
        ],
    )
    box_left_grasp_tf = Node(
        package="tf2_ros",
        executable="static_transform_publisher",
        name="box_left_grasp_tf",
        arguments=[
            "--x",
            "-0.175",
            "--y",
            "0.00",
            "--z",
            "-0.15",
            "--qx",
            "0.0",
            "--qy",
            "0.0",
            "--qz",
            "0.707",
            "--qw",
            "0.707",
            "--frame-id",
            "tag_top_9",
            "--child-frame-id",
            "box_left_grasp",
        ],
    )
    stable_grasp_pose_publisher = Node(
        package="basic_control",
        executable="stable_grasp_pose_publisher",
        name="stable_grasp_pose_publisher",
        output="screen",
        parameters=[
            {
                "parent_frame": "Body_Link5",
                "left_frame": "box_left_grasp",
                "right_frame": "box_right_grasp",
                "sample_count": 10,
                "position_tolerance": 0.01,
                "orientation_tolerance_deg": 3.0,
                "timer_period": 0.05,
                "freeze_when_stable": True,
            }
        ],
    )

    top_rectify_node = Node(
        package="image_proc",
        executable="rectify_node",
        name="top_rectify_node",
        output="screen",
        remappings=[
            ("image", "/top/top/color/image_raw"),
            ("camera_info", "/top/top/color/camera_info"),
            ("image_rect", "/top/top/color/image_rect"),
        ],
    )
    apriltag_top_node = Node(
        package="apriltag_ros",
        executable="apriltag_node",
        name="apriltag_top",
        output="screen",
        parameters=[tag_config],
        remappings=[
            ("image_rect", "/top/top/color/image_rect"),
            ("camera_info", "/top/top/color/camera_info"),
            ("detections", "/apriltag/top/detections"),
        ],
    )
    top_nodes_handler = RegisterEventHandler(
        OnProcessStart(
            target_action=head_camera_launch,
            on_start=[TimerAction(period=10.0, actions=[top_rectify_node, apriltag_top_node])],
        )
    )

    return LaunchDescription(
        [
            real_robot_arg,
            control_start_delay_arg,
            driver_executable,
            staged_control,
            neck_initialization,
            head_camera_launch,
            head_cam_handler,
            camera_extrinsic_resolver,
            box_left_grasp_tf,
            box_right_grasp_tf,
            stable_grasp_pose_publisher,
            top_nodes_handler,
        ]
    )
