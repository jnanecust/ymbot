// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ymrobot_msgs:srv/EMOJI.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ymrobot_msgs/srv/emoji.h"


#ifndef YMROBOT_MSGS__SRV__DETAIL__EMOJI__STRUCT_H_
#define YMROBOT_MSGS__SRV__DETAIL__EMOJI__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/EMOJI in the package ymrobot_msgs.
typedef struct ymrobot_msgs__srv__EMOJI_Request
{
  /// 表情任务类型 0：固定，不用管，固定是0就行。为后期表情其他功能留一个接口
  uint8_t emoji_task_type;
  /// 动作码     --- 看对应表格就行： 0--眨眼  1--眼球转动  2--微笑等等
  uint8_t action_code;
} ymrobot_msgs__srv__EMOJI_Request;

// Struct for a sequence of ymrobot_msgs__srv__EMOJI_Request.
typedef struct ymrobot_msgs__srv__EMOJI_Request__Sequence
{
  ymrobot_msgs__srv__EMOJI_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ymrobot_msgs__srv__EMOJI_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/EMOJI in the package ymrobot_msgs.
typedef struct ymrobot_msgs__srv__EMOJI_Response
{
  /// 是否成功
  bool success;
  /// 消息反馈  --失败原因 成功了 啥的........
  rosidl_runtime_c__String message;
} ymrobot_msgs__srv__EMOJI_Response;

// Struct for a sequence of ymrobot_msgs__srv__EMOJI_Response.
typedef struct ymrobot_msgs__srv__EMOJI_Response__Sequence
{
  ymrobot_msgs__srv__EMOJI_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ymrobot_msgs__srv__EMOJI_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  ymrobot_msgs__srv__EMOJI_Event__request__MAX_SIZE = 1
};
// response
enum
{
  ymrobot_msgs__srv__EMOJI_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/EMOJI in the package ymrobot_msgs.
typedef struct ymrobot_msgs__srv__EMOJI_Event
{
  service_msgs__msg__ServiceEventInfo info;
  ymrobot_msgs__srv__EMOJI_Request__Sequence request;
  ymrobot_msgs__srv__EMOJI_Response__Sequence response;
} ymrobot_msgs__srv__EMOJI_Event;

// Struct for a sequence of ymrobot_msgs__srv__EMOJI_Event.
typedef struct ymrobot_msgs__srv__EMOJI_Event__Sequence
{
  ymrobot_msgs__srv__EMOJI_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ymrobot_msgs__srv__EMOJI_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // YMROBOT_MSGS__SRV__DETAIL__EMOJI__STRUCT_H_
