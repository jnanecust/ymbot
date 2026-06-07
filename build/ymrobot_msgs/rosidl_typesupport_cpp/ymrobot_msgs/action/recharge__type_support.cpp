// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from ymrobot_msgs:action/Recharge.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "ymrobot_msgs/action/detail/recharge__functions.h"
#include "ymrobot_msgs/action/detail/recharge__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace ymrobot_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Recharge_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Recharge_Goal_type_support_ids_t;

static const _Recharge_Goal_type_support_ids_t _Recharge_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Recharge_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Recharge_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Recharge_Goal_type_support_symbol_names_t _Recharge_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ymrobot_msgs, action, Recharge_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ymrobot_msgs, action, Recharge_Goal)),
  }
};

typedef struct _Recharge_Goal_type_support_data_t
{
  void * data[2];
} _Recharge_Goal_type_support_data_t;

static _Recharge_Goal_type_support_data_t _Recharge_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Recharge_Goal_message_typesupport_map = {
  2,
  "ymrobot_msgs",
  &_Recharge_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_Recharge_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_Recharge_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Recharge_Goal_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Recharge_Goal_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &ymrobot_msgs__action__Recharge_Goal__get_type_hash,
  &ymrobot_msgs__action__Recharge_Goal__get_type_description,
  &ymrobot_msgs__action__Recharge_Goal__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace ymrobot_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ymrobot_msgs::action::Recharge_Goal>()
{
  return &::ymrobot_msgs::action::rosidl_typesupport_cpp::Recharge_Goal_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, ymrobot_msgs, action, Recharge_Goal)() {
  return get_message_type_support_handle<ymrobot_msgs::action::Recharge_Goal>();
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
// #include "ymrobot_msgs/action/detail/recharge__functions.h"
// already included above
// #include "ymrobot_msgs/action/detail/recharge__struct.hpp"
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

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Recharge_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Recharge_Result_type_support_ids_t;

static const _Recharge_Result_type_support_ids_t _Recharge_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Recharge_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Recharge_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Recharge_Result_type_support_symbol_names_t _Recharge_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ymrobot_msgs, action, Recharge_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ymrobot_msgs, action, Recharge_Result)),
  }
};

typedef struct _Recharge_Result_type_support_data_t
{
  void * data[2];
} _Recharge_Result_type_support_data_t;

static _Recharge_Result_type_support_data_t _Recharge_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Recharge_Result_message_typesupport_map = {
  2,
  "ymrobot_msgs",
  &_Recharge_Result_message_typesupport_ids.typesupport_identifier[0],
  &_Recharge_Result_message_typesupport_symbol_names.symbol_name[0],
  &_Recharge_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Recharge_Result_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Recharge_Result_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &ymrobot_msgs__action__Recharge_Result__get_type_hash,
  &ymrobot_msgs__action__Recharge_Result__get_type_description,
  &ymrobot_msgs__action__Recharge_Result__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace ymrobot_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ymrobot_msgs::action::Recharge_Result>()
{
  return &::ymrobot_msgs::action::rosidl_typesupport_cpp::Recharge_Result_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, ymrobot_msgs, action, Recharge_Result)() {
  return get_message_type_support_handle<ymrobot_msgs::action::Recharge_Result>();
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
// #include "ymrobot_msgs/action/detail/recharge__functions.h"
// already included above
// #include "ymrobot_msgs/action/detail/recharge__struct.hpp"
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

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Recharge_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Recharge_Feedback_type_support_ids_t;

static const _Recharge_Feedback_type_support_ids_t _Recharge_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Recharge_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Recharge_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Recharge_Feedback_type_support_symbol_names_t _Recharge_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ymrobot_msgs, action, Recharge_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ymrobot_msgs, action, Recharge_Feedback)),
  }
};

typedef struct _Recharge_Feedback_type_support_data_t
{
  void * data[2];
} _Recharge_Feedback_type_support_data_t;

