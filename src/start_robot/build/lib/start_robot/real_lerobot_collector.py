from pathlib import Path

import numpy as np
import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image, JointState
from std_msgs.msg import Float32MultiArray, String
from PIL import Image as PILImage

from lerobot.common.datasets.lerobot_dataset import LeRobotDataset


DEFAULT_STATE_JOINTS = [
    "Left_Arm_Joint1",
    "Left_Arm_Joint2",
    "Left_Arm_Joint3",
    "Left_Arm_Joint4",
    "Left_Arm_Joint5",
    "Left_Arm_Joint6",
]

DEFAULT_ACTION_JOINTS = DEFAULT_STATE_JOINTS.copy()


class RealLeRobotCollector(Node):
    def __init__(self):
        super().__init__("real_lerobot_collector")

        self.declare_parameter("repo_id", "ymbot_real_vr")
        self.declare_parameter("root", "/home/zhou/vla/lerobot-mujoco-tutorial/real_vr_data")
        self.declare_parameter("task", "VR teleoperation")
        self.declare_parameter("fps", 20)
        self.declare_parameter("image_size", 256)
        self.declare_parameter("robot_type", "ymbot")
        self.declare_parameter("image_topic", "/top/top/color/image_raw")
        self.declare_parameter("wrist_image_topic", "/left/left/color/image_raw")
        self.declare_parameter("joint_state_topic", "/joint_states")
        self.declare_parameter("hand_grasp_topic", "/hand_grasp")
        self.declare_parameter("record_command_topic", "/record_command")
        self.declare_parameter("state_joint_names", DEFAULT_STATE_JOINTS)
        self.declare_parameter("action_joint_names", DEFAULT_ACTION_JOINTS)
        self.declare_parameter("action_grasp_index", 0)
        self.declare_parameter("obj_init_dim", 9)

        self.repo_id = self.get_parameter("repo_id").value
        self.root = Path(self.get_parameter("root").value).expanduser()
        self.task = self.get_parameter("task").value
        self.fps = int(self.get_parameter("fps").value)
        self.image_size = int(self.get_parameter("image_size").value)
        self.robot_type = self.get_parameter("robot_type").value
        self.state_joint_names = list(self.get_parameter("state_joint_names").value)
        self.action_joint_names = list(self.get_parameter("action_joint_names").value)
        self.action_grasp_index = int(self.get_parameter("action_grasp_index").value)
        self.obj_init_dim = int(self.get_parameter("obj_init_dim").value)

        self.latest_image = None
        self.latest_wrist_image = None
        self.latest_joint_positions = {}
        self.latest_grasp = []
        self.dataset = None
        self.recording = False
        self.frames_in_episode = 0

        self.create_subscription(
            Image,
            self.get_parameter("image_topic").value,
            self._image_cb,
            10,
        )
        self.create_subscription(
            Image,
            self.get_parameter("wrist_image_topic").value,
            self._wrist_image_cb,
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

        self.timer = self.create_timer(1.0 / float(self.fps), self._record_tick)
        self.get_logger().info(
            "LeRobot collector ready. Publish 'start'/'stop' on "
            f"{self.get_parameter('record_command_topic').value}."
        )

    def _ensure_dataset(self):
        if self.dataset is not None:
            return

        features = {
            "observation.image": {
                "dtype": "image",
                "shape": (self.image_size, self.image_size, 3),
                "names": ["height", "width", "channels"],
            },
            "observation.wrist_image": {
                "dtype": "image",
                "shape": (self.image_size, self.image_size, 3),
                "names": ["height", "width", "channels"],
            },
            "observation.state": {
                "dtype": "float32",
                "shape": (len(self.state_joint_names),),
                "names": ["state"],
            },
            "action": {
                "dtype": "float32",
                "shape": (len(self.action_joint_names) + 1,),
                "names": ["action"],
            },
            "obj_init": {
                "dtype": "float32",
                "shape": (self.obj_init_dim,),
                "names": ["obj_init"],
            },
        }

        if self.root.exists():
            self.get_logger().info(f"Loading existing LeRobot dataset: {self.root}")
            self.dataset = LeRobotDataset(self.repo_id, root=str(self.root))
            return

        self.get_logger().info(f"Creating LeRobot dataset: {self.root}")
        self.dataset = LeRobotDataset.create(
            repo_id=self.repo_id,
            root=str(self.root),
            robot_type=self.robot_type,
            fps=self.fps,
            features=features,
            image_writer_threads=10,
            image_writer_processes=5,
        )

    def _record_command_cb(self, msg):
        command = msg.data.strip().lower()
        if command == "start":
            self._start_recording()
        elif command == "stop":
            self._stop_recording(save=True)
        elif command in ("clear", "discard", "reset"):
            self._stop_recording(save=False)
        else:
            self.get_logger().warn(f"Unknown record command: {msg.data}")

    def _start_recording(self):
        if self.recording:
            self.get_logger().warn("Already recording.")
            return
        self._ensure_dataset()
        if not self._has_required_inputs():
            self.get_logger().warn("Start requested, but image/joint inputs are not ready yet.")
        self.frames_in_episode = 0
        self.recording = True
        self.get_logger().info("Recording START")

    def _stop_recording(self, save):
        if not self.recording:
            self.get_logger().warn("Stop requested, but collector is not recording.")
            return
        self.recording = False
        if self.dataset is None:
            return
        if save and self.frames_in_episode > 0:
            self.dataset.save_episode()
            self.get_logger().info(f"Recording STOP, saved {self.frames_in_episode} frames.")
        else:
            self.dataset.clear_episode_buffer()
            self.get_logger().info("Recording discarded.")
        self.frames_in_episode = 0

    def _record_tick(self):
        if not self.recording:
            return
        if not self._has_required_inputs():
            return

        state = self._joint_vector(self.state_joint_names)
        action = self._joint_vector(self.action_joint_names)
        action = np.concatenate([action, np.array([self._grasp_value()], dtype=np.float32)])

        self.dataset.add_frame(
            {
                "observation.image": self.latest_image,
                "observation.wrist_image": self.latest_wrist_image,
                "observation.state": state,
                "action": action,
                "obj_init": np.zeros(self.obj_init_dim, dtype=np.float32),
            },
            task=self.task,
        )
        self.frames_in_episode += 1

    def _has_required_inputs(self):
        if self.latest_image is None or self.latest_wrist_image is None:
            return False
        needed = set(self.state_joint_names) | set(self.action_joint_names)
        return all(name in self.latest_joint_positions for name in needed)

    def _joint_vector(self, names):
        return np.array([self.latest_joint_positions[name] for name in names], dtype=np.float32)

    def _grasp_value(self):
        if 0 <= self.action_grasp_index < len(self.latest_grasp):
            return float(self.latest_grasp[self.action_grasp_index])
        return 0.0

    def _image_cb(self, msg):
        self.latest_image = self._ros_image_to_rgb(msg)

    def _wrist_image_cb(self, msg):
        self.latest_wrist_image = self._ros_image_to_rgb(msg)

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
        rclpy.shutdown()


if __name__ == "__main__":
    main()
