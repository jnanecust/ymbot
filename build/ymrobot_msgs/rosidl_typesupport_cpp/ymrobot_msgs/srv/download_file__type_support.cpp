// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from ymrobot_msgs:srv/DownloadFile.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "ymrobot_msgs/srv/detail/download_file__functions.h"
#include "ymrobot_msgs/srv/detail/download_file__struct.hpp"
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

typedef struct _DownloadFile_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DownloadFile_Request_type_support_ids_t;

static const _DownloadFile_Request_type_support_ids_t _DownloadFile_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _DownloadFile_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DownloadFile_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DownloadFile_Request_type_support_symbol_names_t _DownloadFile_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ymrobot_msgs, srv, DownloadFile_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ymrobot_msgs, srv, DownloadFile_Request)),
  }
};

typedef struct _DownloadFile_Request_type_support_data_t
{
  void * data[2];
} _DownloadFile_Request_type_support_data_t;

static _DownloadFile_Request_type_support_data_t _DownloadFile_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DownloadFile_Request_message_typesupport_map = {
  2,
  "ymrobot_msgs",
  &_DownloadFile_Request_message_typesupport_ids.typesupport_identifier[0],
  &_DownloadFile_Request_message_typesupport_symbol_names.symbol_name[0],
  &_DownloadFile_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t DownloadFile_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DownloadFile_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &ymrobot_msgs__srv__DownloadFile_Request__get_type_hash,
  &ymrobot_msgs__srv__DownloadFile_Request__get_type_description,
  &ymrobot_msgs__srv__DownloadFile_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace ymrobot_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ymrobot_msgs::srv::DownloadFile_Request>()
{
  return &::ymrobot_msgs::srv::rosidl_typesupport_cpp::DownloadFile_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, ymrobot_msgs, srv, DownloadFile_Request)() {
  return get_message_type_support_handle<ymrobot_msgs::srv::DownloadFile_Request>();
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
// #include "ymrobot_msgs/srv/detail/download_file__functions.h"
// already included above
// #include "ymrobot_msgs/srv/detail/download_file__struct.hpp"
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

typedef struct _DownloadFile_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DownloadFile_Response_type_support_ids_t;

static const _DownloadFile_Response_type_support_ids_t _DownloadFile_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _DownloadFile_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DownloadFile_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DownloadFile_Response_type_support_symbol_names_t _DownloadFile_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ymrobot_msgs, srv, DownloadFile_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ymrobot_msgs, srv, DownloadFile_Response)),
  }
};

typedef struct _DownloadFile_Response_type_support_data_t
{
  void * data[2];
} _DownloadFile_Response_type_support_data_t;

static _DownloadFile_Response_type_support_data_t _DownloadFile_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DownloadFile_Response_message_typesupport_map = {
  2,
  "ymrobot_msgs",
  &_DownloadFile_Response_message_typesupport_ids.typesupport_identifier[0],
  &_DownloadFile_Response_message_typesupport_symbol_names.symbol_name[0],
  &_DownloadFile_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t DownloadFile_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DownloadFile_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &ymrobot_msgs__srv__DownloadFile_Response__get_type_hash,
  &ymrobot_msgs__srv__DownloadFile_Response__get_type_description,
  &ymrobot_msgs__srv__DownloadFile_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace ymrobot_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ymrobot_msgs::srv::DownloadFile_Response>()
{
  return &::ymrobot_msgs::srv::rosidl_typesupport_cpp::DownloadFile_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, ymrobot_msgs, srv, DownloadFile_Response)() {
  return get_message_type_support_handle<ymrobot_msgs::srv::DownloadFile_Response>();
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
// #include "ymrobot_msgs/srv/detail/download_file__functions.h"
// already included above
// #include "ymrobot_msgs/srv/detail/download_file__struct.hpp"
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

typedef struct _DownloadFile_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DownloadFile_Event_type_support_ids_t;

static const _DownloadFile_Event_type_support_ids_t _DownloadFile_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _DownloadFile_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DownloadFile_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DownloadFile_Event_type_support_symbol_names_t _DownloadFile_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ymrobot_msgs, srv, DownloadFile_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ymrobot_msgs, srv, DownloadFile_Event)),
  }
};

typedef struct _DownloadFile_Event_type_support_data_t
{
  void * data[2];
} _DownloadFile_Event_type_support_data_t;

static _DownloadFile_Event_type_support_data_t _DownloadFile_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DownloadFile_Event_message_typesupport_map = {
  2,
  "ymrobot_msgs",
  &_DownloadFile_Event_message_typesupport_ids.typesupport_identifier[0],
  &_DownloadFile_Event_message_typesupport_symbol_names.symbol_name[0],
  &_DownloadFile_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t DownloadFile_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DownloadFile_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &ymrobot_msgs__srv__DownloadFile_Event__get_type_hash,
  &ymrobot_msgs__srv__DownloadFile_Event__get_type_description,
  &ymrobot_msgs__srv__DownloadFile_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace ymrobot_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ymrobot_msgs::srv::DownloadFile_Event>()
{
  return &::ymrobot_msgs::srv::rosidl_typesupport_cpp::DownloadFile_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, ymrobot_msgs, srv, DownloadFile_Event)() {
  return get_message_type_support_handle<ymrobot_msgs::srv::DownloadFile_Event>();
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
// #include "ymrobot_msgs/srv/detail/download_file__struct.hpp"
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

typedef struct _DownloadFile_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DownloadFile_type_support_ids_t;

static const _DownloadFile_type_support_ids_t _DownloadFile_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _DownloadFile_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DownloadFile_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DownloadFile_type_support_symbol_names_t _DownloadFile_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ymrobot_msgs, srv, DownloadFile)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ymrobot_msgs, srv, DownloadFile)),
  }
};

typedef struct _DownloadFile_type_support_data_t
{
  void * data[2];
} _DownloadFile_type_support_data_t;

static _DownloadFile_type_support_data_t _DownloadFile_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DownloadFile_service_typesupport_map = {
  2,
  "ymrobot_msgs",
  &_DownloadFile_service_typesupport_ids.typesupport_identifier[0],
  &_DownloadFile_service_typesupport_symbol_names.symbol_name[0],
  &_DownloadFile_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t DownloadFile_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DownloadFile_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<ymrobot_msgs::srv::DownloadFile_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<ymrobot_msgs::srv::DownloadFile_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<ymrobot_msgs::srv::DownloadFile_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<ymrobot_msgs::srv::DownloadFile>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<ymrobot_msgs::srv::DownloadFile>,
  &ymrobot_msgs__srv__DownloadFile__get_type_hash,
  &ymrobot_msgs__srv__DownloadFile__get_type_description,
  &ymrobot_msgs__srv__DownloadFile__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace ymrobot_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<ymrobot_msgs::srv::DownloadFile>()
{
  return &::ymrobot_msgs::srv::rosidl_typesupport_cpp::DownloadFile_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, ymrobot_msgs, srv, DownloadFile)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<ymrobot_msgs::srv::DownloadFile>();
}

#ifdef __cplusplus
}
#endif
