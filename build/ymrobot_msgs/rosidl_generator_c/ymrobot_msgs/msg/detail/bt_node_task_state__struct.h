// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ymrobot_msgs:msg/BTNodeTaskState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ymrobot_msgs/msg/bt_node_task_state.h"


#ifndef YMROBOT_MSGS__MSG__DETAIL__BT_NODE_TASK_STATE__STRUCT_H_
#define YMROBOT_MSGS__MSG__DETAIL__BT_NODE_TASK_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'task_id'
// Member 'task_type'
// Member 'node_name'
// Member 'node_task_state'
// Member 'node_task_error'
// Member 'node_task_error_message'
// Member 'node_action_content'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/BTNodeTaskState in the package ymrobot_msgs.
/**
  * BTNodeState.msg
 */
typedef struct ymrobot_msgs__msg__BTNodeTaskState
{
  /// 任务类型 -- 1. guide_explanation 类似行为树的任务类型
  rosidl_runtime_c__String task_id;
  /// 任务类型 -- 1. guide_explanation 类似行为树的任务类型
  rosidl_runtime_c__String task_type;
  /// 节点名称 导航、语音播报、拍照、录像
  rosidl_runtime_c__String node_name;
  /// started, successed, failure, running
  rosidl_runtime_c__String node_task_state;
  /// 错误代码
  rosidl_runtime_c__String node_task_error;
  /// 错误描述
  rosidl_runtime_c__String node_task_error_message;
  /// 动作内容
  rosidl_runtime_c__String node_action_content;
} ymrobot_msgs__msg__BTNodeTaskState;

// Struct for a sequence of ymrobot_msgs__msg__BTNodeTaskState.
typedef struct ymrobot_msgs__msg__BTNodeTaskState__Sequence
{
  ymrobot_msgs__msg__BTNodeTaskState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ymrobot_msgs__msg__BTNodeTaskState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // YMROBOT_MSGS__MSG__DETAIL__BT_NODE_TASK_STATE__STRUCT_H_
