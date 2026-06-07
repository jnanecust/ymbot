import sys
from pathlib import Path

from launch import LaunchDescription
from launch_ros.actions import Node
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.actions import IncludeLaunchDescription
from moveit_configs_utils import MoveItConfigsBuilder

_LAUNCH_DIR = Path(__file__).resolve().parent
if _LAUNCH_DIR.as_posix() not in sys.path:
    sys.path.insert(0, _LAUNCH_DIR.as_posix())
from ymbot_moveit_srdf import ymbot_srdf_path  # noqa: E402


def generate_launch_description():
    moveit_config = (
        MoveItConfigsBuilder("ymbot_d", package_name="ymbot_d_moveit_config")
        .robot_description_semantic(ymbot_srdf_path())
        .to_moveit_configs()
    )
    launch_package_path = moveit_config.package_path

    ld = LaunchDescription()

    # Run Rviz and load the default config to see the state of the move_group node
    ld.add_action(
        IncludeLaunchDescription(
            PythonLaunchDescriptionSource(
                str(Path(launch_package_path) / "launch/moveit_rviz.launch.py")
            )
        )
    )

    return ld




