// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ymrobot_msgs:srv/DotPoint.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ymrobot_msgs/srv/dot_point.h"


#ifndef YMROBOT_MSGS__SRV__DETAIL__DOT_POINT__STRUCT_H_
#define YMROBOT_MSGS__SRV__DETAIL__DOT_POINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'dot_point'
#include "ymrobot_msgs/msg/detail/dot_points__struct.h"

/// Struct defined in srv/DotPoint in the package ymrobot_msgs.
typedef struct ymrobot_msgs__srv__DotPoint_Request
{
  ymrobot_msgs__msg__DotPoints dot_point;
} ymrobot_msgs__srv__DotPoint_Request;

// Struct for a sequence of ymrobot_msgs__srv__DotPoint_Request.
typedef struct ymrobot_msgs__srv__DotPoint_Request__Sequence
{
  ymrobot_msgs__srv__DotPoint_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ymrobot_msgs__srv__DotPoint_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/DotPoint in the package ymrobot_msgs.
typedef struct ymrobot_msgs__srv__DotPoint_Response
{
  bool success;
  rosidl_runtime_c__String message;
} ymrobot_msgs__srv__DotPoint_Response;

// Struct for a sequence of ymrobot_msgs__srv__DotPoint_Response.
typedef struct ymrobot_msgs__srv__DotPoint_Response__Sequence
{
  ymrobot_msgs__srv__DotPoint_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ymrobot_msgs__srv__DotPoint_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  ymrobot_msgs__srv__DotPoint_Event__request__MAX_SIZE = 1
};
// response
enum
{
  ymrobot_msgs__srv__DotPoint_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/DotPoint in the package ymrobot_msgs.
typedef struct ymrobot_msgs__srv__DotPoint_Event
{
  service_msgs__msg__ServiceEventInfo info;
  ymrobot_msgs__srv__DotPoint_Request__Sequence request;
  ymrobot_msgs__srv__DotPoint_Response__Sequence response;
} ymrobot_msgs__srv__DotPoint_Event;

// Struct for a sequence of ymrobot_msgs__srv__DotPoint_Event.
typedef struct ymrobot_msgs__srv__DotPoint_Event__Sequence
{
  ymrobot_msgs__srv__DotPoint_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ymrobot_msgs__srv__DotPoint_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // YMROBOT_MSGS__SRV__DETAIL__DOT_POINT__STRUCT_H_
