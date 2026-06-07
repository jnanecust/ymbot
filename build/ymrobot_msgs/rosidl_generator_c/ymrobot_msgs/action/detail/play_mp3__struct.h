// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ymrobot_msgs:action/PlayMp3.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ymrobot_msgs/action/play_mp3.h"


#ifndef YMROBOT_MSGS__ACTION__DETAIL__PLAY_MP3__STRUCT_H_
#define YMROBOT_MSGS__ACTION__DETAIL__PLAY_MP3__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'mp3_file_path'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/PlayMp3 in the package ymrobot_msgs.
typedef struct ymrobot_msgs__action__PlayMp3_Goal
{
  rosidl_runtime_c__String mp3_file_path;
} ymrobot_msgs__action__PlayMp3_Goal;

// Struct for a sequence of ymrobot_msgs__action__PlayMp3_Goal.
typedef struct ymrobot_msgs__action__PlayMp3_Goal__Sequence
{
  ymrobot_msgs__action__PlayMp3_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ymrobot_msgs__action__PlayMp3_Goal__Sequence;

// Constants defined in the message

/// Struct defined in action/PlayMp3 in the package ymrobot_msgs.
typedef struct ymrobot_msgs__action__PlayMp3_Result
{
  bool success;
} ymrobot_msgs__action__PlayMp3_Result;

// Struct for a sequence of ymrobot_msgs__action__PlayMp3_Result.
typedef struct ymrobot_msgs__action__PlayMp3_Result__Sequence
{
  ymrobot_msgs__action__PlayMp3_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ymrobot_msgs__action__PlayMp3_Result__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'status'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/PlayMp3 in the package ymrobot_msgs.
typedef struct ymrobot_msgs__action__PlayMp3_Feedback
{
  rosidl_runtime_c__String status;
} ymrobot_msgs__action__PlayMp3_Feedback;

// Struct for a sequence of ymrobot_msgs__action__PlayMp3_Feedback.
typedef struct ymrobot_msgs__action__PlayMp3_Feedback__Sequence
{
  ymrobot_msgs__action__PlayMp3_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ymrobot_msgs__action__PlayMp3_Feedback__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "ymrobot_msgs/action/detail/play_mp3__struct.h"

/// Struct defined in action/PlayMp3 in the package ymrobot_msgs.
typedef struct ymrobot_msgs__action__PlayMp3_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  ymrobot_msgs__action__PlayMp3_Goal goal;
} ymrobot_msgs__action__PlayMp3_SendGoal_Request;

// Struct for a sequence of ymrobot_msgs__action__PlayMp3_SendGoal_Request.
typedef struct ymrobot_msgs__action__PlayMp3_SendGoal_Request__Sequence
{
  ymrobot_msgs__action__PlayMp3_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ymrobot_msgs__action__PlayMp3_SendGoal_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/PlayMp3 in the package ymrobot_msgs.
typedef struct ymrobot_msgs__action__PlayMp3_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} ymrobot_msgs__action__PlayMp3_SendGoal_Response;

// Struct for a sequence of ymrobot_msgs__action__PlayMp3_SendGoal_Response.
typedef struct ymrobot_msgs__action__PlayMp3_SendGoal_Response__Sequence
{
  ymrobot_msgs__action__PlayMp3_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ymrobot_msgs__action__PlayMp3_SendGoal_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  ymrobot_msgs__action__PlayMp3_SendGoal_Event__request__MAX_SIZE = 1
};
// response
enum
{
  ymrobot_msgs__action__PlayMp3_SendGoal_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/PlayMp3 in the package ymrobot_msgs.
typedef struct ymrobot_msgs__action__PlayMp3_SendGoal_Event
{
  service_msgs__msg__ServiceEventInfo info;
  ymrobot_msgs__action__PlayMp3_SendGoal_Request__Sequence request;
  ymrobot_msgs__action__PlayMp3_SendGoal_Response__Sequence response;
} ymrobot_msgs__action__PlayMp3_SendGoal_Event;

// Struct for a sequence of ymrobot_msgs__action__PlayMp3_SendGoal_Event.
typedef struct ymrobot_msgs__action__PlayMp3_SendGoal_Event__Sequence
{
  ymrobot_msgs__action__PlayMp3_SendGoal_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ymrobot_msgs__action__PlayMp3_SendGoal_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/PlayMp3 in the package ymrobot_msgs.
typedef struct ymrobot_msgs__action__PlayMp3_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} ymrobot_msgs__action__PlayMp3_GetResult_Request;

// Struct for a sequence of ymrobot_msgs__action__PlayMp3_GetResult_Request.
typedef struct ymrobot_msgs__action__PlayMp3_GetResult_Request__Sequence
{
  ymrobot_msgs__action__PlayMp3_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ymrobot_msgs__action__PlayMp3_GetResult_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "ymrobot_msgs/action/detail/play_mp3__struct.h"

/// Struct defined in action/PlayMp3 in the package ymrobot_msgs.
typedef struct ymrobot_msgs__action__PlayMp3_GetResult_Response
{
  int8_t status;
  ymrobot_msgs__action__PlayMp3_Result result;
} ymrobot_msgs__action__PlayMp3_GetResult_Response;

// Struct for a sequence of ymrobot_msgs__action__PlayMp3_GetResult_Response.
typedef struct ymrobot_msgs__action__PlayMp3_GetResult_Response__Sequence
{
  ymrobot_msgs__action__PlayMp3_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ymrobot_msgs__action__PlayMp3_GetResult_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  ymrobot_msgs__action__PlayMp3_GetResult_Event__request__MAX_SIZE = 1
};
// response
enum
{
  ymrobot_msgs__action__PlayMp3_GetResult_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/PlayMp3 in the package ymrobot_msgs.
typedef struct ymrobot_msgs__action__PlayMp3_GetResult_Event
{
  service_msgs__msg__ServiceEventInfo info;
  ymrobot_msgs__action__PlayMp3_GetResult_Request__Sequence request;
  ymrobot_msgs__action__PlayMp3_GetResult_Response__Sequence response;
} ymrobot_msgs__action__PlayMp3_GetResult_Event;

// Struct for a sequence of ymrobot_msgs__action__PlayMp3_GetResult_Event.
typedef struct ymrobot_msgs__action__PlayMp3_GetResult_Event__Sequence
{
  ymrobot_msgs__action__PlayMp3_GetResult_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ymrobot_msgs__action__PlayMp3_GetResult_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "ymrobot_msgs/action/detail/play_mp3__struct.h"

/// Struct defined in action/PlayMp3 in the package ymrobot_msgs.
typedef struct ymrobot_msgs__action__PlayMp3_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  ymrobot_msgs__action__PlayMp3_Feedback feedback;
} ymrobot_msgs__action__PlayMp3_FeedbackMessage;

// Struct for a sequence of ymrobot_msgs__action__PlayMp3_FeedbackMessage.
typedef struct ymrobot_msgs__action__PlayMp3_FeedbackMessage__Sequence
{
  ymrobot_msgs__action__PlayMp3_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ymrobot_msgs__action__PlayMp3_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // YMROBOT_MSGS__ACTION__DETAIL__PLAY_MP3__STRUCT_H_
