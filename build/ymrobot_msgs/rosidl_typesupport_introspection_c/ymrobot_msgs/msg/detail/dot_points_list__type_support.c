// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ymrobot_msgs:msg/DotPointsList.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ymrobot_msgs/msg/detail/dot_points_list__rosidl_typesupport_introspection_c.h"
#include "ymrobot_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ymrobot_msgs/msg/detail/dot_points_list__functions.h"
#include "ymrobot_msgs/msg/detail/dot_points_list__struct.h"


// Include directives for member types
// Member `dot_points_list`
#include "ymrobot_msgs/msg/dot_points.h"
// Member `dot_points_list`
#include "ymrobot_msgs/msg/detail/dot_points__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ymrobot_msgs__msg__DotPointsList__rosidl_typesupport_introspection_c__DotPointsList_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ymrobot_msgs__msg__DotPointsList__init(message_memory);
}

void ymrobot_msgs__msg__DotPointsList__rosidl_typesupport_introspection_c__DotPointsList_fini_function(void * message_memory)
{
  ymrobot_msgs__msg__DotPointsList__fini(message_memory);
}

size_t ymrobot_msgs__msg__DotPointsList__rosidl_typesupport_introspection_c__size_function__DotPointsList__dot_points_list(
  const void * untyped_member)
{
  const ymrobot_msgs__msg__DotPoints__Sequence * member =
    (const ymrobot_msgs__msg__DotPoints__Sequence *)(untyped_member);
  return member->size;
}

const void * ymrobot_msgs__msg__DotPointsList__rosidl_typesupport_introspection_c__get_const_function__DotPointsList__dot_points_list(
  const void * untyped_member, size_t index)
{
  const ymrobot_msgs__msg__DotPoints__Sequence * member =
    (const ymrobot_msgs__msg__DotPoints__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ymrobot_msgs__msg__DotPointsList__rosidl_typesupport_introspection_c__get_function__DotPointsList__dot_points_list(
  void * untyped_member, size_t index)
{
  ymrobot_msgs__msg__DotPoints__Sequence * member =
    (ymrobot_msgs__msg__DotPoints__Sequence *)(untyped_member);
  return &member->data[index];
}

void ymrobot_msgs__msg__DotPointsList__rosidl_typesupport_introspection_c__fetch_function__DotPointsList__dot_points_list(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const ymrobot_msgs__msg__DotPoints * item =
    ((const ymrobot_msgs__msg__DotPoints *)
    ymrobot_msgs__msg__DotPointsList__rosidl_typesupport_introspection_c__get_const_function__DotPointsList__dot_points_list(untyped_member, index));
  ymrobot_msgs__msg__DotPoints * value =
    (ymrobot_msgs__msg__DotPoints *)(untyped_value);
  *value = *item;
}

void ymrobot_msgs__msg__DotPointsList__rosidl_typesupport_introspection_c__assign_function__DotPointsList__dot_points_list(
  void * untyped_member, size_t index, const void * untyped_value)
{
  ymrobot_msgs__msg__DotPoints * item =
    ((ymrobot_msgs__msg__DotPoints *)
    ymrobot_msgs__msg__DotPointsList__rosidl_typesupport_introspection_c__get_function__DotPointsList__dot_points_list(untyped_member, index));
  const ymrobot_msgs__msg__DotPoints * value =
    (const ymrobot_msgs__msg__DotPoints *)(untyped_value);
  *item = *value;
}

bool ymrobot_msgs__msg__DotPointsList__rosidl_typesupport_introspection_c__resize_function__DotPointsList__dot_points_list(
  void * untyped_member, size_t size)
{
  ymrobot_msgs__msg__DotPoints__Sequence * member =
    (ymrobot_msgs__msg__DotPoints__Sequence *)(untyped_member);
  ymrobot_msgs__msg__DotPoints__Sequence__fini(member);
  return ymrobot_msgs__msg__DotPoints__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ymrobot_msgs__msg__DotPointsList__rosidl_typesupport_introspection_c__DotPointsList_message_member_array[1] = {
  {
    "dot_points_list",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ymrobot_msgs__msg__DotPointsList, dot_points_list),  // bytes offset in struct
    NULL,  // default value
    ymrobot_msgs__msg__DotPointsList__rosidl_typesupport_introspection_c__size_function__DotPointsList__dot_points_list,  // size() function pointer
    ymrobot_msgs__msg__DotPointsList__rosidl_typesupport_introspection_c__get_const_function__DotPointsList__dot_points_list,  // get_const(index) function pointer
    ymrobot_msgs__msg__DotPointsList__rosidl_typesupport_introspection_c__get_function__DotPointsList__dot_points_list,  // get(index) function pointer
    ymrobot_msgs__msg__DotPointsList__rosidl_typesupport_introspection_c__fetch_function__DotPointsList__dot_points_list,  // fetch(index, &value) function pointer
    ymrobot_msgs__msg__DotPointsList__rosidl_typesupport_introspection_c__assign_function__DotPointsList__dot_points_list,  // assign(index, value) function pointer
    ymrobot_msgs__msg__DotPointsList__rosidl_typesupport_introspection_c__resize_function__DotPointsList__dot_points_list  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ymrobot_msgs__msg__DotPointsList__rosidl_typesupport_introspection_c__DotPointsList_message_members = {
  "ymrobot_msgs__msg",  // message namespace
  "DotPointsList",  // message name
  1,  // number of fields
  sizeof(ymrobot_msgs__msg__DotPointsList),
  false,  // has_any_key_member_
  ymrobot_msgs__msg__DotPointsList__rosidl_typesupport_introspection_c__DotPointsList_message_member_array,  // message members
  ymrobot_msgs__msg__DotPointsList__rosidl_typesupport_introspection_c__DotPointsList_init_function,  // function to initialize message memory (memory has to be allocated)
  ymrobot_msgs__msg__DotPointsList__rosidl_typesupport_introspection_c__DotPointsList_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ymrobot_msgs__msg__DotPointsList__rosidl_typesupport_introspection_c__DotPointsList_message_type_support_handle = {
  0,
  &ymrobot_msgs__msg__DotPointsList__rosidl_typesupport_introspection_c__DotPointsList_message_members,
  get_message_typesupport_handle_function,
  &ymrobot_msgs__msg__DotPointsList__get_type_hash,
  &ymrobot_msgs__msg__DotPointsList__get_type_description,
  &ymrobot_msgs__msg__DotPointsList__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ymrobot_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ymrobot_msgs, msg, DotPointsList)() {
  ymrobot_msgs__msg__DotPointsList__rosidl_typesupport_introspection_c__DotPointsList_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ymrobot_msgs, msg, DotPoints)();
  if (!ymrobot_msgs__msg__DotPointsList__rosidl_typesupport_introspection_c__DotPointsList_message_type_support_handle.typesupport_identifier) {
    ymrobot_msgs__msg__DotPointsList__rosidl_typesupport_introspection_c__DotPointsList_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ymrobot_msgs__msg__DotPointsList__rosidl_typesupport_introspection_c__DotPointsList_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
