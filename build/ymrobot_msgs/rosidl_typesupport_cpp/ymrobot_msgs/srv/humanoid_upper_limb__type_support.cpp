// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from ymrobot_msgs:srv/HumanoidUpperLimb.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "ymrobot_msgs/srv/detail/humanoid_upper_limb__functions.h"
#include "ymrobot_msgs/srv/detail/humanoid_upper_limb__struct.hpp"
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

typedef struct _HumanoidUpperLimb_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _HumanoidUpperLimb_Request_type_support_ids_t;

static const _HumanoidUpperLimb_Request_type_support_ids_t _HumanoidUpperLimb_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _HumanoidUpperLimb_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _HumanoidUpperLimb_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _HumanoidUpperLimb_Request_type_support_symbol_names_t _HumanoidUpperLimb_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ymrobot_msgs, srv, HumanoidUpperLimb_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ymrobot_msgs, srv, HumanoidUpperLimb_Request)),
  }
};

typedef struct _HumanoidUpperLimb_Request_type_support_data_t
{
  void * data[2];
} _HumanoidUpperLimb_Request_type_support_data_t;

static _HumanoidUpperLimb_Request_type_support_data_t _HumanoidUpperLimb_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _HumanoidUpperLimb_Request_message_typesupport_map = {
  2,
  "ymrobot_msgs",
  &_HumanoidUpperLimb_Request_message_typesupport_ids.typesupport_identifier[0],
  &_HumanoidUpperLimb_Request_message_typesupport_symbol_names.symbol_name[0],
  &_HumanoidUpperLimb_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t HumanoidUpperLimb_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_HumanoidUpperLimb_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &ymrobot_msgs__srv__HumanoidUpperLimb_Request__get_type_hash,
  &ymrobot_msgs__srv__HumanoidUpperLimb_Request__get_type_description,
  &ymrobot_msgs__srv__HumanoidUpperLimb_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace ymrobot_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ymrobot_msgs::srv::HumanoidUpperLimb_Request>()
{
  return &::ymrobot_msgs::srv::rosidl_typesupport_cpp::HumanoidUpperLimb_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, ymrobot_msgs, srv, HumanoidUpperLimb_Request)() {
  return get_message_type_support_handle<ymrobot_msgs::srv::HumanoidUpperLimb_Request>();
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
// #include "ymrobot_msgs/srv/detail/humanoid_upper_limb__functions.h"
// already included above
// #include "ymrobot_msgs/srv/detail/humanoid_upper_limb__struct.hpp"
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

typedef struct _HumanoidUpperLimb_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _HumanoidUpperLimb_Response_type_support_ids_t;

static const _HumanoidUpperLimb_Response_type_support_ids_t _HumanoidUpperLimb_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _HumanoidUpperLimb_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _HumanoidUpperLimb_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _HumanoidUpperLimb_Response_type_support_symbol_names_t _HumanoidUpperLimb_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ymrobot_msgs, srv, HumanoidUpperLimb_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ymrobot_msgs, srv, HumanoidUpperLimb_Response)),
  }
};

typedef struct _HumanoidUpperLimb_Response_type_support_data_t
{
  void * data[2];
} _HumanoidUpperLimb_Response_type_support_data_t;

static _HumanoidUpperLimb_Response_type_support_data_t _HumanoidUpperLimb_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _HumanoidUpperLimb_Response_message_typesupport_map = {
  2,
  "ymrobot_msgs",
  &_HumanoidUpperLimb_Response_message_typesupport_ids.typesupport_identifier[0],
  &_HumanoidUpperLimb_Response_message_typesupport_symbol_names.symbol_name[0],
  &_HumanoidUpperLimb_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t HumanoidUpperLimb_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_HumanoidUpperLimb_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &ymrobot_msgs__srv__HumanoidUpperLimb_Response__get_type_hash,
  &ymrobot_msgs__srv__HumanoidUpperLimb_Response__get_type_description,
  &ymrobot_msgs__srv__HumanoidUpperLimb_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace ymrobot_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ymrobot_msgs::srv::HumanoidUpperLimb_Response>()
{
  return &::ymrobot_msgs::srv::rosidl_typesupport_cpp::HumanoidUpperLimb_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, ymrobot_msgs, srv, HumanoidUpperLimb_Response)() {
  return get_message_type_support_handle<ymrobot_msgs::srv::HumanoidUpperLimb_Response>();
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
// #include "ymrobot_msgs/srv/detail/humanoid_upper_limb__functions.h"
// already included above
// #include "ymrobot_msgs/srv/detail/humanoid_upper_limb__struct.hpp"
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

typedef struct _HumanoidUpperLimb_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _HumanoidUpperLimb_Event_type_support_ids_t;

static const _HumanoidUpperLimb_Event_type_support_ids_t _HumanoidUpperLimb_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _HumanoidUpperLimb_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _HumanoidUpperLimb_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _HumanoidUpperLimb_Event_type_support_symbol_names_t _HumanoidUpperLimb_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ymrobot_msgs, srv, HumanoidUpperLimb_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ymrobot_msgs, srv, HumanoidUpperLimb_Event)),
  }
};

