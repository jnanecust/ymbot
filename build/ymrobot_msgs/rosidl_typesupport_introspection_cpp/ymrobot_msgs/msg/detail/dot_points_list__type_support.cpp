// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from ymrobot_msgs:msg/DotPointsList.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "ymrobot_msgs/msg/detail/dot_points_list__functions.h"
#include "ymrobot_msgs/msg/detail/dot_points_list__struct.hpp"
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

void DotPointsList_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) ymrobot_msgs::msg::DotPointsList(_init);
}

void DotPointsList_fini_function(void * message_memory)
{
  auto typed_message = static_cast<ymrobot_msgs::msg::DotPointsList *>(message_memory);
  typed_message->~DotPointsList();
}

size_t size_function__DotPointsList__dot_points_list(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<ymrobot_msgs::msg::DotPoints> *>(untyped_member);
  return member->size();
}

const void * get_const_function__DotPointsList__dot_points_list(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<ymrobot_msgs::msg::DotPoints> *>(untyped_member);
  return &member[index];
}

void * get_function__DotPointsList__dot_points_list(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<ymrobot_msgs::msg::DotPoints> *>(untyped_member);
  return &member[index];
}

void fetch_function__DotPointsList__dot_points_list(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const ymrobot_msgs::msg::DotPoints *>(
    get_const_function__DotPointsList__dot_points_list(untyped_member, index));
  auto & value = *reinterpret_cast<ymrobot_msgs::msg::DotPoints *>(untyped_value);
  value = item;
}

void assign_function__DotPointsList__dot_points_list(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<ymrobot_msgs::msg::DotPoints *>(
    get_function__DotPointsList__dot_points_list(untyped_member, index));
  const auto & value = *reinterpret_cast<const ymrobot_msgs::msg::DotPoints *>(untyped_value);
  item = value;
}

void resize_function__DotPointsList__dot_points_list(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<ymrobot_msgs::msg::DotPoints> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember DotPointsList_message_member_array[1] = {
  {
    "dot_points_list",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<ymrobot_msgs::msg::DotPoints>(),  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ymrobot_msgs::msg::DotPointsList, dot_points_list),  // bytes offset in struct
    nullptr,  // default value
    size_function__DotPointsList__dot_points_list,  // size() function pointer
    get_const_function__DotPointsList__dot_points_list,  // get_const(index) function pointer
    get_function__DotPointsList__dot_points_list,  // get(index) function pointer
    fetch_function__DotPointsList__dot_points_list,  // fetch(index, &value) function pointer
    assign_function__DotPointsList__dot_points_list,  // assign(index, value) function pointer
    resize_function__DotPointsList__dot_points_list  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers DotPointsList_message_members = {
  "ymrobot_msgs::msg",  // message namespace
  "DotPointsList",  // message name
  1,  // number of fields
  sizeof(ymrobot_msgs::msg::DotPointsList),
  false,  // has_any_key_member_
  DotPointsList_message_member_array,  // message members
  DotPointsList_init_function,  // function to initialize message memory (memory has to be allocated)
  DotPointsList_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t DotPointsList_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &DotPointsList_message_members,
  get_message_typesupport_handle_function,
  &ymrobot_msgs__msg__DotPointsList__get_type_hash,
  &ymrobot_msgs__msg__DotPointsList__get_type_description,
  &ymrobot_msgs__msg__DotPointsList__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace ymrobot_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ymrobot_msgs::msg::DotPointsList>()
{
  return &::ymrobot_msgs::msg::rosidl_typesupport_introspection_cpp::DotPointsList_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ymrobot_msgs, msg, DotPointsList)() {
  return &::ymrobot_msgs::msg::rosidl_typesupport_introspection_cpp::DotPointsList_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
