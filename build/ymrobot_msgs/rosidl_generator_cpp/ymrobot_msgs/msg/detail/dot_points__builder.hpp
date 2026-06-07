// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ymrobot_msgs:msg/DotPoints.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ymrobot_msgs/msg/dot_points.hpp"


#ifndef YMROBOT_MSGS__MSG__DETAIL__DOT_POINTS__BUILDER_HPP_
#define YMROBOT_MSGS__MSG__DETAIL__DOT_POINTS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ymrobot_msgs/msg/detail/dot_points__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ymrobot_msgs
{

namespace msg
{

namespace builder
{

class Init_DotPoints_pose_describe
{
public:
  explicit Init_DotPoints_pose_describe(::ymrobot_msgs::msg::DotPoints & msg)
  : msg_(msg)
  {}
  ::ymrobot_msgs::msg::DotPoints pose_describe(::ymrobot_msgs::msg::DotPoints::_pose_describe_type arg)
  {
    msg_.pose_describe = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ymrobot_msgs::msg::DotPoints msg_;
};

class Init_DotPoints_map_name
{
public:
  explicit Init_DotPoints_map_name(::ymrobot_msgs::msg::DotPoints & msg)
  : msg_(msg)
  {}
  Init_DotPoints_pose_describe map_name(::ymrobot_msgs::msg::DotPoints::_map_name_type arg)
  {
    msg_.map_name = std::move(arg);
    return Init_DotPoints_pose_describe(msg_);
  }

private:
  ::ymrobot_msgs::msg::DotPoints msg_;
};

class Init_DotPoints_pose_name
{
public:
  explicit Init_DotPoints_pose_name(::ymrobot_msgs::msg::DotPoints & msg)
  : msg_(msg)
  {}
  Init_DotPoints_map_name pose_name(::ymrobot_msgs::msg::DotPoints::_pose_name_type arg)
  {
    msg_.pose_name = std::move(arg);
    return Init_DotPoints_map_name(msg_);
  }

private:
  ::ymrobot_msgs::msg::DotPoints msg_;
};

class Init_DotPoints_action
{
public:
  Init_DotPoints_action()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DotPoints_pose_name action(::ymrobot_msgs::msg::DotPoints::_action_type arg)
  {
    msg_.action = std::move(arg);
    return Init_DotPoints_pose_name(msg_);
  }

private:
  ::ymrobot_msgs::msg::DotPoints msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ymrobot_msgs::msg::DotPoints>()
{
  return ymrobot_msgs::msg::builder::Init_DotPoints_action();
}

}  // namespace ymrobot_msgs

#endif  // YMROBOT_MSGS__MSG__DETAIL__DOT_POINTS__BUILDER_HPP_