typedef struct _HumanoidUpperLimb_Event_type_support_data_t
{
  void * data[2];
} _HumanoidUpperLimb_Event_type_support_data_t;

static _HumanoidUpperLimb_Event_type_support_data_t _HumanoidUpperLimb_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _HumanoidUpperLimb_Event_message_typesupport_map = {
  2,
  "ymrobot_msgs",
  &_HumanoidUpperLimb_Event_message_typesupport_ids.typesupport_identifier[0],
  &_HumanoidUpperLimb_Event_message_typesupport_symbol_names.symbol_name[0],
  &_HumanoidUpperLimb_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t HumanoidUpperLimb_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_HumanoidUpperLimb_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &ymrobot_msgs__srv__HumanoidUpperLimb_Event__get_type_hash,
  &ymrobot_msgs__srv__HumanoidUpperLimb_Event__get_type_description,
  &ymrobot_msgs__srv__HumanoidUpperLimb_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace ymrobot_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ymrobot_msgs::srv::HumanoidUpperLimb_Event>()
{
  return &::ymrobot_msgs::srv::rosidl_typesupport_cpp::HumanoidUpperLimb_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, ymrobot_msgs, srv, HumanoidUpperLimb_Event)() {
  return get_message_type_support_handle<ymrobot_msgs::srv::HumanoidUpperLimb_Event>();
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
// #include "ymrobot_msgs/srv/detail/humanoid_upper_limb__struct.hpp"
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

typedef struct _HumanoidUpperLimb_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _HumanoidUpperLimb_type_support_ids_t;

static const _HumanoidUpperLimb_type_support_ids_t _HumanoidUpperLimb_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _HumanoidUpperLimb_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _HumanoidUpperLimb_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _HumanoidUpperLimb_type_support_symbol_names_t _HumanoidUpperLimb_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ymrobot_msgs, srv, HumanoidUpperLimb)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ymrobot_msgs, srv, HumanoidUpperLimb)),
  }
};

typedef struct _HumanoidUpperLimb_type_support_data_t
{
  void * data[2];
} _HumanoidUpperLimb_type_support_data_t;

static _HumanoidUpperLimb_type_support_data_t _HumanoidUpperLimb_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _HumanoidUpperLimb_service_typesupport_map = {
  2,
  "ymrobot_msgs",
  &_HumanoidUpperLimb_service_typesupport_ids.typesupport_identifier[0],
  &_HumanoidUpperLimb_service_typesupport_symbol_names.symbol_name[0],
  &_HumanoidUpperLimb_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t HumanoidUpperLimb_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_HumanoidUpperLimb_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<ymrobot_msgs::srv::HumanoidUpperLimb_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<ymrobot_msgs::srv::HumanoidUpperLimb_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<ymrobot_msgs::srv::HumanoidUpperLimb_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<ymrobot_msgs::srv::HumanoidUpperLimb>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<ymrobot_msgs::srv::HumanoidUpperLimb>,
  &ymrobot_msgs__srv__HumanoidUpperLimb__get_type_hash,
  &ymrobot_msgs__srv__HumanoidUpperLimb__get_type_description,
  &ymrobot_msgs__srv__HumanoidUpperLimb__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace ymrobot_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<ymrobot_msgs::srv::HumanoidUpperLimb>()
{
  return &::ymrobot_msgs::srv::rosidl_typesupport_cpp::HumanoidUpperLimb_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, ymrobot_msgs, srv, HumanoidUpperLimb)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<ymrobot_msgs::srv::HumanoidUpperLimb>();
}

#ifdef __cplusplus
}
#endif
