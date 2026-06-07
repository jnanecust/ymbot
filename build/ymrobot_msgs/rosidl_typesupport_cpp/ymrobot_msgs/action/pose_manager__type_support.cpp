// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from ymrobot_msgs:action/PoseManager.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "ymrobot_msgs/action/detail/pose_manager__functions.h"
#include "ymrobot_msgs/action/detail/pose_manager__struct.hpp"
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

typedef struct _PoseManager_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PoseManager_Goal_type_support_ids_t;

static const _PoseManager_Goal_type_support_ids_t _PoseManager_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _PoseManager_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PoseManager_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PoseManager_Goal_type_support_symbol_names_t _PoseManager_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ymrobot_msgs, action, PoseManager_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ymrobot_msgs, action, PoseManager_Goal)),
  }
};

typedef struct _PoseManager_Goal_type_support_data_t
{
  void * data[2];
} _PoseManager_Goal_type_support_data_t;

static _PoseManager_Goal_type_support_data_t _PoseManager_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PoseManager_Goal_message_typesupport_map = {
  2,
  "ymrobot_msgs",
  &_PoseManager_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_PoseManager_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_PoseManager_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PoseManager_Goal_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PoseManager_Goal_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &ymrobot_msgs__action__PoseManager_Goal__get_type_hash,
  &ymrobot_msgs__action__PoseManager_Goal__get_type_description,
  &ymrobot_msgs__action__PoseManager_Goal__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace ymrobot_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ymrobot_msgs::action::PoseManager_Goal>()
{
  return &::ymrobot_msgs::action::rosidl_typesupport_cpp::PoseManager_Goal_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, ymrobot_msgs, action, PoseManager_Goal)() {
  return get_message_type_support_handle<ymrobot_msgs::action::PoseManager_Goal>();
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
// #include "ymrobot_msgs/action/detail/pose_manager__functions.h"
// already included above
// #include "ymrobot_msgs/action/detail/pose_manager__struct.hpp"
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

typedef struct _PoseManager_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PoseManager_Result_type_support_ids_t;

static const _PoseManager_Result_type_support_ids_t _PoseManager_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _PoseManager_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PoseManager_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PoseManager_Result_type_support_symbol_names_t _PoseManager_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ymrobot_msgs, action, PoseManager_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ymrobot_msgs, action, PoseManager_Result)),
  }
};

typedef struct _PoseManager_Result_type_support_data_t
{
  void * data[2];
} _PoseManager_Result_type_support_data_t;

static _PoseManager_Result_type_support_data_t _PoseManager_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PoseManager_Result_message_typesupport_map = {
  2,
  "ymrobot_msgs",
  &_PoseManager_Result_message_typesupport_ids.typesupport_identifier[0],
  &_PoseManager_Result_message_typesupport_symbol_names.symbol_name[0],
  &_PoseManager_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PoseManager_Result_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PoseManager_Result_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &ymrobot_msgs__action__PoseManager_Result__get_type_hash,
  &ymrobot_msgs__action__PoseManager_Result__get_type_description,
  &ymrobot_msgs__action__PoseManager_Result__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace ymrobot_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ymrobot_msgs::action::PoseManager_Result>()
{
  return &::ymrobot_msgs::action::rosidl_typesupport_cpp::PoseManager_Result_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, ymrobot_msgs, action, PoseManager_Result)() {
  return get_message_type_support_handle<ymrobot_msgs::action::PoseManager_Result>();
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
// #include "ymrobot_msgs/action/detail/pose_manager__functions.h"
// already included above
// #include "ymrobot_msgs/action/detail/pose_manager__struct.hpp"
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

typedef struct _PoseManager_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PoseManager_Feedback_type_support_ids_t;

static const _PoseManager_Feedback_type_support_ids_t _PoseManager_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _PoseManager_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PoseManager_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PoseManager_Feedback_type_support_symbol_names_t _PoseManager_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ymrobot_msgs, action, PoseManager_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ymrobot_msgs, action, PoseManager_Feedback)),
  }
};

typedef struct _PoseManager_Feedback_type_support_data_t
{
  void * data[2];
} _PoseManager_Feedback_type_support_data_t;

