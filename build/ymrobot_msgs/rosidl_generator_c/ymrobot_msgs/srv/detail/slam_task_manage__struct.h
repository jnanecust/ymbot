// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ymrobot_msgs:srv/SlamTaskManage.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ymrobot_msgs/srv/slam_task_manage.h"


#ifndef YMROBOT_MSGS__SRV__DETAIL__SLAM_TASK_MANAGE__STRUCT_H_
#define YMROBOT_MSGS__SRV__DETAIL__SLAM_TASK_MANAGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'task'
// Member 'action'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SlamTaskManage in the package ymrobot_msgs.
typedef struct ymrobot_msgs__srv__SlamTaskManage_Request
{
  rosidl_runtime_c__String task;
  rosidl_runtime_c__String action;
} ymrobot_msgs__srv__SlamTaskManage_Request;

// Struct for a sequence of ymrobot_msgs__srv__SlamTaskManage_Request.
typedef struct ymrobot_msgs__srv__SlamTaskManage_Request__Sequence
{
  ymrobot_msgs__srv__SlamTaskManage_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ymrobot_msgs__srv__SlamTaskManage_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SlamTaskManage in the package ymrobot_msgs.
typedef struct ymrobot_msgs__srv__SlamTaskManage_Response
{
  bool success;
  rosidl_runtime_c__String message;
} ymrobot_msgs__srv__SlamTaskManage_Response;

// Struct for a sequence of ymrobot_msgs__srv__SlamTaskManage_Response.
typedef struct ymrobot_msgs__srv__SlamTaskManage_Response__Sequence
{
  ymrobot_msgs__srv__SlamTaskManage_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ymrobot_msgs__srv__SlamTaskManage_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  ymrobot_msgs__srv__SlamTaskManage_Event__request__MAX_SIZE = 1
};
// response
enum
{
  ymrobot_msgs__srv__SlamTaskManage_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/SlamTaskManage in the package ymrobot_msgs.
typedef struct ymrobot_msgs__srv__SlamTaskManage_Event
{
  service_msgs__msg__ServiceEventInfo info;
  ymrobot_msgs__srv__SlamTaskManage_Request__Sequence request;
  ymrobot_msgs__srv__SlamTaskManage_Response__Sequence response;
} ymrobot_msgs__srv__SlamTaskManage_Event;

// Struct for a sequence of ymrobot_msgs__srv__SlamTaskManage_Event.
typedef struct ymrobot_msgs__srv__SlamTaskManage_Event__Sequence
{
  ymrobot_msgs__srv__SlamTaskManage_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ymrobot_msgs__srv__SlamTaskManage_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // YMROBOT_MSGS__SRV__DETAIL__SLAM_TASK_MANAGE__STRUCT_H_
