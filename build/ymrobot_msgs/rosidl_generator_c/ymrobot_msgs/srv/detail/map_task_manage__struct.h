// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ymrobot_msgs:srv/MapTaskManage.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ymrobot_msgs/srv/map_task_manage.h"


#ifndef YMROBOT_MSGS__SRV__DETAIL__MAP_TASK_MANAGE__STRUCT_H_
#define YMROBOT_MSGS__SRV__DETAIL__MAP_TASK_MANAGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'map_task'
#include "ymrobot_msgs/msg/detail/map_task_command__struct.h"
// Member 'map_id'
// Member 'map_name'
// Member 'pcd_name'
// Member 'pgm_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/MapTaskManage in the package ymrobot_msgs.
typedef struct ymrobot_msgs__srv__MapTaskManage_Request
{
  ymrobot_msgs__msg__MapTaskCommand map_task;
  rosidl_runtime_c__String map_id;
  rosidl_runtime_c__String map_name;
  rosidl_runtime_c__String pcd_name;
  rosidl_runtime_c__String pgm_name;
} ymrobot_msgs__srv__MapTaskManage_Request;

// Struct for a sequence of ymrobot_msgs__srv__MapTaskManage_Request.
typedef struct ymrobot_msgs__srv__MapTaskManage_Request__Sequence
{
  ymrobot_msgs__srv__MapTaskManage_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ymrobot_msgs__srv__MapTaskManage_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/MapTaskManage in the package ymrobot_msgs.
typedef struct ymrobot_msgs__srv__MapTaskManage_Response
{
  bool success;
  rosidl_runtime_c__String message;
} ymrobot_msgs__srv__MapTaskManage_Response;

// Struct for a sequence of ymrobot_msgs__srv__MapTaskManage_Response.
typedef struct ymrobot_msgs__srv__MapTaskManage_Response__Sequence
{
  ymrobot_msgs__srv__MapTaskManage_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ymrobot_msgs__srv__MapTaskManage_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  ymrobot_msgs__srv__MapTaskManage_Event__request__MAX_SIZE = 1
};
// response
enum
{
  ymrobot_msgs__srv__MapTaskManage_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/MapTaskManage in the package ymrobot_msgs.
typedef struct ymrobot_msgs__srv__MapTaskManage_Event
{
  service_msgs__msg__ServiceEventInfo info;
  ymrobot_msgs__srv__MapTaskManage_Request__Sequence request;
  ymrobot_msgs__srv__MapTaskManage_Response__Sequence response;
} ymrobot_msgs__srv__MapTaskManage_Event;

// Struct for a sequence of ymrobot_msgs__srv__MapTaskManage_Event.
typedef struct ymrobot_msgs__srv__MapTaskManage_Event__Sequence
{
  ymrobot_msgs__srv__MapTaskManage_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ymrobot_msgs__srv__MapTaskManage_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // YMROBOT_MSGS__SRV__DETAIL__MAP_TASK_MANAGE__STRUCT_H_