static _PoseManager_Feedback_type_support_data_t _PoseManager_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PoseManager_Feedback_message_typesupport_map = {
  2,
  "ymrobot_msgs",
  &_PoseManager_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_PoseManager_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_PoseManager_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PoseManager_Feedback_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PoseManager_Feedback_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &ymrobot_msgs__action__PoseManager_Feedback__get_type_hash,
  &ymrobot_msgs__action__PoseManager_Feedback__get_type_description,
  &ymrobot_msgs__action__PoseManager_Feedback__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace ymrobot_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ymrobot_msgs::action::PoseManager_Feedback>()
{
  return &::ymrobot_msgs::action::rosidl_typesupport_cpp::PoseManager_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, ymrobot_msgs, action, PoseManager_Feedback)() {
  return get_message_type_support_handle<ymrobot_msgs::action::PoseManager_Feedback>();
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
// #include "ymrobot_msgs/action/detail/pose_manager__functions.h"
// already included above
// #include "ymrobot_msgs/action/detail/pose_manager__struct.hpp"
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

typedef struct _PoseManager_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PoseManager_SendGoal_Request_type_support_ids_t;

static const _PoseManager_SendGoal_Request_type_support_ids_t _PoseManager_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _PoseManager_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PoseManager_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PoseManager_SendGoal_Request_type_support_symbol_names_t _PoseManager_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ymrobot_msgs, action, PoseManager_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ymrobot_msgs, action, PoseManager_SendGoal_Request)),
  }
};

typedef struct _PoseManager_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _PoseManager_SendGoal_Request_type_support_data_t;

static _PoseManager_SendGoal_Request_type_support_data_t _PoseManager_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PoseManager_SendGoal_Request_message_typesupport_map = {
  2,
  "ymrobot_msgs",
  &_PoseManager_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_PoseManager_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_PoseManager_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PoseManager_SendGoal_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PoseManager_SendGoal_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &ymrobot_msgs__action__PoseManager_SendGoal_Request__get_type_hash,
  &ymrobot_msgs__action__PoseManager_SendGoal_Request__get_type_description,
  &ymrobot_msgs__action__PoseManager_SendGoal_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace ymrobot_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ymrobot_msgs::action::PoseManager_SendGoal_Request>()
{
  return &::ymrobot_msgs::action::rosidl_typesupport_cpp::PoseManager_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, ymrobot_msgs, action, PoseManager_SendGoal_Request)() {
  return get_message_type_support_handle<ymrobot_msgs::action::PoseManager_SendGoal_Request>();
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
// #include "ymrobot_msgs/action/detail/pose_manager__functions.h"
// already included above
// #include "ymrobot_msgs/action/detail/pose_manager__struct.hpp"
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

typedef struct _PoseManager_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PoseManager_SendGoal_Response_type_support_ids_t;

static const _PoseManager_SendGoal_Response_type_support_ids_t _PoseManager_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _PoseManager_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PoseManager_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PoseManager_SendGoal_Response_type_support_symbol_names_t _PoseManager_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ymrobot_msgs, action, PoseManager_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ymrobot_msgs, action, PoseManager_SendGoal_Response)),
  }
};

typedef struct _PoseManager_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _PoseManager_SendGoal_Response_type_support_data_t;

static _PoseManager_SendGoal_Response_type_support_data_t _PoseManager_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PoseManager_SendGoal_Response_message_typesupport_map = {
  2,
  "ymrobot_msgs",
  &_PoseManager_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_PoseManager_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_PoseManager_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PoseManager_SendGoal_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PoseManager_SendGoal_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &ymrobot_msgs__action__PoseManager_SendGoal_Response__get_type_hash,
  &ymrobot_msgs__action__PoseManager_SendGoal_Response__get_type_description,
  &ymrobot_msgs__action__PoseManager_SendGoal_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace ymrobot_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ymrobot_msgs::action::PoseManager_SendGoal_Response>()
{
  return &::ymrobot_msgs::action::rosidl_typesupport_cpp::PoseManager_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, ymrobot_msgs, action, PoseManager_SendGoal_Response)() {
  return get_message_type_support_handle<ymrobot_msgs::action::PoseManager_SendGoal_Response>();
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
// #include "ymrobot_msgs/action/detail/pose_manager__functions.h"
// already included above
// #include "ymrobot_msgs/action/detail/pose_manager__struct.hpp"
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

typedef struct _PoseManager_SendGoal_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PoseManager_SendGoal_Event_type_support_ids_t;

static const _PoseManager_SendGoal_Event_type_support_ids_t _PoseManager_SendGoal_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _PoseManager_SendGoal_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PoseManager_SendGoal_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PoseManager_SendGoal_Event_type_support_symbol_names_t _PoseManager_SendGoal_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ymrobot_msgs, action, PoseManager_SendGoal_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ymrobot_msgs, action, PoseManager_SendGoal_Event)),
  }
};

typedef struct _PoseManager_SendGoal_Event_type_support_data_t
{
  void * data[2];
} _PoseManager_SendGoal_Event_type_support_data_t;

