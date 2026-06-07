// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ymrobot_msgs:msg/LedShow.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ymrobot_msgs/msg/led_show.h"


#ifndef YMROBOT_MSGS__MSG__DETAIL__LED_SHOW__STRUCT_H_
#define YMROBOT_MSGS__MSG__DETAIL__LED_SHOW__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/LedShow in the package ymrobot_msgs.
typedef struct ymrobot_msgs__msg__LedShow
{
  /// 亮度
  uint8_t luminance;
  uint8_t color_r;
  uint8_t color_g;
  uint8_t color_b;
} ymrobot_msgs__msg__LedShow;

// Struct for a sequence of ymrobot_msgs__msg__LedShow.
typedef struct ymrobot_msgs__msg__LedShow__Sequence
{
  ymrobot_msgs__msg__LedShow * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ymrobot_msgs__msg__LedShow__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // YMROBOT_MSGS__MSG__DETAIL__LED_SHOW__STRUCT_H_
