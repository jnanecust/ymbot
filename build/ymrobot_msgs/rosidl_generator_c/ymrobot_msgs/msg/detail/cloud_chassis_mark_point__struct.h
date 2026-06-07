// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ymrobot_msgs:msg/CloudChassisMarkPoint.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ymrobot_msgs/msg/cloud_chassis_mark_point.h"


#ifndef YMROBOT_MSGS__MSG__DETAIL__CLOUD_CHASSIS_MARK_POINT__STRUCT_H_
#define YMROBOT_MSGS__MSG__DETAIL__CLOUD_CHASSIS_MARK_POINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'nav_target_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/CloudChassisMarkPoint in the package ymrobot_msgs.
typedef struct ymrobot_msgs__msg__CloudChassisMarkPoint
{
  /// 导航模式  0: 目标名导航  1：坐标点导航  3:打点 4：充电 5：取消充电 2:重定位
  uint8_t nav_mode;
  /// 导航目标名
  rosidl_runtime_c__String nav_target_name;
  /// 导航目标x坐标
  float nav_target_x;
  /// 导航目标y坐标
  float nav_target_y;
  /// 导航目标yaw角度
  float nav_target_yaw;
  /// 是否激活附近点
  bool is_activate_the_nearby_point;
  /// 就近点半径
  float nearby_point_radius;
} ymrobot_msgs__msg__CloudChassisMarkPoint;

// Struct for a sequence of ymrobot_msgs__msg__CloudChassisMarkPoint.
typedef struct ymrobot_msgs__msg__CloudChassisMarkPoint__Sequence
{
  ymrobot_msgs__msg__CloudChassisMarkPoint * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ymrobot_msgs__msg__CloudChassisMarkPoint__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // YMROBOT_MSGS__MSG__DETAIL__CLOUD_CHASSIS_MARK_POINT__STRUCT_H_
