// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from ymrobot_msgs:action/ElevatorDetection.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "ymrobot_msgs/action/detail/elevator_detection__struct.h"
#include "ymrobot_msgs/action/detail/elevator_detection__type_support.h"
#include "ymrobot_msgs/action/detail/elevator_detection__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace ymrobot_msgs
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _ElevatorDetection_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ElevatorDetection_Goal_type_support_ids_t;

static const _ElevatorDetection_Goal_type_support_ids_t _ElevatorDetection_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ElevatorDetection_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ElevatorDetection_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ElevatorDetection_Goal_type_support_symbol_names_t _ElevatorDetection_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ymrobot_msgs, action, ElevatorDetection_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ymrobot_msgs, action, ElevatorDetection_Goal)),
  }
};

typedef struct _ElevatorDetection_Goal_type_support_data_t
{
  void * data[2];
} _ElevatorDetection_Goal_type_support_data_t;

static _ElevatorDetection_Goal_type_support_data_t _ElevatorDetection_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ElevatorDetection_Goal_message_typesupport_map = {
  2,
  "ymrobot_msgs",
  &_ElevatorDetection_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_ElevatorDetection_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_ElevatorDetection_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ElevatorDetection_Goal_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ElevatorDetection_Goal_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &ymrobot_msgs__action__ElevatorDetection_Goal__get_type_hash,
  &ymrobot_msgs__action__ElevatorDetection_Goal__get_type_description,
  &ymrobot_msgs__action__ElevatorDetection_Goal__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace ymrobot_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, ymrobot_msgs, action, ElevatorDetection_Goal)() {
  return &::ymrobot_msgs::action::rosidl_typesupport_c::ElevatorDetection_Goal_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ymrobot_msgs/action/detail/elevator_detection__struct.h"
// already included above
// #include "ymrobot_msgs/action/detail/elevator_detection__type_support.h"
// already included above
// #include "ymrobot_msgs/action/detail/elevator_detection__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace ymrobot_msgs
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _ElevatorDetection_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ElevatorDetection_Result_type_support_ids_t;

static const _ElevatorDetection_Result_type_support_ids_t _ElevatorDetection_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ElevatorDetection_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ElevatorDetection_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ElevatorDetection_Result_type_support_symbol_names_t _ElevatorDetection_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ymrobot_msgs, action, ElevatorDetection_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ymrobot_msgs, action, ElevatorDetection_Result)),
  }
};

typedef struct _ElevatorDetection_Result_type_support_data_t
{
  void * data[2];
} _ElevatorDetection_Result_type_support_data_t;

static _ElevatorDetection_Result_type_support_data_t _ElevatorDetection_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ElevatorDetection_Result_message_typesupport_map = {
  2,
  "ymrobot_msgs",
  &_ElevatorDetection_Result_message_typesupport_ids.typesupport_identifier[0],
  &_ElevatorDetection_Result_message_typesupport_symbol_names.symbol_name[0],
  &_ElevatorDetection_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ElevatorDetection_Result_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ElevatorDetection_Result_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &ymrobot_msgs__action__ElevatorDetection_Result__get_type_hash,
  &ymrobot_msgs__action__ElevatorDetection_Result__get_type_description,
  &ymrobot_msgs__action__ElevatorDetection_Result__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace ymrobot_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, ymrobot_msgs, action, ElevatorDetection_Result)() {
  return &::ymrobot_msgs::action::rosidl_typesupport_c::ElevatorDetection_Result_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ymrobot_msgs/action/detail/elevator_detection__struct.h"
// already included above
// #include "ymrobot_msgs/action/detail/elevator_detection__type_support.h"
// already included above
// #include "ymrobot_msgs/action/detail/elevator_detection__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace ymrobot_msgs
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _ElevatorDetection_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ElevatorDetection_Feedback_type_support_ids_t;

static const _ElevatorDetection_Feedback_type_support_ids_t _ElevatorDetection_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ElevatorDetection_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ElevatorDetection_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ElevatorDetection_Feedback_type_support_symbol_names_t _ElevatorDetection_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ymrobot_msgs, action, ElevatorDetection_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ymrobot_msgs, action, ElevatorDetection_Feedback)),
  }
};