static _Recharge_Feedback_type_support_data_t _Recharge_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Recharge_Feedback_message_typesupport_map = {
  2,
  "ymrobot_msgs",
  &_Recharge_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_Recharge_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_Recharge_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Recharge_Feedback_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Recharge_Feedback_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &ymrobot_msgs__action__Recharge_Feedback__get_type_hash,
  &ymrobot_msgs__action__Recharge_Feedback__get_type_description,
  &ymrobot_msgs__action__Recharge_Feedback__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace ymrobot_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ymrobot_msgs::action::Recharge_Feedback>()
{
  return &::ymrobot_msgs::action::rosidl_typesupport_cpp::Recharge_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, ymrobot_msgs, action, Recharge_Feedback)() {
  return get_message_type_support_handle<ymrobot_msgs::action::Recharge_Feedback>();
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
// #include "ymrobot_msgs/action/detail/recharge__functions.h"
// already included above
// #include "ymrobot_msgs/action/detail/recharge__struct.hpp"
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

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Recharge_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Recharge_SendGoal_Request_type_support_ids_t;

static const _Recharge_SendGoal_Request_type_support_ids_t _Recharge_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Recharge_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Recharge_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Recharge_SendGoal_Request_type_support_symbol_names_t _Recharge_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ymrobot_msgs, action, Recharge_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ymrobot_msgs, action, Recharge_SendGoal_Request)),
  }
};

typedef struct _Recharge_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _Recharge_SendGoal_Request_type_support_data_t;

static _Recharge_SendGoal_Request_type_support_data_t _Recharge_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Recharge_SendGoal_Request_message_typesupport_map = {
  2,
  "ymrobot_msgs",
  &_Recharge_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_Recharge_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_Recharge_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Recharge_SendGoal_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Recharge_SendGoal_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &ymrobot_msgs__action__Recharge_SendGoal_Request__get_type_hash,
  &ymrobot_msgs__action__Recharge_SendGoal_Request__get_type_description,
  &ymrobot_msgs__action__Recharge_SendGoal_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace ymrobot_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ymrobot_msgs::action::Recharge_SendGoal_Request>()
{
  return &::ymrobot_msgs::action::rosidl_typesupport_cpp::Recharge_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, ymrobot_msgs, action, Recharge_SendGoal_Request)() {
  return get_message_type_support_handle<ymrobot_msgs::action::Recharge_SendGoal_Request>();
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
// #include "ymrobot_msgs/action/detail/recharge__functions.h"
// already included above
// #include "ymrobot_msgs/action/detail/recharge__struct.hpp"
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

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Recharge_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Recharge_SendGoal_Response_type_support_ids_t;

static const _Recharge_SendGoal_Response_type_support_ids_t _Recharge_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Recharge_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Recharge_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Recharge_SendGoal_Response_type_support_symbol_names_t _Recharge_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ymrobot_msgs, action, Recharge_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ymrobot_msgs, action, Recharge_SendGoal_Response)),
  }
};

typedef struct _Recharge_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _Recharge_SendGoal_Response_type_support_data_t;

static _Recharge_SendGoal_Response_type_support_data_t _Recharge_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Recharge_SendGoal_Response_message_typesupport_map = {
  2,
  "ymrobot_msgs",
  &_Recharge_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_Recharge_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_Recharge_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Recharge_SendGoal_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Recharge_SendGoal_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &ymrobot_msgs__action__Recharge_SendGoal_Response__get_type_hash,
  &ymrobot_msgs__action__Recharge_SendGoal_Response__get_type_description,
  &ymrobot_msgs__action__Recharge_SendGoal_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace ymrobot_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ymrobot_msgs::action::Recharge_SendGoal_Response>()
{
  return &::ymrobot_msgs::action::rosidl_typesupport_cpp::Recharge_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, ymrobot_msgs, action, Recharge_SendGoal_Response)() {
  return get_message_type_support_handle<ymrobot_msgs::action::Recharge_SendGoal_Response>();
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
// #include "ymrobot_msgs/action/detail/recharge__functions.h"
// already included above
// #include "ymrobot_msgs/action/detail/recharge__struct.hpp"
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

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Recharge_SendGoal_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Recharge_SendGoal_Event_type_support_ids_t;

static const _Recharge_SendGoal_Event_type_support_ids_t _Recharge_SendGoal_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Recharge_SendGoal_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Recharge_SendGoal_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Recharge_SendGoal_Event_type_support_symbol_names_t _Recharge_SendGoal_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ymrobot_msgs, action, Recharge_SendGoal_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ymrobot_msgs, action, Recharge_SendGoal_Event)),
  }
};

typedef struct _Recharge_SendGoal_Event_type_support_data_t
{
  void * data[2];
} _Recharge_SendGoal_Event_type_support_data_t;

