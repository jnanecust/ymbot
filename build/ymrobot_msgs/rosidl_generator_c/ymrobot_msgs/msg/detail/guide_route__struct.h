// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ymrobot_msgs:msg/GuideRoute.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ymrobot_msgs/msg/guide_route.h"


#ifndef YMROBOT_MSGS__MSG__DETAIL__GUIDE_ROUTE__STRUCT_H_
#define YMROBOT_MSGS__MSG__DETAIL__GUIDE_ROUTE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'mark_points_list'
// Member 'audios_list'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/GuideRoute in the package ymrobot_msgs.
typedef struct ymrobot_msgs__msg__GuideRoute
{
  rosidl_runtime_c__String__Sequence mark_points_list;
  rosidl_runtime_c__String__Sequence audios_list;
} ymrobot_msgs__msg__GuideRoute;

// Struct for a sequence of ymrobot_msgs__msg__GuideRoute.
typedef struct ymrobot_msgs__msg__GuideRoute__Sequence
{
  ymrobot_msgs__msg__GuideRoute * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ymrobot_msgs__msg__GuideRoute__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // YMROBOT_MSGS__MSG__DETAIL__GUIDE_ROUTE__STRUCT_H_
