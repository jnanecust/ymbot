// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ymrobot_msgs:msg/CloudChassisStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ymrobot_msgs/msg/cloud_chassis_status.h"


#ifndef YMROBOT_MSGS__MSG__DETAIL__CLOUD_CHASSIS_STATUS__STRUCT_H_
#define YMROBOT_MSGS__MSG__DETAIL__CLOUD_CHASSIS_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'move_target'
// Member 'move_status'
// Member 'running_status'
// Member 'target_floor'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/CloudChassisStatus in the package ymrobot_msgs.
/**
  * 云迹底盘状态信息msg
 */
typedef struct ymrobot_msgs__msg__CloudChassisStatus
{
  /// 充电状态
  bool charge_state;
  /// 软急停状态 true->急停中，false->非急停中
  bool soft_estop_state;
  /// 硬急停状态 true->急停中，false->非急停中
  bool hard_estop_state;
  /// 急停状态 true->急停中，false->非急停中
  bool estop_state;
  /// 电量百分比
  uint8_t power_percent;
  /// 当前位置x
  double x;
  /// 当前位置y
  double y;
  /// 当前位置yaw
  double yaw;
  /// 当前楼层  --  当前地图
  uint8_t current_floor;
  /// 错误码
  uint8_t error_code;
  /// 导航目标点
  rosidl_runtime_c__String move_target;
  /// 导航状态
  rosidl_runtime_c__String move_status;
  /// 机器人运行状态
  rosidl_runtime_c__String running_status;
  /// 目标楼层   -- 目标地图
  rosidl_runtime_c__String target_floor;
} ymrobot_msgs__msg__CloudChassisStatus;

// Struct for a sequence of ymrobot_msgs__msg__CloudChassisStatus.
typedef struct ymrobot_msgs__msg__CloudChassisStatus__Sequence
{
  ymrobot_msgs__msg__CloudChassisStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ymrobot_msgs__msg__CloudChassisStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // YMROBOT_MSGS__MSG__DETAIL__CLOUD_CHASSIS_STATUS__STRUCT_H_
