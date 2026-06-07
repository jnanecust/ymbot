// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from ymrobot_msgs:msg/PatrolMission.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "ymrobot_msgs/msg/detail/patrol_mission__functions.h"
#include "ymrobot_msgs/msg/detail/patrol_mission__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace ymrobot_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void PatrolMission_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) ymrobot_msgs::msg::PatrolMission(_init);
}

void PatrolMission_fini_function(void * message_memory)
{
  auto typed_message = static_cast<ymrobot_msgs::msg::PatrolMission *>(message_memory);
  typed_message->~PatrolMission();
}

size_t size_function__PatrolMission__nav_name_list(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__PatrolMission__nav_name_list(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__PatrolMission__nav_name_list(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__PatrolMission__nav_name_list(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__PatrolMission__nav_name_list(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__PatrolMission__nav_name_list(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__PatrolMission__nav_name_list(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__PatrolMission__nav_name_list(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember PatrolMission_message_member_array[7] = {
  {
    "image_video_msg",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<ymrobot_msgs::msg::ImageVideo>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ymrobot_msgs::msg::PatrolMission, image_video_msg),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "is_audio_played_throughout_the_entire_process",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ymrobot_msgs::msg::PatrolMission, is_audio_played_throughout_the_entire_process),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "full_audio_name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ymrobot_msgs::msg::PatrolMission, full_audio_name),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "is_the_entire_process_recorded",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ymrobot_msgs::msg::PatrolMission, is_the_entire_process_recorded),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "is_activate_the_nearby_point",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ymrobot_msgs::msg::PatrolMission, is_activate_the_nearby_point),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "nearby_point_radius",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ymrobot_msgs::msg::PatrolMission, nearby_point_radius),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "nav_name_list",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ymrobot_msgs::msg::PatrolMission, nav_name_list),  // bytes offset in struct
    nullptr,  // default value
    size_function__PatrolMission__nav_name_list,  // size() function pointer
    get_const_function__PatrolMission__nav_name_list,  // get_const(index) function pointer
    get_function__PatrolMission__nav_name_list,  // get(index) function pointer
    fetch_function__PatrolMission__nav_name_list,  // fetch(index, &value) function pointer
    assign_function__PatrolMission__nav_name_list,  // assign(index, value) function pointer
    resize_function__PatrolMission__nav_name_list  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers PatrolMission_message_members = {
  "ymrobot_msgs::msg",  // message namespace
  "PatrolMission",  // message name
  7,  // number of fields
  sizeof(ymrobot_msgs::msg::PatrolMission),
  false,  // has_any_key_member_
  PatrolMission_message_member_array,  // message members
  PatrolMission_init_function,  // function to initialize message memory (memory has to be allocated)
  PatrolMission_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t PatrolMission_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &PatrolMission_message_members,
  get_message_typesupport_handle_function,
  &ymrobot_msgs__msg__PatrolMission__get_type_hash,
  &ymrobot_msgs__msg__PatrolMission__get_type_description,
  &ymrobot_msgs__msg__PatrolMission__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace ymrobot_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ymrobot_msgs::msg::PatrolMission>()
{
  return &::ymrobot_msgs::msg::rosidl_typesupport_introspection_cpp::PatrolMission_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ymrobot_msgs, msg, PatrolMission)() {
  return &::ymrobot_msgs::msg::rosidl_typesupport_introspection_cpp::PatrolMission_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
