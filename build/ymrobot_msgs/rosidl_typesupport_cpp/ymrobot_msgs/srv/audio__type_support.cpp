// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from ymrobot_msgs:srv/Audio.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "ymrobot_msgs/srv/detail/audio__functions.h"
#include "ymrobot_msgs/srv/detail/audio__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace ymrobot_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _Audio_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Audio_Request_type_support_ids_t;

static const _Audio_Request_type_support_ids_t _Audio_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ymrobot_msgs, srv, Audio_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ymrobot_msgs, srv, Audio_Request)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Audio_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &ymrobot_msgs__srv__Audio_Request__get_type_hash,
  &ymrobot_msgs__srv__Audio_Request__get_type_description,
  &ymrobot_msgs__srv__Audio_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace ymrobot_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ymrobot_msgs::srv::Audio_Request>()
{
  return &::ymrobot_msgs::srv::rosidl_typesupport_cpp::Audio_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, ymrobot_msgs, srv, Audio_Request)() {
  return get_message_type_support_handle<ymrobot_msgs::srv::Audio_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ymrobot_msgs/srv/detail/audio__functions.h"
// already included above
// #include "ymrobot_msgs/srv/detail/audio__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace ymrobot_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _Audio_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Audio_Response_type_support_ids_t;

static const _Audio_Response_type_support_ids_t _Audio_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ymrobot_msgs, srv, Audio_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ymrobot_msgs, srv, Audio_Response)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Audio_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &ymrobot_msgs__srv__Audio_Response__get_type_hash,
  &ymrobot_msgs__srv__Audio_Response__get_type_description,
  &ymrobot_msgs__srv__Audio_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace ymrobot_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ymrobot_msgs::srv::Audio_Response>()
{
  return &::ymrobot_msgs::srv::rosidl_typesupport_cpp::Audio_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, ymrobot_msgs, srv, Audio_Response)() {
  return get_message_type_support_handle<ymrobot_msgs::srv::Audio_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ymrobot_msgs/srv/detail/audio__functions.h"
// already included above
// #include "ymrobot_msgs/srv/detail/audio__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace ymrobot_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _Audio_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Audio_Event_type_support_ids_t;

static const _Audio_Event_type_support_ids_t _Audio_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ymrobot_msgs, srv, Audio_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ymrobot_msgs, srv, Audio_Event)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Audio_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &ymrobot_msgs__srv__Audio_Event__get_type_hash,
  &ymrobot_msgs__srv__Audio_Event__get_type_description,
  &ymrobot_msgs__srv__Audio_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace ymrobot_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ymrobot_msgs::srv::Audio_Event>()
{
  return &::ymrobot_msgs::srv::rosidl_typesupport_cpp::Audio_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, ymrobot_msgs, srv, Audio_Event)() {
  return get_message_type_support_handle<ymrobot_msgs::srv::Audio_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "ymrobot_msgs/srv/detail/audio__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace ymrobot_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _Audio_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Audio_type_support_ids_t;

static const _Audio_type_support_ids_t _Audio_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ymrobot_msgs, srv, Audio)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ymrobot_msgs, srv, Audio)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Audio_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<ymrobot_msgs::srv::Audio_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<ymrobot_msgs::srv::Audio_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<ymrobot_msgs::srv::Audio_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<ymrobot_msgs::srv::Audio>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<ymrobot_msgs::srv::Audio>,
  &ymrobot_msgs__srv__Audio__get_type_hash,
  &ymrobot_msgs__srv__Audio__get_type_description,
  &ymrobot_msgs__srv__Audio__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace ymrobot_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<ymrobot_msgs::srv::Audio>()
{
  return &::ymrobot_msgs::srv::rosidl_typesupport_cpp::Audio_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, ymrobot_msgs, srv, Audio)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<ymrobot_msgs::srv::Audio>();
}

#ifdef __cplusplus
}
#endif