typedef struct _ElevatorDetection_Feedback_type_support_data_t
{
  void * data[2];
} _ElevatorDetection_Feedback_type_support_data_t;

static _ElevatorDetection_Feedback_type_support_data_t _ElevatorDetection_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ElevatorDetection_Feedback_message_typesupport_map = {
  2,
  "ymrobot_msgs",
  &_ElevatorDetection_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_ElevatorDetection_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_ElevatorDetection_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ElevatorDetection_Feedback_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ElevatorDetection_Feedback_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &ymrobot_msgs__action__ElevatorDetection_Feedback__get_type_hash,
  &ymrobot_msgs__action__ElevatorDetection_Feedback__get_type_description,
  &ymrobot_msgs__action__ElevatorDetection_Feedback__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace ymrobot_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, ymrobot_msgs, action, ElevatorDetection_Feedback)() {
  return &::ymrobot_msgs::action::rosidl_typesupport_c::ElevatorDetection_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ymrobot_msgs/action/detail/elevator_detection__struct.h"
// already included above
// #include "ymrobot_msgs/action/detail/elevator_detection__type_support.h"
// already included above
// #include "ymrobot_msgs/action/detail/elevator_detection__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace ymrobot_msgs
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _ElevatorDetection_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ElevatorDetection_SendGoal_Request_type_support_ids_t;

static const _ElevatorDetection_SendGoal_Request_type_support_ids_t _ElevatorDetection_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ElevatorDetection_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ElevatorDetection_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ElevatorDetection_SendGoal_Request_type_support_symbol_names_t _ElevatorDetection_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ymrobot_msgs, action, ElevatorDetection_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ymrobot_msgs, action, ElevatorDetection_SendGoal_Request)),
  }
};

typedef struct _ElevatorDetection_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _ElevatorDetection_SendGoal_Request_type_support_data_t;

static _ElevatorDetection_SendGoal_Request_type_support_data_t _ElevatorDetection_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ElevatorDetection_SendGoal_Request_message_typesupport_map = {
  2,
  "ymrobot_msgs",
  &_ElevatorDetection_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_ElevatorDetection_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_ElevatorDetection_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ElevatorDetection_SendGoal_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ElevatorDetection_SendGoal_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &ymrobot_msgs__action__ElevatorDetection_SendGoal_Request__get_type_hash,
  &ymrobot_msgs__action__ElevatorDetection_SendGoal_Request__get_type_description,
  &ymrobot_msgs__action__ElevatorDetection_SendGoal_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace ymrobot_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, ymrobot_msgs, action, ElevatorDetection_SendGoal_Request)() {
  return &::ymrobot_msgs::action::rosidl_typesupport_c::ElevatorDetection_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ymrobot_msgs/action/detail/elevator_detection__struct.h"
// already included above
// #include "ymrobot_msgs/action/detail/elevator_detection__type_support.h"
// already included above
// #include "ymrobot_msgs/action/detail/elevator_detection__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace ymrobot_msgs
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _ElevatorDetection_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ElevatorDetection_SendGoal_Response_type_support_ids_t;

static const _ElevatorDetection_SendGoal_Response_type_support_ids_t _ElevatorDetection_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ElevatorDetection_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ElevatorDetection_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ElevatorDetection_SendGoal_Response_type_support_symbol_names_t _ElevatorDetection_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ymrobot_msgs, action, ElevatorDetection_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ymrobot_msgs, action, ElevatorDetection_SendGoal_Response)),
  }
};

typedef struct _ElevatorDetection_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _ElevatorDetection_SendGoal_Response_type_support_data_t;

