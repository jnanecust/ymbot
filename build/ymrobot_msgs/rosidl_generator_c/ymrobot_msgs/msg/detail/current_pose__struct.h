// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ymrobot_msgs:msg/CurrentPose.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ymrobot_msgs/msg/current_pose.h"


#ifndef YMROBOT_MSGS__MSG__DETAIL__CURRENT_POSE__STRUCT_H_
#define YMROBOT_MSGS__MSG__DETAIL__CURRENT_POSE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/CurrentPose in the package ymrobot_msgs.
typedef struct ymrobot_msgs__msg__CurrentPose
{
  float x;
  float y;
  float z;
  float roll;
  float pitch;
  float yaw;
  float rx;
  float ry;
  float rz;
  float rw;
} ymrobot_msgs__msg__CurrentPose;

// Struct for a sequence of ymrobot_msgs__msg__CurrentPose.
typedef struct ymrobot_msgs__msg__CurrentPose__Sequence
{
  ymrobot_msgs__msg__CurrentPose * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ymrobot_msgs__msg__CurrentPose__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // YMROBOT_MSGS__MSG__DETAIL__CURRENT_POSE__STRUCT_H_
