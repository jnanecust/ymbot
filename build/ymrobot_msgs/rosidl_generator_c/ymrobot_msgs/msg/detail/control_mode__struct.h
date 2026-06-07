// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ymrobot_msgs:msg/ControlMode.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ymrobot_msgs/msg/control_mode.h"


#ifndef YMROBOT_MSGS__MSG__DETAIL__CONTROL_MODE__STRUCT_H_
#define YMROBOT_MSGS__MSG__DETAIL__CONTROL_MODE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'SHOU_DONG'.
/**
  * shou
 */
enum
{
  ymrobot_msgs__msg__ControlMode__SHOU_DONG = 0
};

/// Constant 'SHOU_DONG_CLOUD'.
/**
  * 暂停操作
 */
enum
{
  ymrobot_msgs__msg__ControlMode__SHOU_DONG_CLOUD = 1
};

/// Constant 'AUTO'.
/**
  * 恢复操作
 */
enum
{
  ymrobot_msgs__msg__ControlMode__AUTO = 2
};

/// Constant 'PID'.
/**
  * PID控制
 */
enum
{
  ymrobot_msgs__msg__ControlMode__PID = 3
};

/// Struct defined in msg/ControlMode in the package ymrobot_msgs.
typedef struct ymrobot_msgs__msg__ControlMode
{
  /// 命令代码
  uint8_t code;
} ymrobot_msgs__msg__ControlMode;

// Struct for a sequence of ymrobot_msgs__msg__ControlMode.
typedef struct ymrobot_msgs__msg__ControlMode__Sequence
{
  ymrobot_msgs__msg__ControlMode * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ymrobot_msgs__msg__ControlMode__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // YMROBOT_MSGS__MSG__DETAIL__CONTROL_MODE__STRUCT_H_
