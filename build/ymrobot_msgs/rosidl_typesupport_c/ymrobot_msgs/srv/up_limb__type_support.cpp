// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from ymrobot_msgs:srv/UpLimb.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "ymrobot_msgs/srv/detail/up_limb__struct.h"
#include "ymrobot_msgs/srv/detail/up_limb__type_support.h"
#include "ymrobot_msgs/srv/detail/up_limb__functions.h"
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

typedef struct _UpLimb_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _UpLimb_Request_type_support_ids_t;

static const _UpLimb_Request_type_support_ids_t _UpLimb_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _UpLimb_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _UpLimb_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _UpLimb_Request_type_support_symbol_names_t _UpLimb_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ymrobot_msgs, srv, UpLimb_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ymrobot_msgs, srv, UpLimb_Request)),
  }
};

typedef struct _UpLimb_Request_type_support_data_t
{
  void * data[2];
} _UpLimb_Request_type_support_data_t;

static _UpLimb_Request_type_support_data_t _UpLimb_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _UpLimb_Request_message_typesupport_map = {
  2,
  "ymrobot_msgs",
  &_UpLimb_Request_message_typesupport_ids.typesupport_identifier[0],
  &_UpLimb_Request_message_typesupport_symbol_names.symbol_name[0],
  &_UpLimb_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t UpLimb_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_UpLimb_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &ymrobot_msgs__srv__UpLimb_Request__get_type_hash,
  &ymrobot_msgs__srv__UpLimb_Request__get_type_description,
  &ymrobot_msgs__srv__UpLimb_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace ymrobot_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, ymrobot_msgs, srv, UpLimb_Request)() {
  return &::ymrobot_msgs::srv::rosidl_typesupport_c::UpLimb_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ymrobot_msgs/srv/detail/up_limb__struct.h"
// already included above
// #include "ymrobot_msgs/srv/detail/up_limb__type_support.h"
// already included above
// #include "ymrobot_msgs/srv/detail/up_limb__functions.h"
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

typedef struct _UpLimb_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _UpLimb_Response_type_support_ids_t;

static const _UpLimb_Response_type_support_ids_t _UpLimb_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _UpLimb_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _UpLimb_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _UpLimb_Response_type_support_symbol_names_t _UpLimb_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ymrobot_msgs, srv, UpLimb_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ymrobot_msgs, srv, UpLimb_Response)),
  }
};

typedef struct _UpLimb_Response_type_support_data_t
{
  void * data[2];
} _UpLimb_Response_type_support_data_t;

static _UpLimb_Response_type_support_data_t _UpLimb_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _UpLimb_Response_message_typesupport_map = {
  2,
  "ymrobot_msgs",
  &_UpLimb_Response_message_typesupport_ids.typesupport_identifier[0],
  &_UpLimb_Response_message_typesupport_symbol_names.symbol_name[0],
  &_UpLimb_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t UpLimb_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_UpLimb_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &ymrobot_msgs__srv__UpLimb_Response__get_type_hash,
  &ymrobot_msgs__srv__UpLimb_Response__get_type_description,
  &ymrobot_msgs__srv__UpLimb_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace ymrobot_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, ymrobot_msgs, srv, UpLimb_Response)() {
  return &::ymrobot_msgs::srv::rosidl_typesupport_c::UpLimb_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ymrobot_msgs/srv/detail/up_limb__struct.h"
// already included above
// #include "ymrobot_msgs/srv/detail/up_limb__type_support.h"
// already included above
// #include "ymrobot_msgs/srv/detail/up_limb__functions.h"
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

typedef struct _UpLimb_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _UpLimb_Event_type_support_ids_t;

static const _UpLimb_Event_type_support_ids_t _UpLimb_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _UpLimb_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _UpLimb_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _UpLimb_Event_type_support_symbol_names_t _UpLimb_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ymrobot_msgs, srv, UpLimb_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ymrobot_msgs, srv, UpLimb_Event)),
  }
};

typedef struct _UpLimb_Event_type_support_data_t
{
  void * data[2];
} _UpLimb_Event_type_support_data_t;

static _UpLimb_Event_type_support_data_t _UpLimb_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _UpLimb_Event_message_typesupport_map = {
  2,
  "ymrobot_msgs",
  &_UpLimb_Event_message_typesupport_ids.typesupport_identifier[0],
  &_UpLimb_Event_message_typesupport_symbol_names.symbol_name[0],
  &_UpLimb_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t UpLimb_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_UpLimb_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &ymrobot_msgs__srv__UpLimb_Event__get_type_hash,
  &ymrobot_msgs__srv__UpLimb_Event__get_type_description,
  &ymrobot_msgs__srv__UpLimb_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace ymrobot_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, ymrobot_msgs, srv, UpLimb_Event)() {
  return &::ymrobot_msgs::srv::rosidl_typesupport_c::UpLimb_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "ymrobot_msgs/srv/detail/up_limb__type_support.h"
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
typedef struct _UpLimb_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _UpLimb_type_support_ids_t;

static const _UpLimb_type_support_ids_t _UpLimb_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _UpLimb_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _UpLimb_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _UpLimb_type_support_symbol_names_t _UpLimb_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ymrobot_msgs, srv, UpLimb)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ymrobot_msgs, srv, UpLimb)),
  }
};

typedef struct _UpLimb_type_support_data_t
{
  void * data[2];
} _UpLimb_type_support_data_t;

static _UpLimb_type_support_data_t _UpLimb_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _UpLimb_service_typesupport_map = {
  2,
  "ymrobot_msgs",
  &_UpLimb_service_typesupport_ids.typesupport_identifier[0],
  &_UpLimb_service_typesupport_symbol_names.symbol_name[0],
  &_UpLimb_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t UpLimb_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_UpLimb_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &UpLimb_Request_message_type_support_handle,
  &UpLimb_Response_message_type_support_handle,
  &UpLimb_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    ymrobot_msgs,
    srv,
    UpLimb
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    ymrobot_msgs,
    srv,
    UpLimb
  ),
  &ymrobot_msgs__srv__UpLimb__get_type_hash,
  &ymrobot_msgs__srv__UpLimb__get_type_description,
  &ymrobot_msgs__srv__UpLimb__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace ymrobot_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, ymrobot_msgs, srv, UpLimb)() {
  return &::ymrobot_msgs::srv::rosidl_typesupport_c::UpLimb_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
