// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ymrobot_msgs:msg/UpdateList.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ymrobot_msgs/msg/update_list.h"


#ifndef YMROBOT_MSGS__MSG__DETAIL__UPDATE_LIST__STRUCT_H_
#define YMROBOT_MSGS__MSG__DETAIL__UPDATE_LIST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'POSE_MANAGER'.
/**
  * 点位管理
 */
enum
{
  ymrobot_msgs__msg__UpdateList__POSE_MANAGER = 0
};

/// Constant 'UP_CLIMB_ACTION'.
/**
  * 上肢动作
 */
enum
{
  ymrobot_msgs__msg__UpdateList__UP_CLIMB_ACTION = 1
};

/// Constant 'EMOJI'.
/**
  * 表情
 */
enum
{
  ymrobot_msgs__msg__UpdateList__EMOJI = 2
};

/// Constant 'AUDIO'.
/**
  * 音频
 */
enum
{
  ymrobot_msgs__msg__UpdateList__AUDIO = 3
};

/// Constant 'ALL_ACTION'.
/**
  * 全部动作
 */
enum
{
  ymrobot_msgs__msg__UpdateList__ALL_ACTION = 4
};

/// Struct defined in msg/UpdateList in the package ymrobot_msgs.
typedef struct ymrobot_msgs__msg__UpdateList
{
  /// 命令代码
  uint8_t code;
} ymrobot_msgs__msg__UpdateList;

// Struct for a sequence of ymrobot_msgs__msg__UpdateList.
typedef struct ymrobot_msgs__msg__UpdateList__Sequence
{
  ymrobot_msgs__msg__UpdateList * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ymrobot_msgs__msg__UpdateList__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // YMROBOT_MSGS__MSG__DETAIL__UPDATE_LIST__STRUCT_H_
