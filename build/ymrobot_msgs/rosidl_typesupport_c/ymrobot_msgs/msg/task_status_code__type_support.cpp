// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from ymrobot_msgs:msg/TaskStatusCode.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "ymrobot_msgs/msg/detail/task_status_code__struct.h"
#include "ymrobot_msgs/msg/detail/task_status_code__type_support.h"
#include "ymrobot_msgs/msg/detail/task_status_code__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace ymrobot_msgs
{

namespace msg
{

namespace rosidl_typesupport_c
{

typedef struct _TaskStatusCode_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TaskStatusCode_type_support_ids_t;

static const _TaskStatusCode_type_support_ids_t _TaskStatusCode_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _TaskStatusCode_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _TaskStatusCode_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _TaskStatusCode_type_support_symbol_names_t _TaskStatusCode_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ymrobot_msgs, msg, TaskStatusCode)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ymrobot_msgs, msg, TaskStatusCode)),
  }
};

typedef struct _TaskStatusCode_type_support_data_t
{
  void * data[2];
} _TaskStatusCode_type_support_data_t;

static _TaskStatusCode_type_support_data_t _TaskStatusCode_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _TaskStatusCode_message_typesupport_map = {
  2,
  "ymrobot_msgs",
  &_TaskStatusCode_message_typesupport_ids.typesupport_identifier[0],
  &_TaskStatusCode_message_typesupport_symbol_names.symbol_name[0],
  &_TaskStatusCode_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t TaskStatusCode_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TaskStatusCode_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &ymrobot_msgs__msg__TaskStatusCode__get_type_hash,
  &ymrobot_msgs__msg__TaskStatusCode__get_type_description,
  &ymrobot_msgs__msg__TaskStatusCode__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace msg

}  // namespace ymrobot_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, ymrobot_msgs, msg, TaskStatusCode)() {
  return &::ymrobot_msgs::msg::rosidl_typesupport_c::TaskStatusCode_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
