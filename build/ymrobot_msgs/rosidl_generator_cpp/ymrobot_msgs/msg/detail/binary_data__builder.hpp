// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ymrobot_msgs:msg/BinaryData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ymrobot_msgs/msg/binary_data.hpp"


#ifndef YMROBOT_MSGS__MSG__DETAIL__BINARY_DATA__BUILDER_HPP_
#define YMROBOT_MSGS__MSG__DETAIL__BINARY_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ymrobot_msgs/msg/detail/binary_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ymrobot_msgs
{

namespace msg
{

namespace builder
{

class Init_BinaryData_binary_data
{
public:
  explicit Init_BinaryData_binary_data(::ymrobot_msgs::msg::BinaryData & msg)
  : msg_(msg)
  {}
  ::ymrobot_msgs::msg::BinaryData binary_data(::ymrobot_msgs::msg::BinaryData::_binary_data_type arg)
  {
    msg_.binary_data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ymrobot_msgs::msg::BinaryData msg_;
};

class Init_BinaryData_file_format
{
public:
  Init_BinaryData_file_format()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BinaryData_binary_data file_format(::ymrobot_msgs::msg::BinaryData::_file_format_type arg)
  {
    msg_.file_format = std::move(arg);
    return Init_BinaryData_binary_data(msg_);
  }

private:
  ::ymrobot_msgs::msg::BinaryData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ymrobot_msgs::msg::BinaryData>()
{
  return ymrobot_msgs::msg::builder::Init_BinaryData_file_format();
}

}  // namespace ymrobot_msgs

#endif  // YMROBOT_MSGS__MSG__DETAIL__BINARY_DATA__BUILDER_HPP_