static _ElevatorDetection_SendGoal_Response_type_support_data_t _ElevatorDetection_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ElevatorDetection_SendGoal_Response_message_typesupport_map = {
  2,
  "ymrobot_msgs",
  &_ElevatorDetection_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_ElevatorDetection_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_ElevatorDetection_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ElevatorDetection_SendGoal_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ElevatorDetection_SendGoal_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &ymrobot_msgs__action__ElevatorDetection_SendGoal_Response__get_type_hash,
  &ymrobot_msgs__action__ElevatorDetection_SendGoal_Response__get_type_description,
  &ymrobot_msgs__action__ElevatorDetection_SendGoal_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace ymrobot_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, ymrobot_msgs, action, ElevatorDetection_SendGoal_Response)() {
  return &::ymrobot_msgs::action::rosidl_typesupport_c::ElevatorDetection_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ymrobot_msgs/action/detail/elevator_detection__struct.h"
// already included above
// #include "ymrobot_msgs/action/detail/elevator_detection__type_support.h"
// already included above
// #include "ymrobot_msgs/action/detail/elevator_detection__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace ymrobot_msgs
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _ElevatorDetection_SendGoal_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ElevatorDetection_SendGoal_Event_type_support_ids_t;

static const _ElevatorDetection_SendGoal_Event_type_support_ids_t _ElevatorDetection_SendGoal_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ElevatorDetection_SendGoal_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ElevatorDetection_SendGoal_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ElevatorDetection_SendGoal_Event_type_support_symbol_names_t _ElevatorDetection_SendGoal_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ymrobot_msgs, action, ElevatorDetection_SendGoal_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ymrobot_msgs, action, ElevatorDetection_SendGoal_Event)),
  }
};

typedef struct _ElevatorDetection_SendGoal_Event_type_support_data_t
{
  void * data[2];
} _ElevatorDetection_SendGoal_Event_type_support_data_t;

static _ElevatorDetection_SendGoal_Event_type_support_data_t _ElevatorDetection_SendGoal_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ElevatorDetection_SendGoal_Event_message_typesupport_map = {
  2,
  "ymrobot_msgs",
  &_ElevatorDetection_SendGoal_Event_message_typesupport_ids.typesupport_identifier[0],
  &_ElevatorDetection_SendGoal_Event_message_typesupport_symbol_names.symbol_name[0],
  &_ElevatorDetection_SendGoal_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ElevatorDetection_SendGoal_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ElevatorDetection_SendGoal_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &ymrobot_msgs__action__ElevatorDetection_SendGoal_Event__get_type_hash,
  &ymrobot_msgs__action__ElevatorDetection_SendGoal_Event__get_type_description,
  &ymrobot_msgs__action__ElevatorDetection_SendGoal_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace ymrobot_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, ymrobot_msgs, action, ElevatorDetection_SendGoal_Event)() {
  return &::ymrobot_msgs::action::rosidl_typesupport_c::ElevatorDetection_SendGoal_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "ymrobot_msgs/action/detail/elevator_detection__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
#include "service_msgs/msg/service_event_info.h"
#include "builtin_interfaces/msg/time.h"

namespace ymrobot_msgs
{

namespace action
{

namespace rosidl_typesupport_c
{
typedef struct _ElevatorDetection_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ElevatorDetection_SendGoal_type_support_ids_t;

static const _ElevatorDetection_SendGoal_type_support_ids_t _ElevatorDetection_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ElevatorDetection_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ElevatorDetection_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ElevatorDetection_SendGoal_type_support_symbol_names_t _ElevatorDetection_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ymrobot_msgs, action, ElevatorDetection_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ymrobot_msgs, action, ElevatorDetection_SendGoal)),
  }
};

typedef struct _ElevatorDetection_SendGoal_type_support_data_t
{
  void * data[2];
} _ElevatorDetection_SendGoal_type_support_data_t;

