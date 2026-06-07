// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from ymrobot_msgs:action/SetParams.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "ymrobot_msgs/action/detail/set_params__struct.h"
#include "ymrobot_msgs/action/detail/set_params__type_support.h"
#include "ymrobot_msgs/action/detail/set_params__functions.h"
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

typedef struct _SetParams_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetParams_Goal_type_support_ids_t;

static const _SetParams_Goal_type_support_ids_t _SetParams_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetParams_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetParams_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetParams_Goal_type_support_symbol_names_t _SetParams_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ymrobot_msgs, action, SetParams_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ymrobot_msgs, action, SetParams_Goal)),
  }
};

typedef struct _SetParams_Goal_type_support_data_t
{
  void * data[2];
} _SetParams_Goal_type_support_data_t;

static _SetParams_Goal_type_support_data_t _SetParams_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetParams_Goal_message_typesupport_map = {
  2,
  "ymrobot_msgs",
  &_SetParams_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_SetParams_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_SetParams_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetParams_Goal_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetParams_Goal_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &ymrobot_msgs__action__SetParams_Goal__get_type_hash,
  &ymrobot_msgs__action__SetParams_Goal__get_type_description,
  &ymrobot_msgs__action__SetParams_Goal__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace ymrobot_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, ymrobot_msgs, action, SetParams_Goal)() {
  return &::ymrobot_msgs::action::rosidl_typesupport_c::SetParams_Goal_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ymrobot_msgs/action/detail/set_params__struct.h"
// already included above
// #include "ymrobot_msgs/action/detail/set_params__type_support.h"
// already included above
// #include "ymrobot_msgs/action/detail/set_params__functions.h"
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

typedef struct _SetParams_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetParams_Result_type_support_ids_t;

static const _SetParams_Result_type_support_ids_t _SetParams_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetParams_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetParams_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetParams_Result_type_support_symbol_names_t _SetParams_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ymrobot_msgs, action, SetParams_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ymrobot_msgs, action, SetParams_Result)),
  }
};

typedef struct _SetParams_Result_type_support_data_t
{
  void * data[2];
} _SetParams_Result_type_support_data_t;

static _SetParams_Result_type_support_data_t _SetParams_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetParams_Result_message_typesupport_map = {
  2,
  "ymrobot_msgs",
  &_SetParams_Result_message_typesupport_ids.typesupport_identifier[0],
  &_SetParams_Result_message_typesupport_symbol_names.symbol_name[0],
  &_SetParams_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetParams_Result_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetParams_Result_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &ymrobot_msgs__action__SetParams_Result__get_type_hash,
  &ymrobot_msgs__action__SetParams_Result__get_type_description,
  &ymrobot_msgs__action__SetParams_Result__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace ymrobot_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, ymrobot_msgs, action, SetParams_Result)() {
  return &::ymrobot_msgs::action::rosidl_typesupport_c::SetParams_Result_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ymrobot_msgs/action/detail/set_params__struct.h"
// already included above
// #include "ymrobot_msgs/action/detail/set_params__type_support.h"
// already included above
// #include "ymrobot_msgs/action/detail/set_params__functions.h"
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

typedef struct _SetParams_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetParams_Feedback_type_support_ids_t;

static const _SetParams_Feedback_type_support_ids_t _SetParams_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetParams_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetParams_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetParams_Feedback_type_support_symbol_names_t _SetParams_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ymrobot_msgs, action, SetParams_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ymrobot_msgs, action, SetParams_Feedback)),
  }
};

typedef struct _SetParams_Feedback_type_support_data_t
{
  void * data[2];
} _SetParams_Feedback_type_support_data_t;

