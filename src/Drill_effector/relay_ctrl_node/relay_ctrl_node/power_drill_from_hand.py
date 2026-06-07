import time

import rclpy
from rclpy.node import Node
from std_msgs.msg import Float32MultiArray, UInt8
from ymrobot_msgs.srv import PowerDrill


class PowerDrillHandControlNode(Node):
    def __init__(self):
        super().__init__("power_drill_hand_control_node")

        self.declare_parameter("side", "left")              # left / right / both
        self.side = str(self.get_parameter("side").value).strip().lower()

        if self.side not in ["left", "right", "both"]:
            raise ValueError(f"Invalid side: {self.side}, expected left/right/both")

        self.enable_left = self.side in ["left", "both"]
        self.enable_right = self.side in ["right", "both"]

        self.hand_grasp_sub = self.create_subscription(
            Float32MultiArray,
            "/hand_grasp",
            self.hand_grasp_callback,
            10,
        )
        self.drill_control_sub = self.create_subscription(
            UInt8,
            "/drill_control",
            self.drill_control_callback,
            10,
        )

        # side-specific service clients
        self.left_power_drill_client = None
        self.right_power_drill_client = None

        if self.enable_left:
            self.left_power_drill_client = self.create_client(
                PowerDrill,
                "/left/power_drill_task_service",
            )

        if self.enable_right:
            self.right_power_drill_client = self.create_client(
                PowerDrill,
                "/right/power_drill_task_service",
            )

        if self.enable_left:
            while not self.left_power_drill_client.wait_for_service(timeout_sec=1.0):
                self.get_logger().warn("Waiting for /left/power_drill_task_service ...")

        if self.enable_right:
            while not self.right_power_drill_client.wait_for_service(timeout_sec=1.0):
                self.get_logger().warn("Waiting for /right/power_drill_task_service ...")

        # 阈值与去抖参数
        self.press_th = 0.55
        self.release_th = 0.45
        self.debounce_s = 0.05

        # 左右按压状态
        self.left_pressed = False
        self.left_last_edge_t = 0.0

        self.right_pressed = False
        self.right_last_edge_t = 0.0

        # 左右电钻开关状态
        self.left_drill_on = False
        self.right_drill_on = False

        # 左右电钻方向状态：0=正转，1=反转，None=未设置
        self.left_drill_direction = None
        self.right_drill_direction = None

        self.get_logger().info(f"Power drill hand control node started. side={self.side}")
        self.get_logger().info(
            "Logic: corresponding hand hold -> drill ON, release -> drill OFF"
        )
        self.get_logger().info(
            "Direction: /drill_control=0 -> FORWARD, /drill_control=1 -> REVERSE"
        )

        # 启动时默认给所有启用侧发一次正转
        if self.enable_left:
            self.send_power_drill_cmd("left", 2)
            self.left_drill_direction = 0
            self.get_logger().info("Startup default -> LEFT drill FORWARD")

        if self.enable_right:
            self.send_power_drill_cmd("right", 2)
            self.right_drill_direction = 0
            self.get_logger().info("Startup default -> RIGHT drill FORWARD")

    def _get_client_by_side(self, side: str):
        if side == "left":
            return self.left_power_drill_client
        if side == "right":
            return self.right_power_drill_client
        raise ValueError(f"Invalid side: {side}")

    def send_power_drill_cmd(self, side: str, task_type: int):
        client = self._get_client_by_side(side)
        if client is None:
            self.get_logger().warn(f"No power drill client for side={side}")
            return

        req = PowerDrill.Request()
        req.power_drill_task_type = task_type

        future = client.call_async(req)
        future.add_done_callback(
            lambda fut, s=side, t=task_type: self.handle_service_response(fut, s, t)
        )

        cmd_name = {
            0: "ON",
            1: "OFF",
            2: "FORWARD",
            3: "REVERSE",
        }.get(task_type, f"UNKNOWN({task_type})")
        self.get_logger().info(f"Sent power drill command: side={side}, cmd={cmd_name}")

    def handle_service_response(self, future, side: str, task_type: int):
        cmd_name = {
            0: "ON",
            1: "OFF",
            2: "FORWARD",
            3: "REVERSE",
        }.get(task_type, f"UNKNOWN({task_type})")

        try:
            response = future.result()
            # self.get_logger().info(
            #     f"Power drill service response: side={side}, cmd={cmd_name}, "
            #     f"success={response.success}, message={response.message}"
            # )
            self.get_logger().info(
                f"[SUCCESS] Power drill service response: side={side}, cmd={cmd_name}"
            )
        except Exception as e:
            self.get_logger().error(
                f"Power drill service call failed: side={side}, cmd={cmd_name}, error={e}"
            )

    def hand_grasp_callback(self, msg: Float32MultiArray):
        if not msg.data or len(msg.data) != 2:
            self.get_logger().warn(f"接收到的数据长度不足, 当前 side={self.side}, len={len(msg.data)}")
            return

        now = time.perf_counter()

        if self.enable_left:
            left_grasp = float(msg.data[0])
            self._update_one_side_from_grasp("left", left_grasp, now)

        if self.enable_right:
            right_grasp = float(msg.data[1])
            self._update_one_side_from_grasp("right", right_grasp, now)

    def _update_one_side_from_grasp(self, side: str, grasp_value: float, now: float):
        if side == "left":
            pressed = self.left_pressed
            last_edge_t = self.left_last_edge_t
            drill_on = self.left_drill_on
        elif side == "right":
            pressed = self.right_pressed
            last_edge_t = self.right_last_edge_t
            drill_on = self.right_drill_on
        else:
            raise ValueError(f"Invalid side: {side}")

        # 滞回判断
        if not pressed:
            new_pressed = grasp_value > self.press_th
        else:
            new_pressed = grasp_value > self.release_th

        # 去抖
        if new_pressed != pressed and (now - last_edge_t) > self.debounce_s:
            if side == "left":
                self.left_last_edge_t = now
                self.left_pressed = new_pressed
            else:
                self.right_last_edge_t = now
                self.right_pressed = new_pressed

            if new_pressed:
                if not drill_on:
                    self.send_power_drill_cmd(side, 0)  # ON
                    if side == "left":
                        self.left_drill_on = True
                    else:
                        self.right_drill_on = True
                self.get_logger().info(
                    f"{side.capitalize()} grasp pressed (value={grasp_value:.3f}) -> drill ON"
                )
            else:
                if drill_on:
                    self.send_power_drill_cmd(side, 1)  # OFF
                    if side == "left":
                        self.left_drill_on = False
                    else:
                        self.right_drill_on = False
                self.get_logger().info(
                    f"{side.capitalize()} grasp released (value={grasp_value:.3f}) -> drill OFF"
                )

    def drill_control_callback(self, msg: UInt8):
        control_value = int(msg.data)

        if control_value == 0:
            # FORWARD
            if self.enable_left and self.left_drill_direction != 0:
                self.send_power_drill_cmd("left", 2)
                self.left_drill_direction = 0
                self.get_logger().info("LEFT /drill_control=0 -> drill FORWARD")

            if self.enable_right and self.right_drill_direction != 0:
                self.send_power_drill_cmd("right", 2)
                self.right_drill_direction = 0
                self.get_logger().info("RIGHT /drill_control=0 -> drill FORWARD")

        elif control_value == 1:
            # REVERSE
            if self.enable_left and self.left_drill_direction != 1:
                self.send_power_drill_cmd("left", 3)
                self.left_drill_direction = 1
                self.get_logger().info("LEFT /drill_control=1 -> drill REVERSE")

            if self.enable_right and self.right_drill_direction != 1:
                self.send_power_drill_cmd("right", 3)
                self.right_drill_direction = 1
                self.get_logger().info("RIGHT /drill_control=1 -> drill REVERSE")

        else:
            self.get_logger().warn(
                f"Invalid /drill_control value: {control_value} (expected 0 or 1)"
            )


def main(args=None):
    rclpy.init(args=args)
    node = PowerDrillHandControlNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == "__main__":
    main()