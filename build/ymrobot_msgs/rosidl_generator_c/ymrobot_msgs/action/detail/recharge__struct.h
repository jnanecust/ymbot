// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ymrobot_msgs:action/Recharge.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ymrobot_msgs/action/recharge.h"


#ifndef YMROBOT_MSGS__ACTION__DETAIL__RECHARGE__STRUCT_H_
#define YMROBOT_MSGS__ACTION__DETAIL__RECHARGE__STRUCT_H_

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
#include "geometry_msgs/msg/detail/pose_stamped__struct.h"

/// Struct defined in action/Recharge in the package ymrobot_msgs.
typedef struct ymrobot_msgs__action__Recharge_Goal
{
  geometry_msgs__msg__PoseStamped target_pose;
} ymrobot_msgs__action__Recharge_Goal;

// Struct for a sequence of ymrobot_msgs__action__Recharge_Goal.
typedef struct ymrobot_msgs__action__Recharge_Goal__Sequence
{
  ymrobot_msgs__action__Recharge_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ymrobot_msgs__action__Recharge_Goal__Sequence;

// Constants defined in the message

/// Struct defined in action/Recharge in the package ymrobot_msgs.
typedef struct ymrobot_msgs__action__Recharge_Result
{
  bool success;
  float remaining_distance;
  float remaining_time;
} ymrobot_msgs__action__Recharge_Result;

// Struct for a sequence of ymrobot_msgs__action__Recharge_Result.
typedef struct ymrobot_msgs__action__Recharge_Result__Sequence
{
  ymrobot_msgs__action__Recharge_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ymrobot_msgs__action__Recharge_Result__Sequence;

// Constants defined in the message

/// Constant 'STATUS_SUCCESS'.
enum
{
  ymrobot_msgs__action__Recharge_Feedback__STATUS_SUCCESS = 1
};

/// Constant 'STATUS_ERROR'.
enum
{
  ymrobot_msgs__action__Recharge_Feedback__STATUS_ERROR = 2
};

/// Constant 'STATUS_MOVEING'.
enum
{
  ymrobot_msgs__action__Recharge_Feedback__STATUS_MOVEING = 3
};

/// Constant 'STATUS_STOP'.
enum
{
  ymrobot_msgs__action__Recharge_Feedback__STATUS_STOP = 4
};

/// Struct defined in action/Recharge in the package ymrobot_msgs.
typedef struct ymrobot_msgs__action__Recharge_Feedback
{
  float remaining_distance;
  float remaining_time;
  uint8_t status;
} ymrobot_msgs__action__Recharge_Feedback;

// Struct for a sequence of ymrobot_msgs__action__Recharge_Feedback.
typedef struct ymrobot_msgs__action__Recharge_Feedback__Sequence
{
  ymrobot_msgs__action__Recharge_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ymrobot_msgs__action__Recharge_Feedback__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "ymrobot_msgs/action/detail/recharge__struct.h"

/// Struct defined in action/Recharge in the package ymrobot_msgs.
typedef struct ymrobot_msgs__action__Recharge_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  ymrobot_msgs__action__Recharge_Goal goal;
} ymrobot_msgs__action__Recharge_SendGoal_Request;

// Struct for a sequence of ymrobot_msgs__action__Recharge_SendGoal_Request.
typedef struct ymrobot_msgs__action__Recharge_SendGoal_Request__Sequence
{
  ymrobot_msgs__action__Recharge_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ymrobot_msgs__action__Recharge_SendGoal_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/Recharge in the package ymrobot_msgs.
typedef struct ymrobot_msgs__action__Recharge_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} ymrobot_msgs__action__Recharge_SendGoal_Response;

// Struct for a sequence of ymrobot_msgs__action__Recharge_SendGoal_Response.
typedef struct ymrobot_msgs__action__Recharge_SendGoal_Response__Sequence
{
  ymrobot_msgs__action__Recharge_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ymrobot_msgs__action__Recharge_SendGoal_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  ymrobot_msgs__action__Recharge_SendGoal_Event__request__MAX_SIZE = 1
};
// response
enum
{
  ymrobot_msgs__action__Recharge_SendGoal_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/Recharge in the package ymrobot_msgs.
typedef struct ymrobot_msgs__action__Recharge_SendGoal_Event
{
  service_msgs__msg__ServiceEventInfo info;
  ymrobot_msgs__action__Recharge_SendGoal_Request__Sequence request;
  ymrobot_msgs__action__Recharge_SendGoal_Response__Sequence response;
} ymrobot_msgs__action__Recharge_SendGoal_Event;

// Struct for a sequence of ymrobot_msgs__action__Recharge_SendGoal_Event.
typedef struct ymrobot_msgs__action__Recharge_SendGoal_Event__Sequence
{
  ymrobot_msgs__action__Recharge_SendGoal_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ymrobot_msgs__action__Recharge_SendGoal_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/Recharge in the package ymrobot_msgs.
typedef struct ymrobot_msgs__action__Recharge_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} ymrobot_msgs__action__Recharge_GetResult_Request;

// Struct for a sequence of ymrobot_msgs__action__Recharge_GetResult_Request.
typedef struct ymrobot_msgs__action__Recharge_GetResult_Request__Sequence
{
  ymrobot_msgs__action__Recharge_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ymrobot_msgs__action__Recharge_GetResult_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "ymrobot_msgs/action/detail/recharge__struct.h"

/// Struct defined in action/Recharge in the package ymrobot_msgs.
typedef struct ymrobot_msgs__action__Recharge_GetResult_Response
{
  int8_t status;
  ymrobot_msgs__action__Recharge_Result result;
} ymrobot_msgs__action__Recharge_GetResult_Response;

// Struct for a sequence of ymrobot_msgs__action__Recharge_GetResult_Response.
typedef struct ymrobot_msgs__action__Recharge_GetResult_Response__Sequence
{
  ymrobot_msgs__action__Recharge_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ymrobot_msgs__action__Recharge_GetResult_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  ymrobot_msgs__action__Recharge_GetResult_Event__request__MAX_SIZE = 1
};
// response
enum
{
  ymrobot_msgs__action__Recharge_GetResult_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/Recharge in the package ymrobot_msgs.
typedef struct ymrobot_msgs__action__Recharge_GetResult_Event
{
  service_msgs__msg__ServiceEventInfo info;
  ymrobot_msgs__action__Recharge_GetResult_Request__Sequence request;
  ymrobot_msgs__action__Recharge_GetResult_Response__Sequence response;
} ymrobot_msgs__action__Recharge_GetResult_Event;

// Struct for a sequence of ymrobot_msgs__action__Recharge_GetResult_Event.
typedef struct ymrobot_msgs__action__Recharge_GetResult_Event__Sequence
{
  ymrobot_msgs__action__Recharge_GetResult_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ymrobot_msgs__action__Recharge_GetResult_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "ymrobot_msgs/action/detail/recharge__struct.h"

/// Struct defined in action/Recharge in the package ymrobot_msgs.
typedef struct ymrobot_msgs__action__Recharge_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  ymrobot_msgs__action__Recharge_Feedback feedback;
} ymrobot_msgs__action__Recharge_FeedbackMessage;

// Struct for a sequence of ymrobot_msgs__action__Recharge_FeedbackMessage.
typedef struct ymrobot_msgs__action__Recharge_FeedbackMessage__Sequence
{
  ymrobot_msgs__action__Recharge_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ymrobot_msgs__action__Recharge_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // YMROBOT_MSGS__ACTION__DETAIL__RECHARGE__STRUCT_H_