static _Recharge_SendGoal_Event_type_support_data_t _Recharge_SendGoal_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Recharge_SendGoal_Event_message_typesupport_map = {
  2,
  "ymrobot_msgs",
  &_Recharge_SendGoal_Event_message_typesupport_ids.typesupport_identifier[0],
  &_Recharge_SendGoal_Event_message_typesupport_symbol_names.symbol_name[0],
  &_Recharge_SendGoal_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Recharge_SendGoal_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Recharge_SendGoal_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &ymrobot_msgs__action__Recharge_SendGoal_Event__get_type_hash,
  &ymrobot_msgs__action__Recharge_SendGoal_Event__get_type_description,
  &ymrobot_msgs__action__Recharge_SendGoal_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace ymrobot_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ymrobot_msgs::action::Recharge_SendGoal_Event>()
{
  return &::ymrobot_msgs::action::rosidl_typesupport_cpp::Recharge_SendGoal_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, ymrobot_msgs, action, Recharge_SendGoal_Event)() {
  return get_message_type_support_handle<ymrobot_msgs::action::Recharge_SendGoal_Event>();
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
// #include "ymrobot_msgs/action/detail/recharge__struct.hpp"
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

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Recharge_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Recharge_SendGoal_type_support_ids_t;

static const _Recharge_SendGoal_type_support_ids_t _Recharge_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Recharge_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Recharge_SendGoal_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Recharge_SendGoal_type_support_symbol_names_t _Recharge_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ymrobot_msgs, action, Recharge_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ymrobot_msgs, action, Recharge_SendGoal)),
  }
};

typedef struct _Recharge_SendGoal_type_support_data_t
{
  void * data[2];
} _Recharge_SendGoal_type_support_data_t;

static _Recharge_SendGoal_type_support_data_t _Recharge_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Recharge_SendGoal_service_typesupport_map = {
  2,
  "ymrobot_msgs",
  &_Recharge_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_Recharge_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_Recharge_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t Recharge_SendGoal_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Recharge_SendGoal_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<ymrobot_msgs::action::Recharge_SendGoal_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<ymrobot_msgs::action::Recharge_SendGoal_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<ymrobot_msgs::action::Recharge_SendGoal_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<ymrobot_msgs::action::Recharge_SendGoal>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<ymrobot_msgs::action::Recharge_SendGoal>,
  &ymrobot_msgs__action__Recharge_SendGoal__get_type_hash,
  &ymrobot_msgs__action__Recharge_SendGoal__get_type_description,
  &ymrobot_msgs__action__Recharge_SendGoal__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace ymrobot_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<ymrobot_msgs::action::Recharge_SendGoal>()
{
  return &::ymrobot_msgs::action::rosidl_typesupport_cpp::Recharge_SendGoal_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, ymrobot_msgs, action, Recharge_SendGoal)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<ymrobot_msgs::action::Recharge_SendGoal>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ymrobot_msgs/action/detail/recharge__functions.h"
// already included above
// #include "ymrobot_msgs/action/detail/recharge__struct.hpp"
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

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Recharge_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Recharge_GetResult_Request_type_support_ids_t;

static const _Recharge_GetResult_Request_type_support_ids_t _Recharge_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Recharge_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Recharge_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Recharge_GetResult_Request_type_support_symbol_names_t _Recharge_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ymrobot_msgs, action, Recharge_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ymrobot_msgs, action, Recharge_GetResult_Request)),
  }
};

typedef struct _Recharge_GetResult_Request_type_support_data_t
{
  void * data[2];
} _Recharge_GetResult_Request_type_support_data_t;

static _Recharge_GetResult_Request_type_support_data_t _Recharge_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Recharge_GetResult_Request_message_typesupport_map = {
  2,
  "ymrobot_msgs",
  &_Recharge_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_Recharge_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_Recharge_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Recharge_GetResult_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Recharge_GetResult_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &ymrobot_msgs__action__Recharge_GetResult_Request__get_type_hash,
  &ymrobot_msgs__action__Recharge_GetResult_Request__get_type_description,
  &ymrobot_msgs__action__Recharge_GetResult_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace ymrobot_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ymrobot_msgs::action::Recharge_GetResult_Request>()
{
  return &::ymrobot_msgs::action::rosidl_typesupport_cpp::Recharge_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, ymrobot_msgs, action, Recharge_GetResult_Request)() {
  return get_message_type_support_handle<ymrobot_msgs::action::Recharge_GetResult_Request>();
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
// #include "ymrobot_msgs/action/detail/recharge__functions.h"
// already included above
// #include "ymrobot_msgs/action/detail/recharge__struct.hpp"
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

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Recharge_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Recharge_GetResult_Response_type_support_ids_t;

static const _Recharge_GetResult_Response_type_support_ids_t _Recharge_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Recharge_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Recharge_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Recharge_GetResult_Response_type_support_symbol_names_t _Recharge_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ymrobot_msgs, action, Recharge_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ymrobot_msgs, action, Recharge_GetResult_Response)),
  }
};

