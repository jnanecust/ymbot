// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ymrobot_msgs:msg/Upper.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ymrobot_msgs/msg/upper.h"


#ifndef YMROBOT_MSGS__MSG__DETAIL__UPPER__STRUCT_H_
#define YMROBOT_MSGS__MSG__DETAIL__UPPER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/Upper in the package ymrobot_msgs.
typedef struct ymrobot_msgs__msg__Upper
{
  bool chassis_status;
  bool auto_status;
} ymrobot_msgs__msg__Upper;

// Struct for a sequence of ymrobot_msgs__msg__Upper.
typedef struct ymrobot_msgs__msg__Upper__Sequence
{
  ymrobot_msgs__msg__Upper * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ymrobot_msgs__msg__Upper__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // YMROBOT_MSGS__MSG__DETAIL__UPPER__STRUCT_H_
