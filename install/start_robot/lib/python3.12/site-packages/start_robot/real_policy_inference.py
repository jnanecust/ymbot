from pathlib import Path

import numpy as np
import rclpy
import torch
import math
from geometry_msgs.msg import Pose
from PIL import Image as PILImage
from rclpy.duration import Duration
from rclpy.node import Node
from sensor_msgs.msg import Image, JointState
from std_msgs.msg import Float32MultiArray, String
from trajectory_msgs.msg import JointTrajectory, JointTrajectoryPoint

from lerobot.common.datasets.lerobot_dataset import LeRobotDatasetMetadata
from lerobot.common.datasets.utils import dataset_to_policy_features
from lerobot.configs.types import FeatureType


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
DEFAULT_LEFT_ARM_JOINTS = [f"Left_Arm_Joint{i}" for i in range(1, 8)]
DEFAULT_RIGHT_ARM_JOINTS = [f"Right_Arm_Joint{i}" for i in range(1, 8)]


class RealPolicyInference(Node):
    def __init__(self):
        super().__init__("real_policy_inference")

        self.declare_parameter("tutorial_dir", "/home/zhou/vla/lerobot-mujoco-tutorial")
        self.declare_parameter("policy_type", "smolvla")
        self.declare_parameter("dataset_repo_id", "omy_pnp_language")
        self.declare_parameter("dataset_root", "bc_data_4")
        self.declare_parameter("policy_path", "ckpt/smolvla_omy/checkpoints/last/pretrained_model")
        self.declare_parameter("task", "Put mug cup on the plate")
        self.declare_parameter("device", "cuda")
        self.declare_parameter("fps", 20)
        self.declare_parameter("image_size", 256)
        self.declare_parameter("chunk_size", 5)
        self.declare_parameter("n_action_steps", 5)
        self.declare_parameter("num_steps", 50)
        self.declare_parameter("image_topic", "/top/top/color/image_raw")
        self.declare_parameter("wrist_image_topic", "")
        self.declare_parameter("wrist_left_image_topic", "/left/left/color/image_rect_raw")
        self.declare_parameter("wrist_right_image_topic", "/right/right/color/image_rect_raw")
        self.declare_parameter("joint_state_topic", "/joint_states")
        self.declare_parameter("left_ee_pose_topic", "/arm_left/ee_status")
        self.declare_parameter("right_ee_pose_topic", "/arm_right/ee_status")
        self.declare_parameter("command_topic", "/policy_command")
        self.declare_parameter("left_arm_command_topic", "/left_arm_controller/joint_trajectory")
        self.declare_parameter("right_arm_command_topic", "/right_arm_controller/joint_trajectory")
        self.declare_parameter("hand_grasp_topic", "/hand_grasp")
        self.declare_parameter("state_joint_names", DEFAULT_STATE_JOINTS)
        self.declare_parameter("action_joint_names", DEFAULT_ACTION_JOINTS)
        self.declare_parameter("left_arm_joint_names", DEFAULT_LEFT_ARM_JOINTS)
        self.declare_parameter("right_arm_joint_names", DEFAULT_RIGHT_ARM_JOINTS)
        self.declare_parameter("trajectory_dt", 0.12)
        self.declare_parameter("left_grasp_action_index", 7)
        self.declare_parameter("right_grasp_action_index", 15)

        self.tutorial_dir = Path(self.get_parameter("tutorial_dir").value).expanduser()
        self.policy_type = self.get_parameter("policy_type").value.lower().strip()
        self.dataset_repo_id = self.get_parameter("dataset_repo_id").value
        self.dataset_root = self._resolve_path(self.get_parameter("dataset_root").value)
        self.policy_path = self._resolve_path(self.get_parameter("policy_path").value)
        self.task = self.get_parameter("task").value
        self.device = self.get_parameter("device").value
        self.fps = int(self.get_parameter("fps").value)
        self.image_size = int(self.get_parameter("image_size").value)
        self.chunk_size = int(self.get_parameter("chunk_size").value)
        self.n_action_steps = int(self.get_parameter("n_action_steps").value)
        self.num_steps = int(self.get_parameter("num_steps").value)
        self.state_joint_names = list(self.get_parameter("state_joint_names").value)
        self.action_joint_names = list(self.get_parameter("action_joint_names").value)
        self.left_arm_joint_names = list(self.get_parameter("left_arm_joint_names").value)
        self.right_arm_joint_names = list(self.get_parameter("right_arm_joint_names").value)
        self.trajectory_dt = float(self.get_parameter("trajectory_dt").value)
        self.left_grasp_action_index = int(self.get_parameter("left_grasp_action_index").value)
        self.right_grasp_action_index = int(self.get_parameter("right_grasp_action_index").value)

        self.latest_image = None
        self.latest_wrist_image = None
        self.latest_left_wrist_image = None
        self.latest_right_wrist_image = None
        self.latest_joint_positions = {}
        self.latest_left_ee_state = None
        self.latest_right_ee_state = None
        self.policy = None
        self.policy_feature_keys = set()
        self.running = False
        self.step = 0

        self.left_arm_pub = self.create_publisher(
            JointTrajectory,
            self.get_parameter("left_arm_command_topic").value,
            10,
        )
        self.right_arm_pub = self.create_publisher(
            JointTrajectory,
            self.get_parameter("right_arm_command_topic").value,
            10,
        )
        self.hand_grasp_pub = self.create_publisher(
            Float32MultiArray,
            self.get_parameter("hand_grasp_topic").value,
            10,
        )

        self.create_subscription(Image, self.get_parameter("image_topic").value, self._image_cb, 10)
        wrist_image_topic = self.get_parameter("wrist_image_topic").value
        if wrist_image_topic:
            self.create_subscription(Image, wrist_image_topic, self._wrist_image_cb, 10)
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
        self.create_subscription(JointState, self.get_parameter("joint_state_topic").value, self._joint_state_cb, 10)
        self.create_subscription(Pose, self.get_parameter("left_ee_pose_topic").value, self._left_ee_pose_cb, 10)
        self.create_subscription(Pose, self.get_parameter("right_ee_pose_topic").value, self._right_ee_pose_cb, 10)
        self.create_subscription(String, self.get_parameter("command_topic").value, self._command_cb, 10)

        self.timer = self.create_timer(1.0 / float(self.fps), self._inference_tick)
        self.get_logger().info(
            f"Policy inference ready. type={self.policy_type}, command_topic={self.get_parameter('command_topic').value}"
        )

    def _resolve_path(self, value):
        path = Path(value).expanduser()
        if path.is_absolute():
            return path
        return self.tutorial_dir / path

    def _load_policy(self):
        if self.policy is not None:
            return

        self.get_logger().info(f"Loading dataset metadata: {self.dataset_root}")
        metadata = LeRobotDatasetMetadata(self.dataset_repo_id, root=str(self.dataset_root))
        self.metadata_features = metadata.features
        features = dataset_to_policy_features(metadata.features)
        self.policy_feature_keys = set(features.keys())
        output_features = {key: ft for key, ft in features.items() if ft.type is FeatureType.ACTION}
        input_features = {key: ft for key, ft in features.items() if key not in output_features}

        self.get_logger().info(f"Loading policy checkpoint: {self.policy_path}")
        if self.policy_type == "smolvla":
            from lerobot.common.policies.smolvla.configuration_smolvla import SmolVLAConfig
            from lerobot.common.policies.smolvla.modeling_smolvla import SmolVLAPolicy

            cfg = SmolVLAConfig(
                input_features=input_features,
                output_features=output_features,
                chunk_size=self.chunk_size,
                n_action_steps=self.n_action_steps,
                num_steps=self.num_steps,
            )
            self.policy = SmolVLAPolicy.from_pretrained(
                str(self.policy_path),
                config=cfg,
                dataset_stats=metadata.stats,
            )
        elif self.policy_type == "act":
            from lerobot.common.policies.act.configuration_act import ACTConfig
            from lerobot.common.policies.act.modeling_act import ACTPolicy

            input_features.pop("observation.wrist_image", None)
            cfg = ACTConfig(
                input_features=input_features,
                output_features=output_features,
                chunk_size=self.chunk_size,
                n_action_steps=1,
                temporal_ensemble_coeff=0.9,
            )
            self.policy = ACTPolicy.from_pretrained(
                str(self.policy_path),
                config=cfg,
                dataset_stats=metadata.stats,
            )
        else:
            raise RuntimeError("policy_type must be 'smolvla' or 'act'")

        self.policy.to(self.device)
        self.policy.eval()
        self.policy.reset()
        self.get_logger().info("Policy loaded.")

    def _command_cb(self, msg):
        command = msg.data.strip().lower()
        if command == "start":
            self._start_policy()
        elif command in ("stop", "reset", "clear", "discard"):
            self._stop_policy()

    def _start_policy(self):
        if self.running:
            self.get_logger().warn("Policy inference is already running.")
            return
        self._load_policy()
        if not self._has_required_inputs():
            self.get_logger().warn("Start requested, but image/joint inputs are not ready yet.")
        self.step = 0
        self.running = True
        self.policy.reset()
        self.get_logger().info("Policy inference START")

    def _stop_policy(self):
        if not self.running:
            return
        self.running = False
        if self.policy is not None:
            self.policy.reset()
        self.get_logger().info("Policy inference STOP")

    def _inference_tick(self):
        if not self.running or self.policy is None:
            return
        if not self._has_required_inputs():
            return

        data = self._build_policy_input()

        with torch.no_grad():
            action = self.policy.select_action(data)
        action = action[0].detach().cpu().numpy().astype(np.float32)
        self._publish_action(action)
        self.step += 1

    def _has_required_inputs(self):
        if self.latest_image is None:
            return False
        if self._uses_feature("observation.wrist_image") and self.latest_wrist_image is None:
            return False
        if self._uses_feature("observation.left_wrist_image") and self.latest_left_wrist_image is None:
            return False
        if self._uses_feature("observation.right_wrist_image") and self.latest_right_wrist_image is None:
            return False
        if self._uses_feature("observation.state") and self._state_from_ee_pose():
            if self.latest_left_ee_state is None or self.latest_right_ee_state is None:
                return False
        needed = set(self.state_joint_names) | set(self.action_joint_names)
        needed |= set(self.left_arm_joint_names) | set(self.right_arm_joint_names)
        return all(name in self.latest_joint_positions for name in needed)

    def _uses_feature(self, key):
        return not self.policy_feature_keys or key in self.policy_feature_keys

    def _state_from_ee_pose(self):
        return self._feature_shape("observation.state") == (12,)

    def _feature_shape(self, key):
        if not hasattr(self, "metadata_features"):
            return None
        feature = self.metadata_features.get(key)
        if feature is None:
            return None
        return tuple(feature.get("shape", ()))

    def _build_policy_input(self):
        data = {"task": [self.task]}
        if self._uses_feature("observation.state"):
            state = self._current_state()
            data["observation.state"] = torch.tensor([state], dtype=torch.float32, device=self.device)

        image_map = {
            "observation.image": self.latest_image,
            "observation.wrist_image": self.latest_wrist_image,
            "observation.left_wrist_image": self.latest_left_wrist_image,
            "observation.right_wrist_image": self.latest_right_wrist_image,
        }
        for key, image in image_map.items():
            if self._uses_feature(key):
                data[key] = self._image_to_tensor(image).unsqueeze(0).to(self.device)

        if self._uses_feature("timestamp"):
            data["timestamp"] = torch.tensor([self.step / float(self.fps)], dtype=torch.float32, device=self.device)
        return data

    def _current_state(self):
        state_shape = self._feature_shape("observation.state")
        if state_shape == (12,):
            return np.concatenate([self.latest_left_ee_state, self.latest_right_ee_state]).astype(np.float32)
        state = self._joint_vector(self.state_joint_names)
        if state_shape and len(state_shape) == 1:
            dim = int(state_shape[0])
            if state.size >= dim:
                return state[:dim].astype(np.float32)
            return np.pad(state, (0, dim - state.size)).astype(np.float32)
        return state.astype(np.float32)

    def _joint_vector(self, names):
        return np.array([self.latest_joint_positions[name] for name in names], dtype=np.float32)

    def _publish_action(self, action):
        action = np.asarray(action, dtype=np.float32).reshape(-1)
        if action.size >= 16:
            left_targets = action[:7]
            left_grasp = float(action[7])
            right_targets = action[8:15]
            right_grasp = float(action[15])
        elif action.size == 7:
            left_targets = np.array(
                [self.latest_joint_positions[name] for name in self.left_arm_joint_names],
                dtype=np.float32,
            )
            left_targets[:6] = action[:6]
            left_grasp = float(action[6])
            right_targets = np.array(
                [self.latest_joint_positions[name] for name in self.right_arm_joint_names],
                dtype=np.float32,
            )
            right_grasp = 0.0
        else:
            target_by_name = {
                name: float(action[idx])
                for idx, name in enumerate(self.action_joint_names)
                if idx < len(action)
            }
            left_targets = np.array(
                [target_by_name.get(name, self.latest_joint_positions[name]) for name in self.left_arm_joint_names],
                dtype=np.float32,
            )
            right_targets = np.array(
                [target_by_name.get(name, self.latest_joint_positions[name]) for name in self.right_arm_joint_names],
                dtype=np.float32,
            )
            left_grasp = float(action[self.left_grasp_action_index]) if self.left_grasp_action_index < action.size else 0.0
            right_grasp = float(action[self.right_grasp_action_index]) if self.right_grasp_action_index < action.size else 0.0

        self._publish_arm_trajectory(self.left_arm_pub, self.left_arm_joint_names, left_targets)
        self._publish_arm_trajectory(self.right_arm_pub, self.right_arm_joint_names, right_targets)

        grasp = Float32MultiArray()
        grasp.data = [
            float(np.clip(left_grasp, 0.0, 1.0)),
            float(np.clip(right_grasp, 0.0, 1.0)),
        ]
        self.hand_grasp_pub.publish(grasp)

    def _publish_arm_trajectory(self, publisher, joint_names, positions):
        traj = JointTrajectory()
        traj.header.stamp = self.get_clock().now().to_msg()
        traj.joint_names = list(joint_names)
        point = JointTrajectoryPoint()
        point.positions = [float(x) for x in positions]
        point.time_from_start = Duration(seconds=self.trajectory_dt).to_msg()
        traj.points.append(point)
        publisher.publish(traj)

    def _image_cb(self, msg):
        self.latest_image = self._ros_image_to_rgb(msg)

    def _wrist_image_cb(self, msg):
        self.latest_wrist_image = self._ros_image_to_rgb(msg)

    def _left_wrist_image_cb(self, msg):
        self.latest_left_wrist_image = self._ros_image_to_rgb(msg)
        if self.latest_wrist_image is None:
            self.latest_wrist_image = self.latest_left_wrist_image

    def _right_wrist_image_cb(self, msg):
        self.latest_right_wrist_image = self._ros_image_to_rgb(msg)

    def _joint_state_cb(self, msg):
        for name, position in zip(msg.name, msg.position):
            self.latest_joint_positions[name] = float(position)

    def _left_ee_pose_cb(self, msg):
        self.latest_left_ee_state = self._pose_msg_to_xyz_rpy(msg)

    def _right_ee_pose_cb(self, msg):
        self.latest_right_ee_state = self._pose_msg_to_xyz_rpy(msg)

    def _pose_msg_to_xyz_rpy(self, msg):
        p = msg.position
        q = msg.orientation
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
        return np.array([p.x, p.y, p.z, roll, pitch, yaw], dtype=np.float32)

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
        return np.ascontiguousarray(np.asarray(resized))

    @staticmethod
    def _image_to_tensor(image):
        return torch.from_numpy(image).float().permute(2, 0, 1) / 255.0


def main():
    rclpy.init()
    node = RealPolicyInference()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == "__main__":
    main()
