// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ymrobot_msgs:msg/Task.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ymrobot_msgs/msg/detail/task__rosidl_typesupport_introspection_c.h"
#include "ymrobot_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ymrobot_msgs/msg/detail/task__functions.h"
#include "ymrobot_msgs/msg/detail/task__struct.h"


// Include directives for member types
// Member `platform_id`
// Member `amr_id`
// Member `task_id`
// Member `behavior_tree`
// Member `index`
#include "rosidl_runtime_c/string_functions.h"
// Member `nav_points`
#include "ymrobot_msgs/msg/nav_point.h"
// Member `nav_points`
#include "ymrobot_msgs/msg/detail/nav_point__rosidl_typesupport_introspection_c.h"
// Member `commands`
#include "ymrobot_msgs/msg/command.h"
// Member `commands`
#include "ymrobot_msgs/msg/detail/command__rosidl_typesupport_introspection_c.h"
// Member `binary_file`
#include "ymrobot_msgs/msg/binary_data.h"
// Member `binary_file`
#include "ymrobot_msgs/msg/detail/binary_data__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ymrobot_msgs__msg__Task__rosidl_typesupport_introspection_c__Task_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ymrobot_msgs__msg__Task__init(message_memory);
}

void ymrobot_msgs__msg__Task__rosidl_typesupport_introspection_c__Task_fini_function(void * message_memory)
{
  ymrobot_msgs__msg__Task__fini(message_memory);
}

size_t ymrobot_msgs__msg__Task__rosidl_typesupport_introspection_c__size_function__Task__nav_points(
  const void * untyped_member)
{
  const ymrobot_msgs__msg__NavPoint__Sequence * member =
    (const ymrobot_msgs__msg__NavPoint__Sequence *)(untyped_member);
  return member->size;
}

