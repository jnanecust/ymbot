// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from ymrobot_msgs:srv/CLoudNav.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "ymrobot_msgs/srv/detail/c_loud_nav__functions.h"
#include "ymrobot_msgs/srv/detail/c_loud_nav__struct.hpp"
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

typedef struct _CLoudNav_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _CLoudNav_Request_type_support_ids_t;

static const _CLoudNav_Request_type_support_ids_t _CLoudNav_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _CLoudNav_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _CLoudNav_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _CLoudNav_Request_type_support_symbol_names_t _CLoudNav_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ymrobot_msgs, srv, CLoudNav_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ymrobot_msgs, srv, CLoudNav_Request)),
  }
};

typedef struct _CLoudNav_Request_type_support_data_t
{
  void * data[2];
} _CLoudNav_Request_type_support_data_t;

static _CLoudNav_Request_type_support_data_t _CLoudNav_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _CLoudNav_Request_message_typesupport_map = {
  2,
  "ymrobot_msgs",
  &_CLoudNav_Request_message_typesupport_ids.typesupport_identifier[0],
  &_CLoudNav_Request_message_typesupport_symbol_names.symbol_name[0],
  &_CLoudNav_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t CLoudNav_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_CLoudNav_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &ymrobot_msgs__srv__CLoudNav_Request__get_type_hash,
  &ymrobot_msgs__srv__CLoudNav_Request__get_type_description,
  &ymrobot_msgs__srv__CLoudNav_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace ymrobot_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ymrobot_msgs::srv::CLoudNav_Request>()
{
  return &::ymrobot_msgs::srv::rosidl_typesupport_cpp::CLoudNav_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, ymrobot_msgs, srv, CLoudNav_Request)() {
  return get_message_type_support_handle<ymrobot_msgs::srv::CLoudNav_Request>();
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
// #include "ymrobot_msgs/srv/detail/c_loud_nav__functions.h"
// already included above
// #include "ymrobot_msgs/srv/detail/c_loud_nav__struct.hpp"
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

typedef struct _CLoudNav_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _CLoudNav_Response_type_support_ids_t;

static const _CLoudNav_Response_type_support_ids_t _CLoudNav_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _CLoudNav_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _CLoudNav_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _CLoudNav_Response_type_support_symbol_names_t _CLoudNav_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ymrobot_msgs, srv, CLoudNav_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ymrobot_msgs, srv, CLoudNav_Response)),
  }
};

typedef struct _CLoudNav_Response_type_support_data_t
{
  void * data[2];
} _CLoudNav_Response_type_support_data_t;

static _CLoudNav_Response_type_support_data_t _CLoudNav_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _CLoudNav_Response_message_typesupport_map = {
  2,
  "ymrobot_msgs",
  &_CLoudNav_Response_message_typesupport_ids.typesupport_identifier[0],
  &_CLoudNav_Response_message_typesupport_symbol_names.symbol_name[0],
  &_CLoudNav_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t CLoudNav_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_CLoudNav_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &ymrobot_msgs__srv__CLoudNav_Response__get_type_hash,
  &ymrobot_msgs__srv__CLoudNav_Response__get_type_description,
  &ymrobot_msgs__srv__CLoudNav_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace ymrobot_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ymrobot_msgs::srv::CLoudNav_Response>()
{
  return &::ymrobot_msgs::srv::rosidl_typesupport_cpp::CLoudNav_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, ymrobot_msgs, srv, CLoudNav_Response)() {
  return get_message_type_support_handle<ymrobot_msgs::srv::CLoudNav_Response>();
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
// #include "ymrobot_msgs/srv/detail/c_loud_nav__functions.h"
// already included above
// #include "ymrobot_msgs/srv/detail/c_loud_nav__struct.hpp"
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

typedef struct _CLoudNav_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _CLoudNav_Event_type_support_ids_t;

static const _CLoudNav_Event_type_support_ids_t _CLoudNav_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _CLoudNav_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _CLoudNav_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _CLoudNav_Event_type_support_symbol_names_t _CLoudNav_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ymrobot_msgs, srv, CLoudNav_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ymrobot_msgs, srv, CLoudNav_Event)),
  }
};

typedef struct _CLoudNav_Event_type_support_data_t
{
  void * data[2];
} _CLoudNav_Event_type_support_data_t;

static _CLoudNav_Event_type_support_data_t _CLoudNav_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _CLoudNav_Event_message_typesupport_map = {
  2,
  "ymrobot_msgs",
  &_CLoudNav_Event_message_typesupport_ids.typesupport_identifier[0],
  &_CLoudNav_Event_message_typesupport_symbol_names.symbol_name[0],
  &_CLoudNav_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t CLoudNav_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_CLoudNav_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &ymrobot_msgs__srv__CLoudNav_Event__get_type_hash,
  &ymrobot_msgs__srv__CLoudNav_Event__get_type_description,
  &ymrobot_msgs__srv__CLoudNav_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace ymrobot_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ymrobot_msgs::srv::CLoudNav_Event>()
{
  return &::ymrobot_msgs::srv::rosidl_typesupport_cpp::CLoudNav_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, ymrobot_msgs, srv, CLoudNav_Event)() {
  return get_message_type_support_handle<ymrobot_msgs::srv::CLoudNav_Event>();
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
// #include "ymrobot_msgs/srv/detail/c_loud_nav__struct.hpp"
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

typedef struct _CLoudNav_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _CLoudNav_type_support_ids_t;

static const _CLoudNav_type_support_ids_t _CLoudNav_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _CLoudNav_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _CLoudNav_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _CLoudNav_type_support_symbol_names_t _CLoudNav_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ymrobot_msgs, srv, CLoudNav)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ymrobot_msgs, srv, CLoudNav)),
  }
};

typedef struct _CLoudNav_type_support_data_t
{
  void * data[2];
} _CLoudNav_type_support_data_t;

static _CLoudNav_type_support_data_t _CLoudNav_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _CLoudNav_service_typesupport_map = {
  2,
  "ymrobot_msgs",
  &_CLoudNav_service_typesupport_ids.typesupport_identifier[0],
  &_CLoudNav_service_typesupport_symbol_names.symbol_name[0],
  &_CLoudNav_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t CLoudNav_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_CLoudNav_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<ymrobot_msgs::srv::CLoudNav_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<ymrobot_msgs::srv::CLoudNav_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<ymrobot_msgs::srv::CLoudNav_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<ymrobot_msgs::srv::CLoudNav>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<ymrobot_msgs::srv::CLoudNav>,
  &ymrobot_msgs__srv__CLoudNav__get_type_hash,
  &ymrobot_msgs__srv__CLoudNav__get_type_description,
  &ymrobot_msgs__srv__CLoudNav__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace ymrobot_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<ymrobot_msgs::srv::CLoudNav>()
{
  return &::ymrobot_msgs::srv::rosidl_typesupport_cpp::CLoudNav_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, ymrobot_msgs, srv, CLoudNav)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<ymrobot_msgs::srv::CLoudNav>();
}

#ifdef __cplusplus
}
#endif