static _SetParams_Feedback_type_support_data_t _SetParams_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetParams_Feedback_message_typesupport_map = {
  2,
  "ymrobot_msgs",
  &_SetParams_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_SetParams_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_SetParams_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetParams_Feedback_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetParams_Feedback_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &ymrobot_msgs__action__SetParams_Feedback__get_type_hash,
  &ymrobot_msgs__action__SetParams_Feedback__get_type_description,
  &ymrobot_msgs__action__SetParams_Feedback__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace ymrobot_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, ymrobot_msgs, action, SetParams_Feedback)() {
  return &::ymrobot_msgs::action::rosidl_typesupport_c::SetParams_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ymrobot_msgs/action/detail/set_params__struct.h"
// already included above
// #include "ymrobot_msgs/action/detail/set_params__type_support.h"
// already included above
// #include "ymrobot_msgs/action/detail/set_params__functions.h"
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

typedef struct _SetParams_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetParams_SendGoal_Request_type_support_ids_t;

static const _SetParams_SendGoal_Request_type_support_ids_t _SetParams_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetParams_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetParams_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetParams_SendGoal_Request_type_support_symbol_names_t _SetParams_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ymrobot_msgs, action, SetParams_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ymrobot_msgs, action, SetParams_SendGoal_Request)),
  }
};

typedef struct _SetParams_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _SetParams_SendGoal_Request_type_support_data_t;

static _SetParams_SendGoal_Request_type_support_data_t _SetParams_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetParams_SendGoal_Request_message_typesupport_map = {
  2,
  "ymrobot_msgs",
  &_SetParams_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_SetParams_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_SetParams_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetParams_SendGoal_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetParams_SendGoal_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &ymrobot_msgs__action__SetParams_SendGoal_Request__get_type_hash,
  &ymrobot_msgs__action__SetParams_SendGoal_Request__get_type_description,
  &ymrobot_msgs__action__SetParams_SendGoal_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace ymrobot_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, ymrobot_msgs, action, SetParams_SendGoal_Request)() {
  return &::ymrobot_msgs::action::rosidl_typesupport_c::SetParams_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ymrobot_msgs/action/detail/set_params__struct.h"
// already included above
// #include "ymrobot_msgs/action/detail/set_params__type_support.h"
// already included above
// #include "ymrobot_msgs/action/detail/set_params__functions.h"
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

typedef struct _SetParams_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetParams_SendGoal_Response_type_support_ids_t;

static const _SetParams_SendGoal_Response_type_support_ids_t _SetParams_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetParams_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetParams_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetParams_SendGoal_Response_type_support_symbol_names_t _SetParams_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ymrobot_msgs, action, SetParams_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ymrobot_msgs, action, SetParams_SendGoal_Response)),
  }
};

typedef struct _SetParams_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _SetParams_SendGoal_Response_type_support_data_t;

static _SetParams_SendGoal_Response_type_support_data_t _SetParams_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetParams_SendGoal_Response_message_typesupport_map = {
  2,
  "ymrobot_msgs",
  &_SetParams_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_SetParams_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_SetParams_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetParams_SendGoal_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetParams_SendGoal_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &ymrobot_msgs__action__SetParams_SendGoal_Response__get_type_hash,
  &ymrobot_msgs__action__SetParams_SendGoal_Response__get_type_description,
  &ymrobot_msgs__action__SetParams_SendGoal_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace ymrobot_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, ymrobot_msgs, action, SetParams_SendGoal_Response)() {
  return &::ymrobot_msgs::action::rosidl_typesupport_c::SetParams_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ymrobot_msgs/action/detail/set_params__struct.h"
// already included above
// #include "ymrobot_msgs/action/detail/set_params__type_support.h"
// already included above
// #include "ymrobot_msgs/action/detail/set_params__functions.h"
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

typedef struct _SetParams_SendGoal_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetParams_SendGoal_Event_type_support_ids_t;

static const _SetParams_SendGoal_Event_type_support_ids_t _SetParams_SendGoal_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetParams_SendGoal_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetParams_SendGoal_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetParams_SendGoal_Event_type_support_symbol_names_t _SetParams_SendGoal_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ymrobot_msgs, action, SetParams_SendGoal_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ymrobot_msgs, action, SetParams_SendGoal_Event)),
  }
};

typedef struct _SetParams_SendGoal_Event_type_support_data_t
{
  void * data[2];
} _SetParams_SendGoal_Event_type_support_data_t;

static _SetParams_SendGoal_Event_type_support_data_t _SetParams_SendGoal_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetParams_SendGoal_Event_message_typesupport_map = {
  2,
  "ymrobot_msgs",
  &_SetParams_SendGoal_Event_message_typesupport_ids.typesupport_identifier[0],
  &_SetParams_SendGoal_Event_message_typesupport_symbol_names.symbol_name[0],
  &_SetParams_SendGoal_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetParams_SendGoal_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetParams_SendGoal_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &ymrobot_msgs__action__SetParams_SendGoal_Event__get_type_hash,
  &ymrobot_msgs__action__SetParams_SendGoal_Event__get_type_description,
  &ymrobot_msgs__action__SetParams_SendGoal_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace ymrobot_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, ymrobot_msgs, action, SetParams_SendGoal_Event)() {
  return &::ymrobot_msgs::action::rosidl_typesupport_c::SetParams_SendGoal_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "ymrobot_msgs/action/detail/set_params__type_support.h"
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
typedef struct _SetParams_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetParams_SendGoal_type_support_ids_t;

static const _SetParams_SendGoal_type_support_ids_t _SetParams_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetParams_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetParams_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetParams_SendGoal_type_support_symbol_names_t _SetParams_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ymrobot_msgs, action, SetParams_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ymrobot_msgs, action, SetParams_SendGoal)),
  }
};

typedef struct _SetParams_SendGoal_type_support_data_t
{
  void * data[2];
} _SetParams_SendGoal_type_support_data_t;

static _SetParams_SendGoal_type_support_data_t _SetParams_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetParams_SendGoal_service_typesupport_map = {
  2,
  "ymrobot_msgs",
  &_SetParams_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_SetParams_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_SetParams_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t SetParams_SendGoal_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetParams_SendGoal_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &SetParams_SendGoal_Request_message_type_support_handle,
  &SetParams_SendGoal_Response_message_type_support_handle,
  &SetParams_SendGoal_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    ymrobot_msgs,
    action,
    SetParams_SendGoal
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    ymrobot_msgs,
    action,
    SetParams_SendGoal
  ),
  &ymrobot_msgs__action__SetParams_SendGoal__get_type_hash,
  &ymrobot_msgs__action__SetParams_SendGoal__get_type_description,
  &ymrobot_msgs__action__SetParams_SendGoal__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace ymrobot_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, ymrobot_msgs, action, SetParams_SendGoal)() {
  return &::ymrobot_msgs::action::rosidl_typesupport_c::SetParams_SendGoal_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ymrobot_msgs/action/detail/set_params__struct.h"
// already included above
// #include "ymrobot_msgs/action/detail/set_params__type_support.h"
// already included above
// #include "ymrobot_msgs/action/detail/set_params__functions.h"
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

typedef struct _SetParams_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetParams_GetResult_Request_type_support_ids_t;

static const _SetParams_GetResult_Request_type_support_ids_t _SetParams_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetParams_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetParams_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetParams_GetResult_Request_type_support_symbol_names_t _SetParams_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ymrobot_msgs, action, SetParams_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ymrobot_msgs, action, SetParams_GetResult_Request)),
  }
};

typedef struct _SetParams_GetResult_Request_type_support_data_t
{
  void * data[2];
} _SetParams_GetResult_Request_type_support_data_t;