static _ElevatorDetection_SendGoal_type_support_data_t _ElevatorDetection_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ElevatorDetection_SendGoal_service_typesupport_map = {
  2,
  "ymrobot_msgs",
  &_ElevatorDetection_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_ElevatorDetection_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_ElevatorDetection_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t ElevatorDetection_SendGoal_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ElevatorDetection_SendGoal_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &ElevatorDetection_SendGoal_Request_message_type_support_handle,
  &ElevatorDetection_SendGoal_Response_message_type_support_handle,
  &ElevatorDetection_SendGoal_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    ymrobot_msgs,
    action,
    ElevatorDetection_SendGoal
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    ymrobot_msgs,
    action,
    ElevatorDetection_SendGoal
  ),
  &ymrobot_msgs__action__ElevatorDetection_SendGoal__get_type_hash,
  &ymrobot_msgs__action__ElevatorDetection_SendGoal__get_type_description,
  &ymrobot_msgs__action__ElevatorDetection_SendGoal__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace ymrobot_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, ymrobot_msgs, action, ElevatorDetection_SendGoal)() {
  return &::ymrobot_msgs::action::rosidl_typesupport_c::ElevatorDetection_SendGoal_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ymrobot_msgs/action/detail/elevator_detection__struct.h"
// already included above
// #include "ymrobot_msgs/action/detail/elevator_detection__type_support.h"
// already included above
// #include "ymrobot_msgs/action/detail/elevator_detection__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace ymrobot_msgs
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _ElevatorDetection_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ElevatorDetection_GetResult_Request_type_support_ids_t;

static const _ElevatorDetection_GetResult_Request_type_support_ids_t _ElevatorDetection_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ElevatorDetection_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ElevatorDetection_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ElevatorDetection_GetResult_Request_type_support_symbol_names_t _ElevatorDetection_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ymrobot_msgs, action, ElevatorDetection_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ymrobot_msgs, action, ElevatorDetection_GetResult_Request)),
  }
};

typedef struct _ElevatorDetection_GetResult_Request_type_support_data_t
{
  void * data[2];
} _ElevatorDetection_GetResult_Request_type_support_data_t;

static _ElevatorDetection_GetResult_Request_type_support_data_t _ElevatorDetection_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ElevatorDetection_GetResult_Request_message_typesupport_map = {
  2,
  "ymrobot_msgs",
  &_ElevatorDetection_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_ElevatorDetection_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_ElevatorDetection_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ElevatorDetection_GetResult_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ElevatorDetection_GetResult_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &ymrobot_msgs__action__ElevatorDetection_GetResult_Request__get_type_hash,
  &ymrobot_msgs__action__ElevatorDetection_GetResult_Request__get_type_description,
  &ymrobot_msgs__action__ElevatorDetection_GetResult_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace ymrobot_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, ymrobot_msgs, action, ElevatorDetection_GetResult_Request)() {
  return &::ymrobot_msgs::action::rosidl_typesupport_c::ElevatorDetection_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ymrobot_msgs/action/detail/elevator_detection__struct.h"
// already included above
// #include "ymrobot_msgs/action/detail/elevator_detection__type_support.h"
// already included above
// #include "ymrobot_msgs/action/detail/elevator_detection__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace ymrobot_msgs
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _ElevatorDetection_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ElevatorDetection_GetResult_Response_type_support_ids_t;

static const _ElevatorDetection_GetResult_Response_type_support_ids_t _ElevatorDetection_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ElevatorDetection_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ElevatorDetection_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ElevatorDetection_GetResult_Response_type_support_symbol_names_t _ElevatorDetection_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ymrobot_msgs, action, ElevatorDetection_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ymrobot_msgs, action, ElevatorDetection_GetResult_Response)),
  }
};

typedef struct _ElevatorDetection_GetResult_Response_type_support_data_t
{
  void * data[2];
} _ElevatorDetection_GetResult_Response_type_support_data_t;

