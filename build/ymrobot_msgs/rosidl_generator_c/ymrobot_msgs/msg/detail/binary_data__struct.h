// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ymrobot_msgs:msg/BinaryData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ymrobot_msgs/msg/binary_data.h"


#ifndef YMROBOT_MSGS__MSG__DETAIL__BINARY_DATA__STRUCT_H_
#define YMROBOT_MSGS__MSG__DETAIL__BINARY_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'file_format'
#include "rosidl_runtime_c/string.h"
// Member 'binary_data'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/BinaryData in the package ymrobot_msgs.
typedef struct ymrobot_msgs__msg__BinaryData
{
  rosidl_runtime_c__String file_format;
  rosidl_runtime_c__uint8__Sequence binary_data;
} ymrobot_msgs__msg__BinaryData;

// Struct for a sequence of ymrobot_msgs__msg__BinaryData.
typedef struct ymrobot_msgs__msg__BinaryData__Sequence
{
  ymrobot_msgs__msg__BinaryData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ymrobot_msgs__msg__BinaryData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // YMROBOT_MSGS__MSG__DETAIL__BINARY_DATA__STRUCT_H_
