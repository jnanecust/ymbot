// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ymrobot_msgs:msg/GuideRoute.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ymrobot_msgs/msg/detail/guide_route__rosidl_typesupport_introspection_c.h"
#include "ymrobot_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ymrobot_msgs/msg/detail/guide_route__functions.h"
#include "ymrobot_msgs/msg/detail/guide_route__struct.h"


// Include directives for member types
// Member `mark_points_list`
// Member `audios_list`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ymrobot_msgs__msg__GuideRoute__rosidl_typesupport_introspection_c__GuideRoute_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ymrobot_msgs__msg__GuideRoute__init(message_memory);
}

void ymrobot_msgs__msg__GuideRoute__rosidl_typesupport_introspection_c__GuideRoute_fini_function(void * message_memory)
{
  ymrobot_msgs__msg__GuideRoute__fini(message_memory);
}

size_t ymrobot_msgs__msg__GuideRoute__rosidl_typesupport_introspection_c__size_function__GuideRoute__mark_points_list(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * ymrobot_msgs__msg__GuideRoute__rosidl_typesupport_introspection_c__get_const_function__GuideRoute__mark_points_list(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ymrobot_msgs__msg__GuideRoute__rosidl_typesupport_introspection_c__get_function__GuideRoute__mark_points_list(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void ymrobot_msgs__msg__GuideRoute__rosidl_typesupport_introspection_c__fetch_function__GuideRoute__mark_points_list(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    ymrobot_msgs__msg__GuideRoute__rosidl_typesupport_introspection_c__get_const_function__GuideRoute__mark_points_list(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void ymrobot_msgs__msg__GuideRoute__rosidl_typesupport_introspection_c__assign_function__GuideRoute__mark_points_list(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    ymrobot_msgs__msg__GuideRoute__rosidl_typesupport_introspection_c__get_function__GuideRoute__mark_points_list(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool ymrobot_msgs__msg__GuideRoute__rosidl_typesupport_introspection_c__resize_function__GuideRoute__mark_points_list(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t ymrobot_msgs__msg__GuideRoute__rosidl_typesupport_introspection_c__size_function__GuideRoute__audios_list(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * ymrobot_msgs__msg__GuideRoute__rosidl_typesupport_introspection_c__get_const_function__GuideRoute__audios_list(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ymrobot_msgs__msg__GuideRoute__rosidl_typesupport_introspection_c__get_function__GuideRoute__audios_list(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void ymrobot_msgs__msg__GuideRoute__rosidl_typesupport_introspection_c__fetch_function__GuideRoute__audios_list(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    ymrobot_msgs__msg__GuideRoute__rosidl_typesupport_introspection_c__get_const_function__GuideRoute__audios_list(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void ymrobot_msgs__msg__GuideRoute__rosidl_typesupport_introspection_c__assign_function__GuideRoute__audios_list(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    ymrobot_msgs__msg__GuideRoute__rosidl_typesupport_introspection_c__get_function__GuideRoute__audios_list(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool ymrobot_msgs__msg__GuideRoute__rosidl_typesupport_introspection_c__resize_function__GuideRoute__audios_list(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ymrobot_msgs__msg__GuideRoute__rosidl_typesupport_introspection_c__GuideRoute_message_member_array[2] = {
  {
    "mark_points_list",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ymrobot_msgs__msg__GuideRoute, mark_points_list),  // bytes offset in struct
    NULL,  // default value
    ymrobot_msgs__msg__GuideRoute__rosidl_typesupport_introspection_c__size_function__GuideRoute__mark_points_list,  // size() function pointer
    ymrobot_msgs__msg__GuideRoute__rosidl_typesupport_introspection_c__get_const_function__GuideRoute__mark_points_list,  // get_const(index) function pointer
    ymrobot_msgs__msg__GuideRoute__rosidl_typesupport_introspection_c__get_function__GuideRoute__mark_points_list,  // get(index) function pointer
    ymrobot_msgs__msg__GuideRoute__rosidl_typesupport_introspection_c__fetch_function__GuideRoute__mark_points_list,  // fetch(index, &value) function pointer
    ymrobot_msgs__msg__GuideRoute__rosidl_typesupport_introspection_c__assign_function__GuideRoute__mark_points_list,  // assign(index, value) function pointer
    ymrobot_msgs__msg__GuideRoute__rosidl_typesupport_introspection_c__resize_function__GuideRoute__mark_points_list  // resize(index) function pointer
  },
  {
    "audios_list",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ymrobot_msgs__msg__GuideRoute, audios_list),  // bytes offset in struct
    NULL,  // default value
    ymrobot_msgs__msg__GuideRoute__rosidl_typesupport_introspection_c__size_function__GuideRoute__audios_list,  // size() function pointer
    ymrobot_msgs__msg__GuideRoute__rosidl_typesupport_introspection_c__get_const_function__GuideRoute__audios_list,  // get_const(index) function pointer
    ymrobot_msgs__msg__GuideRoute__rosidl_typesupport_introspection_c__get_function__GuideRoute__audios_list,  // get(index) function pointer
    ymrobot_msgs__msg__GuideRoute__rosidl_typesupport_introspection_c__fetch_function__GuideRoute__audios_list,  // fetch(index, &value) function pointer
    ymrobot_msgs__msg__GuideRoute__rosidl_typesupport_introspection_c__assign_function__GuideRoute__audios_list,  // assign(index, value) function pointer
    ymrobot_msgs__msg__GuideRoute__rosidl_typesupport_introspection_c__resize_function__GuideRoute__audios_list  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ymrobot_msgs__msg__GuideRoute__rosidl_typesupport_introspection_c__GuideRoute_message_members = {
  "ymrobot_msgs__msg",  // message namespace
  "GuideRoute",  // message name
  2,  // number of fields
  sizeof(ymrobot_msgs__msg__GuideRoute),
  false,  // has_any_key_member_
  ymrobot_msgs__msg__GuideRoute__rosidl_typesupport_introspection_c__GuideRoute_message_member_array,  // message members
  ymrobot_msgs__msg__GuideRoute__rosidl_typesupport_introspection_c__GuideRoute_init_function,  // function to initialize message memory (memory has to be allocated)
  ymrobot_msgs__msg__GuideRoute__rosidl_typesupport_introspection_c__GuideRoute_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ymrobot_msgs__msg__GuideRoute__rosidl_typesupport_introspection_c__GuideRoute_message_type_support_handle = {
  0,
  &ymrobot_msgs__msg__GuideRoute__rosidl_typesupport_introspection_c__GuideRoute_message_members,
  get_message_typesupport_handle_function,
  &ymrobot_msgs__msg__GuideRoute__get_type_hash,
  &ymrobot_msgs__msg__GuideRoute__get_type_description,
  &ymrobot_msgs__msg__GuideRoute__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ymrobot_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ymrobot_msgs, msg, GuideRoute)() {
  if (!ymrobot_msgs__msg__GuideRoute__rosidl_typesupport_introspection_c__GuideRoute_message_type_support_handle.typesupport_identifier) {
    ymrobot_msgs__msg__GuideRoute__rosidl_typesupport_introspection_c__GuideRoute_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ymrobot_msgs__msg__GuideRoute__rosidl_typesupport_introspection_c__GuideRoute_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
