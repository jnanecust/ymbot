#!/usr/bin/env python3
import os
from datetime import datetime

import cv2
import numpy as np

import rclpy
from rclpy.node import Node
from rclpy.qos import qos_profile_sensor_data

from sensor_msgs.msg import Image
from message_filters import Subscriber, ApproximateTimeSynchronizer


def ros_image_to_numpy(msg: Image):
    """
    不使用 cv_bridge，直接把 sensor_msgs/Image 转成 numpy。
    支持常见编码：rgb8, bgr8, rgba8, bgra8, mono8, 8UC1, 16UC1, mono16, y16, 32FC1
    """
    enc = msg.encoding.lower()

    if enc in ['rgb8', 'bgr8']:
        dtype = np.uint8
        channels = 3
    elif enc in ['rgba8', 'bgra8']:
        dtype = np.uint8
        channels = 4
    elif enc in ['mono8', '8uc1']:
        dtype = np.uint8
        channels = 1
    elif enc in ['16uc1', 'mono16', 'y16']:
        dtype = np.uint16
        channels = 1
    elif enc in ['32fc1']:
        dtype = np.float32
        channels = 1
    else:
        raise RuntimeError(f'Unsupported image encoding: {msg.encoding}')

    dtype = np.dtype(dtype)

    if msg.is_bigendian:
        dtype = dtype.newbyteorder('>')
    else:
        dtype = dtype.newbyteorder('<')

    itemsize = dtype.itemsize
    row_items = msg.step // itemsize

    data = np.frombuffer(msg.data, dtype=dtype)

    if channels == 1:
        img = data.reshape((msg.height, row_items))
        img = img[:, :msg.width]
    else:
        img = data.reshape((msg.height, row_items // channels, channels))
        img = img[:, :msg.width, :]

    return img


class SaveOneRGBD(Node):
    def __init__(self):
        super().__init__('save_one_rgbd')

        self.declare_parameter('color_topic', '/top/top/color/image_raw')
        self.declare_parameter('depth_topic', '/top/top/depth/image_raw')
        self.declare_parameter('output_dir', './rgbd_output')
        self.declare_parameter('sync_slop', 0.2)

        self.color_topic = self.get_parameter('color_topic').value
        self.depth_topic = self.get_parameter('depth_topic').value
        self.output_dir = self.get_parameter('output_dir').value
        self.sync_slop = float(self.get_parameter('sync_slop').value)

        os.makedirs(self.output_dir, exist_ok=True)

        self.saved = False

        self.get_logger().info(f'color topic: {self.color_topic}')
        self.get_logger().info(f'depth topic: {self.depth_topic}')
        self.get_logger().info(f'output dir : {self.output_dir}')

        self.color_sub = Subscriber(
            self,
            Image,
            self.color_topic,
            qos_profile=qos_profile_sensor_data
        )

        self.depth_sub = Subscriber(
            self,
            Image,
            self.depth_topic,
            qos_profile=qos_profile_sensor_data
        )

        self.sync = ApproximateTimeSynchronizer(
            [self.color_sub, self.depth_sub],
            queue_size=20,
            slop=self.sync_slop
        )
        self.sync.registerCallback(self.image_callback)

    def image_callback(self, color_msg, depth_msg):
        if self.saved:
            return

        timestamp = datetime.now().strftime('%Y%m%d_%H%M%S_%f')

        color_path = os.path.join(self.output_dir, f'color_{timestamp}.png')
        depth_raw_path = os.path.join(self.output_dir, f'depth_raw_{timestamp}.png')
        depth_npy_path = os.path.join(self.output_dir, f'depth_raw_{timestamp}.npy')
        depth_vis_path = os.path.join(self.output_dir, f'depth_vis_{timestamp}.png')

        self.get_logger().info(f'color encoding: {color_msg.encoding}')
        self.get_logger().info(f'depth encoding: {depth_msg.encoding}')

        color = ros_image_to_numpy(color_msg)
        depth = ros_image_to_numpy(depth_msg)

        # 保存彩色图
        color_enc = color_msg.encoding.lower()

        if color_enc == 'rgb8':
            color_to_save = cv2.cvtColor(color, cv2.COLOR_RGB2BGR)
        elif color_enc == 'bgr8':
            color_to_save = color
        elif color_enc == 'rgba8':
            color_to_save = cv2.cvtColor(color, cv2.COLOR_RGBA2BGR)
        elif color_enc == 'bgra8':
            color_to_save = cv2.cvtColor(color, cv2.COLOR_BGRA2BGR)
        elif color.ndim == 2:
            color_to_save = color
        else:
            raise RuntimeError(f'Unsupported color encoding for save: {color_msg.encoding}')

        cv2.imwrite(color_path, color_to_save)

        # 保存原始深度 npy
        np.save(depth_npy_path, depth)

        # 保存 16-bit 深度 PNG
        if np.issubdtype(depth.dtype, np.floating):
            # 如果深度是 float，通常单位是米，这里转成毫米
            depth_clean = np.nan_to_num(depth, nan=0.0, posinf=0.0, neginf=0.0)
            depth_u16 = np.clip(depth_clean * 1000.0, 0, 65535).astype(np.uint16)
            self.get_logger().info('depth float converted to uint16 millimeters')
        elif depth.dtype == np.uint16:
            depth_u16 = depth
        else:
            depth_u16 = np.clip(depth, 0, 65535).astype(np.uint16)

        cv2.imwrite(depth_raw_path, depth_u16)

        # 保存深度可视化图
        valid = depth_u16[depth_u16 > 0]

        if valid.size > 0:
            min_depth = np.percentile(valid, 1)
            max_depth = np.percentile(valid, 99)

            if max_depth <= min_depth:
                max_depth = min_depth + 1

            depth_vis = np.clip(
                (depth_u16.astype(np.float32) - min_depth)
                / (max_depth - min_depth)
                * 255.0,
                0,
                255
            ).astype(np.uint8)
        else:
            depth_vis = np.zeros_like(depth_u16, dtype=np.uint8)

        depth_color = cv2.applyColorMap(depth_vis, cv2.COLORMAP_JET)
        cv2.imwrite(depth_vis_path, depth_color)

        self.get_logger().info('saved one RGB-D frame:')
        self.get_logger().info(f'  color     : {color_path}')
        self.get_logger().info(f'  depth png : {depth_raw_path}')
        self.get_logger().info(f'  depth npy : {depth_npy_path}')
        self.get_logger().info(f'  depth vis : {depth_vis_path}')
        self.get_logger().info(f'  color shape: {color.shape}, dtype: {color.dtype}')
        self.get_logger().info(f'  depth shape: {depth.shape}, dtype: {depth.dtype}')

        self.saved = True


def main():
    rclpy.init()
    node = SaveOneRGBD()

    try:
        while rclpy.ok() and not node.saved:
            rclpy.spin_once(node, timeout_sec=0.2)
    except KeyboardInterrupt:
        pass

    node.destroy_node()

    if rclpy.ok():
        rclpy.shutdown()


if __name__ == '__main__':
    main()