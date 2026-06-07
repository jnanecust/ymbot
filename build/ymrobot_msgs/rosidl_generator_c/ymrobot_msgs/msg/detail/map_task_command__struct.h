// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ymrobot_msgs:msg/MapTaskCommand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ymrobot_msgs/msg/map_task_command.h"


#ifndef YMROBOT_MSGS__MSG__DETAIL__MAP_TASK_COMMAND__STRUCT_H_
#define YMROBOT_MSGS__MSG__DETAIL__MAP_TASK_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'NONE'.
/**
  * 0x00
 */
enum
{
  ymrobot_msgs__msg__MapTaskCommand__NONE = 0
};

/// Constant 'PCD2PGM'.
/**
  * 0x01
 */
enum
{
  ymrobot_msgs__msg__MapTaskCommand__PCD2PGM = 1
};

/// Constant 'LOAD_MAP'.
/**
  * 0x02
 */
enum
{
  ymrobot_msgs__msg__MapTaskCommand__LOAD_MAP = 2
};

/// Struct defined in msg/MapTaskCommand in the package ymrobot_msgs.
typedef struct ymrobot_msgs__msg__MapTaskCommand
{
  uint8_t code;
} ymrobot_msgs__msg__MapTaskCommand;

// Struct for a sequence of ymrobot_msgs__msg__MapTaskCommand.
typedef struct ymrobot_msgs__msg__MapTaskCommand__Sequence
{
  ymrobot_msgs__msg__MapTaskCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ymrobot_msgs__msg__MapTaskCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // YMROBOT_MSGS__MSG__DETAIL__MAP_TASK_COMMAND__STRUCT_H_
