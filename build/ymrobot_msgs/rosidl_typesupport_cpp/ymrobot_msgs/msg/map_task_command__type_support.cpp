// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from ymrobot_msgs:msg/MapTaskCommand.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "ymrobot_msgs/msg/detail/map_task_command__functions.h"
#include "ymrobot_msgs/msg/detail/map_task_command__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace ymrobot_msgs
{

namespace msg
{

namespace rosidl_typesupport_cpp
{

typedef struct _MapTaskCommand_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MapTaskCommand_type_support_ids_t;

static const _MapTaskCommand_type_support_ids_t _MapTaskCommand_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MapTaskCommand_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MapTaskCommand_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MapTaskCommand_type_support_symbol_names_t _MapTaskCommand_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ymrobot_msgs, msg, MapTaskCommand)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ymrobot_msgs, msg, MapTaskCommand)),
  }
};

typedef struct _MapTaskCommand_type_support_data_t
{
  void * data[2];
} _MapTaskCommand_type_support_data_t;

static _MapTaskCommand_type_support_data_t _MapTaskCommand_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MapTaskCommand_message_typesupport_map = {
  2,
  "ymrobot_msgs",
  &_MapTaskCommand_message_typesupport_ids.typesupport_identifier[0],
  &_MapTaskCommand_message_typesupport_symbol_names.symbol_name[0],
  &_MapTaskCommand_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MapTaskCommand_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MapTaskCommand_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &ymrobot_msgs__msg__MapTaskCommand__get_type_hash,
  &ymrobot_msgs__msg__MapTaskCommand__get_type_description,
  &ymrobot_msgs__msg__MapTaskCommand__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace msg

}  // namespace ymrobot_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ymrobot_msgs::msg::MapTaskCommand>()
{
  return &::ymrobot_msgs::msg::rosidl_typesupport_cpp::MapTaskCommand_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, ymrobot_msgs, msg, MapTaskCommand)() {
  return get_message_type_support_handle<ymrobot_msgs::msg::MapTaskCommand>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp
