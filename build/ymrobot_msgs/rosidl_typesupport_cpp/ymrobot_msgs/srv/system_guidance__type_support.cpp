// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from ymrobot_msgs:srv/SystemGuidance.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "ymrobot_msgs/srv/detail/system_guidance__functions.h"
#include "ymrobot_msgs/srv/detail/system_guidance__struct.hpp"
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

typedef struct _SystemGuidance_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SystemGuidance_Request_type_support_ids_t;

static const _SystemGuidance_Request_type_support_ids_t _SystemGuidance_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SystemGuidance_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SystemGuidance_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SystemGuidance_Request_type_support_symbol_names_t _SystemGuidance_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ymrobot_msgs, srv, SystemGuidance_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ymrobot_msgs, srv, SystemGuidance_Request)),
  }
};

typedef struct _SystemGuidance_Request_type_support_data_t
{
  void * data[2];
} _SystemGuidance_Request_type_support_data_t;

static _SystemGuidance_Request_type_support_data_t _SystemGuidance_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SystemGuidance_Request_message_typesupport_map = {
  2,
  "ymrobot_msgs",
  &_SystemGuidance_Request_message_typesupport_ids.typesupport_identifier[0],
  &_SystemGuidance_Request_message_typesupport_symbol_names.symbol_name[0],
  &_SystemGuidance_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SystemGuidance_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SystemGuidance_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &ymrobot_msgs__srv__SystemGuidance_Request__get_type_hash,
  &ymrobot_msgs__srv__SystemGuidance_Request__get_type_description,
  &ymrobot_msgs__srv__SystemGuidance_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace ymrobot_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ymrobot_msgs::srv::SystemGuidance_Request>()
{
  return &::ymrobot_msgs::srv::rosidl_typesupport_cpp::SystemGuidance_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, ymrobot_msgs, srv, SystemGuidance_Request)() {
  return get_message_type_support_handle<ymrobot_msgs::srv::SystemGuidance_Request>();
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
// #include "ymrobot_msgs/srv/detail/system_guidance__functions.h"
// already included above
// #include "ymrobot_msgs/srv/detail/system_guidance__struct.hpp"
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

typedef struct _SystemGuidance_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SystemGuidance_Response_type_support_ids_t;

static const _SystemGuidance_Response_type_support_ids_t _SystemGuidance_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SystemGuidance_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SystemGuidance_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SystemGuidance_Response_type_support_symbol_names_t _SystemGuidance_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ymrobot_msgs, srv, SystemGuidance_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ymrobot_msgs, srv, SystemGuidance_Response)),
  }
};

typedef struct _SystemGuidance_Response_type_support_data_t
{
  void * data[2];
} _SystemGuidance_Response_type_support_data_t;

static _SystemGuidance_Response_type_support_data_t _SystemGuidance_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SystemGuidance_Response_message_typesupport_map = {
  2,
  "ymrobot_msgs",
  &_SystemGuidance_Response_message_typesupport_ids.typesupport_identifier[0],
  &_SystemGuidance_Response_message_typesupport_symbol_names.symbol_name[0],
  &_SystemGuidance_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SystemGuidance_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SystemGuidance_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &ymrobot_msgs__srv__SystemGuidance_Response__get_type_hash,
  &ymrobot_msgs__srv__SystemGuidance_Response__get_type_description,
  &ymrobot_msgs__srv__SystemGuidance_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace ymrobot_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ymrobot_msgs::srv::SystemGuidance_Response>()
{
  return &::ymrobot_msgs::srv::rosidl_typesupport_cpp::SystemGuidance_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, ymrobot_msgs, srv, SystemGuidance_Response)() {
  return get_message_type_support_handle<ymrobot_msgs::srv::SystemGuidance_Response>();
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
// #include "ymrobot_msgs/srv/detail/system_guidance__functions.h"
// already included above
// #include "ymrobot_msgs/srv/detail/system_guidance__struct.hpp"
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

typedef struct _SystemGuidance_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SystemGuidance_Event_type_support_ids_t;

static const _SystemGuidance_Event_type_support_ids_t _SystemGuidance_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SystemGuidance_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SystemGuidance_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SystemGuidance_Event_type_support_symbol_names_t _SystemGuidance_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ymrobot_msgs, srv, SystemGuidance_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ymrobot_msgs, srv, SystemGuidance_Event)),
  }
};

typedef struct _SystemGuidance_Event_type_support_data_t
{
  void * data[2];
} _SystemGuidance_Event_type_support_data_t;

static _SystemGuidance_Event_type_support_data_t _SystemGuidance_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SystemGuidance_Event_message_typesupport_map = {
  2,
  "ymrobot_msgs",
  &_SystemGuidance_Event_message_typesupport_ids.typesupport_identifier[0],
  &_SystemGuidance_Event_message_typesupport_symbol_names.symbol_name[0],
  &_SystemGuidance_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SystemGuidance_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SystemGuidance_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &ymrobot_msgs__srv__SystemGuidance_Event__get_type_hash,
  &ymrobot_msgs__srv__SystemGuidance_Event__get_type_description,
  &ymrobot_msgs__srv__SystemGuidance_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace ymrobot_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ymrobot_msgs::srv::SystemGuidance_Event>()
{
  return &::ymrobot_msgs::srv::rosidl_typesupport_cpp::SystemGuidance_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, ymrobot_msgs, srv, SystemGuidance_Event)() {
  return get_message_type_support_handle<ymrobot_msgs::srv::SystemGuidance_Event>();
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
// #include "ymrobot_msgs/srv/detail/system_guidance__struct.hpp"
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

typedef struct _SystemGuidance_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SystemGuidance_type_support_ids_t;

static const _SystemGuidance_type_support_ids_t _SystemGuidance_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SystemGuidance_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SystemGuidance_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SystemGuidance_type_support_symbol_names_t _SystemGuidance_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ymrobot_msgs, srv, SystemGuidance)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ymrobot_msgs, srv, SystemGuidance)),
  }
};

typedef struct _SystemGuidance_type_support_data_t
{
  void * data[2];
} _SystemGuidance_type_support_data_t;

static _SystemGuidance_type_support_data_t _SystemGuidance_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SystemGuidance_service_typesupport_map = {
  2,
  "ymrobot_msgs",
  &_SystemGuidance_service_typesupport_ids.typesupport_identifier[0],
  &_SystemGuidance_service_typesupport_symbol_names.symbol_name[0],
  &_SystemGuidance_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t SystemGuidance_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SystemGuidance_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<ymrobot_msgs::srv::SystemGuidance_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<ymrobot_msgs::srv::SystemGuidance_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<ymrobot_msgs::srv::SystemGuidance_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<ymrobot_msgs::srv::SystemGuidance>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<ymrobot_msgs::srv::SystemGuidance>,
  &ymrobot_msgs__srv__SystemGuidance__get_type_hash,
  &ymrobot_msgs__srv__SystemGuidance__get_type_description,
  &ymrobot_msgs__srv__SystemGuidance__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace ymrobot_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<ymrobot_msgs::srv::SystemGuidance>()
{
  return &::ymrobot_msgs::srv::rosidl_typesupport_cpp::SystemGuidance_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, ymrobot_msgs, srv, SystemGuidance)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<ymrobot_msgs::srv::SystemGuidance>();
}

#ifdef __cplusplus
}
#endif
