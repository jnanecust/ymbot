from launch import LaunchDescription
from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory
import os


def generate_launch_description():

    config = os.path.join(
        get_package_share_directory('relay_ctrl_node'),
        'config',
        'relay_ctrl.yaml'
    )

    return LaunchDescription([
        Node(
            package='relay_ctrl_node',
            executable='relay_ctrl_node',   # 这里改
            name='relay_ctrl_node',
            parameters=[config],
            output='screen'
        )
    ])