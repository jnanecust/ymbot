"""SRDF 与 ymbot_d_description 包内 srdf/ymbot_d.srdf 保持一致（唯一真源）。"""
from pathlib import Path

from ament_index_python.packages import get_package_share_directory


def ymbot_srdf_path() -> str:
    return str(
        Path(get_package_share_directory("ymbot_d_description")) / "srdf" / "ymbot_d.srdf"
    )