static _PoseManager_SendGoal_Event_type_support_data_t _PoseManager_SendGoal_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PoseManager_SendGoal_Event_message_typesupport_map = {
  2,
  "ymrobot_msgs",
  &_PoseManager_SendGoal_Event_message_typesupport_ids.typesupport_identifier[0],
  &_PoseManager_SendGoal_Event_message_typesupport_symbol_names.symbol_name[0],
  &_PoseManager_SendGoal_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PoseManager_SendGoal_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PoseManager_SendGoal_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &ymrobot_msgs__action__PoseManager_SendGoal_Event__get_type_hash,
  &ymrobot_msgs__action__PoseManager_SendGoal_Event__get_type_description,
  &ymrobot_msgs__action__PoseManager_SendGoal_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace ymrobot_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ymrobot_msgs::action::PoseManager_SendGoal_Event>()
{
  return &::ymrobot_msgs::action::rosidl_typesupport_cpp::PoseManager_SendGoal_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, ymrobot_msgs, action, PoseManager_SendGoal_Event)() {
  return get_message_type_support_handle<ymrobot_msgs::action::PoseManager_SendGoal_Event>();
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
// #include "ymrobot_msgs/action/detail/pose_manager__struct.hpp"
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

typedef struct _PoseManager_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PoseManager_SendGoal_type_support_ids_t;

static const _PoseManager_SendGoal_type_support_ids_t _PoseManager_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _PoseManager_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PoseManager_SendGoal_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PoseManager_SendGoal_type_support_symbol_names_t _PoseManager_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ymrobot_msgs, action, PoseManager_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ymrobot_msgs, action, PoseManager_SendGoal)),
  }
};

typedef struct _PoseManager_SendGoal_type_support_data_t
{
  void * data[2];
} _PoseManager_SendGoal_type_support_data_t;

static _PoseManager_SendGoal_type_support_data_t _PoseManager_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PoseManager_SendGoal_service_typesupport_map = {
  2,
  "ymrobot_msgs",
  &_PoseManager_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_PoseManager_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_PoseManager_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t PoseManager_SendGoal_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PoseManager_SendGoal_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<ymrobot_msgs::action::PoseManager_SendGoal_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<ymrobot_msgs::action::PoseManager_SendGoal_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<ymrobot_msgs::action::PoseManager_SendGoal_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<ymrobot_msgs::action::PoseManager_SendGoal>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<ymrobot_msgs::action::PoseManager_SendGoal>,
  &ymrobot_msgs__action__PoseManager_SendGoal__get_type_hash,
  &ymrobot_msgs__action__PoseManager_SendGoal__get_type_description,
  &ymrobot_msgs__action__PoseManager_SendGoal__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace ymrobot_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<ymrobot_msgs::action::PoseManager_SendGoal>()
{
  return &::ymrobot_msgs::action::rosidl_typesupport_cpp::PoseManager_SendGoal_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, ymrobot_msgs, action, PoseManager_SendGoal)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<ymrobot_msgs::action::PoseManager_SendGoal>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ymrobot_msgs/action/detail/pose_manager__functions.h"
// already included above
// #include "ymrobot_msgs/action/detail/pose_manager__struct.hpp"
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

typedef struct _PoseManager_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PoseManager_GetResult_Request_type_support_ids_t;

static const _PoseManager_GetResult_Request_type_support_ids_t _PoseManager_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _PoseManager_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PoseManager_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PoseManager_GetResult_Request_type_support_symbol_names_t _PoseManager_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ymrobot_msgs, action, PoseManager_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ymrobot_msgs, action, PoseManager_GetResult_Request)),
  }
};

typedef struct _PoseManager_GetResult_Request_type_support_data_t
{
  void * data[2];
} _PoseManager_GetResult_Request_type_support_data_t;

static _PoseManager_GetResult_Request_type_support_data_t _PoseManager_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PoseManager_GetResult_Request_message_typesupport_map = {
  2,
  "ymrobot_msgs",
  &_PoseManager_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_PoseManager_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_PoseManager_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PoseManager_GetResult_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PoseManager_GetResult_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &ymrobot_msgs__action__PoseManager_GetResult_Request__get_type_hash,
  &ymrobot_msgs__action__PoseManager_GetResult_Request__get_type_description,
  &ymrobot_msgs__action__PoseManager_GetResult_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace ymrobot_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ymrobot_msgs::action::PoseManager_GetResult_Request>()
{
  return &::ymrobot_msgs::action::rosidl_typesupport_cpp::PoseManager_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, ymrobot_msgs, action, PoseManager_GetResult_Request)() {
  return get_message_type_support_handle<ymrobot_msgs::action::PoseManager_GetResult_Request>();
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
// #include "ymrobot_msgs/action/detail/pose_manager__functions.h"
// already included above
// #include "ymrobot_msgs/action/detail/pose_manager__struct.hpp"
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

typedef struct _PoseManager_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PoseManager_GetResult_Response_type_support_ids_t;

static const _PoseManager_GetResult_Response_type_support_ids_t _PoseManager_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _PoseManager_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PoseManager_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PoseManager_GetResult_Response_type_support_symbol_names_t _PoseManager_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ymrobot_msgs, action, PoseManager_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ymrobot_msgs, action, PoseManager_GetResult_Response)),
  }
};

