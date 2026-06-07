// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ymrobot_msgs:msg/TaskStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ymrobot_msgs/msg/task_status.h"


#ifndef YMROBOT_MSGS__MSG__DETAIL__TASK_STATUS__STRUCT_H_
#define YMROBOT_MSGS__MSG__DETAIL__TASK_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'amr_id'
// Member 'task_id'
// Member 'text'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/TaskStatus in the package ymrobot_msgs.
/**
  * Task status from robot to platform
 */
typedef struct ymrobot_msgs__msg__TaskStatus
{
  rosidl_runtime_c__String amr_id;
  /// 任务id
  rosidl_runtime_c__String task_id;
  /// TaskStatusCode
  uint8_t status;
  rosidl_runtime_c__String text;
} ymrobot_msgs__msg__TaskStatus;

// Struct for a sequence of ymrobot_msgs__msg__TaskStatus.
typedef struct ymrobot_msgs__msg__TaskStatus__Sequence
{
  ymrobot_msgs__msg__TaskStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ymrobot_msgs__msg__TaskStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // YMROBOT_MSGS__MSG__DETAIL__TASK_STATUS__STRUCT_H_
