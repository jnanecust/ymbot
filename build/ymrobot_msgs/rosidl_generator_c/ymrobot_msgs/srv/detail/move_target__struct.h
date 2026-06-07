// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ymrobot_msgs:srv/MoveTarget.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ymrobot_msgs/srv/move_target.h"


#ifndef YMROBOT_MSGS__SRV__DETAIL__MOVE_TARGET__STRUCT_H_
#define YMROBOT_MSGS__SRV__DETAIL__MOVE_TARGET__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'target_pose'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/MoveTarget in the package ymrobot_msgs.
typedef struct ymrobot_msgs__srv__MoveTarget_Request
{
  /// 目标点位
  rosidl_runtime_c__String target_pose;
} ymrobot_msgs__srv__MoveTarget_Request;

// Struct for a sequence of ymrobot_msgs__srv__MoveTarget_Request.
typedef struct ymrobot_msgs__srv__MoveTarget_Request__Sequence
{
  ymrobot_msgs__srv__MoveTarget_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ymrobot_msgs__srv__MoveTarget_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/MoveTarget in the package ymrobot_msgs.
typedef struct ymrobot_msgs__srv__MoveTarget_Response
{
  /// 是否成功
  bool success;
  /// 消息反馈  --失败原因 成功了 啥的........
  rosidl_runtime_c__String message;
} ymrobot_msgs__srv__MoveTarget_Response;

// Struct for a sequence of ymrobot_msgs__srv__MoveTarget_Response.
typedef struct ymrobot_msgs__srv__MoveTarget_Response__Sequence
{
  ymrobot_msgs__srv__MoveTarget_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ymrobot_msgs__srv__MoveTarget_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  ymrobot_msgs__srv__MoveTarget_Event__request__MAX_SIZE = 1
};
// response
enum
{
  ymrobot_msgs__srv__MoveTarget_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/MoveTarget in the package ymrobot_msgs.
typedef struct ymrobot_msgs__srv__MoveTarget_Event
{
  service_msgs__msg__ServiceEventInfo info;
  ymrobot_msgs__srv__MoveTarget_Request__Sequence request;
  ymrobot_msgs__srv__MoveTarget_Response__Sequence response;
} ymrobot_msgs__srv__MoveTarget_Event;

// Struct for a sequence of ymrobot_msgs__srv__MoveTarget_Event.
typedef struct ymrobot_msgs__srv__MoveTarget_Event__Sequence
{
  ymrobot_msgs__srv__MoveTarget_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ymrobot_msgs__srv__MoveTarget_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // YMROBOT_MSGS__SRV__DETAIL__MOVE_TARGET__STRUCT_H_
