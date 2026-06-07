// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ymrobot_msgs:action/PoseManager.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ymrobot_msgs/action/pose_manager.h"


#ifndef YMROBOT_MSGS__ACTION__DETAIL__POSE_MANAGER__STRUCT_H_
#define YMROBOT_MSGS__ACTION__DETAIL__POSE_MANAGER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'pose_name'
// Member 'map_name'
// Member 'pose_manager_type'
// Member 'pose_describe'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/PoseManager in the package ymrobot_msgs.
typedef struct ymrobot_msgs__action__PoseManager_Goal
{
  rosidl_runtime_c__String pose_name;
  rosidl_runtime_c__String map_name;
  rosidl_runtime_c__String pose_manager_type;
  rosidl_runtime_c__String pose_describe;
} ymrobot_msgs__action__PoseManager_Goal;

// Struct for a sequence of ymrobot_msgs__action__PoseManager_Goal.
typedef struct ymrobot_msgs__action__PoseManager_Goal__Sequence
{
  ymrobot_msgs__action__PoseManager_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ymrobot_msgs__action__PoseManager_Goal__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/PoseManager in the package ymrobot_msgs.
typedef struct ymrobot_msgs__action__PoseManager_Result
{
  bool success;
  rosidl_runtime_c__String message;
} ymrobot_msgs__action__PoseManager_Result;

// Struct for a sequence of ymrobot_msgs__action__PoseManager_Result.
typedef struct ymrobot_msgs__action__PoseManager_Result__Sequence
{
  ymrobot_msgs__action__PoseManager_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ymrobot_msgs__action__PoseManager_Result__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/PoseManager in the package ymrobot_msgs.
typedef struct ymrobot_msgs__action__PoseManager_Feedback
{
  rosidl_runtime_c__String message;
  bool status;
} ymrobot_msgs__action__PoseManager_Feedback;

// Struct for a sequence of ymrobot_msgs__action__PoseManager_Feedback.
typedef struct ymrobot_msgs__action__PoseManager_Feedback__Sequence
{
  ymrobot_msgs__action__PoseManager_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ymrobot_msgs__action__PoseManager_Feedback__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "ymrobot_msgs/action/detail/pose_manager__struct.h"

/// Struct defined in action/PoseManager in the package ymrobot_msgs.
typedef struct ymrobot_msgs__action__PoseManager_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  ymrobot_msgs__action__PoseManager_Goal goal;
} ymrobot_msgs__action__PoseManager_SendGoal_Request;

// Struct for a sequence of ymrobot_msgs__action__PoseManager_SendGoal_Request.
typedef struct ymrobot_msgs__action__PoseManager_SendGoal_Request__Sequence
{
  ymrobot_msgs__action__PoseManager_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ymrobot_msgs__action__PoseManager_SendGoal_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/PoseManager in the package ymrobot_msgs.
typedef struct ymrobot_msgs__action__PoseManager_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} ymrobot_msgs__action__PoseManager_SendGoal_Response;

// Struct for a sequence of ymrobot_msgs__action__PoseManager_SendGoal_Response.
typedef struct ymrobot_msgs__action__PoseManager_SendGoal_Response__Sequence
{
  ymrobot_msgs__action__PoseManager_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ymrobot_msgs__action__PoseManager_SendGoal_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  ymrobot_msgs__action__PoseManager_SendGoal_Event__request__MAX_SIZE = 1
};
// response
enum
{
  ymrobot_msgs__action__PoseManager_SendGoal_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/PoseManager in the package ymrobot_msgs.
typedef struct ymrobot_msgs__action__PoseManager_SendGoal_Event
{
  service_msgs__msg__ServiceEventInfo info;
  ymrobot_msgs__action__PoseManager_SendGoal_Request__Sequence request;
  ymrobot_msgs__action__PoseManager_SendGoal_Response__Sequence response;
} ymrobot_msgs__action__PoseManager_SendGoal_Event;

// Struct for a sequence of ymrobot_msgs__action__PoseManager_SendGoal_Event.
typedef struct ymrobot_msgs__action__PoseManager_SendGoal_Event__Sequence
{
  ymrobot_msgs__action__PoseManager_SendGoal_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ymrobot_msgs__action__PoseManager_SendGoal_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/PoseManager in the package ymrobot_msgs.
typedef struct ymrobot_msgs__action__PoseManager_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} ymrobot_msgs__action__PoseManager_GetResult_Request;

// Struct for a sequence of ymrobot_msgs__action__PoseManager_GetResult_Request.
typedef struct ymrobot_msgs__action__PoseManager_GetResult_Request__Sequence
{
  ymrobot_msgs__action__PoseManager_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ymrobot_msgs__action__PoseManager_GetResult_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "ymrobot_msgs/action/detail/pose_manager__struct.h"

/// Struct defined in action/PoseManager in the package ymrobot_msgs.
typedef struct ymrobot_msgs__action__PoseManager_GetResult_Response
{
  int8_t status;
  ymrobot_msgs__action__PoseManager_Result result;
} ymrobot_msgs__action__PoseManager_GetResult_Response;

// Struct for a sequence of ymrobot_msgs__action__PoseManager_GetResult_Response.
typedef struct ymrobot_msgs__action__PoseManager_GetResult_Response__Sequence
{
  ymrobot_msgs__action__PoseManager_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ymrobot_msgs__action__PoseManager_GetResult_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  ymrobot_msgs__action__PoseManager_GetResult_Event__request__MAX_SIZE = 1
};
// response
enum
{
  ymrobot_msgs__action__PoseManager_GetResult_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/PoseManager in the package ymrobot_msgs.
typedef struct ymrobot_msgs__action__PoseManager_GetResult_Event
{
  service_msgs__msg__ServiceEventInfo info;
  ymrobot_msgs__action__PoseManager_GetResult_Request__Sequence request;
  ymrobot_msgs__action__PoseManager_GetResult_Response__Sequence response;
} ymrobot_msgs__action__PoseManager_GetResult_Event;

// Struct for a sequence of ymrobot_msgs__action__PoseManager_GetResult_Event.
typedef struct ymrobot_msgs__action__PoseManager_GetResult_Event__Sequence
{
  ymrobot_msgs__action__PoseManager_GetResult_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ymrobot_msgs__action__PoseManager_GetResult_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "ymrobot_msgs/action/detail/pose_manager__struct.h"

/// Struct defined in action/PoseManager in the package ymrobot_msgs.
typedef struct ymrobot_msgs__action__PoseManager_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  ymrobot_msgs__action__PoseManager_Feedback feedback;
} ymrobot_msgs__action__PoseManager_FeedbackMessage;

// Struct for a sequence of ymrobot_msgs__action__PoseManager_FeedbackMessage.
typedef struct ymrobot_msgs__action__PoseManager_FeedbackMessage__Sequence
{
  ymrobot_msgs__action__PoseManager_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ymrobot_msgs__action__PoseManager_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // YMROBOT_MSGS__ACTION__DETAIL__POSE_MANAGER__STRUCT_H_
