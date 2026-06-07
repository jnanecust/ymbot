// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ymrobot_msgs:msg/TaskStatusCode.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ymrobot_msgs/msg/task_status_code.h"


#ifndef YMROBOT_MSGS__MSG__DETAIL__TASK_STATUS_CODE__STRUCT_H_
#define YMROBOT_MSGS__MSG__DETAIL__TASK_STATUS_CODE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'RUNNING'.
/**
  * 0x00  任务执行中
 */
enum
{
  ymrobot_msgs__msg__TaskStatusCode__RUNNING = 0
};

/// Constant 'DONDE'.
/**
  * 0x01  任务已完成
 */
enum
{
  ymrobot_msgs__msg__TaskStatusCode__DONDE = 1
};

/// Constant 'SUCCEEDED'.
/**
  * 0x02  任务成功
 */
enum
{
  ymrobot_msgs__msg__TaskStatusCode__SUCCEEDED = 2
};

/// Constant 'ABORTED'.
/**
  * 0x03  任务失败
 */
enum
{
  ymrobot_msgs__msg__TaskStatusCode__ABORTED = 3
};

/// Constant 'CANCLE'.
/**
  * 0x04  任务取消
 */
enum
{
  ymrobot_msgs__msg__TaskStatusCode__CANCLE = 4
};

/// Constant 'HELD'.
/**
  * 0x05  任务挂起/任务等待
 */
enum
{
  ymrobot_msgs__msg__TaskStatusCode__HELD = 5
};

/// Constant 'REFUSE'.
/**
  * 0x05  任务拒绝
 */
enum
{
  ymrobot_msgs__msg__TaskStatusCode__REFUSE = 6
};

/// Constant 'NONE'.
/**
  * 0x06  当前没有任务
 */
enum
{
  ymrobot_msgs__msg__TaskStatusCode__NONE = 7
};

/// Struct defined in msg/TaskStatusCode in the package ymrobot_msgs.
/**
  * Task status code from robot to platform
 */
typedef struct ymrobot_msgs__msg__TaskStatusCode
{
  uint8_t structure_needs_at_least_one_member;
} ymrobot_msgs__msg__TaskStatusCode;

// Struct for a sequence of ymrobot_msgs__msg__TaskStatusCode.
typedef struct ymrobot_msgs__msg__TaskStatusCode__Sequence
{
  ymrobot_msgs__msg__TaskStatusCode * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ymrobot_msgs__msg__TaskStatusCode__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // YMROBOT_MSGS__MSG__DETAIL__TASK_STATUS_CODE__STRUCT_H_