typedef struct _Recharge_GetResult_Response_type_support_data_t
{
  void * data[2];
} _Recharge_GetResult_Response_type_support_data_t;

static _Recharge_GetResult_Response_type_support_data_t _Recharge_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Recharge_GetResult_Response_message_typesupport_map = {
  2,
  "ymrobot_msgs",
  &_Recharge_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_Recharge_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_Recharge_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Recharge_GetResult_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Recharge_GetResult_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &ymrobot_msgs__action__Recharge_GetResult_Response__get_type_hash,
  &ymrobot_msgs__action__Recharge_GetResult_Response__get_type_description,
  &ymrobot_msgs__action__Recharge_GetResult_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace ymrobot_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ymrobot_msgs::action::Recharge_GetResult_Response>()
{
  return &::ymrobot_msgs::action::rosidl_typesupport_cpp::Recharge_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, ymrobot_msgs, action, Recharge_GetResult_Response)() {
  return get_message_type_support_handle<ymrobot_msgs::action::Recharge_GetResult_Response>();
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
// #include "ymrobot_msgs/action/detail/recharge__functions.h"
// already included above
// #include "ymrobot_msgs/action/detail/recharge__struct.hpp"
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

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Recharge_GetResult_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Recharge_GetResult_Event_type_support_ids_t;

static const _Recharge_GetResult_Event_type_support_ids_t _Recharge_GetResult_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Recharge_GetResult_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Recharge_GetResult_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Recharge_GetResult_Event_type_support_symbol_names_t _Recharge_GetResult_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ymrobot_msgs, action, Recharge_GetResult_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ymrobot_msgs, action, Recharge_GetResult_Event)),
  }
};

typedef struct _Recharge_GetResult_Event_type_support_data_t
{
  void * data[2];
} _Recharge_GetResult_Event_type_support_data_t;

static _Recharge_GetResult_Event_type_support_data_t _Recharge_GetResult_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Recharge_GetResult_Event_message_typesupport_map = {
  2,
  "ymrobot_msgs",
  &_Recharge_GetResult_Event_message_typesupport_ids.typesupport_identifier[0],
  &_Recharge_GetResult_Event_message_typesupport_symbol_names.symbol_name[0],
  &_Recharge_GetResult_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Recharge_GetResult_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Recharge_GetResult_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &ymrobot_msgs__action__Recharge_GetResult_Event__get_type_hash,
  &ymrobot_msgs__action__Recharge_GetResult_Event__get_type_description,
  &ymrobot_msgs__action__Recharge_GetResult_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace ymrobot_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ymrobot_msgs::action::Recharge_GetResult_Event>()
{
  return &::ymrobot_msgs::action::rosidl_typesupport_cpp::Recharge_GetResult_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, ymrobot_msgs, action, Recharge_GetResult_Event)() {
  return get_message_type_support_handle<ymrobot_msgs::action::Recharge_GetResult_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "ymrobot_msgs/action/detail/recharge__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace ymrobot_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Recharge_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Recharge_GetResult_type_support_ids_t;

static const _Recharge_GetResult_type_support_ids_t _Recharge_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Recharge_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Recharge_GetResult_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Recharge_GetResult_type_support_symbol_names_t _Recharge_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ymrobot_msgs, action, Recharge_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ymrobot_msgs, action, Recharge_GetResult)),
  }
};

typedef struct _Recharge_GetResult_type_support_data_t
{
  void * data[2];
} _Recharge_GetResult_type_support_data_t;

