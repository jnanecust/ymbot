// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ymrobot_msgs:srv/SystemGuidance.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ymrobot_msgs/srv/system_guidance.h"


#ifndef YMROBOT_MSGS__SRV__DETAIL__SYSTEM_GUIDANCE__STRUCT_H_
#define YMROBOT_MSGS__SRV__DETAIL__SYSTEM_GUIDANCE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/SystemGuidance in the package ymrobot_msgs.
typedef struct ymrobot_msgs__srv__SystemGuidance_Request
{
  /// 重启类似  0:关机 1:断电重启 2:软件重启
  uint8_t reboot_type;
} ymrobot_msgs__srv__SystemGuidance_Request;

// Struct for a sequence of ymrobot_msgs__srv__SystemGuidance_Request.
typedef struct ymrobot_msgs__srv__SystemGuidance_Request__Sequence
{
  ymrobot_msgs__srv__SystemGuidance_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ymrobot_msgs__srv__SystemGuidance_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SystemGuidance in the package ymrobot_msgs.
typedef struct ymrobot_msgs__srv__SystemGuidance_Response
{
  bool success;
  rosidl_runtime_c__String message;
} ymrobot_msgs__srv__SystemGuidance_Response;

// Struct for a sequence of ymrobot_msgs__srv__SystemGuidance_Response.
typedef struct ymrobot_msgs__srv__SystemGuidance_Response__Sequence
{
  ymrobot_msgs__srv__SystemGuidance_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ymrobot_msgs__srv__SystemGuidance_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  ymrobot_msgs__srv__SystemGuidance_Event__request__MAX_SIZE = 1
};
// response
enum
{
  ymrobot_msgs__srv__SystemGuidance_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/SystemGuidance in the package ymrobot_msgs.
typedef struct ymrobot_msgs__srv__SystemGuidance_Event
{
  service_msgs__msg__ServiceEventInfo info;
  ymrobot_msgs__srv__SystemGuidance_Request__Sequence request;
  ymrobot_msgs__srv__SystemGuidance_Response__Sequence response;
} ymrobot_msgs__srv__SystemGuidance_Event;

// Struct for a sequence of ymrobot_msgs__srv__SystemGuidance_Event.
typedef struct ymrobot_msgs__srv__SystemGuidance_Event__Sequence
{
  ymrobot_msgs__srv__SystemGuidance_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ymrobot_msgs__srv__SystemGuidance_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // YMROBOT_MSGS__SRV__DETAIL__SYSTEM_GUIDANCE__STRUCT_H_
