// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from ymrobot_msgs:srv/EMOJI.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "ymrobot_msgs/srv/detail/emoji__functions.h"
#include "ymrobot_msgs/srv/detail/emoji__struct.hpp"
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

typedef struct _EMOJI_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _EMOJI_Request_type_support_ids_t;

static const _EMOJI_Request_type_support_ids_t _EMOJI_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _EMOJI_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _EMOJI_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _EMOJI_Request_type_support_symbol_names_t _EMOJI_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ymrobot_msgs, srv, EMOJI_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ymrobot_msgs, srv, EMOJI_Request)),
  }
};

typedef struct _EMOJI_Request_type_support_data_t
{
  void * data[2];
} _EMOJI_Request_type_support_data_t;

static _EMOJI_Request_type_support_data_t _EMOJI_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _EMOJI_Request_message_typesupport_map = {
  2,
  "ymrobot_msgs",
  &_EMOJI_Request_message_typesupport_ids.typesupport_identifier[0],
  &_EMOJI_Request_message_typesupport_symbol_names.symbol_name[0],
  &_EMOJI_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t EMOJI_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_EMOJI_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &ymrobot_msgs__srv__EMOJI_Request__get_type_hash,
  &ymrobot_msgs__srv__EMOJI_Request__get_type_description,
  &ymrobot_msgs__srv__EMOJI_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace ymrobot_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ymrobot_msgs::srv::EMOJI_Request>()
{
  return &::ymrobot_msgs::srv::rosidl_typesupport_cpp::EMOJI_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, ymrobot_msgs, srv, EMOJI_Request)() {
  return get_message_type_support_handle<ymrobot_msgs::srv::EMOJI_Request>();
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
// #include "ymrobot_msgs/srv/detail/emoji__functions.h"
// already included above
// #include "ymrobot_msgs/srv/detail/emoji__struct.hpp"
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

typedef struct _EMOJI_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _EMOJI_Response_type_support_ids_t;

static const _EMOJI_Response_type_support_ids_t _EMOJI_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _EMOJI_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _EMOJI_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _EMOJI_Response_type_support_symbol_names_t _EMOJI_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ymrobot_msgs, srv, EMOJI_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ymrobot_msgs, srv, EMOJI_Response)),
  }
};

typedef struct _EMOJI_Response_type_support_data_t
{
  void * data[2];
} _EMOJI_Response_type_support_data_t;

static _EMOJI_Response_type_support_data_t _EMOJI_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _EMOJI_Response_message_typesupport_map = {
  2,
  "ymrobot_msgs",
  &_EMOJI_Response_message_typesupport_ids.typesupport_identifier[0],
  &_EMOJI_Response_message_typesupport_symbol_names.symbol_name[0],
  &_EMOJI_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t EMOJI_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_EMOJI_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &ymrobot_msgs__srv__EMOJI_Response__get_type_hash,
  &ymrobot_msgs__srv__EMOJI_Response__get_type_description,
  &ymrobot_msgs__srv__EMOJI_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace ymrobot_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ymrobot_msgs::srv::EMOJI_Response>()
{
  return &::ymrobot_msgs::srv::rosidl_typesupport_cpp::EMOJI_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, ymrobot_msgs, srv, EMOJI_Response)() {
  return get_message_type_support_handle<ymrobot_msgs::srv::EMOJI_Response>();
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
// #include "ymrobot_msgs/srv/detail/emoji__functions.h"
// already included above
// #include "ymrobot_msgs/srv/detail/emoji__struct.hpp"
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

typedef struct _EMOJI_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _EMOJI_Event_type_support_ids_t;

static const _EMOJI_Event_type_support_ids_t _EMOJI_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _EMOJI_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _EMOJI_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _EMOJI_Event_type_support_symbol_names_t _EMOJI_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ymrobot_msgs, srv, EMOJI_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ymrobot_msgs, srv, EMOJI_Event)),
  }
};

typedef struct _EMOJI_Event_type_support_data_t
{
  void * data[2];
} _EMOJI_Event_type_support_data_t;

static _EMOJI_Event_type_support_data_t _EMOJI_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _EMOJI_Event_message_typesupport_map = {
  2,
  "ymrobot_msgs",
  &_EMOJI_Event_message_typesupport_ids.typesupport_identifier[0],
  &_EMOJI_Event_message_typesupport_symbol_names.symbol_name[0],
  &_EMOJI_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t EMOJI_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_EMOJI_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &ymrobot_msgs__srv__EMOJI_Event__get_type_hash,
  &ymrobot_msgs__srv__EMOJI_Event__get_type_description,
  &ymrobot_msgs__srv__EMOJI_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace ymrobot_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ymrobot_msgs::srv::EMOJI_Event>()
{
  return &::ymrobot_msgs::srv::rosidl_typesupport_cpp::EMOJI_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, ymrobot_msgs, srv, EMOJI_Event)() {
  return get_message_type_support_handle<ymrobot_msgs::srv::EMOJI_Event>();
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
// #include "ymrobot_msgs/srv/detail/emoji__struct.hpp"
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

typedef struct _EMOJI_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _EMOJI_type_support_ids_t;

static const _EMOJI_type_support_ids_t _EMOJI_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _EMOJI_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _EMOJI_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _EMOJI_type_support_symbol_names_t _EMOJI_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ymrobot_msgs, srv, EMOJI)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ymrobot_msgs, srv, EMOJI)),
  }
};

typedef struct _EMOJI_type_support_data_t
{
  void * data[2];
} _EMOJI_type_support_data_t;

static _EMOJI_type_support_data_t _EMOJI_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _EMOJI_service_typesupport_map = {
  2,
  "ymrobot_msgs",
  &_EMOJI_service_typesupport_ids.typesupport_identifier[0],
  &_EMOJI_service_typesupport_symbol_names.symbol_name[0],
  &_EMOJI_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t EMOJI_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_EMOJI_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<ymrobot_msgs::srv::EMOJI_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<ymrobot_msgs::srv::EMOJI_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<ymrobot_msgs::srv::EMOJI_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<ymrobot_msgs::srv::EMOJI>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<ymrobot_msgs::srv::EMOJI>,
  &ymrobot_msgs__srv__EMOJI__get_type_hash,
  &ymrobot_msgs__srv__EMOJI__get_type_description,
  &ymrobot_msgs__srv__EMOJI__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace ymrobot_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<ymrobot_msgs::srv::EMOJI>()
{
  return &::ymrobot_msgs::srv::rosidl_typesupport_cpp::EMOJI_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, ymrobot_msgs, srv, EMOJI)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<ymrobot_msgs::srv::EMOJI>();
}

#ifdef __cplusplus
}
#endif
