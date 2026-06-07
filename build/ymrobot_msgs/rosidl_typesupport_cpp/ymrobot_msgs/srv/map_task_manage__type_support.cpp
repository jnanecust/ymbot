// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from ymrobot_msgs:srv/MapTaskManage.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "ymrobot_msgs/srv/detail/map_task_manage__functions.h"
#include "ymrobot_msgs/srv/detail/map_task_manage__struct.hpp"
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

typedef struct _MapTaskManage_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MapTaskManage_Request_type_support_ids_t;

static const _MapTaskManage_Request_type_support_ids_t _MapTaskManage_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MapTaskManage_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MapTaskManage_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MapTaskManage_Request_type_support_symbol_names_t _MapTaskManage_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ymrobot_msgs, srv, MapTaskManage_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ymrobot_msgs, srv, MapTaskManage_Request)),
  }
};

typedef struct _MapTaskManage_Request_type_support_data_t
{
  void * data[2];
} _MapTaskManage_Request_type_support_data_t;

static _MapTaskManage_Request_type_support_data_t _MapTaskManage_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MapTaskManage_Request_message_typesupport_map = {
  2,
  "ymrobot_msgs",
  &_MapTaskManage_Request_message_typesupport_ids.typesupport_identifier[0],
  &_MapTaskManage_Request_message_typesupport_symbol_names.symbol_name[0],
  &_MapTaskManage_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MapTaskManage_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MapTaskManage_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &ymrobot_msgs__srv__MapTaskManage_Request__get_type_hash,
  &ymrobot_msgs__srv__MapTaskManage_Request__get_type_description,
  &ymrobot_msgs__srv__MapTaskManage_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace ymrobot_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ymrobot_msgs::srv::MapTaskManage_Request>()
{
  return &::ymrobot_msgs::srv::rosidl_typesupport_cpp::MapTaskManage_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, ymrobot_msgs, srv, MapTaskManage_Request)() {
  return get_message_type_support_handle<ymrobot_msgs::srv::MapTaskManage_Request>();
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
// #include "ymrobot_msgs/srv/detail/map_task_manage__functions.h"
// already included above
// #include "ymrobot_msgs/srv/detail/map_task_manage__struct.hpp"
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

typedef struct _MapTaskManage_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MapTaskManage_Response_type_support_ids_t;

static const _MapTaskManage_Response_type_support_ids_t _MapTaskManage_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MapTaskManage_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MapTaskManage_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MapTaskManage_Response_type_support_symbol_names_t _MapTaskManage_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ymrobot_msgs, srv, MapTaskManage_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ymrobot_msgs, srv, MapTaskManage_Response)),
  }
};

typedef struct _MapTaskManage_Response_type_support_data_t
{
  void * data[2];
} _MapTaskManage_Response_type_support_data_t;

static _MapTaskManage_Response_type_support_data_t _MapTaskManage_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MapTaskManage_Response_message_typesupport_map = {
  2,
  "ymrobot_msgs",
  &_MapTaskManage_Response_message_typesupport_ids.typesupport_identifier[0],
  &_MapTaskManage_Response_message_typesupport_symbol_names.symbol_name[0],
  &_MapTaskManage_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MapTaskManage_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MapTaskManage_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &ymrobot_msgs__srv__MapTaskManage_Response__get_type_hash,
  &ymrobot_msgs__srv__MapTaskManage_Response__get_type_description,
  &ymrobot_msgs__srv__MapTaskManage_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace ymrobot_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ymrobot_msgs::srv::MapTaskManage_Response>()
{
  return &::ymrobot_msgs::srv::rosidl_typesupport_cpp::MapTaskManage_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, ymrobot_msgs, srv, MapTaskManage_Response)() {
  return get_message_type_support_handle<ymrobot_msgs::srv::MapTaskManage_Response>();
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
// #include "ymrobot_msgs/srv/detail/map_task_manage__functions.h"
// already included above
// #include "ymrobot_msgs/srv/detail/map_task_manage__struct.hpp"
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

typedef struct _MapTaskManage_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MapTaskManage_Event_type_support_ids_t;

static const _MapTaskManage_Event_type_support_ids_t _MapTaskManage_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MapTaskManage_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MapTaskManage_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MapTaskManage_Event_type_support_symbol_names_t _MapTaskManage_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ymrobot_msgs, srv, MapTaskManage_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ymrobot_msgs, srv, MapTaskManage_Event)),
  }
};

typedef struct _MapTaskManage_Event_type_support_data_t
{
  void * data[2];
} _MapTaskManage_Event_type_support_data_t;

static _MapTaskManage_Event_type_support_data_t _MapTaskManage_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MapTaskManage_Event_message_typesupport_map = {
  2,
  "ymrobot_msgs",
  &_MapTaskManage_Event_message_typesupport_ids.typesupport_identifier[0],
  &_MapTaskManage_Event_message_typesupport_symbol_names.symbol_name[0],
  &_MapTaskManage_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MapTaskManage_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MapTaskManage_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &ymrobot_msgs__srv__MapTaskManage_Event__get_type_hash,
  &ymrobot_msgs__srv__MapTaskManage_Event__get_type_description,
  &ymrobot_msgs__srv__MapTaskManage_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace ymrobot_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ymrobot_msgs::srv::MapTaskManage_Event>()
{
  return &::ymrobot_msgs::srv::rosidl_typesupport_cpp::MapTaskManage_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, ymrobot_msgs, srv, MapTaskManage_Event)() {
  return get_message_type_support_handle<ymrobot_msgs::srv::MapTaskManage_Event>();
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
// #include "ymrobot_msgs/srv/detail/map_task_manage__struct.hpp"
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

typedef struct _MapTaskManage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MapTaskManage_type_support_ids_t;

static const _MapTaskManage_type_support_ids_t _MapTaskManage_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MapTaskManage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MapTaskManage_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MapTaskManage_type_support_symbol_names_t _MapTaskManage_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ymrobot_msgs, srv, MapTaskManage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ymrobot_msgs, srv, MapTaskManage)),
  }
};

typedef struct _MapTaskManage_type_support_data_t
{
  void * data[2];
} _MapTaskManage_type_support_data_t;

static _MapTaskManage_type_support_data_t _MapTaskManage_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MapTaskManage_service_typesupport_map = {
  2,
  "ymrobot_msgs",
  &_MapTaskManage_service_typesupport_ids.typesupport_identifier[0],
  &_MapTaskManage_service_typesupport_symbol_names.symbol_name[0],
  &_MapTaskManage_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t MapTaskManage_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MapTaskManage_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<ymrobot_msgs::srv::MapTaskManage_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<ymrobot_msgs::srv::MapTaskManage_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<ymrobot_msgs::srv::MapTaskManage_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<ymrobot_msgs::srv::MapTaskManage>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<ymrobot_msgs::srv::MapTaskManage>,
  &ymrobot_msgs__srv__MapTaskManage__get_type_hash,
  &ymrobot_msgs__srv__MapTaskManage__get_type_description,
  &ymrobot_msgs__srv__MapTaskManage__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace ymrobot_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<ymrobot_msgs::srv::MapTaskManage>()
{
  return &::ymrobot_msgs::srv::rosidl_typesupport_cpp::MapTaskManage_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, ymrobot_msgs, srv, MapTaskManage)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<ymrobot_msgs::srv::MapTaskManage>();
}

#ifdef __cplusplus
}
#endif