static _Recharge_GetResult_type_support_data_t _Recharge_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Recharge_GetResult_service_typesupport_map = {
  2,
  "ymrobot_msgs",
  &_Recharge_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_Recharge_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_Recharge_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t Recharge_GetResult_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Recharge_GetResult_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<ymrobot_msgs::action::Recharge_GetResult_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<ymrobot_msgs::action::Recharge_GetResult_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<ymrobot_msgs::action::Recharge_GetResult_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<ymrobot_msgs::action::Recharge_GetResult>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<ymrobot_msgs::action::Recharge_GetResult>,
  &ymrobot_msgs__action__Recharge_GetResult__get_type_hash,
  &ymrobot_msgs__action__Recharge_GetResult__get_type_description,
  &ymrobot_msgs__action__Recharge_GetResult__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace ymrobot_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<ymrobot_msgs::action::Recharge_GetResult>()
{
  return &::ymrobot_msgs::action::rosidl_typesupport_cpp::Recharge_GetResult_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, ymrobot_msgs, action, Recharge_GetResult)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<ymrobot_msgs::action::Recharge_GetResult>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ymrobot_msgs/action/detail/recharge__functions.h"
// already included above
// #include "ymrobot_msgs/action/detail/recharge__struct.hpp"
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

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Recharge_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Recharge_FeedbackMessage_type_support_ids_t;

static const _Recharge_FeedbackMessage_type_support_ids_t _Recharge_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Recharge_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Recharge_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Recharge_FeedbackMessage_type_support_symbol_names_t _Recharge_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ymrobot_msgs, action, Recharge_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ymrobot_msgs, action, Recharge_FeedbackMessage)),
  }
};

typedef struct _Recharge_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _Recharge_FeedbackMessage_type_support_data_t;

static _Recharge_FeedbackMessage_type_support_data_t _Recharge_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Recharge_FeedbackMessage_message_typesupport_map = {
  2,
  "ymrobot_msgs",
  &_Recharge_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_Recharge_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_Recharge_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Recharge_FeedbackMessage_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Recharge_FeedbackMessage_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &ymrobot_msgs__action__Recharge_FeedbackMessage__get_type_hash,
  &ymrobot_msgs__action__Recharge_FeedbackMessage__get_type_description,
  &ymrobot_msgs__action__Recharge_FeedbackMessage__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace ymrobot_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ymrobot_msgs::action::Recharge_FeedbackMessage>()
{
  return &::ymrobot_msgs::action::rosidl_typesupport_cpp::Recharge_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, ymrobot_msgs, action, Recharge_FeedbackMessage)() {
  return get_message_type_support_handle<ymrobot_msgs::action::Recharge_FeedbackMessage>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

#include "action_msgs/msg/goal_status_array.hpp"
#include "action_msgs/srv/cancel_goal.hpp"
// already included above
// #include "ymrobot_msgs/action/detail/recharge__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_typesupport_cpp/action_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"

namespace ymrobot_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

static rosidl_action_type_support_t Recharge_action_type_support_handle = {
  NULL, NULL, NULL, NULL, NULL,
  &ymrobot_msgs__action__Recharge__get_type_hash,
  &ymrobot_msgs__action__Recharge__get_type_description,
  &ymrobot_msgs__action__Recharge__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace ymrobot_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
get_action_type_support_handle<ymrobot_msgs::action::Recharge>()
{
  using ::ymrobot_msgs::action::rosidl_typesupport_cpp::Recharge_action_type_support_handle;
  // Thread-safe by always writing the same values to the static struct
  Recharge_action_type_support_handle.goal_service_type_support = get_service_type_support_handle<::ymrobot_msgs::action::Recharge::Impl::SendGoalService>();
  Recharge_action_type_support_handle.result_service_type_support = get_service_type_support_handle<::ymrobot_msgs::action::Recharge::Impl::GetResultService>();
  Recharge_action_type_support_handle.cancel_service_type_support = get_service_type_support_handle<::ymrobot_msgs::action::Recharge::Impl::CancelGoalService>();
  Recharge_action_type_support_handle.feedback_message_type_support = get_message_type_support_handle<::ymrobot_msgs::action::Recharge::Impl::FeedbackMessage>();
  Recharge_action_type_support_handle.status_message_type_support = get_message_type_support_handle<::ymrobot_msgs::action::Recharge::Impl::GoalStatusMessage>();
  return &Recharge_action_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(rosidl_typesupport_cpp, ymrobot_msgs, action, Recharge)() {
  return ::rosidl_typesupport_cpp::get_action_type_support_handle<ymrobot_msgs::action::Recharge>();
}

#ifdef __cplusplus
}
#endif
