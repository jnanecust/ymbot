// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ymrobot_msgs:msg/HumanoidMovebase.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ymrobot_msgs/msg/humanoid_movebase.h"


#ifndef YMROBOT_MSGS__MSG__DETAIL__HUMANOID_MOVEBASE__STRUCT_H_
#define YMROBOT_MSGS__MSG__DETAIL__HUMANOID_MOVEBASE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/HumanoidMovebase in the package ymrobot_msgs.
typedef struct ymrobot_msgs__msg__HumanoidMovebase
{
  float x;
  float y;
  float yaw;
} ymrobot_msgs__msg__HumanoidMovebase;

// Struct for a sequence of ymrobot_msgs__msg__HumanoidMovebase.
typedef struct ymrobot_msgs__msg__HumanoidMovebase__Sequence
{
  ymrobot_msgs__msg__HumanoidMovebase * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ymrobot_msgs__msg__HumanoidMovebase__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // YMROBOT_MSGS__MSG__DETAIL__HUMANOID_MOVEBASE__STRUCT_H_