static _SetParams_GetResult_Request_type_support_data_t _SetParams_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetParams_GetResult_Request_message_typesupport_map = {
  2,
  "ymrobot_msgs",
  &_SetParams_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_SetParams_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_SetParams_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetParams_GetResult_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetParams_GetResult_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &ymrobot_msgs__action__SetParams_GetResult_Request__get_type_hash,
  &ymrobot_msgs__action__SetParams_GetResult_Request__get_type_description,
  &ymrobot_msgs__action__SetParams_GetResult_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace ymrobot_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, ymrobot_msgs, action, SetParams_GetResult_Request)() {
  return &::ymrobot_msgs::action::rosidl_typesupport_c::SetParams_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ymrobot_msgs/action/detail/set_params__struct.h"
// already included above
// #include "ymrobot_msgs/action/detail/set_params__type_support.h"
// already included above
// #include "ymrobot_msgs/action/detail/set_params__functions.h"
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

typedef struct _SetParams_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetParams_GetResult_Response_type_support_ids_t;

static const _SetParams_GetResult_Response_type_support_ids_t _SetParams_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetParams_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetParams_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetParams_GetResult_Response_type_support_symbol_names_t _SetParams_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ymrobot_msgs, action, SetParams_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ymrobot_msgs, action, SetParams_GetResult_Response)),
  }
};

typedef struct _SetParams_GetResult_Response_type_support_data_t
{
  void * data[2];
} _SetParams_GetResult_Response_type_support_data_t;

static _SetParams_GetResult_Response_type_support_data_t _SetParams_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetParams_GetResult_Response_message_typesupport_map = {
  2,
  "ymrobot_msgs",
  &_SetParams_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_SetParams_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_SetParams_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetParams_GetResult_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetParams_GetResult_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &ymrobot_msgs__action__SetParams_GetResult_Response__get_type_hash,
  &ymrobot_msgs__action__SetParams_GetResult_Response__get_type_description,
  &ymrobot_msgs__action__SetParams_GetResult_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace ymrobot_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, ymrobot_msgs, action, SetParams_GetResult_Response)() {
  return &::ymrobot_msgs::action::rosidl_typesupport_c::SetParams_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ymrobot_msgs/action/detail/set_params__struct.h"
// already included above
// #include "ymrobot_msgs/action/detail/set_params__type_support.h"
// already included above
// #include "ymrobot_msgs/action/detail/set_params__functions.h"
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

typedef struct _SetParams_GetResult_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetParams_GetResult_Event_type_support_ids_t;

static const _SetParams_GetResult_Event_type_support_ids_t _SetParams_GetResult_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetParams_GetResult_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetParams_GetResult_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetParams_GetResult_Event_type_support_symbol_names_t _SetParams_GetResult_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ymrobot_msgs, action, SetParams_GetResult_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ymrobot_msgs, action, SetParams_GetResult_Event)),
  }
};

typedef struct _SetParams_GetResult_Event_type_support_data_t
{
  void * data[2];
} _SetParams_GetResult_Event_type_support_data_t;

static _SetParams_GetResult_Event_type_support_data_t _SetParams_GetResult_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetParams_GetResult_Event_message_typesupport_map = {
  2,
  "ymrobot_msgs",
  &_SetParams_GetResult_Event_message_typesupport_ids.typesupport_identifier[0],
  &_SetParams_GetResult_Event_message_typesupport_symbol_names.symbol_name[0],
  &_SetParams_GetResult_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetParams_GetResult_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetParams_GetResult_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &ymrobot_msgs__action__SetParams_GetResult_Event__get_type_hash,
  &ymrobot_msgs__action__SetParams_GetResult_Event__get_type_description,
  &ymrobot_msgs__action__SetParams_GetResult_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace ymrobot_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, ymrobot_msgs, action, SetParams_GetResult_Event)() {
  return &::ymrobot_msgs::action::rosidl_typesupport_c::SetParams_GetResult_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "ymrobot_msgs/action/detail/set_params__type_support.h"
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
typedef struct _SetParams_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetParams_GetResult_type_support_ids_t;

static const _SetParams_GetResult_type_support_ids_t _SetParams_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetParams_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetParams_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetParams_GetResult_type_support_symbol_names_t _SetParams_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ymrobot_msgs, action, SetParams_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ymrobot_msgs, action, SetParams_GetResult)),
  }
};

typedef struct _SetParams_GetResult_type_support_data_t
{
  void * data[2];
} _SetParams_GetResult_type_support_data_t;