static _ElevatorDetection_GetResult_Response_type_support_data_t _ElevatorDetection_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ElevatorDetection_GetResult_Response_message_typesupport_map = {
  2,
  "ymrobot_msgs",
  &_ElevatorDetection_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_ElevatorDetection_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_ElevatorDetection_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ElevatorDetection_GetResult_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ElevatorDetection_GetResult_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &ymrobot_msgs__action__ElevatorDetection_GetResult_Response__get_type_hash,
  &ymrobot_msgs__action__ElevatorDetection_GetResult_Response__get_type_description,
  &ymrobot_msgs__action__ElevatorDetection_GetResult_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace ymrobot_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, ymrobot_msgs, action, ElevatorDetection_GetResult_Response)() {
  return &::ymrobot_msgs::action::rosidl_typesupport_c::ElevatorDetection_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ymrobot_msgs/action/detail/elevator_detection__struct.h"
// already included above
// #include "ymrobot_msgs/action/detail/elevator_detection__type_support.h"
// already included above
// #include "ymrobot_msgs/action/detail/elevator_detection__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace ymrobot_msgs
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _ElevatorDetection_GetResult_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ElevatorDetection_GetResult_Event_type_support_ids_t;

static const _ElevatorDetection_GetResult_Event_type_support_ids_t _ElevatorDetection_GetResult_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ElevatorDetection_GetResult_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ElevatorDetection_GetResult_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ElevatorDetection_GetResult_Event_type_support_symbol_names_t _ElevatorDetection_GetResult_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ymrobot_msgs, action, ElevatorDetection_GetResult_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ymrobot_msgs, action, ElevatorDetection_GetResult_Event)),
  }
};

typedef struct _ElevatorDetection_GetResult_Event_type_support_data_t
{
  void * data[2];
} _ElevatorDetection_GetResult_Event_type_support_data_t;

static _ElevatorDetection_GetResult_Event_type_support_data_t _ElevatorDetection_GetResult_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ElevatorDetection_GetResult_Event_message_typesupport_map = {
  2,
  "ymrobot_msgs",
  &_ElevatorDetection_GetResult_Event_message_typesupport_ids.typesupport_identifier[0],
  &_ElevatorDetection_GetResult_Event_message_typesupport_symbol_names.symbol_name[0],
  &_ElevatorDetection_GetResult_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ElevatorDetection_GetResult_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ElevatorDetection_GetResult_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &ymrobot_msgs__action__ElevatorDetection_GetResult_Event__get_type_hash,
  &ymrobot_msgs__action__ElevatorDetection_GetResult_Event__get_type_description,
  &ymrobot_msgs__action__ElevatorDetection_GetResult_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace ymrobot_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, ymrobot_msgs, action, ElevatorDetection_GetResult_Event)() {
  return &::ymrobot_msgs::action::rosidl_typesupport_c::ElevatorDetection_GetResult_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "ymrobot_msgs/action/detail/elevator_detection__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "service_msgs/msg/service_event_info.h"
// already included above
// #include "builtin_interfaces/msg/time.h"

namespace ymrobot_msgs
{

namespace action
{

namespace rosidl_typesupport_c
{
typedef struct _ElevatorDetection_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ElevatorDetection_GetResult_type_support_ids_t;

static const _ElevatorDetection_GetResult_type_support_ids_t _ElevatorDetection_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ElevatorDetection_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ElevatorDetection_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ElevatorDetection_GetResult_type_support_symbol_names_t _ElevatorDetection_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ymrobot_msgs, action, ElevatorDetection_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ymrobot_msgs, action, ElevatorDetection_GetResult)),
  }
};

typedef struct _ElevatorDetection_GetResult_type_support_data_t
{
  void * data[2];
} _ElevatorDetection_GetResult_type_support_data_t;

