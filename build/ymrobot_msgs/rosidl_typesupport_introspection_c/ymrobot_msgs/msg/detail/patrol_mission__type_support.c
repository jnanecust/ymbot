// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ymrobot_msgs:msg/PatrolMission.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ymrobot_msgs/msg/detail/patrol_mission__rosidl_typesupport_introspection_c.h"
#include "ymrobot_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ymrobot_msgs/msg/detail/patrol_mission__functions.h"
#include "ymrobot_msgs/msg/detail/patrol_mission__struct.h"


// Include directives for member types
// Member `image_video_msg`
#include "ymrobot_msgs/msg/image_video.h"
// Member `image_video_msg`
#include "ymrobot_msgs/msg/detail/image_video__rosidl_typesupport_introspection_c.h"
// Member `full_audio_name`
// Member `nav_name_list`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ymrobot_msgs__msg__PatrolMission__rosidl_typesupport_introspection_c__PatrolMission_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ymrobot_msgs__msg__PatrolMission__init(message_memory);
}

void ymrobot_msgs__msg__PatrolMission__rosidl_typesupport_introspection_c__PatrolMission_fini_function(void * message_memory)
{
  ymrobot_msgs__msg__PatrolMission__fini(message_memory);
}

size_t ymrobot_msgs__msg__PatrolMission__rosidl_typesupport_introspection_c__size_function__PatrolMission__nav_name_list(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * ymrobot_msgs__msg__PatrolMission__rosidl_typesupport_introspection_c__get_const_function__PatrolMission__nav_name_list(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ymrobot_msgs__msg__PatrolMission__rosidl_typesupport_introspection_c__get_function__PatrolMission__nav_name_list(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void ymrobot_msgs__msg__PatrolMission__rosidl_typesupport_introspection_c__fetch_function__PatrolMission__nav_name_list(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    ymrobot_msgs__msg__PatrolMission__rosidl_typesupport_introspection_c__get_const_function__PatrolMission__nav_name_list(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void ymrobot_msgs__msg__PatrolMission__rosidl_typesupport_introspection_c__assign_function__PatrolMission__nav_name_list(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    ymrobot_msgs__msg__PatrolMission__rosidl_typesupport_introspection_c__get_function__PatrolMission__nav_name_list(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool ymrobot_msgs__msg__PatrolMission__rosidl_typesupport_introspection_c__resize_function__PatrolMission__nav_name_list(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ymrobot_msgs__msg__PatrolMission__rosidl_typesupport_introspection_c__PatrolMission_message_member_array[7] = {
  {
    "image_video_msg",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ymrobot_msgs__msg__PatrolMission, image_video_msg),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "is_audio_played_throughout_the_entire_process",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ymrobot_msgs__msg__PatrolMission, is_audio_played_throughout_the_entire_process),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "full_audio_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ymrobot_msgs__msg__PatrolMission, full_audio_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "is_the_entire_process_recorded",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ymrobot_msgs__msg__PatrolMission, is_the_entire_process_recorded),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "is_activate_the_nearby_point",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ymrobot_msgs__msg__PatrolMission, is_activate_the_nearby_point),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "nearby_point_radius",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ymrobot_msgs__msg__PatrolMission, nearby_point_radius),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "nav_name_list",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ymrobot_msgs__msg__PatrolMission, nav_name_list),  // bytes offset in struct
    NULL,  // default value
    ymrobot_msgs__msg__PatrolMission__rosidl_typesupport_introspection_c__size_function__PatrolMission__nav_name_list,  // size() function pointer
    ymrobot_msgs__msg__PatrolMission__rosidl_typesupport_introspection_c__get_const_function__PatrolMission__nav_name_list,  // get_const(index) function pointer
    ymrobot_msgs__msg__PatrolMission__rosidl_typesupport_introspection_c__get_function__PatrolMission__nav_name_list,  // get(index) function pointer
    ymrobot_msgs__msg__PatrolMission__rosidl_typesupport_introspection_c__fetch_function__PatrolMission__nav_name_list,  // fetch(index, &value) function pointer
    ymrobot_msgs__msg__PatrolMission__rosidl_typesupport_introspection_c__assign_function__PatrolMission__nav_name_list,  // assign(index, value) function pointer
    ymrobot_msgs__msg__PatrolMission__rosidl_typesupport_introspection_c__resize_function__PatrolMission__nav_name_list  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ymrobot_msgs__msg__PatrolMission__rosidl_typesupport_introspection_c__PatrolMission_message_members = {
  "ymrobot_msgs__msg",  // message namespace
  "PatrolMission",  // message name
  7,  // number of fields
  sizeof(ymrobot_msgs__msg__PatrolMission),
  false,  // has_any_key_member_
  ymrobot_msgs__msg__PatrolMission__rosidl_typesupport_introspection_c__PatrolMission_message_member_array,  // message members
  ymrobot_msgs__msg__PatrolMission__rosidl_typesupport_introspection_c__PatrolMission_init_function,  // function to initialize message memory (memory has to be allocated)
  ymrobot_msgs__msg__PatrolMission__rosidl_typesupport_introspection_c__PatrolMission_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ymrobot_msgs__msg__PatrolMission__rosidl_typesupport_introspection_c__PatrolMission_message_type_support_handle = {
  0,
  &ymrobot_msgs__msg__PatrolMission__rosidl_typesupport_introspection_c__PatrolMission_message_members,
  get_message_typesupport_handle_function,
  &ymrobot_msgs__msg__PatrolMission__get_type_hash,
  &ymrobot_msgs__msg__PatrolMission__get_type_description,
  &ymrobot_msgs__msg__PatrolMission__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ymrobot_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ymrobot_msgs, msg, PatrolMission)() {
  ymrobot_msgs__msg__PatrolMission__rosidl_typesupport_introspection_c__PatrolMission_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ymrobot_msgs, msg, ImageVideo)();
  if (!ymrobot_msgs__msg__PatrolMission__rosidl_typesupport_introspection_c__PatrolMission_message_type_support_handle.typesupport_identifier) {
    ymrobot_msgs__msg__PatrolMission__rosidl_typesupport_introspection_c__PatrolMission_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ymrobot_msgs__msg__PatrolMission__rosidl_typesupport_introspection_c__PatrolMission_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