const void * ymrobot_msgs__msg__Task__rosidl_typesupport_introspection_c__get_const_function__Task__nav_points(
  const void * untyped_member, size_t index)
{
  const ymrobot_msgs__msg__NavPoint__Sequence * member =
    (const ymrobot_msgs__msg__NavPoint__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ymrobot_msgs__msg__Task__rosidl_typesupport_introspection_c__get_function__Task__nav_points(
  void * untyped_member, size_t index)
{
  ymrobot_msgs__msg__NavPoint__Sequence * member =
    (ymrobot_msgs__msg__NavPoint__Sequence *)(untyped_member);
  return &member->data[index];
}

void ymrobot_msgs__msg__Task__rosidl_typesupport_introspection_c__fetch_function__Task__nav_points(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const ymrobot_msgs__msg__NavPoint * item =
    ((const ymrobot_msgs__msg__NavPoint *)
    ymrobot_msgs__msg__Task__rosidl_typesupport_introspection_c__get_const_function__Task__nav_points(untyped_member, index));
  ymrobot_msgs__msg__NavPoint * value =
    (ymrobot_msgs__msg__NavPoint *)(untyped_value);
  *value = *item;
}

void ymrobot_msgs__msg__Task__rosidl_typesupport_introspection_c__assign_function__Task__nav_points(
  void * untyped_member, size_t index, const void * untyped_value)
{
  ymrobot_msgs__msg__NavPoint * item =
    ((ymrobot_msgs__msg__NavPoint *)
    ymrobot_msgs__msg__Task__rosidl_typesupport_introspection_c__get_function__Task__nav_points(untyped_member, index));
  const ymrobot_msgs__msg__NavPoint * value =
    (const ymrobot_msgs__msg__NavPoint *)(untyped_value);
  *item = *value;
}

bool ymrobot_msgs__msg__Task__rosidl_typesupport_introspection_c__resize_function__Task__nav_points(
  void * untyped_member, size_t size)
{
  ymrobot_msgs__msg__NavPoint__Sequence * member =
    (ymrobot_msgs__msg__NavPoint__Sequence *)(untyped_member);
  ymrobot_msgs__msg__NavPoint__Sequence__fini(member);
  return ymrobot_msgs__msg__NavPoint__Sequence__init(member, size);
}

size_t ymrobot_msgs__msg__Task__rosidl_typesupport_introspection_c__size_function__Task__commands(
  const void * untyped_member)
{
  const ymrobot_msgs__msg__Command__Sequence * member =
    (const ymrobot_msgs__msg__Command__Sequence *)(untyped_member);
  return member->size;
}

const void * ymrobot_msgs__msg__Task__rosidl_typesupport_introspection_c__get_const_function__Task__commands(
  const void * untyped_member, size_t index)
{
  const ymrobot_msgs__msg__Command__Sequence * member =
    (const ymrobot_msgs__msg__Command__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ymrobot_msgs__msg__Task__rosidl_typesupport_introspection_c__get_function__Task__commands(
  void * untyped_member, size_t index)
{
  ymrobot_msgs__msg__Command__Sequence * member =
    (ymrobot_msgs__msg__Command__Sequence *)(untyped_member);
  return &member->data[index];
}

void ymrobot_msgs__msg__Task__rosidl_typesupport_introspection_c__fetch_function__Task__commands(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const ymrobot_msgs__msg__Command * item =
    ((const ymrobot_msgs__msg__Command *)
    ymrobot_msgs__msg__Task__rosidl_typesupport_introspection_c__get_const_function__Task__commands(untyped_member, index));
  ymrobot_msgs__msg__Command * value =
    (ymrobot_msgs__msg__Command *)(untyped_value);
  *value = *item;
}

void ymrobot_msgs__msg__Task__rosidl_typesupport_introspection_c__assign_function__Task__commands(
  void * untyped_member, size_t index, const void * untyped_value)
{
  ymrobot_msgs__msg__Command * item =
    ((ymrobot_msgs__msg__Command *)
    ymrobot_msgs__msg__Task__rosidl_typesupport_introspection_c__get_function__Task__commands(untyped_member, index));
  const ymrobot_msgs__msg__Command * value =
    (const ymrobot_msgs__msg__Command *)(untyped_value);
  *item = *value;
}

bool ymrobot_msgs__msg__Task__rosidl_typesupport_introspection_c__resize_function__Task__commands(
  void * untyped_member, size_t size)
{
  ymrobot_msgs__msg__Command__Sequence * member =
    (ymrobot_msgs__msg__Command__Sequence *)(untyped_member);
  ymrobot_msgs__msg__Command__Sequence__fini(member);
  return ymrobot_msgs__msg__Command__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ymrobot_msgs__msg__Task__rosidl_typesupport_introspection_c__Task_message_member_array[11] = {
  {
    "platform_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ymrobot_msgs__msg__Task, platform_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "amr_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ymrobot_msgs__msg__Task, amr_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "task_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ymrobot_msgs__msg__Task, task_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "task_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ymrobot_msgs__msg__Task, task_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "control_mode",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ymrobot_msgs__msg__Task, control_mode),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "nav_points",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ymrobot_msgs__msg__Task, nav_points),  // bytes offset in struct
    NULL,  // default value
    ymrobot_msgs__msg__Task__rosidl_typesupport_introspection_c__size_function__Task__nav_points,  // size() function pointer
    ymrobot_msgs__msg__Task__rosidl_typesupport_introspection_c__get_const_function__Task__nav_points,  // get_const(index) function pointer
    ymrobot_msgs__msg__Task__rosidl_typesupport_introspection_c__get_function__Task__nav_points,  // get(index) function pointer
    ymrobot_msgs__msg__Task__rosidl_typesupport_introspection_c__fetch_function__Task__nav_points,  // fetch(index, &value) function pointer
    ymrobot_msgs__msg__Task__rosidl_typesupport_introspection_c__assign_function__Task__nav_points,  // assign(index, value) function pointer
    ymrobot_msgs__msg__Task__rosidl_typesupport_introspection_c__resize_function__Task__nav_points  // resize(index) function pointer
  },
  {
    "commands",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ymrobot_msgs__msg__Task, commands),  // bytes offset in struct
    NULL,  // default value
    ymrobot_msgs__msg__Task__rosidl_typesupport_introspection_c__size_function__Task__commands,  // size() function pointer
    ymrobot_msgs__msg__Task__rosidl_typesupport_introspection_c__get_const_function__Task__commands,  // get_const(index) function pointer
    ymrobot_msgs__msg__Task__rosidl_typesupport_introspection_c__get_function__Task__commands,  // get(index) function pointer
    ymrobot_msgs__msg__Task__rosidl_typesupport_introspection_c__fetch_function__Task__commands,  // fetch(index, &value) function pointer
    ymrobot_msgs__msg__Task__rosidl_typesupport_introspection_c__assign_function__Task__commands,  // assign(index, value) function pointer
    ymrobot_msgs__msg__Task__rosidl_typesupport_introspection_c__resize_function__Task__commands  // resize(index) function pointer
  },
  {
    "behavior_tree",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ymrobot_msgs__msg__Task, behavior_tree),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "reload",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ymrobot_msgs__msg__Task, reload),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "index",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ymrobot_msgs__msg__Task, index),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "binary_file",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ymrobot_msgs__msg__Task, binary_file),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ymrobot_msgs__msg__Task__rosidl_typesupport_introspection_c__Task_message_members = {
  "ymrobot_msgs__msg",  // message namespace
  "Task",  // message name
  11,  // number of fields
  sizeof(ymrobot_msgs__msg__Task),
  false,  // has_any_key_member_
  ymrobot_msgs__msg__Task__rosidl_typesupport_introspection_c__Task_message_member_array,  // message members
  ymrobot_msgs__msg__Task__rosidl_typesupport_introspection_c__Task_init_function,  // function to initialize message memory (memory has to be allocated)
  ymrobot_msgs__msg__Task__rosidl_typesupport_introspection_c__Task_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ymrobot_msgs__msg__Task__rosidl_typesupport_introspection_c__Task_message_type_support_handle = {
  0,
  &ymrobot_msgs__msg__Task__rosidl_typesupport_introspection_c__Task_message_members,
  get_message_typesupport_handle_function,
  &ymrobot_msgs__msg__Task__get_type_hash,
  &ymrobot_msgs__msg__Task__get_type_description,
  &ymrobot_msgs__msg__Task__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ymrobot_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ymrobot_msgs, msg, Task)() {
  ymrobot_msgs__msg__Task__rosidl_typesupport_introspection_c__Task_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ymrobot_msgs, msg, NavPoint)();
  ymrobot_msgs__msg__Task__rosidl_typesupport_introspection_c__Task_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ymrobot_msgs, msg, Command)();
  ymrobot_msgs__msg__Task__rosidl_typesupport_introspection_c__Task_message_member_array[10].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ymrobot_msgs, msg, BinaryData)();
  if (!ymrobot_msgs__msg__Task__rosidl_typesupport_introspection_c__Task_message_type_support_handle.typesupport_identifier) {
    ymrobot_msgs__msg__Task__rosidl_typesupport_introspection_c__Task_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ymrobot_msgs__msg__Task__rosidl_typesupport_introspection_c__Task_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
