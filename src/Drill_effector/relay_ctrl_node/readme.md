# Relay Control Node (Power Drill Control)

## 1. Overview

`relay_ctrl_node` 是一个基于  **ROS 2 的串口控制节点** ，用于通过 **RS485 / 串口继电器模块** 控制电钻（Power Drill）。

节点通过 **ROS2 Service** 接收控制指令，然后通过串口发送 **Modbus Hex 指令** 控制继电器，从而实现：

* 打开电钻
* 关闭电钻
* 设置正转
* 设置反转

该节点主要用于  **机器人自动化作业任务（例如自动拧螺丝）中的电钻控制** 。

---

## 2. Package Structure

当前 `relay_ctrl_node` 包目录结构如下：

```
relay_ctrl_node
├── config
│   └── relay_ctrl.yaml                # 节点参数配置
│
├── document                           # 继电器模块相关资料
│   ├── 指令.txt
│   └── N4ROA01
│       ├── 串口助手
│       │   ├── Commix.exe
│       │   ├── SerialProV1.04.exe
│       │   └── sscom32.exe
│       │
│       ├── 视频教程
│       │   ├── 视频教程列表.txt
│       │   └── 异常处理.txt
│       │
│       ├── modbus poll
│       │   ├── modbuspoll注册码.txt
│       │   ├── ModbusPollSetup.exe
│       │   └── N4ROA01_N4ROB02_N4ROC04_N4ROD08_N4ROE16_N4ROF32 POLL
│       │       ├── Mbpoll1.mbp
│       │       ├── Mbpoll2.mbp
│       │       ├── Mbpoll3.mbp
│       │       ├── Mbpoll4.mbp
│       │       └── resume.mbw
│       │
│       ├── N4ROA01_N4ROB02_N4ROC04_N4ROD08_N4ROE16_N4ROF32 说明书.pdf
│       └── N4ROA01_N4ROB02_N4ROC04_N4ROD08_N4ROE16_N4ROF32 指令说明书.pdf
│
├── launch
│   └── relay_ctrl.launch.py           # ROS2 launch 文件
│
├── relay_ctrl_node                    # Python 节点源码
│   ├── __init__.py
│   └── relay_ctrl.py                  # 串口控制节点
│
├── config
│   └── relay_ctrl.yaml                # 参数配置
│
├── resource
│   └── relay_ctrl_node
│
├── test                               # ROS2 自动测试
│   ├── test_copyright.py
│   ├── test_flake8.py
│   └── test_pep257.py
│
├── package.xml
├── setup.py
├── setup.cfg
└── readme.md
```

---

## 3. Environment

本项目在以下环境中开发和测试：

测试中电钻供电：24V3A

| 项目             | 版本                        |
| ---------------- | --------------------------- |
| CPU Architecture | x86_64                      |
| Operating System | Ubuntu 22.04                |
| ROS Version      | ROS 2 Humble                |
| Python           | Python 3                    |
| Communication    | Serial (RS485 / USB-Serial) |

系统信息示例：

```bash
uname -m
# x86_64

lsb_release -a
# Ubuntu 22.04

printenv | grep ROS
# ROS_DISTRO=humble
```

## 4. Dependencies

系统依赖：

* ROS2 (tested on  **ROS2 Humble** )
* Python 3
* pyserial

安装：

```bash
pip3 install pyserial
```

ROS2 依赖：

* rclpy
* ymrobot_msgs

---

## 5. Node Parameters

参数通过 `config/relay_ctrl.yaml` 配置。

示例：

```yaml
relay_ctrl_node:
  ros__parameters:
    port: "/dev/ttyUSB0"
    baudrate: 9600
```

参数说明：

| 参数     | 默认值       | 说明     |
| -------- | ------------ | -------- |
| port     | /dev/ttyUSB0 | 串口设备 |
| baudrate | 9600         | 波特率   |

---

## 6. Service Interface

Service 类型：

```
ymrobot_msgs/srv/PowerDrill
```

接口定义：

```
int32 power_drill_task_type
---
bool success
string message
```

控制类型：

| value | 功能     |
| ----- | -------- |
| 0     | 打开电钻 |
| 1     | 关闭电钻 |
| 2     | 正转     |
| 3     | 反转     |

---

## 7. Build

在 ROS2 workspace 中编译：

```bash
cd ~/relay_ctrl_ws
colcon build
source install/setup.bash
```

---

## 8. Run

使用 launch 启动：

```bash
ros2 launch relay_ctrl_node relay_ctrl.launch.py
```

或者直接运行：

```bash
ros2 run relay_ctrl_node relay_ctrl_node
```

---

## 9. Service Call Example

打开电钻：

```bash
ros2 service call /left/power_drill_task_service ymrobot_msgs/srv/PowerDrill "{power_drill_task_type: 0}"
```

关闭电钻：

```bash
ros2 service call /left/power_drill_task_service ymrobot_msgs/srv/PowerDrill "{power_drill_task_type: 1}"
```

正转：

```bash
ros2 service call /left/power_drill_task_service ymrobot_msgs/srv/PowerDrill "{power_drill_task_type: 2}"
```

反转：

```bash
ros2 service call /left/power_drill_task_service ymrobot_msgs/srv/PowerDrill "{power_drill_task_type: 3}"
```

---

## 10. Hardware

继电器模块型号：

```
N4ROA01 / N4ROB02 / N4ROC04 / N4ROD08 / N4ROE16 / N4ROF32
```

通信协议：

```
Modbus RTU
```

相关说明书与工具位于：

```
document/
```

包括：

* 指令说明书
* Modbus 调试工具
* 串口调试工具

---
