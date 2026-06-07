// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ymrobot_msgs:msg/Task.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ymrobot_msgs/msg/task.h"


#ifndef YMROBOT_MSGS__MSG__DETAIL__TASK__STRUCT_H_
#define YMROBOT_MSGS__MSG__DETAIL__TASK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'REG'.
/**
  * 注册任务
 */
enum
{
  ymrobot_msgs__msg__Task__REG = 0
};

/// Constant 'TASK_GUIDANCE'.
/**
  * 任务管理
 */
enum
{
  ymrobot_msgs__msg__Task__TASK_GUIDANCE = 1
};

/// Constant 'BT_TASK'.
/**
  * 行为树任务
 */
enum
{
  ymrobot_msgs__msg__Task__BT_TASK = 2
};

/// Constant 'CHSSIS'.
/**
  * 底盘导航任务（自研）
 */
enum
{
  ymrobot_msgs__msg__Task__CHSSIS = 3
};

/// Constant 'CLOUD_CHASSIS'.
/**
  * 云迹底盘导航任务
 */
enum
{
  ymrobot_msgs__msg__Task__CLOUD_CHASSIS = 4
};

/// Constant 'UP_LIMB'.
/**
  * 上肢任务
 */
enum
{
  ymrobot_msgs__msg__Task__UP_LIMB = 5
};

/// Constant 'VIDEO_IMAGE'.
/**
  * 视频图像任务
 */
enum
{
  ymrobot_msgs__msg__Task__VIDEO_IMAGE = 6
};

/// Constant 'VOICE'.
/**
  * 语音任务
 */
enum
{
  ymrobot_msgs__msg__Task__VOICE = 7
};

/// Constant 'EMOJI_TASK'.
/**
  * 表情任务
 */
enum
{
  ymrobot_msgs__msg__Task__EMOJI_TASK = 8
};

/// Constant 'SYSTEM_MANAGEMENT'.
/**
  * 系统管理
 */
enum
{
  ymrobot_msgs__msg__Task__SYSTEM_MANAGEMENT = 9
};

/// Constant 'MOVE_CONTROL'.
/**
  * 移动控制
 */
enum
{
  ymrobot_msgs__msg__Task__MOVE_CONTROL = 10
};

// Include directives for member types
// Member 'platform_id'
// Member 'amr_id'
// Member 'task_id'
// Member 'behavior_tree'
// Member 'index'
#include "rosidl_runtime_c/string.h"
// Member 'nav_points'
#include "ymrobot_msgs/msg/detail/nav_point__struct.h"
// Member 'commands'
#include "ymrobot_msgs/msg/detail/command__struct.h"
// Member 'binary_file'
#include "ymrobot_msgs/msg/detail/binary_data__struct.h"

/// Struct defined in msg/Task in the package ymrobot_msgs.
/**
  * Task type constants
 */
typedef struct ymrobot_msgs__msg__Task
{
  rosidl_runtime_c__String platform_id;
  rosidl_runtime_c__String amr_id;
  rosidl_runtime_c__String task_id;
  uint8_t task_type;
  uint8_t control_mode;
  ymrobot_msgs__msg__NavPoint__Sequence nav_points;
  ymrobot_msgs__msg__Command__Sequence commands;
  /// behavior tree, either .xml files or texts
  rosidl_runtime_c__String behavior_tree;
  /// force reload of behavior tree
  bool reload;
  rosidl_runtime_c__String index;
  ymrobot_msgs__msg__BinaryData binary_file;
} ymrobot_msgs__msg__Task;

// Struct for a sequence of ymrobot_msgs__msg__Task.
typedef struct ymrobot_msgs__msg__Task__Sequence
{
  ymrobot_msgs__msg__Task * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ymrobot_msgs__msg__Task__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // YMROBOT_MSGS__MSG__DETAIL__TASK__STRUCT_H_
