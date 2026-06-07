// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from ymrobot_msgs:srv/MoveTarget.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "ymrobot_msgs/srv/detail/move_target__struct.h"
#include "ymrobot_msgs/srv/detail/move_target__type_support.h"
#include "ymrobot_msgs/srv/detail/move_target__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace ymrobot_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _MoveTarget_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveTarget_Request_type_support_ids_t;

static const _MoveTarget_Request_type_support_ids_t _MoveTarget_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MoveTarget_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveTarget_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveTarget_Request_type_support_symbol_names_t _MoveTarget_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ymrobot_msgs, srv, MoveTarget_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ymrobot_msgs, srv, MoveTarget_Request)),
  }
};

typedef struct _MoveTarget_Request_type_support_data_t
{
  void * data[2];
} _MoveTarget_Request_type_support_data_t;

static _MoveTarget_Request_type_support_data_t _MoveTarget_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveTarget_Request_message_typesupport_map = {
  2,
  "ymrobot_msgs",
  &_MoveTarget_Request_message_typesupport_ids.typesupport_identifier[0],
  &_MoveTarget_Request_message_typesupport_symbol_names.symbol_name[0],
  &_MoveTarget_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MoveTarget_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveTarget_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &ymrobot_msgs__srv__MoveTarget_Request__get_type_hash,
  &ymrobot_msgs__srv__MoveTarget_Request__get_type_description,
  &ymrobot_msgs__srv__MoveTarget_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace ymrobot_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, ymrobot_msgs, srv, MoveTarget_Request)() {
  return &::ymrobot_msgs::srv::rosidl_typesupport_c::MoveTarget_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ymrobot_msgs/srv/detail/move_target__struct.h"
// already included above
// #include "ymrobot_msgs/srv/detail/move_target__type_support.h"
// already included above
// #include "ymrobot_msgs/srv/detail/move_target__functions.h"
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

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _MoveTarget_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveTarget_Response_type_support_ids_t;

static const _MoveTarget_Response_type_support_ids_t _MoveTarget_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MoveTarget_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveTarget_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveTarget_Response_type_support_symbol_names_t _MoveTarget_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ymrobot_msgs, srv, MoveTarget_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ymrobot_msgs, srv, MoveTarget_Response)),
  }
};

typedef struct _MoveTarget_Response_type_support_data_t
{
  void * data[2];
} _MoveTarget_Response_type_support_data_t;

static _MoveTarget_Response_type_support_data_t _MoveTarget_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveTarget_Response_message_typesupport_map = {
  2,
  "ymrobot_msgs",
  &_MoveTarget_Response_message_typesupport_ids.typesupport_identifier[0],
  &_MoveTarget_Response_message_typesupport_symbol_names.symbol_name[0],
  &_MoveTarget_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MoveTarget_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveTarget_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &ymrobot_msgs__srv__MoveTarget_Response__get_type_hash,
  &ymrobot_msgs__srv__MoveTarget_Response__get_type_description,
  &ymrobot_msgs__srv__MoveTarget_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace ymrobot_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, ymrobot_msgs, srv, MoveTarget_Response)() {
  return &::ymrobot_msgs::srv::rosidl_typesupport_c::MoveTarget_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ymrobot_msgs/srv/detail/move_target__struct.h"
// already included above
// #include "ymrobot_msgs/srv/detail/move_target__type_support.h"
// already included above
// #include "ymrobot_msgs/srv/detail/move_target__functions.h"
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

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _MoveTarget_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveTarget_Event_type_support_ids_t;

static const _MoveTarget_Event_type_support_ids_t _MoveTarget_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MoveTarget_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveTarget_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveTarget_Event_type_support_symbol_names_t _MoveTarget_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ymrobot_msgs, srv, MoveTarget_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ymrobot_msgs, srv, MoveTarget_Event)),
  }
};

typedef struct _MoveTarget_Event_type_support_data_t
{
  void * data[2];
} _MoveTarget_Event_type_support_data_t;

static _MoveTarget_Event_type_support_data_t _MoveTarget_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveTarget_Event_message_typesupport_map = {
  2,
  "ymrobot_msgs",
  &_MoveTarget_Event_message_typesupport_ids.typesupport_identifier[0],
  &_MoveTarget_Event_message_typesupport_symbol_names.symbol_name[0],
  &_MoveTarget_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MoveTarget_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveTarget_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &ymrobot_msgs__srv__MoveTarget_Event__get_type_hash,
  &ymrobot_msgs__srv__MoveTarget_Event__get_type_description,
  &ymrobot_msgs__srv__MoveTarget_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace ymrobot_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, ymrobot_msgs, srv, MoveTarget_Event)() {
  return &::ymrobot_msgs::srv::rosidl_typesupport_c::MoveTarget_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "ymrobot_msgs/srv/detail/move_target__type_support.h"
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

namespace srv
{

namespace rosidl_typesupport_c
{
typedef struct _MoveTarget_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveTarget_type_support_ids_t;

static const _MoveTarget_type_support_ids_t _MoveTarget_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MoveTarget_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveTarget_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveTarget_type_support_symbol_names_t _MoveTarget_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ymrobot_msgs, srv, MoveTarget)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ymrobot_msgs, srv, MoveTarget)),
  }
};

typedef struct _MoveTarget_type_support_data_t
{
  void * data[2];
} _MoveTarget_type_support_data_t;

static _MoveTarget_type_support_data_t _MoveTarget_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveTarget_service_typesupport_map = {
  2,
  "ymrobot_msgs",
  &_MoveTarget_service_typesupport_ids.typesupport_identifier[0],
  &_MoveTarget_service_typesupport_symbol_names.symbol_name[0],
  &_MoveTarget_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t MoveTarget_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveTarget_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &MoveTarget_Request_message_type_support_handle,
  &MoveTarget_Response_message_type_support_handle,
  &MoveTarget_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    ymrobot_msgs,
    srv,
    MoveTarget
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    ymrobot_msgs,
    srv,
    MoveTarget
  ),
  &ymrobot_msgs__srv__MoveTarget__get_type_hash,
  &ymrobot_msgs__srv__MoveTarget__get_type_description,
  &ymrobot_msgs__srv__MoveTarget__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace ymrobot_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, ymrobot_msgs, srv, MoveTarget)() {
  return &::ymrobot_msgs::srv::rosidl_typesupport_c::MoveTarget_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
