#!/usr/bin/env python
"""Merge timestamped single-episode LeRobot datasets into one pi0-ready dataset."""

from __future__ import annotations

import argparse
import gc
import os
import shutil
from pathlib import Path

import numpy as np
import torch
from lerobot.common.datasets.lerobot_dataset import LeRobotDataset


DEFAULT_SRC = Path("/media/ymzz/Elements SE/ymbot_lerobot_data/")
DEFAULT_DST = Path("/home/ymzz/ymbot_pi0_dataset")
DEFAULT_REPO_ID = "ymbot_pi0"


def set_local_hf_cache(project_root: Path) -> None:
    cache_root = project_root / ".cache" / "huggingface"
    os.environ.setdefault("HF_HOME", str(cache_root))
    os.environ.setdefault("HF_DATASETS_CACHE", str(cache_root / "datasets"))


def is_lerobot_dataset(path: Path) -> bool:
    return (
        path.is_dir()
        and (path / "meta" / "info.json").exists()
        and (path / "meta" / "episodes.jsonl").exists()
    )


def tensor_or_array_to_numpy(value):
    if isinstance(value, torch.Tensor):
        return value.detach().cpu().numpy()
    return value


def image_to_hwc_uint_or_float(value):
    value = tensor_or_array_to_numpy(value)
    if isinstance(value, np.ndarray) and value.ndim == 3 and value.shape[0] in (1, 3, 4):
        value = np.moveaxis(value, 0, -1)
    return value


def frame_for_add_frame(item: dict, features: dict) -> dict:
    frame = {}
    for key, feature in features.items():
        if key in {"timestamp", "frame_index", "episode_index", "index", "task_index"}:
            continue
        if key not in item:
            continue

        if feature["dtype"] in {"image", "video"}:
            frame[key] = image_to_hwc_uint_or_float(item[key])
        else:
            frame[key] = tensor_or_array_to_numpy(item[key])

    return frame


def assert_compatible(reference: LeRobotDataset, candidate: LeRobotDataset, root: Path) -> None:
    if candidate.fps != reference.fps:
        raise ValueError(f"{root} fps={candidate.fps}, expected {reference.fps}")

    ref_features = reference.features
    cand_features = candidate.features
    if set(cand_features) != set(ref_features):
        raise ValueError(f"{root} feature keys differ from the first dataset")

    for key in ref_features:
        if cand_features[key] != ref_features[key]:
            raise ValueError(f"{root} feature {key!r} differs from the first dataset")


def parse_args() -> argparse.Namespace:
    parser = argparse.ArgumentParser()
    parser.add_argument("--src", type=Path, default=DEFAULT_SRC, help="Directory containing timestamped datasets.")
    parser.add_argument("--dst", type=Path, default=DEFAULT_DST, help="Output merged LeRobot dataset root.")
    parser.add_argument("--repo-id", default=DEFAULT_REPO_ID, help="Local LeRobot repo_id written into metadata.")
    parser.add_argument("--overwrite", action="store_true", help="Delete --dst first if it already exists.")
    parser.add_argument("--image-writer-processes", type=int, default=0)
    parser.add_argument("--image-writer-threads", type=int, default=4)
    parser.add_argument(
        "--keep-hf-dataset-in-memory",
        action="store_true",
        help="Keep the growing merged HF dataset in RAM. Faster, but can OOM on large image datasets.",
    )
    return parser.parse_args()


def main() -> None:
    project_root = Path(__file__).resolve().parent
    set_local_hf_cache(project_root)

    args = parse_args()
    src_parent = args.src.resolve()
    dst_root = args.dst.resolve()

    src_roots = sorted(path for path in src_parent.iterdir() if is_lerobot_dataset(path))
    if not src_roots:
        raise RuntimeError(f"No LeRobot datasets found under {src_parent}")

    if dst_root.exists():
        if not args.overwrite:
            raise RuntimeError(f"{dst_root} already exists. Re-run with --overwrite to replace it.")
        shutil.rmtree(dst_root)

    first = LeRobotDataset(args.repo_id, root=src_roots[0])
    robot_type = first.meta.info.get("robot_type", "ymbot")

    print(f"Found {len(src_roots)} source datasets under {src_parent}")
    print(f"Creating merged dataset at {dst_root}")
    print(f"repo_id={args.repo_id}, robot_type={robot_type}, fps={first.fps}")

    merged = LeRobotDataset.create(
        repo_id=args.repo_id,
        root=dst_root,
        robot_type=robot_type,
        fps=first.fps,
        features=first.features,
        use_videos=False,
        image_writer_processes=args.image_writer_processes,
        image_writer_threads=args.image_writer_threads,
    )

    total_frames = 0
    total_episodes = 0

    for src_root in src_roots:
        src_ds = LeRobotDataset(args.repo_id, root=src_root)
        assert_compatible(first, src_ds, src_root)

        print(f"\n[{total_episodes + 1}] {src_root.name}: {src_ds.num_episodes} episode(s), {src_ds.num_frames} frame(s)")
        for ep_idx in range(src_ds.num_episodes):
            from_idx = int(src_ds.episode_data_index["from"][ep_idx])
            to_idx = int(src_ds.episode_data_index["to"][ep_idx])
            task = src_ds[from_idx].get("task", "put mug cup on the plate")

            for frame_idx in range(from_idx, to_idx):
                item = src_ds[frame_idx]
                merged.add_frame(frame_for_add_frame(item, src_ds.features), task=task)

            merged.save_episode()
            if not args.keep_hf_dataset_in_memory:
                merged.hf_dataset = merged.create_hf_dataset()
                gc.collect()

            total_episodes += 1
            total_frames += to_idx - from_idx
            print(f"  saved merged episode {total_episodes:06d}, frames={to_idx - from_idx}")

        del src_ds
        gc.collect()

    print("\nDone")
    print(f"merged_root={dst_root}")
    print(f"total_episodes={total_episodes}")
    print(f"total_frames={total_frames}")


if __name__ == "__main__":
    main()