static _ElevatorDetection_GetResult_type_support_data_t _ElevatorDetection_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ElevatorDetection_GetResult_service_typesupport_map = {
  2,
  "ymrobot_msgs",
  &_ElevatorDetection_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_ElevatorDetection_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_ElevatorDetection_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t ElevatorDetection_GetResult_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ElevatorDetection_GetResult_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &ElevatorDetection_GetResult_Request_message_type_support_handle,
  &ElevatorDetection_GetResult_Response_message_type_support_handle,
  &ElevatorDetection_GetResult_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    ymrobot_msgs,
    action,
    ElevatorDetection_GetResult
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    ymrobot_msgs,
    action,
    ElevatorDetection_GetResult
  ),
  &ymrobot_msgs__action__ElevatorDetection_GetResult__get_type_hash,
  &ymrobot_msgs__action__ElevatorDetection_GetResult__get_type_description,
  &ymrobot_msgs__action__ElevatorDetection_GetResult__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace ymrobot_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, ymrobot_msgs, action, ElevatorDetection_GetResult)() {
  return &::ymrobot_msgs::action::rosidl_typesupport_c::ElevatorDetection_GetResult_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ymrobot_msgs/action/detail/elevator_detection__struct.h"
// already included above
// #include "ymrobot_msgs/action/detail/elevator_detection__type_support.h"
// already included above
// #include "ymrobot_msgs/action/detail/elevator_detection__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace ymrobot_msgs
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _ElevatorDetection_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ElevatorDetection_FeedbackMessage_type_support_ids_t;

static const _ElevatorDetection_FeedbackMessage_type_support_ids_t _ElevatorDetection_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ElevatorDetection_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ElevatorDetection_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ElevatorDetection_FeedbackMessage_type_support_symbol_names_t _ElevatorDetection_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ymrobot_msgs, action, ElevatorDetection_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ymrobot_msgs, action, ElevatorDetection_FeedbackMessage)),
  }
};

typedef struct _ElevatorDetection_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _ElevatorDetection_FeedbackMessage_type_support_data_t;

static _ElevatorDetection_FeedbackMessage_type_support_data_t _ElevatorDetection_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ElevatorDetection_FeedbackMessage_message_typesupport_map = {
  2,
  "ymrobot_msgs",
  &_ElevatorDetection_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_ElevatorDetection_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_ElevatorDetection_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ElevatorDetection_FeedbackMessage_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ElevatorDetection_FeedbackMessage_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &ymrobot_msgs__action__ElevatorDetection_FeedbackMessage__get_type_hash,
  &ymrobot_msgs__action__ElevatorDetection_FeedbackMessage__get_type_description,
  &ymrobot_msgs__action__ElevatorDetection_FeedbackMessage__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace ymrobot_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, ymrobot_msgs, action, ElevatorDetection_FeedbackMessage)() {
  return &::ymrobot_msgs::action::rosidl_typesupport_c::ElevatorDetection_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "action_msgs/msg/goal_status_array.h"
#include "action_msgs/srv/cancel_goal.h"
#include "ymrobot_msgs/action/elevator_detection.h"
// already included above
// #include "ymrobot_msgs/action/detail/elevator_detection__type_support.h"

static rosidl_action_type_support_t _ymrobot_msgs__action__ElevatorDetection__typesupport_c = {
  NULL, NULL, NULL, NULL, NULL,
  &ymrobot_msgs__action__ElevatorDetection__get_type_hash,
  &ymrobot_msgs__action__ElevatorDetection__get_type_description,
  &ymrobot_msgs__action__ElevatorDetection__get_type_description_sources,
};

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(
  rosidl_typesupport_c, ymrobot_msgs, action, ElevatorDetection)()
{
  // Thread-safe by always writing the same values to the static struct
  _ymrobot_msgs__action__ElevatorDetection__typesupport_c.goal_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, ymrobot_msgs, action, ElevatorDetection_SendGoal)();
  _ymrobot_msgs__action__ElevatorDetection__typesupport_c.result_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, ymrobot_msgs, action, ElevatorDetection_GetResult)();
  _ymrobot_msgs__action__ElevatorDetection__typesupport_c.cancel_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, srv, CancelGoal)();
  _ymrobot_msgs__action__ElevatorDetection__typesupport_c.feedback_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, ymrobot_msgs, action, ElevatorDetection_FeedbackMessage)();
  _ymrobot_msgs__action__ElevatorDetection__typesupport_c.status_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, msg, GoalStatusArray)();

  return &_ymrobot_msgs__action__ElevatorDetection__typesupport_c;
}

#ifdef __cplusplus
}
#endif
