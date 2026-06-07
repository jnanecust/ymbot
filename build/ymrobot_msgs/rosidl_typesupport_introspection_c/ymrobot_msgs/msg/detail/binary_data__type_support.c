// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ymrobot_msgs:msg/BinaryData.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ymrobot_msgs/msg/detail/binary_data__rosidl_typesupport_introspection_c.h"
#include "ymrobot_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ymrobot_msgs/msg/detail/binary_data__functions.h"
#include "ymrobot_msgs/msg/detail/binary_data__struct.h"


// Include directives for member types
// Member `file_format`
#include "rosidl_runtime_c/string_functions.h"
// Member `binary_data`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ymrobot_msgs__msg__BinaryData__rosidl_typesupport_introspection_c__BinaryData_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ymrobot_msgs__msg__BinaryData__init(message_memory);
}

void ymrobot_msgs__msg__BinaryData__rosidl_typesupport_introspection_c__BinaryData_fini_function(void * message_memory)
{
  ymrobot_msgs__msg__BinaryData__fini(message_memory);
}

size_t ymrobot_msgs__msg__BinaryData__rosidl_typesupport_introspection_c__size_function__BinaryData__binary_data(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return member->size;
}

const void * ymrobot_msgs__msg__BinaryData__rosidl_typesupport_introspection_c__get_const_function__BinaryData__binary_data(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ymrobot_msgs__msg__BinaryData__rosidl_typesupport_introspection_c__get_function__BinaryData__binary_data(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void ymrobot_msgs__msg__BinaryData__rosidl_typesupport_introspection_c__fetch_function__BinaryData__binary_data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    ymrobot_msgs__msg__BinaryData__rosidl_typesupport_introspection_c__get_const_function__BinaryData__binary_data(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void ymrobot_msgs__msg__BinaryData__rosidl_typesupport_introspection_c__assign_function__BinaryData__binary_data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    ymrobot_msgs__msg__BinaryData__rosidl_typesupport_introspection_c__get_function__BinaryData__binary_data(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

bool ymrobot_msgs__msg__BinaryData__rosidl_typesupport_introspection_c__resize_function__BinaryData__binary_data(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  rosidl_runtime_c__uint8__Sequence__fini(member);
  return rosidl_runtime_c__uint8__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ymrobot_msgs__msg__BinaryData__rosidl_typesupport_introspection_c__BinaryData_message_member_array[2] = {
  {
    "file_format",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ymrobot_msgs__msg__BinaryData, file_format),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "binary_data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ymrobot_msgs__msg__BinaryData, binary_data),  // bytes offset in struct
    NULL,  // default value
    ymrobot_msgs__msg__BinaryData__rosidl_typesupport_introspection_c__size_function__BinaryData__binary_data,  // size() function pointer
    ymrobot_msgs__msg__BinaryData__rosidl_typesupport_introspection_c__get_const_function__BinaryData__binary_data,  // get_const(index) function pointer
    ymrobot_msgs__msg__BinaryData__rosidl_typesupport_introspection_c__get_function__BinaryData__binary_data,  // get(index) function pointer
    ymrobot_msgs__msg__BinaryData__rosidl_typesupport_introspection_c__fetch_function__BinaryData__binary_data,  // fetch(index, &value) function pointer
    ymrobot_msgs__msg__BinaryData__rosidl_typesupport_introspection_c__assign_function__BinaryData__binary_data,  // assign(index, value) function pointer
    ymrobot_msgs__msg__BinaryData__rosidl_typesupport_introspection_c__resize_function__BinaryData__binary_data  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ymrobot_msgs__msg__BinaryData__rosidl_typesupport_introspection_c__BinaryData_message_members = {
  "ymrobot_msgs__msg",  // message namespace
  "BinaryData",  // message name
  2,  // number of fields
  sizeof(ymrobot_msgs__msg__BinaryData),
  false,  // has_any_key_member_
  ymrobot_msgs__msg__BinaryData__rosidl_typesupport_introspection_c__BinaryData_message_member_array,  // message members
  ymrobot_msgs__msg__BinaryData__rosidl_typesupport_introspection_c__BinaryData_init_function,  // function to initialize message memory (memory has to be allocated)
  ymrobot_msgs__msg__BinaryData__rosidl_typesupport_introspection_c__BinaryData_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ymrobot_msgs__msg__BinaryData__rosidl_typesupport_introspection_c__BinaryData_message_type_support_handle = {
  0,
  &ymrobot_msgs__msg__BinaryData__rosidl_typesupport_introspection_c__BinaryData_message_members,
  get_message_typesupport_handle_function,
  &ymrobot_msgs__msg__BinaryData__get_type_hash,
  &ymrobot_msgs__msg__BinaryData__get_type_description,
  &ymrobot_msgs__msg__BinaryData__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ymrobot_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ymrobot_msgs, msg, BinaryData)() {
  if (!ymrobot_msgs__msg__BinaryData__rosidl_typesupport_introspection_c__BinaryData_message_type_support_handle.typesupport_identifier) {
    ymrobot_msgs__msg__BinaryData__rosidl_typesupport_introspection_c__BinaryData_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ymrobot_msgs__msg__BinaryData__rosidl_typesupport_introspection_c__BinaryData_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
