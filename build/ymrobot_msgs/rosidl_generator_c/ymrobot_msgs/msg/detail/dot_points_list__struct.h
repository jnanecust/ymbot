// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ymrobot_msgs:msg/DotPointsList.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ymrobot_msgs/msg/dot_points_list.h"


#ifndef YMROBOT_MSGS__MSG__DETAIL__DOT_POINTS_LIST__STRUCT_H_
#define YMROBOT_MSGS__MSG__DETAIL__DOT_POINTS_LIST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'dot_points_list'
#include "ymrobot_msgs/msg/detail/dot_points__struct.h"

/// Struct defined in msg/DotPointsList in the package ymrobot_msgs.
typedef struct ymrobot_msgs__msg__DotPointsList
{
  /// 打点列表
  ymrobot_msgs__msg__DotPoints__Sequence dot_points_list;
} ymrobot_msgs__msg__DotPointsList;

// Struct for a sequence of ymrobot_msgs__msg__DotPointsList.
typedef struct ymrobot_msgs__msg__DotPointsList__Sequence
{
  ymrobot_msgs__msg__DotPointsList * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ymrobot_msgs__msg__DotPointsList__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // YMROBOT_MSGS__MSG__DETAIL__DOT_POINTS_LIST__STRUCT_H_
