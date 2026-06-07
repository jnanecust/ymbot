// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ymrobot_msgs:msg/DotPointsList.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ymrobot_msgs/msg/dot_points_list.hpp"


#ifndef YMROBOT_MSGS__MSG__DETAIL__DOT_POINTS_LIST__BUILDER_HPP_
#define YMROBOT_MSGS__MSG__DETAIL__DOT_POINTS_LIST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ymrobot_msgs/msg/detail/dot_points_list__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ymrobot_msgs
{

namespace msg
{

namespace builder
{

class Init_DotPointsList_dot_points_list
{
public:
  Init_DotPointsList_dot_points_list()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ymrobot_msgs::msg::DotPointsList dot_points_list(::ymrobot_msgs::msg::DotPointsList::_dot_points_list_type arg)
  {
    msg_.dot_points_list = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ymrobot_msgs::msg::DotPointsList msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ymrobot_msgs::msg::DotPointsList>()
{
  return ymrobot_msgs::msg::builder::Init_DotPointsList_dot_points_list();
}

}  // namespace ymrobot_msgs

#endif  // YMROBOT_MSGS__MSG__DETAIL__DOT_POINTS_LIST__BUILDER_HPP_
