// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ymrobot_msgs:msg/MapManage.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ymrobot_msgs/msg/map_manage.h"


#ifndef YMROBOT_MSGS__MSG__DETAIL__MAP_MANAGE__STRUCT_H_
#define YMROBOT_MSGS__MSG__DETAIL__MAP_MANAGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'map_task'
#include "ymrobot_msgs/msg/detail/map_task_command__struct.h"
// Member 'pcd_file'
// Member 'pgm_file'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/MapManage in the package ymrobot_msgs.
typedef struct ymrobot_msgs__msg__MapManage
{
  ymrobot_msgs__msg__MapTaskCommand map_task;
  rosidl_runtime_c__String pcd_file;
  rosidl_runtime_c__String pgm_file;
} ymrobot_msgs__msg__MapManage;

// Struct for a sequence of ymrobot_msgs__msg__MapManage.
typedef struct ymrobot_msgs__msg__MapManage__Sequence
{
  ymrobot_msgs__msg__MapManage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ymrobot_msgs__msg__MapManage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // YMROBOT_MSGS__MSG__DETAIL__MAP_MANAGE__STRUCT_H_