typedef struct _PoseManager_GetResult_Response_type_support_data_t
{
  void * data[2];
} _PoseManager_GetResult_Response_type_support_data_t;

static _PoseManager_GetResult_Response_type_support_data_t _PoseManager_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PoseManager_GetResult_Response_message_typesupport_map = {
  2,
  "ymrobot_msgs",
  &_PoseManager_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_PoseManager_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_PoseManager_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PoseManager_GetResult_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PoseManager_GetResult_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &ymrobot_msgs__action__PoseManager_GetResult_Response__get_type_hash,
  &ymrobot_msgs__action__PoseManager_GetResult_Response__get_type_description,
  &ymrobot_msgs__action__PoseManager_GetResult_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace ymrobot_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ymrobot_msgs::action::PoseManager_GetResult_Response>()
{
  return &::ymrobot_msgs::action::rosidl_typesupport_cpp::PoseManager_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, ymrobot_msgs, action, PoseManager_GetResult_Response)() {
  return get_message_type_support_handle<ymrobot_msgs::action::PoseManager_GetResult_Response>();
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
// #include "ymrobot_msgs/action/detail/pose_manager__functions.h"
// already included above
// #include "ymrobot_msgs/action/detail/pose_manager__struct.hpp"
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

typedef struct _PoseManager_GetResult_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PoseManager_GetResult_Event_type_support_ids_t;

static const _PoseManager_GetResult_Event_type_support_ids_t _PoseManager_GetResult_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _PoseManager_GetResult_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PoseManager_GetResult_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PoseManager_GetResult_Event_type_support_symbol_names_t _PoseManager_GetResult_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ymrobot_msgs, action, PoseManager_GetResult_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ymrobot_msgs, action, PoseManager_GetResult_Event)),
  }
};

typedef struct _PoseManager_GetResult_Event_type_support_data_t
{
  void * data[2];
} _PoseManager_GetResult_Event_type_support_data_t;

static _PoseManager_GetResult_Event_type_support_data_t _PoseManager_GetResult_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PoseManager_GetResult_Event_message_typesupport_map = {
  2,
  "ymrobot_msgs",
  &_PoseManager_GetResult_Event_message_typesupport_ids.typesupport_identifier[0],
  &_PoseManager_GetResult_Event_message_typesupport_symbol_names.symbol_name[0],
  &_PoseManager_GetResult_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PoseManager_GetResult_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PoseManager_GetResult_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &ymrobot_msgs__action__PoseManager_GetResult_Event__get_type_hash,
  &ymrobot_msgs__action__PoseManager_GetResult_Event__get_type_description,
  &ymrobot_msgs__action__PoseManager_GetResult_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace ymrobot_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ymrobot_msgs::action::PoseManager_GetResult_Event>()
{
  return &::ymrobot_msgs::action::rosidl_typesupport_cpp::PoseManager_GetResult_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, ymrobot_msgs, action, PoseManager_GetResult_Event)() {
  return get_message_type_support_handle<ymrobot_msgs::action::PoseManager_GetResult_Event>();
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
// #include "ymrobot_msgs/action/detail/pose_manager__struct.hpp"
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

typedef struct _PoseManager_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PoseManager_GetResult_type_support_ids_t;

static const _PoseManager_GetResult_type_support_ids_t _PoseManager_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _PoseManager_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PoseManager_GetResult_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PoseManager_GetResult_type_support_symbol_names_t _PoseManager_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ymrobot_msgs, action, PoseManager_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ymrobot_msgs, action, PoseManager_GetResult)),
  }
};

typedef struct _PoseManager_GetResult_type_support_data_t
{
  void * data[2];
} _PoseManager_GetResult_type_support_data_t;

