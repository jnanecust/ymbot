// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ymrobot_msgs:msg/Movebase.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ymrobot_msgs/msg/movebase.h"


#ifndef YMROBOT_MSGS__MSG__DETAIL__MOVEBASE__STRUCT_H_
#define YMROBOT_MSGS__MSG__DETAIL__MOVEBASE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/Movebase in the package ymrobot_msgs.
typedef struct ymrobot_msgs__msg__Movebase
{
  float speed;
  float angle;
} ymrobot_msgs__msg__Movebase;

// Struct for a sequence of ymrobot_msgs__msg__Movebase.
typedef struct ymrobot_msgs__msg__Movebase__Sequence
{
  ymrobot_msgs__msg__Movebase * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ymrobot_msgs__msg__Movebase__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // YMROBOT_MSGS__MSG__DETAIL__MOVEBASE__STRUCT_H_
