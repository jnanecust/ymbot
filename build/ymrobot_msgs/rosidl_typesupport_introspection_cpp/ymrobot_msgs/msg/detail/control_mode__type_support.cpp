// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from ymrobot_msgs:msg/ControlMode.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "ymrobot_msgs/msg/detail/control_mode__functions.h"
#include "ymrobot_msgs/msg/detail/control_mode__struct.hpp"
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

void ControlMode_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) ymrobot_msgs::msg::ControlMode(_init);
}

void ControlMode_fini_function(void * message_memory)
{
  auto typed_message = static_cast<ymrobot_msgs::msg::ControlMode *>(message_memory);
  typed_message->~ControlMode();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ControlMode_message_member_array[1] = {
  {
    "code",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ymrobot_msgs::msg::ControlMode, code),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ControlMode_message_members = {
  "ymrobot_msgs::msg",  // message namespace
  "ControlMode",  // message name
  1,  // number of fields
  sizeof(ymrobot_msgs::msg::ControlMode),
  false,  // has_any_key_member_
  ControlMode_message_member_array,  // message members
  ControlMode_init_function,  // function to initialize message memory (memory has to be allocated)
  ControlMode_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ControlMode_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ControlMode_message_members,
  get_message_typesupport_handle_function,
  &ymrobot_msgs__msg__ControlMode__get_type_hash,
  &ymrobot_msgs__msg__ControlMode__get_type_description,
  &ymrobot_msgs__msg__ControlMode__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace ymrobot_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ymrobot_msgs::msg::ControlMode>()
{
  return &::ymrobot_msgs::msg::rosidl_typesupport_introspection_cpp::ControlMode_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ymrobot_msgs, msg, ControlMode)() {
  return &::ymrobot_msgs::msg::rosidl_typesupport_introspection_cpp::ControlMode_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
