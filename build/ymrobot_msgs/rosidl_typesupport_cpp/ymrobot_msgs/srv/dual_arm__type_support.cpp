// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from ymrobot_msgs:srv/DualArm.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "ymrobot_msgs/srv/detail/dual_arm__functions.h"
#include "ymrobot_msgs/srv/detail/dual_arm__struct.hpp"
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

typedef struct _DualArm_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DualArm_Request_type_support_ids_t;

static const _DualArm_Request_type_support_ids_t _DualArm_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _DualArm_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DualArm_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DualArm_Request_type_support_symbol_names_t _DualArm_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ymrobot_msgs, srv, DualArm_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ymrobot_msgs, srv, DualArm_Request)),
  }
};

typedef struct _DualArm_Request_type_support_data_t
{
  void * data[2];
} _DualArm_Request_type_support_data_t;

static _DualArm_Request_type_support_data_t _DualArm_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DualArm_Request_message_typesupport_map = {
  2,
  "ymrobot_msgs",
  &_DualArm_Request_message_typesupport_ids.typesupport_identifier[0],
  &_DualArm_Request_message_typesupport_symbol_names.symbol_name[0],
  &_DualArm_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t DualArm_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DualArm_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &ymrobot_msgs__srv__DualArm_Request__get_type_hash,
  &ymrobot_msgs__srv__DualArm_Request__get_type_description,
  &ymrobot_msgs__srv__DualArm_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace ymrobot_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ymrobot_msgs::srv::DualArm_Request>()
{
  return &::ymrobot_msgs::srv::rosidl_typesupport_cpp::DualArm_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, ymrobot_msgs, srv, DualArm_Request)() {
  return get_message_type_support_handle<ymrobot_msgs::srv::DualArm_Request>();
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
// #include "ymrobot_msgs/srv/detail/dual_arm__functions.h"
// already included above
// #include "ymrobot_msgs/srv/detail/dual_arm__struct.hpp"
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

typedef struct _DualArm_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DualArm_Response_type_support_ids_t;

static const _DualArm_Response_type_support_ids_t _DualArm_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _DualArm_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DualArm_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DualArm_Response_type_support_symbol_names_t _DualArm_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ymrobot_msgs, srv, DualArm_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ymrobot_msgs, srv, DualArm_Response)),
  }
};

typedef struct _DualArm_Response_type_support_data_t
{
  void * data[2];
} _DualArm_Response_type_support_data_t;

static _DualArm_Response_type_support_data_t _DualArm_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DualArm_Response_message_typesupport_map = {
  2,
  "ymrobot_msgs",
  &_DualArm_Response_message_typesupport_ids.typesupport_identifier[0],
  &_DualArm_Response_message_typesupport_symbol_names.symbol_name[0],
  &_DualArm_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t DualArm_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DualArm_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &ymrobot_msgs__srv__DualArm_Response__get_type_hash,
  &ymrobot_msgs__srv__DualArm_Response__get_type_description,
  &ymrobot_msgs__srv__DualArm_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace ymrobot_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ymrobot_msgs::srv::DualArm_Response>()
{
  return &::ymrobot_msgs::srv::rosidl_typesupport_cpp::DualArm_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, ymrobot_msgs, srv, DualArm_Response)() {
  return get_message_type_support_handle<ymrobot_msgs::srv::DualArm_Response>();
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
// #include "ymrobot_msgs/srv/detail/dual_arm__functions.h"
// already included above
// #include "ymrobot_msgs/srv/detail/dual_arm__struct.hpp"
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

typedef struct _DualArm_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DualArm_Event_type_support_ids_t;

static const _DualArm_Event_type_support_ids_t _DualArm_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _DualArm_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DualArm_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DualArm_Event_type_support_symbol_names_t _DualArm_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ymrobot_msgs, srv, DualArm_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ymrobot_msgs, srv, DualArm_Event)),
  }
};

typedef struct _DualArm_Event_type_support_data_t
{
  void * data[2];
} _DualArm_Event_type_support_data_t;

static _DualArm_Event_type_support_data_t _DualArm_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DualArm_Event_message_typesupport_map = {
  2,
  "ymrobot_msgs",
  &_DualArm_Event_message_typesupport_ids.typesupport_identifier[0],
  &_DualArm_Event_message_typesupport_symbol_names.symbol_name[0],
  &_DualArm_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t DualArm_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DualArm_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &ymrobot_msgs__srv__DualArm_Event__get_type_hash,
  &ymrobot_msgs__srv__DualArm_Event__get_type_description,
  &ymrobot_msgs__srv__DualArm_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace ymrobot_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ymrobot_msgs::srv::DualArm_Event>()
{
  return &::ymrobot_msgs::srv::rosidl_typesupport_cpp::DualArm_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, ymrobot_msgs, srv, DualArm_Event)() {
  return get_message_type_support_handle<ymrobot_msgs::srv::DualArm_Event>();
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
// #include "ymrobot_msgs/srv/detail/dual_arm__struct.hpp"
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

typedef struct _DualArm_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DualArm_type_support_ids_t;

static const _DualArm_type_support_ids_t _DualArm_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _DualArm_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DualArm_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DualArm_type_support_symbol_names_t _DualArm_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ymrobot_msgs, srv, DualArm)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ymrobot_msgs, srv, DualArm)),
  }
};

typedef struct _DualArm_type_support_data_t
{
  void * data[2];
} _DualArm_type_support_data_t;

static _DualArm_type_support_data_t _DualArm_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DualArm_service_typesupport_map = {
  2,
  "ymrobot_msgs",
  &_DualArm_service_typesupport_ids.typesupport_identifier[0],
  &_DualArm_service_typesupport_symbol_names.symbol_name[0],
  &_DualArm_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t DualArm_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DualArm_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<ymrobot_msgs::srv::DualArm_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<ymrobot_msgs::srv::DualArm_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<ymrobot_msgs::srv::DualArm_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<ymrobot_msgs::srv::DualArm>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<ymrobot_msgs::srv::DualArm>,
  &ymrobot_msgs__srv__DualArm__get_type_hash,
  &ymrobot_msgs__srv__DualArm__get_type_description,
  &ymrobot_msgs__srv__DualArm__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace ymrobot_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<ymrobot_msgs::srv::DualArm>()
{
  return &::ymrobot_msgs::srv::rosidl_typesupport_cpp::DualArm_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, ymrobot_msgs, srv, DualArm)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<ymrobot_msgs::srv::DualArm>();
}

#ifdef __cplusplus
}
#endif
