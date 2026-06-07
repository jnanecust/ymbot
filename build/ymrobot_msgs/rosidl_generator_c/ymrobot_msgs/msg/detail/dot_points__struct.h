// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ymrobot_msgs:msg/DotPoints.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ymrobot_msgs/msg/dot_points.h"


#ifndef YMROBOT_MSGS__MSG__DETAIL__DOT_POINTS__STRUCT_H_
#define YMROBOT_MSGS__MSG__DETAIL__DOT_POINTS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'SAVE'.
/**
  * 保存点位
 */
enum
{
  ymrobot_msgs__msg__DotPoints__SAVE = 0
};

/// Constant 'DELETE'.
/**
  * 删除点位
 */
enum
{
  ymrobot_msgs__msg__DotPoints__DELETE = 1
};

// Include directives for member types
// Member 'pose_name'
// Member 'map_name'
// Member 'pose_describe'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/DotPoints in the package ymrobot_msgs.
typedef struct ymrobot_msgs__msg__DotPoints
{
  /// 打点动作
  uint8_t action;
  /// 坐标点位名称
  rosidl_runtime_c__String pose_name;
  /// 地图名称
  rosidl_runtime_c__String map_name;
  /// 点位简单描述
  rosidl_runtime_c__String pose_describe;
} ymrobot_msgs__msg__DotPoints;

// Struct for a sequence of ymrobot_msgs__msg__DotPoints.
typedef struct ymrobot_msgs__msg__DotPoints__Sequence
{
  ymrobot_msgs__msg__DotPoints * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ymrobot_msgs__msg__DotPoints__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // YMROBOT_MSGS__MSG__DETAIL__DOT_POINTS__STRUCT_H_
