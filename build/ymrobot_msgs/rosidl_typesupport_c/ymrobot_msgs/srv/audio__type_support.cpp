// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from ymrobot_msgs:srv/Audio.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "ymrobot_msgs/srv/detail/audio__struct.h"
#include "ymrobot_msgs/srv/detail/audio__type_support.h"
#include "ymrobot_msgs/srv/detail/audio__functions.h"
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

typedef struct _Audio_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Audio_Request_type_support_ids_t;

static const _Audio_Request_type_support_ids_t _Audio_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Audio_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Audio_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Audio_Request_type_support_symbol_names_t _Audio_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ymrobot_msgs, srv, Audio_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ymrobot_msgs, srv, Audio_Request)),
  }
};

typedef struct _Audio_Request_type_support_data_t
{
  void * data[2];
} _Audio_Request_type_support_data_t;

static _Audio_Request_type_support_data_t _Audio_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Audio_Request_message_typesupport_map = {
  2,
  "ymrobot_msgs",
  &_Audio_Request_message_typesupport_ids.typesupport_identifier[0],
  &_Audio_Request_message_typesupport_symbol_names.symbol_name[0],
  &_Audio_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Audio_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Audio_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &ymrobot_msgs__srv__Audio_Request__get_type_hash,
  &ymrobot_msgs__srv__Audio_Request__get_type_description,
  &ymrobot_msgs__srv__Audio_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace ymrobot_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, ymrobot_msgs, srv, Audio_Request)() {
  return &::ymrobot_msgs::srv::rosidl_typesupport_c::Audio_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ymrobot_msgs/srv/detail/audio__struct.h"
// already included above
// #include "ymrobot_msgs/srv/detail/audio__type_support.h"
// already included above
// #include "ymrobot_msgs/srv/detail/audio__functions.h"
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

typedef struct _Audio_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Audio_Response_type_support_ids_t;

static const _Audio_Response_type_support_ids_t _Audio_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Audio_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Audio_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Audio_Response_type_support_symbol_names_t _Audio_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ymrobot_msgs, srv, Audio_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ymrobot_msgs, srv, Audio_Response)),
  }
};

typedef struct _Audio_Response_type_support_data_t
{
  void * data[2];
} _Audio_Response_type_support_data_t;

static _Audio_Response_type_support_data_t _Audio_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Audio_Response_message_typesupport_map = {
  2,
  "ymrobot_msgs",
  &_Audio_Response_message_typesupport_ids.typesupport_identifier[0],
  &_Audio_Response_message_typesupport_symbol_names.symbol_name[0],
  &_Audio_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Audio_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Audio_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &ymrobot_msgs__srv__Audio_Response__get_type_hash,
  &ymrobot_msgs__srv__Audio_Response__get_type_description,
  &ymrobot_msgs__srv__Audio_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace ymrobot_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, ymrobot_msgs, srv, Audio_Response)() {
  return &::ymrobot_msgs::srv::rosidl_typesupport_c::Audio_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ymrobot_msgs/srv/detail/audio__struct.h"
// already included above
// #include "ymrobot_msgs/srv/detail/audio__type_support.h"
// already included above
// #include "ymrobot_msgs/srv/detail/audio__functions.h"
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

typedef struct _Audio_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Audio_Event_type_support_ids_t;

static const _Audio_Event_type_support_ids_t _Audio_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Audio_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Audio_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Audio_Event_type_support_symbol_names_t _Audio_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ymrobot_msgs, srv, Audio_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ymrobot_msgs, srv, Audio_Event)),
  }
};

typedef struct _Audio_Event_type_support_data_t
{
  void * data[2];
} _Audio_Event_type_support_data_t;

static _Audio_Event_type_support_data_t _Audio_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Audio_Event_message_typesupport_map = {
  2,
  "ymrobot_msgs",
  &_Audio_Event_message_typesupport_ids.typesupport_identifier[0],
  &_Audio_Event_message_typesupport_symbol_names.symbol_name[0],
  &_Audio_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Audio_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Audio_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &ymrobot_msgs__srv__Audio_Event__get_type_hash,
  &ymrobot_msgs__srv__Audio_Event__get_type_description,
  &ymrobot_msgs__srv__Audio_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace ymrobot_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, ymrobot_msgs, srv, Audio_Event)() {
  return &::ymrobot_msgs::srv::rosidl_typesupport_c::Audio_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "ymrobot_msgs/srv/detail/audio__type_support.h"
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
typedef struct _Audio_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Audio_type_support_ids_t;

static const _Audio_type_support_ids_t _Audio_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Audio_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Audio_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Audio_type_support_symbol_names_t _Audio_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ymrobot_msgs, srv, Audio)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ymrobot_msgs, srv, Audio)),
  }
};

typedef struct _Audio_type_support_data_t
{
  void * data[2];
} _Audio_type_support_data_t;

static _Audio_type_support_data_t _Audio_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Audio_service_typesupport_map = {
  2,
  "ymrobot_msgs",
  &_Audio_service_typesupport_ids.typesupport_identifier[0],
  &_Audio_service_typesupport_symbol_names.symbol_name[0],
  &_Audio_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t Audio_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Audio_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &Audio_Request_message_type_support_handle,
  &Audio_Response_message_type_support_handle,
  &Audio_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    ymrobot_msgs,
    srv,
    Audio
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    ymrobot_msgs,
    srv,
    Audio
  ),
  &ymrobot_msgs__srv__Audio__get_type_hash,
  &ymrobot_msgs__srv__Audio__get_type_description,
  &ymrobot_msgs__srv__Audio__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace ymrobot_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, ymrobot_msgs, srv, Audio)() {
  return &::ymrobot_msgs::srv::rosidl_typesupport_c::Audio_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