static _PoseManager_GetResult_type_support_data_t _PoseManager_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PoseManager_GetResult_service_typesupport_map = {
  2,
  "ymrobot_msgs",
  &_PoseManager_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_PoseManager_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_PoseManager_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t PoseManager_GetResult_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PoseManager_GetResult_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<ymrobot_msgs::action::PoseManager_GetResult_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<ymrobot_msgs::action::PoseManager_GetResult_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<ymrobot_msgs::action::PoseManager_GetResult_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<ymrobot_msgs::action::PoseManager_GetResult>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<ymrobot_msgs::action::PoseManager_GetResult>,
  &ymrobot_msgs__action__PoseManager_GetResult__get_type_hash,
  &ymrobot_msgs__action__PoseManager_GetResult__get_type_description,
  &ymrobot_msgs__action__PoseManager_GetResult__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace ymrobot_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<ymrobot_msgs::action::PoseManager_GetResult>()
{
  return &::ymrobot_msgs::action::rosidl_typesupport_cpp::PoseManager_GetResult_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, ymrobot_msgs, action, PoseManager_GetResult)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<ymrobot_msgs::action::PoseManager_GetResult>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ymrobot_msgs/action/detail/pose_manager__functions.h"
// already included above
// #include "ymrobot_msgs/action/detail/pose_manager__struct.hpp"
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

typedef struct _PoseManager_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PoseManager_FeedbackMessage_type_support_ids_t;

static const _PoseManager_FeedbackMessage_type_support_ids_t _PoseManager_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _PoseManager_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PoseManager_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PoseManager_FeedbackMessage_type_support_symbol_names_t _PoseManager_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ymrobot_msgs, action, PoseManager_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ymrobot_msgs, action, PoseManager_FeedbackMessage)),
  }
};

typedef struct _PoseManager_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _PoseManager_FeedbackMessage_type_support_data_t;

static _PoseManager_FeedbackMessage_type_support_data_t _PoseManager_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PoseManager_FeedbackMessage_message_typesupport_map = {
  2,
  "ymrobot_msgs",
  &_PoseManager_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_PoseManager_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_PoseManager_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PoseManager_FeedbackMessage_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PoseManager_FeedbackMessage_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &ymrobot_msgs__action__PoseManager_FeedbackMessage__get_type_hash,
  &ymrobot_msgs__action__PoseManager_FeedbackMessage__get_type_description,
  &ymrobot_msgs__action__PoseManager_FeedbackMessage__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace ymrobot_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ymrobot_msgs::action::PoseManager_FeedbackMessage>()
{
  return &::ymrobot_msgs::action::rosidl_typesupport_cpp::PoseManager_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, ymrobot_msgs, action, PoseManager_FeedbackMessage)() {
  return get_message_type_support_handle<ymrobot_msgs::action::PoseManager_FeedbackMessage>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

#include "action_msgs/msg/goal_status_array.hpp"
#include "action_msgs/srv/cancel_goal.hpp"
// already included above
// #include "ymrobot_msgs/action/detail/pose_manager__struct.hpp"
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

static rosidl_action_type_support_t PoseManager_action_type_support_handle = {
  NULL, NULL, NULL, NULL, NULL,
  &ymrobot_msgs__action__PoseManager__get_type_hash,
  &ymrobot_msgs__action__PoseManager__get_type_description,
  &ymrobot_msgs__action__PoseManager__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace ymrobot_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
get_action_type_support_handle<ymrobot_msgs::action::PoseManager>()
{
  using ::ymrobot_msgs::action::rosidl_typesupport_cpp::PoseManager_action_type_support_handle;
  // Thread-safe by always writing the same values to the static struct
  PoseManager_action_type_support_handle.goal_service_type_support = get_service_type_support_handle<::ymrobot_msgs::action::PoseManager::Impl::SendGoalService>();
  PoseManager_action_type_support_handle.result_service_type_support = get_service_type_support_handle<::ymrobot_msgs::action::PoseManager::Impl::GetResultService>();
  PoseManager_action_type_support_handle.cancel_service_type_support = get_service_type_support_handle<::ymrobot_msgs::action::PoseManager::Impl::CancelGoalService>();
  PoseManager_action_type_support_handle.feedback_message_type_support = get_message_type_support_handle<::ymrobot_msgs::action::PoseManager::Impl::FeedbackMessage>();
  PoseManager_action_type_support_handle.status_message_type_support = get_message_type_support_handle<::ymrobot_msgs::action::PoseManager::Impl::GoalStatusMessage>();
  return &PoseManager_action_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(rosidl_typesupport_cpp, ymrobot_msgs, action, PoseManager)() {
  return ::rosidl_typesupport_cpp::get_action_type_support_handle<ymrobot_msgs::action::PoseManager>();
}

#ifdef __cplusplus
}
#endif
