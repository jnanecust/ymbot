// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ymrobot_msgs:msg/NavPoint.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ymrobot_msgs/msg/nav_point.h"


#ifndef YMROBOT_MSGS__MSG__DETAIL__NAV_POINT__STRUCT_H_
#define YMROBOT_MSGS__MSG__DETAIL__NAV_POINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'position'
#include "geometry_msgs/msg/detail/pose_stamped__struct.h"
// Member 'nav_name'
// Member 'nav_map_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/NavPoint in the package ymrobot_msgs.
/**
  * Navigation points
 */
typedef struct ymrobot_msgs__msg__NavPoint
{
  uint32_t seq;
  geometry_msgs__msg__PoseStamped position;
  rosidl_runtime_c__String nav_name;
  rosidl_runtime_c__String nav_map_name;
  uint8_t map_index;
} ymrobot_msgs__msg__NavPoint;

// Struct for a sequence of ymrobot_msgs__msg__NavPoint.
typedef struct ymrobot_msgs__msg__NavPoint__Sequence
{
  ymrobot_msgs__msg__NavPoint * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ymrobot_msgs__msg__NavPoint__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // YMROBOT_MSGS__MSG__DETAIL__NAV_POINT__STRUCT_H_
