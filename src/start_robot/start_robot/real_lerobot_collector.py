from pathlib import Path
import math
import shutil
import sys
from datetime import datetime

import numpy as np
import rclpy
from rclpy.node import Node
from rclpy.time import Time
from rclpy.qos import qos_profile_sensor_data
from sensor_msgs.msg import Image, JointState
from std_msgs.msg import Float32MultiArray, String
from PIL import Image as PILImage
from tf2_ros import Buffer, TransformListener, TransformException

from lerobot.common.datasets.lerobot_dataset import LeRobotDataset


DEFAULT_STATE_JOINTS = [
    "Left_Arm_Joint1",
    "Left_Arm_Joint2",
    "Left_Arm_Joint3",
    "Left_Arm_Joint4",
    "Left_Arm_Joint5",
    "Left_Arm_Joint6",
    "Left_Arm_Joint7",
    "Right_Arm_Joint1",
    "Right_Arm_Joint2",
    "Right_Arm_Joint3",
    "Right_Arm_Joint4",
    "Right_Arm_Joint5",
    "Right_Arm_Joint6",
    "Right_Arm_Joint7",
]

DEFAULT_ACTION_JOINTS = DEFAULT_STATE_JOINTS.copy()


class RealLeRobotCollector(Node):
    def __init__(self):
        super().__init__("real_lerobot_collector")

        self.declare_parameter("repo_id", "ymbot_real_vr")
        self.declare_parameter("root", "/home/ymzz/ymbot_lerobot_data")
        self.declare_parameter("task", "VR teleoperation")
        self.declare_parameter("fps", 10)
        self.declare_parameter("image_size", 256)
        self.declare_parameter("robot_type", "ymbot")
        self.declare_parameter("image_topic", "/top/top/color/image_raw")
        # self.declare_parameter("wrist_image_topic", "/left/left/color/image_rect_raw")
        self.declare_parameter("wrist_left_image_topic", "/left/left/color/image_rect_raw")
        self.declare_parameter("wrist_right_image_topic", "/right/right/color/image_rect_raw")
        self.declare_parameter("joint_state_topic", "/joint_states")
        self.declare_parameter("hand_grasp_topic", "/hand_grasp")
        self.declare_parameter("record_command_topic", "/record_command")
        self.declare_parameter("state_joint_names", DEFAULT_STATE_JOINTS)
        self.declare_parameter("action_joint_names", DEFAULT_ACTION_JOINTS)
        self.declare_parameter("left_hand_grasp_index", 0)
        self.declare_parameter("right_hand_grasp_index", 1)
        self.declare_parameter("obj_init_dim", 9)
        self.declare_parameter("base_frame", "base_link")
        self.declare_parameter("left_ee_frame", "Left_Arm_Link8")
        self.declare_parameter("right_ee_frame", "Right_Arm_Link8")
        # 数据集存在时的行为：默认加载已有数据集并继续追加 episode。
        # 只有在明确传参 overwrite_existing_dataset:=true 时，才会删除旧数据重新创建。
        self.declare_parameter("overwrite_existing_dataset", False)
        # stop 后是否要求人工确认保存。默认开启。
        # 如果节点在 ros2 launch 里运行且没有交互式 stdin，会自动改为等待 /record_command 的 save/discard。
        self.declare_parameter("ask_save_after_stop", True)
        self.declare_parameter("left_ee_pose_topic", "/arm_left/ee_status")
        self.declare_parameter("right_ee_pose_topic", "/arm_right/ee_status")

        self.repo_id = self.get_parameter("repo_id").value
        self.root = Path(self.get_parameter("root").value).expanduser()
        self.task = self.get_parameter("task").value
        self.fps = int(self.get_parameter("fps").value)
        self.image_size = int(self.get_parameter("image_size").value)
        self.robot_type = self.get_parameter("robot_type").value
        self.state_joint_names = list(self.get_parameter("state_joint_names").value)
        self.action_joint_names = list(self.get_parameter("action_joint_names").value)
        self.left_hand_grasp_index = int(self.get_parameter("left_hand_grasp_index").value)
        self.right_hand_grasp_index = int(self.get_parameter("right_hand_grasp_index").value)
        self.obj_init_dim = int(self.get_parameter("obj_init_dim").value)
        self.base_frame = self.get_parameter("base_frame").value
        self.left_ee_frame = self.get_parameter("left_ee_frame").value
        self.right_ee_frame = self.get_parameter("right_ee_frame").value
        self.overwrite_existing_dataset = bool(
            self.get_parameter("overwrite_existing_dataset").value
        )
        self.ask_save_after_stop = bool(self.get_parameter("ask_save_after_stop").value)

        self.latest_image = None
        self.latest_left_wrist_image = None
        self.latest_right_wrist_image = None
        self.latest_image_time = None
        self.latest_left_wrist_image_time = None
        self.latest_right_wrist_image_time = None
        self.latest_joint_positions = {}
        self.latest_grasp = []
        self.dataset = None
        self.recording = False
        self.frames_in_episode = 0
        self.saved_episodes = 0
        self.discarded_episodes = 0
        self.pending_episode_decision = False
        self.pending_episode_frames = 0
        self.missing_input_report_count = 0
        self.current_dataset_root = None

        self.latest_left_ee_state = None
        self.latest_right_ee_state = None

        self.create_subscription(
            Image,
            self.get_parameter("image_topic").value,
            self._image_cb,
            10,
        )
        # self.create_subscription(
        #     Image,
        #     self.get_parameter("wrist_image_topic").value,
        #     self._wrist_image_cb,
        #     10,
        # )
        self.create_subscription(
            Image,
            self.get_parameter("wrist_left_image_topic").value,
            self._left_wrist_image_cb,
            10,
        )

        self.create_subscription(
            Image,
            self.get_parameter("wrist_right_image_topic").value,
            self._right_wrist_image_cb,
            10,
        )
        self.create_subscription(
            JointState,
            self.get_parameter("joint_state_topic").value,
            self._joint_state_cb,
            10,
        )
        self.create_subscription(
            Float32MultiArray,
            self.get_parameter("hand_grasp_topic").value,
            self._hand_grasp_cb,
            10,
        )
        self.create_subscription(
            String,
            self.get_parameter("record_command_topic").value,
            self._record_command_cb,
            10,
        )

        self.tf_buffer = Buffer()
        self.tf_listener = TransformListener(self.tf_buffer, self)

        self.timer = self.create_timer(1.0 / float(self.fps), self._record_tick)
        self.get_logger().info(
            "LeRobot collector v5 ready. Publish 'start'/'stop' on "
            f"{self.get_parameter('record_command_topic').value}. "
            "After 'stop', save with terminal y/n when running interactively, "
            "or publish 'save'/'discard' to the record command topic when running under ros2 launch."
        )


    def _pose_msg_to_xyz_rpy(self, msg):
        p = msg.position
        q = msg.orientation

        x = float(p.x)
        y = float(p.y)
        z = float(p.z)

        qx = float(q.x)
        qy = float(q.y)
        qz = float(q.z)
        qw = float(q.w)

        sinr_cosp = 2.0 * (qw * qx + qy * qz)
        cosr_cosp = 1.0 - 2.0 * (qx * qx + qy * qy)
        roll = math.atan2(sinr_cosp, cosr_cosp)

        sinp = 2.0 * (qw * qy - qz * qx)
        if abs(sinp) >= 1.0:
            pitch = math.copysign(math.pi / 2.0, sinp)
        else:
            pitch = math.asin(sinp)

        siny_cosp = 2.0 * (qw * qz + qx * qy)
        cosy_cosp = 1.0 - 2.0 * (qy * qy + qz * qz)
        yaw = math.atan2(siny_cosp, cosy_cosp)
        return np.array([x, y, z, roll, pitch, yaw], dtype=np.float32)

    def _left_ee_pose_cb(self, msg):
        self.latest_left_ee_state = self._pose_msg_to_xyz_rpy(msg)

    def _right_ee_pose_cb(self, msg):
        self.latest_right_ee_state = self._pose_msg_to_xyz_rpy(msg)

    def _features(self):
        return {
            "observation.image": {
                "dtype": "image",
                "shape": (self.image_size, self.image_size, 3),
                "names": ["height", "width", "channels"],
            },
            "observation.left_wrist_image": {
                "dtype": "image",
                "shape": (self.image_size, self.image_size, 3),
                "names": ["height", "width", "channels"],
            },
            "observation.right_wrist_image": {
                "dtype": "image",
                "shape": (self.image_size, self.image_size, 3),
                "names": ["height", "width", "channels"],
            },
            "observation.state": {
                "dtype": "float32",
                "shape": (12,),
                "names": [
                    "left_x",
                    "left_y",
                    "left_z",
                    "left_roll",
                    "left_pitch",
                    "left_yaw",
                    "right_x",
                    "right_y",
                    "right_z",
                    "right_roll",
                    "right_pitch",
                    "right_yaw",
                ],
            },
            "action": {
                "dtype": "float32",
                "shape": (len(self.action_joint_names)+2,),
                "names": ["action"],
            },
            "obj_init": {
                "dtype": "float32",
                "shape": (self.obj_init_dim,),
                "names": ["obj_init"],
            },
        }

    def _missing_metadata_files(self, root: Path):
        """
        LeRobotDataset.create() 在没有成功 save_episode() 前，可能只写出一部分 meta。
        这种“半成品目录”不能直接 LeRobotDataset(..., root=...) 加载，
        否则会缺 tasks.jsonl / episodes.jsonl，并在离线模式下进一步触发 Hugging Face 查询。
        """
        required = [
            root / "meta" / "info.json",
            root / "meta" / "tasks.jsonl",
        ]
        return [path for path in required if not path.is_file()]

    def _backup_invalid_dataset_root(self, reason: str):
        """
        root 已经存在但不是可加载的 LeRobotDataset 根目录时，自动备份，
        避免 LeRobotDataset() 因 metadata 不完整而访问 Hugging Face 或直接崩溃。
        """
        timestamp = datetime.now().strftime("%Y%m%d_%H%M%S_%f")
        backup_root = self.root.with_name(f"{self.root.name}_invalid_backup_{timestamp}")
        suffix = 1
        while backup_root.exists():
            backup_root = self.root.with_name(
                f"{self.root.name}_invalid_backup_{timestamp}_{suffix}"
            )
            suffix += 1

        shutil.move(str(self.root), str(backup_root))
        self.get_logger().warn(
            f"Existing dataset directory is not loadable: {reason}. "
            f"Moved it to backup: {backup_root}"
        )

    def _ensure_dataset(self):
        """
        collect_data.py 风格：整个采集流程只对应一个 LeRobotDataset root。
        每次 save_episode() 会向同一个 root 追加一个 episode，
        不再为每组数据创建时间戳文件夹。
        """
        if self.dataset is not None:
            return

        if self.root.exists():
            self.get_logger().info(f"Dataset directory already exists: {self.root}")

            if self.overwrite_existing_dataset:
                self.get_logger().warn(
                    f"overwrite_existing_dataset=true, deleting old dataset: {self.root}"
                )
                shutil.rmtree(self.root)
                self.dataset = self._create_dataset()
                self.get_logger().info(f"Created new LeRobot dataset: {self.root}")
                return

            missing_meta = self._missing_metadata_files(self.root)
            if missing_meta:
                reason = "missing metadata files: " + ", ".join(str(p) for p in missing_meta)
                self._backup_invalid_dataset_root(reason)
                self.dataset = self._create_dataset()
                self.get_logger().info(f"Created new LeRobot dataset: {self.root}")
                return

            # 这里不要 input()。ros2 launch 中 input() 很容易阻塞整个节点。
            # 即使 meta 文件看起来存在，也用 try/except 防止损坏/半写入目录让节点崩溃。
            try:
                self.dataset = LeRobotDataset(self.repo_id, root=str(self.root))
                self.get_logger().info(
                    f"Loaded existing LeRobot dataset and will append episodes: {self.root}"
                )
                return
            except Exception as exc:
                self.get_logger().warn(
                    f"Failed to load existing LeRobot dataset from {self.root}: {exc}"
                )
                self._backup_invalid_dataset_root(f"LeRobotDataset load failed: {exc}")
                self.dataset = self._create_dataset()
                self.get_logger().info(f"Created new LeRobot dataset: {self.root}")
                return

        self.dataset = self._create_dataset()
        self.get_logger().info(f"Created new LeRobot dataset: {self.root}")

    def _create_dataset(self):
        self.root.parent.mkdir(parents=True, exist_ok=True)
        return LeRobotDataset.create(
            repo_id=self.repo_id,
            root=str(self.root),
            robot_type=self.robot_type,
            fps=self.fps,
            features=self._features(),
            image_writer_threads=10,
            image_writer_processes=5,
        )


    def _record_command_cb(self, msg):
        command = msg.data.strip().lower()
        print(f"command: {command}", flush=True)

        if command == "start":
            self._start_recording()
        elif command == "stop":
            self._stop_recording(ask_user=self.ask_save_after_stop)
        elif command in ("save", "y", "yes"):
            self._finalize_pending_episode(save=True)
        elif command in ("discard", "clear", "reset", "n", "no"):
            if self.pending_episode_decision:
                self._finalize_pending_episode(save=False)
            else:
                self._stop_recording(save=False, ask_user=False)
        else:
            self.get_logger().warn(f"Unknown record command: {msg.data}")

    def _start_recording(self):
        if self.pending_episode_decision:
            self.get_logger().warn(
                "There is a stopped episode waiting for save/discard. "
                "Publish 'save' or 'discard' first; new recording is ignored."
            )
            return

        if self.recording:
            self.get_logger().warn("Already recording.")
            return
        self._ensure_dataset()
        if not self._has_required_inputs():
            self.get_logger().warn("Start requested, but image/joint inputs are not ready yet.")
        self.frames_in_episode = 0
        self.recording = True
        self.get_logger().info("Recording START")

    def _ask_save_episode_interactive(self):
        while True:
            try:
                ans = input(
                    f"Episode finished with {self.frames_in_episode} frames. "
                    "Save this episode? (y/n) "
                ).strip().lower()
            except EOFError:
                return None

            if ans in ("y", "yes"):
                return True
            if ans in ("n", "no"):
                return False
            print("Please input y or n.", flush=True)

    def _stop_recording(self, save=None, ask_user=False):
        if not self.recording:
            self.get_logger().warn("Stop requested, but collector is not recording.")
            return
        self.recording = False
        if self.dataset is None:
            return

        if self.frames_in_episode <= 0:
            self.dataset.clear_episode_buffer()
            self.get_logger().warn("Recording STOP, but no frames were collected. Episode discarded.")
            self.frames_in_episode = 0
            return

        if ask_user:
            if sys.stdin is not None and sys.stdin.isatty():
                decision = self._ask_save_episode_interactive()
                if decision is not None:
                    self._finalize_current_episode(save=decision)
                    return

            # ros2 launch 下通常没有可交互 stdin。不要阻塞节点，保留 episode buffer，
            # 等待下一条 /record_command: save 或 discard。
            self.pending_episode_decision = True
            self.pending_episode_frames = self.frames_in_episode
            self.get_logger().warn(
                f"Recording STOP with {self.frames_in_episode} frames. "
                "stdin is not interactive, so episode is pending. "
                "Publish String data='save' or data='discard' on the record_command topic."
            )
            return

        if save is None:
            save = True
        self._finalize_current_episode(save=save)

    def _finalize_pending_episode(self, save):
        if not self.pending_episode_decision:
            self.get_logger().warn("No pending episode to save/discard.")
            return
        self._finalize_current_episode(save=save)

    def _finalize_current_episode(self, save):
        if self.dataset is None:
            self.get_logger().warn("No dataset is available for saving/discarding.")
            self.pending_episode_decision = False
            self.pending_episode_frames = 0
            self.frames_in_episode = 0
            return

        frames = self.frames_in_episode or self.pending_episode_frames
        if save:
            self.dataset.save_episode()
            self.saved_episodes += 1
            self.get_logger().info(
                f"Episode saved. saved_episodes={self.saved_episodes}, frames={frames}."
            )
        else:
            self.dataset.clear_episode_buffer()
            self.discarded_episodes += 1
            self.get_logger().info(
                f"Episode discarded. discarded_episodes={self.discarded_episodes}, frames={frames}."
            )

        self.frames_in_episode = 0
        self.pending_episode_frames = 0
        self.pending_episode_decision = False
        # 不要把 self.dataset 置 None；后续 episode 继续写入同一个 ROOT。

    def _record_tick(self):
        if not self.recording:
            return

        if not self._has_required_inputs():
            return

        self.latest_left_ee_state = self._lookup_ee_state(self.left_ee_frame)
        self.latest_right_ee_state = self._lookup_ee_state(self.right_ee_frame)
        left_ee_state = self.latest_left_ee_state
        right_ee_state = self.latest_right_ee_state

        if left_ee_state is None or right_ee_state is None:
            return

        state = np.concatenate((left_ee_state, right_ee_state), axis=0).astype(np.float32)

        action_joints = self._joint_vector(self.action_joint_names)

        left_action_joints = action_joints[:7]
        right_action_joints = action_joints[7:]

        left_grasp = np.array(
            [self._grasp_value(self.left_hand_grasp_index)],
            dtype=np.float32,
        )

        right_grasp = np.array(
            [self._grasp_value(self.right_hand_grasp_index)],
            dtype=np.float32,
        )

        action = np.concatenate(
            [
                left_action_joints,
                left_grasp,
                right_action_joints,
                right_grasp,
            ]
        ).astype(np.float32)

        self.dataset.add_frame(
            {
                "observation.image": self.latest_image,
                "observation.left_wrist_image": self.latest_left_wrist_image,
                "observation.right_wrist_image": self.latest_right_wrist_image,
                "observation.state": state,
                "action": action,
                "obj_init": np.zeros(self.obj_init_dim, dtype=np.float32),
            },
            task=self.task,
        )

        self.frames_in_episode += 1

    def _has_required_inputs(self):
        if (self.latest_image is None or
            self.latest_left_wrist_image is None or
            self.latest_right_wrist_image is None):
            return False
        needed = set(self.state_joint_names) | set(self.action_joint_names)
        return all(name in self.latest_joint_positions for name in needed)

    def _joint_vector(self, names):
        return np.array([self.latest_joint_positions[name] for name in names], dtype=np.float32)

    def _grasp_value(self, index):
        if 0 <= index < len(self.latest_grasp):
            return float(self.latest_grasp[index])
        return 0.0

    def _quat_to_rpy(self, qx, qy, qz, qw):
        sinr_cosp = 2.0 * (qw * qx + qy * qz)
        cosr_cosp = 1.0 - 2.0 * (qx * qx + qy * qy)
        roll = math.atan2(sinr_cosp, cosr_cosp)

        sinp = 2.0 * (qw * qy - qz * qx)
        if abs(sinp) >= 1.0:
            pitch = math.copysign(math.pi / 2.0, sinp)
        else:
            pitch = math.asin(sinp)

        siny_cosp = 2.0 * (qw * qz + qx * qy)
        cosy_cosp = 1.0 - 2.0 * (qy * qy + qz * qz)
        yaw = math.atan2(siny_cosp, cosy_cosp)

        return roll, pitch, yaw
    def _lookup_ee_state(self, ee_frame):
        """
        返回机械臂真实末端在 base_frame 下的位姿：
        [x, y, z, roll, pitch, yaw]
        """
        try:
            trans = self.tf_buffer.lookup_transform(self.base_frame, ee_frame, Time())
            t = trans.transform.translation
            q = trans.transform.rotation
            roll, pitch, yaw = self._quat_to_rpy(
                float(q.x),
                float(q.y),
                float(q.z),
                float(q.w),
            )
            return np.array(
                [
                    float(t.x),
                    float(t.y),
                    float(t.z),
                    roll,
                    pitch,
                    yaw,
                ],
                dtype=np.float32,
            )
        except TransformException as e:
            self.get_logger().warn(f"Failed to lookup TF {self.base_frame} -> {ee_frame}: {e}")
            return None
    def _image_cb(self, msg):
        self.latest_image = self._ros_image_to_rgb(msg)

    def _left_wrist_image_cb(self, msg):
        self.latest_left_wrist_image = self._ros_image_to_rgb(msg)

    def _right_wrist_image_cb(self, msg):
        self.latest_right_wrist_image = self._ros_image_to_rgb(msg)

    def _joint_state_cb(self, msg):
        for name, position in zip(msg.name, msg.position):
            self.latest_joint_positions[name] = float(position)

    def _hand_grasp_cb(self, msg):
        self.latest_grasp = list(msg.data)

    def _ros_image_to_rgb(self, msg):
        channels = 1
        if msg.encoding in ("rgb8", "bgr8"):
            channels = 3
        elif msg.encoding in ("rgba8", "bgra8"):
            channels = 4

        image = np.frombuffer(msg.data, dtype=np.uint8).reshape(msg.height, msg.width, channels)
        if msg.encoding == "bgr8":
            image = image[:, :, ::-1]
        elif msg.encoding == "rgba8":
            image = image[:, :, :3]
        elif msg.encoding == "bgra8":
            image = image[:, :, [2, 1, 0]]
        elif msg.encoding in ("mono8", "8UC1"):
            image = np.repeat(image, 3, axis=2)
        elif msg.encoding != "rgb8":
            self.get_logger().warn(f"Unsupported image encoding '{msg.encoding}', trying raw RGB.")
            image = image[:, :, :3]

        resized = PILImage.fromarray(image).resize((self.image_size, self.image_size))
        resized = np.asarray(resized)
        return np.ascontiguousarray(resized)


def main():
    rclpy.init()
    node = RealLeRobotCollector()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        if node.recording:
            node._stop_recording(save=True)
        node.destroy_node()
        if rclpy.ok():
            rclpy.shutdown()


if __name__ == "__main__":
    main()