static _SetParams_GetResult_type_support_data_t _SetParams_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetParams_GetResult_service_typesupport_map = {
  2,
  "ymrobot_msgs",
  &_SetParams_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_SetParams_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_SetParams_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t SetParams_GetResult_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetParams_GetResult_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &SetParams_GetResult_Request_message_type_support_handle,
  &SetParams_GetResult_Response_message_type_support_handle,
  &SetParams_GetResult_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    ymrobot_msgs,
    action,
    SetParams_GetResult
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    ymrobot_msgs,
    action,
    SetParams_GetResult
  ),
  &ymrobot_msgs__action__SetParams_GetResult__get_type_hash,
  &ymrobot_msgs__action__SetParams_GetResult__get_type_description,
  &ymrobot_msgs__action__SetParams_GetResult__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace ymrobot_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, ymrobot_msgs, action, SetParams_GetResult)() {
  return &::ymrobot_msgs::action::rosidl_typesupport_c::SetParams_GetResult_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ymrobot_msgs/action/detail/set_params__struct.h"
// already included above
// #include "ymrobot_msgs/action/detail/set_params__type_support.h"
// already included above
// #include "ymrobot_msgs/action/detail/set_params__functions.h"
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

typedef struct _SetParams_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetParams_FeedbackMessage_type_support_ids_t;

static const _SetParams_FeedbackMessage_type_support_ids_t _SetParams_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetParams_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetParams_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetParams_FeedbackMessage_type_support_symbol_names_t _SetParams_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ymrobot_msgs, action, SetParams_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ymrobot_msgs, action, SetParams_FeedbackMessage)),
  }
};

typedef struct _SetParams_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _SetParams_FeedbackMessage_type_support_data_t;

static _SetParams_FeedbackMessage_type_support_data_t _SetParams_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetParams_FeedbackMessage_message_typesupport_map = {
  2,
  "ymrobot_msgs",
  &_SetParams_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_SetParams_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_SetParams_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetParams_FeedbackMessage_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetParams_FeedbackMessage_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &ymrobot_msgs__action__SetParams_FeedbackMessage__get_type_hash,
  &ymrobot_msgs__action__SetParams_FeedbackMessage__get_type_description,
  &ymrobot_msgs__action__SetParams_FeedbackMessage__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace ymrobot_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, ymrobot_msgs, action, SetParams_FeedbackMessage)() {
  return &::ymrobot_msgs::action::rosidl_typesupport_c::SetParams_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "action_msgs/msg/goal_status_array.h"
#include "action_msgs/srv/cancel_goal.h"
#include "ymrobot_msgs/action/set_params.h"
// already included above
// #include "ymrobot_msgs/action/detail/set_params__type_support.h"

static rosidl_action_type_support_t _ymrobot_msgs__action__SetParams__typesupport_c = {
  NULL, NULL, NULL, NULL, NULL,
  &ymrobot_msgs__action__SetParams__get_type_hash,
  &ymrobot_msgs__action__SetParams__get_type_description,
  &ymrobot_msgs__action__SetParams__get_type_description_sources,
};

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(
  rosidl_typesupport_c, ymrobot_msgs, action, SetParams)()
{
  // Thread-safe by always writing the same values to the static struct
  _ymrobot_msgs__action__SetParams__typesupport_c.goal_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, ymrobot_msgs, action, SetParams_SendGoal)();
  _ymrobot_msgs__action__SetParams__typesupport_c.result_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, ymrobot_msgs, action, SetParams_GetResult)();
  _ymrobot_msgs__action__SetParams__typesupport_c.cancel_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, srv, CancelGoal)();
  _ymrobot_msgs__action__SetParams__typesupport_c.feedback_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, ymrobot_msgs, action, SetParams_FeedbackMessage)();
  _ymrobot_msgs__action__SetParams__typesupport_c.status_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, msg, GoalStatusArray)();

  return &_ymrobot_msgs__action__SetParams__typesupport_c;
}

#ifdef __cplusplus
}
#endif
