// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ymrobot_msgs:srv/LargeModelRequestTask.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ymrobot_msgs/srv/large_model_request_task.h"


#ifndef YMROBOT_MSGS__SRV__DETAIL__LARGE_MODEL_REQUEST_TASK__STRUCT_H_
#define YMROBOT_MSGS__SRV__DETAIL__LARGE_MODEL_REQUEST_TASK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'mark_point_name'
// Member 'mark_point_name_list'
// Member 'guidance_task_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/LargeModelRequestTask in the package ymrobot_msgs.
typedef struct ymrobot_msgs__srv__LargeModelRequestTask_Request
{
  /// 请求任务类型 0：导航到某个标记点  1：多点导航  2：导览任务  3: 上肢任务
  uint8_t larget_mode_task_type;
  /// 标记点位名称  --- 用于单点导航
  rosidl_runtime_c__String mark_point_name;
  /// 多点导航
  rosidl_runtime_c__String__Sequence mark_point_name_list;
  /// 导览任务名称
  rosidl_runtime_c__String guidance_task_name;
  /// 上肢固定动作码
  uint8_t upper_climb_fixed_action;
} ymrobot_msgs__srv__LargeModelRequestTask_Request;

// Struct for a sequence of ymrobot_msgs__srv__LargeModelRequestTask_Request.
typedef struct ymrobot_msgs__srv__LargeModelRequestTask_Request__Sequence
{
  ymrobot_msgs__srv__LargeModelRequestTask_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ymrobot_msgs__srv__LargeModelRequestTask_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/LargeModelRequestTask in the package ymrobot_msgs.
typedef struct ymrobot_msgs__srv__LargeModelRequestTask_Response
{
  /// 是否成功
  bool success;
  /// 错误码    0 -- 任务失败  1--当前有任务在执行中  2--当前机器在充电  3--当前机器人出现故障  4--当前机器在升级中
  uint8_t error_code;
  /// 消息反馈 -- 失败原因 成功了 啥的......
  rosidl_runtime_c__String message;
} ymrobot_msgs__srv__LargeModelRequestTask_Response;

// Struct for a sequence of ymrobot_msgs__srv__LargeModelRequestTask_Response.
typedef struct ymrobot_msgs__srv__LargeModelRequestTask_Response__Sequence
{
  ymrobot_msgs__srv__LargeModelRequestTask_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ymrobot_msgs__srv__LargeModelRequestTask_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  ymrobot_msgs__srv__LargeModelRequestTask_Event__request__MAX_SIZE = 1
};
// response
enum
{
  ymrobot_msgs__srv__LargeModelRequestTask_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/LargeModelRequestTask in the package ymrobot_msgs.
typedef struct ymrobot_msgs__srv__LargeModelRequestTask_Event
{
  service_msgs__msg__ServiceEventInfo info;
  ymrobot_msgs__srv__LargeModelRequestTask_Request__Sequence request;
  ymrobot_msgs__srv__LargeModelRequestTask_Response__Sequence response;
} ymrobot_msgs__srv__LargeModelRequestTask_Event;

// Struct for a sequence of ymrobot_msgs__srv__LargeModelRequestTask_Event.
typedef struct ymrobot_msgs__srv__LargeModelRequestTask_Event__Sequence
{
  ymrobot_msgs__srv__LargeModelRequestTask_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ymrobot_msgs__srv__LargeModelRequestTask_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // YMROBOT_MSGS__SRV__DETAIL__LARGE_MODEL_REQUEST_TASK__STRUCT_H_
