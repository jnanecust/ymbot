import sys
from pathlib import Path

from moveit_configs_utils import MoveItConfigsBuilder
from moveit_configs_utils.launches import generate_move_group_launch

_LAUNCH_DIR = Path(__file__).resolve().parent
if _LAUNCH_DIR.as_posix() not in sys.path:
    sys.path.insert(0, _LAUNCH_DIR.as_posix())
from ymbot_moveit_srdf import ymbot_srdf_path  # noqa: E402


def generate_launch_description():
    moveit_config = MoveItConfigsBuilder(
        "ymbot_d", package_name="ymbot_d_moveit_config"
    ).robot_description_semantic(ymbot_srdf_path()).to_moveit_configs()
    return generate_move_group_launch(moveit_config)
