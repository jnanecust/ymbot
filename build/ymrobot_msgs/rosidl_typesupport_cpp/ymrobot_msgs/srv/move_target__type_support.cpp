// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from ymrobot_msgs:srv/MoveTarget.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "ymrobot_msgs/srv/detail/move_target__functions.h"
#include "ymrobot_msgs/srv/detail/move_target__struct.hpp"
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

typedef struct _MoveTarget_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveTarget_Request_type_support_ids_t;

static const _MoveTarget_Request_type_support_ids_t _MoveTarget_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ymrobot_msgs, srv, MoveTarget_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ymrobot_msgs, srv, MoveTarget_Request)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveTarget_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &ymrobot_msgs__srv__MoveTarget_Request__get_type_hash,
  &ymrobot_msgs__srv__MoveTarget_Request__get_type_description,
  &ymrobot_msgs__srv__MoveTarget_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace ymrobot_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ymrobot_msgs::srv::MoveTarget_Request>()
{
  return &::ymrobot_msgs::srv::rosidl_typesupport_cpp::MoveTarget_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, ymrobot_msgs, srv, MoveTarget_Request)() {
  return get_message_type_support_handle<ymrobot_msgs::srv::MoveTarget_Request>();
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
// #include "ymrobot_msgs/srv/detail/move_target__functions.h"
// already included above
// #include "ymrobot_msgs/srv/detail/move_target__struct.hpp"
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

typedef struct _MoveTarget_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveTarget_Response_type_support_ids_t;

static const _MoveTarget_Response_type_support_ids_t _MoveTarget_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ymrobot_msgs, srv, MoveTarget_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ymrobot_msgs, srv, MoveTarget_Response)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveTarget_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &ymrobot_msgs__srv__MoveTarget_Response__get_type_hash,
  &ymrobot_msgs__srv__MoveTarget_Response__get_type_description,
  &ymrobot_msgs__srv__MoveTarget_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace ymrobot_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ymrobot_msgs::srv::MoveTarget_Response>()
{
  return &::ymrobot_msgs::srv::rosidl_typesupport_cpp::MoveTarget_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, ymrobot_msgs, srv, MoveTarget_Response)() {
  return get_message_type_support_handle<ymrobot_msgs::srv::MoveTarget_Response>();
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
// #include "ymrobot_msgs/srv/detail/move_target__functions.h"
// already included above
// #include "ymrobot_msgs/srv/detail/move_target__struct.hpp"
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

typedef struct _MoveTarget_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveTarget_Event_type_support_ids_t;

static const _MoveTarget_Event_type_support_ids_t _MoveTarget_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ymrobot_msgs, srv, MoveTarget_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ymrobot_msgs, srv, MoveTarget_Event)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveTarget_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &ymrobot_msgs__srv__MoveTarget_Event__get_type_hash,
  &ymrobot_msgs__srv__MoveTarget_Event__get_type_description,
  &ymrobot_msgs__srv__MoveTarget_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace ymrobot_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ymrobot_msgs::srv::MoveTarget_Event>()
{
  return &::ymrobot_msgs::srv::rosidl_typesupport_cpp::MoveTarget_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, ymrobot_msgs, srv, MoveTarget_Event)() {
  return get_message_type_support_handle<ymrobot_msgs::srv::MoveTarget_Event>();
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
// #include "ymrobot_msgs/srv/detail/move_target__struct.hpp"
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

typedef struct _MoveTarget_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveTarget_type_support_ids_t;

static const _MoveTarget_type_support_ids_t _MoveTarget_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ymrobot_msgs, srv, MoveTarget)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ymrobot_msgs, srv, MoveTarget)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveTarget_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<ymrobot_msgs::srv::MoveTarget_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<ymrobot_msgs::srv::MoveTarget_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<ymrobot_msgs::srv::MoveTarget_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<ymrobot_msgs::srv::MoveTarget>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<ymrobot_msgs::srv::MoveTarget>,
  &ymrobot_msgs__srv__MoveTarget__get_type_hash,
  &ymrobot_msgs__srv__MoveTarget__get_type_description,
  &ymrobot_msgs__srv__MoveTarget__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace ymrobot_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<ymrobot_msgs::srv::MoveTarget>()
{
  return &::ymrobot_msgs::srv::rosidl_typesupport_cpp::MoveTarget_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, ymrobot_msgs, srv, MoveTarget)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<ymrobot_msgs::srv::MoveTarget>();
}

#ifdef __cplusplus
}
#endif
