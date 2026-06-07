import time
from functools import partial

import rclpy
from rclpy.node import Node
from ymrobot_msgs.srv import PowerDrill
import serial


class RelayCtrlNode(Node):
    def __init__(self):
        super().__init__('relay_ctrl_node')

        self.declare_parameter("side", "left")              # left / right / both
        self.declare_parameter("left_port", "/dev/ttyUSB2") 
        self.declare_parameter("right_port", "/dev/ttyUSB3")
        self.declare_parameter("baudrate", 9600)

        self.side = str(self.get_parameter("side").value).strip().lower()
        self.left_port = self.get_parameter("left_port").value
        self.right_port = self.get_parameter("right_port").value
        self.baudrate = int(self.get_parameter("baudrate").value)

        if self.side not in ["left", "right", "both"]:
            raise ValueError(f"Invalid side: {self.side}, expected left/right/both")

        self.enable_left = self.side in ["left", "both"]
        self.enable_right = self.side in ["right", "both"]

        self.left_ser = None
        self.right_ser = None

        if self.enable_left:
            self.left_ser = self._open_serial(self.left_port, "left")

        if self.enable_right:
            self.right_ser = self._open_serial(self.right_port, "right")

        self.left_service = None
        self.right_service = None

        if self.enable_left:
            self.left_service = self.create_service(
                PowerDrill,
                "/left/power_drill_task_service",
                partial(self.handle_grasp_task, side="left")
            )

        if self.enable_right:
            self.right_service = self.create_service(
                PowerDrill,
                "/right/power_drill_task_service",
                partial(self.handle_grasp_task, side="right")
            )

        self.get_logger().info(f"Relay control service ready. side={self.side}")

    def _open_serial(self, port: str, side: str):
        try:
            ser = serial.Serial(port, self.baudrate, timeout=0.5)
            self.get_logger().info(f"[{side}] Serial opened: {port} @ {self.baudrate}")
            return ser
        except Exception as e:
            self.get_logger().error(f"[{side}] Failed to open serial port: {e}")
            return None

    def _get_serial_by_side(self, side: str):
        if side == "left":
            return self.left_ser
        elif side == "right":
            return self.right_ser
        else:
            return None

    def _read_feedback(self, ser, side: str, expected_len: int = 8, timeout: float = 0.5):
        """
        发送命令后读取串口反馈
        expected_len: 期望读取的字节数；很多 Modbus RTU 写单寄存器回包是 8 字节
        timeout: 本次等待反馈的最长时间
        """
        start_time = time.time()
        rx = b""

        try:
            # 循环读取，直到拿到足够字节或超时
            while time.time() - start_time < timeout:
                waiting = ser.in_waiting
                if waiting > 0:
                    rx += ser.read(waiting)

                    if len(rx) >= expected_len:
                        break

                time.sleep(0.01)

            # if rx:
            #     self.get_logger().info(
            #         f"[{side}] Serial feedback ({len(rx)} bytes): {rx.hex(' ')}"
            #     )
            # else:
            #     self.get_logger().warn(f"[{side}] No serial feedback received")

            if not rx:
                self.get_logger().warn(f"[{side}] No serial feedback received")

            return rx

        except Exception as e:
            self.get_logger().error(f"[{side}] Serial read failed: {e}")
            return b""

    def _build_cmd(self, task_type: int):
        if task_type == 0:
            return "01 06 00 01 01 00 D9 9A", "open power drill"
        elif task_type == 1:
            return "01 06 00 01 02 00 D9 6A", "close power drill"
        elif task_type == 2:
            return "01 06 00 00 01 00 88 5A", "set power drill to forward"
        elif task_type == 3:
            return "01 06 00 00 02 00 88 AA", "set power drill to reverse"
        else:
            return None, None

    def handle_grasp_task(self, request, response, side: str):
        ser = self._get_serial_by_side(side)
        if ser is None:
            response.success = False
            response.message = f"[{side}] Serial port not opened"
            return response

        cmd, action = self._build_cmd(request.power_drill_task_type)
        if cmd is None:
            response.success = False
            response.message = "power_drill_task_type must be 0, 1, 2, or 3"
            return response

        try:
            tx = bytes.fromhex(cmd)

            # 清理旧反馈，避免串包
            ser.reset_input_buffer()

            # 发送
            ser.write(tx)
            ser.flush()
            # self.get_logger().info(f"[{side}] TX: {tx.hex(' ')}")

            # 读反馈
            rx = self._read_feedback(ser, side=side, expected_len=8, timeout=0.5)

            if not rx:
                response.success = False
                response.message = f"[{side}] Command sent, but no feedback received"
                self.get_logger().warn(response.message)
                return response

            # 如果设备是“原样回显”型反馈，可直接比较
            if rx[:len(tx)] == tx:
                response.success = True
                response.message = f"[{side}] Successfully executed: {action}, feedback={rx.hex(' ')}"
                # self.get_logger().info(response.message)
            else:
                response.success = False
                response.message = (
                    f"[{side}] Feedback mismatch, "
                    f"tx={tx.hex(' ')}, rx={rx.hex(' ')}"
                )
                self.get_logger().warn(response.message)

        except Exception as e:
            response.success = False
            response.message = f"[{side}] Serial write/read failed: {e}"
            self.get_logger().error(response.message)

        return response

    def destroy_node(self):
        try:
            if self.left_ser is not None and self.left_ser.is_open:
                self.left_ser.close()
                self.get_logger().info("[left] Serial closed")
        except Exception:
            pass

        try:
            if self.right_ser is not None and self.right_ser.is_open:
                self.right_ser.close()
                self.get_logger().info("[right] Serial closed")
        except Exception:
            pass

        super().destroy_node()


def main(args=None):
    rclpy.init(args=args)
    node = RelayCtrlNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == "__main__":
    main()
