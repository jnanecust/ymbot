// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ymrobot_msgs:msg/Upper.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ymrobot_msgs/msg/detail/upper__rosidl_typesupport_introspection_c.h"
#include "ymrobot_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ymrobot_msgs/msg/detail/upper__functions.h"
#include "ymrobot_msgs/msg/detail/upper__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void ymrobot_msgs__msg__Upper__rosidl_typesupport_introspection_c__Upper_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ymrobot_msgs__msg__Upper__init(message_memory);
}

void ymrobot_msgs__msg__Upper__rosidl_typesupport_introspection_c__Upper_fini_function(void * message_memory)
{
  ymrobot_msgs__msg__Upper__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ymrobot_msgs__msg__Upper__rosidl_typesupport_introspection_c__Upper_message_member_array[2] = {
  {
    "chassis_status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ymrobot_msgs__msg__Upper, chassis_status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "auto_status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ymrobot_msgs__msg__Upper, auto_status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ymrobot_msgs__msg__Upper__rosidl_typesupport_introspection_c__Upper_message_members = {
  "ymrobot_msgs__msg",  // message namespace
  "Upper",  // message name
  2,  // number of fields
  sizeof(ymrobot_msgs__msg__Upper),
  false,  // has_any_key_member_
  ymrobot_msgs__msg__Upper__rosidl_typesupport_introspection_c__Upper_message_member_array,  // message members
  ymrobot_msgs__msg__Upper__rosidl_typesupport_introspection_c__Upper_init_function,  // function to initialize message memory (memory has to be allocated)
  ymrobot_msgs__msg__Upper__rosidl_typesupport_introspection_c__Upper_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ymrobot_msgs__msg__Upper__rosidl_typesupport_introspection_c__Upper_message_type_support_handle = {
  0,
  &ymrobot_msgs__msg__Upper__rosidl_typesupport_introspection_c__Upper_message_members,
  get_message_typesupport_handle_function,
  &ymrobot_msgs__msg__Upper__get_type_hash,
  &ymrobot_msgs__msg__Upper__get_type_description,
  &ymrobot_msgs__msg__Upper__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ymrobot_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ymrobot_msgs, msg, Upper)() {
  if (!ymrobot_msgs__msg__Upper__rosidl_typesupport_introspection_c__Upper_message_type_support_handle.typesupport_identifier) {
    ymrobot_msgs__msg__Upper__rosidl_typesupport_introspection_c__Upper_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ymrobot_msgs__msg__Upper__rosidl_typesupport_introspection_c__Upper_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
