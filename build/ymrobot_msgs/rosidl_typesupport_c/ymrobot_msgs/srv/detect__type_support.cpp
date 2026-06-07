// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from ymrobot_msgs:srv/Detect.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "ymrobot_msgs/srv/detail/detect__struct.h"
#include "ymrobot_msgs/srv/detail/detect__type_support.h"
#include "ymrobot_msgs/srv/detail/detect__functions.h"
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

typedef struct _Detect_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Detect_Request_type_support_ids_t;

static const _Detect_Request_type_support_ids_t _Detect_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Detect_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Detect_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Detect_Request_type_support_symbol_names_t _Detect_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ymrobot_msgs, srv, Detect_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ymrobot_msgs, srv, Detect_Request)),
  }
};

typedef struct _Detect_Request_type_support_data_t
{
  void * data[2];
} _Detect_Request_type_support_data_t;

static _Detect_Request_type_support_data_t _Detect_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Detect_Request_message_typesupport_map = {
  2,
  "ymrobot_msgs",
  &_Detect_Request_message_typesupport_ids.typesupport_identifier[0],
  &_Detect_Request_message_typesupport_symbol_names.symbol_name[0],
  &_Detect_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Detect_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Detect_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &ymrobot_msgs__srv__Detect_Request__get_type_hash,
  &ymrobot_msgs__srv__Detect_Request__get_type_description,
  &ymrobot_msgs__srv__Detect_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace ymrobot_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, ymrobot_msgs, srv, Detect_Request)() {
  return &::ymrobot_msgs::srv::rosidl_typesupport_c::Detect_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ymrobot_msgs/srv/detail/detect__struct.h"
// already included above
// #include "ymrobot_msgs/srv/detail/detect__type_support.h"
// already included above
// #include "ymrobot_msgs/srv/detail/detect__functions.h"
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

typedef struct _Detect_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Detect_Response_type_support_ids_t;

static const _Detect_Response_type_support_ids_t _Detect_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Detect_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Detect_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Detect_Response_type_support_symbol_names_t _Detect_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ymrobot_msgs, srv, Detect_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ymrobot_msgs, srv, Detect_Response)),
  }
};

typedef struct _Detect_Response_type_support_data_t
{
  void * data[2];
} _Detect_Response_type_support_data_t;

static _Detect_Response_type_support_data_t _Detect_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Detect_Response_message_typesupport_map = {
  2,
  "ymrobot_msgs",
  &_Detect_Response_message_typesupport_ids.typesupport_identifier[0],
  &_Detect_Response_message_typesupport_symbol_names.symbol_name[0],
  &_Detect_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Detect_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Detect_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &ymrobot_msgs__srv__Detect_Response__get_type_hash,
  &ymrobot_msgs__srv__Detect_Response__get_type_description,
  &ymrobot_msgs__srv__Detect_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace ymrobot_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, ymrobot_msgs, srv, Detect_Response)() {
  return &::ymrobot_msgs::srv::rosidl_typesupport_c::Detect_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ymrobot_msgs/srv/detail/detect__struct.h"
// already included above
// #include "ymrobot_msgs/srv/detail/detect__type_support.h"
// already included above
// #include "ymrobot_msgs/srv/detail/detect__functions.h"
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

typedef struct _Detect_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Detect_Event_type_support_ids_t;

static const _Detect_Event_type_support_ids_t _Detect_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Detect_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Detect_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Detect_Event_type_support_symbol_names_t _Detect_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ymrobot_msgs, srv, Detect_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ymrobot_msgs, srv, Detect_Event)),
  }
};

typedef struct _Detect_Event_type_support_data_t
{
  void * data[2];
} _Detect_Event_type_support_data_t;

static _Detect_Event_type_support_data_t _Detect_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Detect_Event_message_typesupport_map = {
  2,
  "ymrobot_msgs",
  &_Detect_Event_message_typesupport_ids.typesupport_identifier[0],
  &_Detect_Event_message_typesupport_symbol_names.symbol_name[0],
  &_Detect_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Detect_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Detect_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &ymrobot_msgs__srv__Detect_Event__get_type_hash,
  &ymrobot_msgs__srv__Detect_Event__get_type_description,
  &ymrobot_msgs__srv__Detect_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace ymrobot_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, ymrobot_msgs, srv, Detect_Event)() {
  return &::ymrobot_msgs::srv::rosidl_typesupport_c::Detect_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "ymrobot_msgs/srv/detail/detect__type_support.h"
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
typedef struct _Detect_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Detect_type_support_ids_t;

static const _Detect_type_support_ids_t _Detect_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Detect_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Detect_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Detect_type_support_symbol_names_t _Detect_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ymrobot_msgs, srv, Detect)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ymrobot_msgs, srv, Detect)),
  }
};

typedef struct _Detect_type_support_data_t
{
  void * data[2];
} _Detect_type_support_data_t;

static _Detect_type_support_data_t _Detect_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Detect_service_typesupport_map = {
  2,
  "ymrobot_msgs",
  &_Detect_service_typesupport_ids.typesupport_identifier[0],
  &_Detect_service_typesupport_symbol_names.symbol_name[0],
  &_Detect_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t Detect_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Detect_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &Detect_Request_message_type_support_handle,
  &Detect_Response_message_type_support_handle,
  &Detect_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    ymrobot_msgs,
    srv,
    Detect
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    ymrobot_msgs,
    srv,
    Detect
  ),
  &ymrobot_msgs__srv__Detect__get_type_hash,
  &ymrobot_msgs__srv__Detect__get_type_description,
  &ymrobot_msgs__srv__Detect__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace ymrobot_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, ymrobot_msgs, srv, Detect)() {
  return &::ymrobot_msgs::srv::rosidl_typesupport_c::Detect_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
