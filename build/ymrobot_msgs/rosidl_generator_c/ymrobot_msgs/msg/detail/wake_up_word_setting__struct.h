// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ymrobot_msgs:msg/WakeUpWordSetting.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ymrobot_msgs/msg/wake_up_word_setting.h"


#ifndef YMROBOT_MSGS__MSG__DETAIL__WAKE_UP_WORD_SETTING__STRUCT_H_
#define YMROBOT_MSGS__MSG__DETAIL__WAKE_UP_WORD_SETTING__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'wake_up_word'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/WakeUpWordSetting in the package ymrobot_msgs.
typedef struct ymrobot_msgs__msg__WakeUpWordSetting
{
  rosidl_runtime_c__String__Sequence wake_up_word;
} ymrobot_msgs__msg__WakeUpWordSetting;

// Struct for a sequence of ymrobot_msgs__msg__WakeUpWordSetting.
typedef struct ymrobot_msgs__msg__WakeUpWordSetting__Sequence
{
  ymrobot_msgs__msg__WakeUpWordSetting * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ymrobot_msgs__msg__WakeUpWordSetting__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // YMROBOT_MSGS__MSG__DETAIL__WAKE_UP_WORD_SETTING__STRUCT_H_
