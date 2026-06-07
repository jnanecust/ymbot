// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ymrobot_msgs:msg/NavPoint.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ymrobot_msgs/msg/nav_point.hpp"


#ifndef YMROBOT_MSGS__MSG__DETAIL__NAV_POINT__BUILDER_HPP_
#define YMROBOT_MSGS__MSG__DETAIL__NAV_POINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ymrobot_msgs/msg/detail/nav_point__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ymrobot_msgs
{

namespace msg
{

namespace builder
{

class Init_NavPoint_map_index
{
public:
  explicit Init_NavPoint_map_index(::ymrobot_msgs::msg::NavPoint & msg)
  : msg_(msg)
  {}
  ::ymrobot_msgs::msg::NavPoint map_index(::ymrobot_msgs::msg::NavPoint::_map_index_type arg)
  {
    msg_.map_index = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ymrobot_msgs::msg::NavPoint msg_;
};

class Init_NavPoint_nav_map_name
{
public:
  explicit Init_NavPoint_nav_map_name(::ymrobot_msgs::msg::NavPoint & msg)
  : msg_(msg)
  {}
  Init_NavPoint_map_index nav_map_name(::ymrobot_msgs::msg::NavPoint::_nav_map_name_type arg)
  {
    msg_.nav_map_name = std::move(arg);
    return Init_NavPoint_map_index(msg_);
  }

private:
  ::ymrobot_msgs::msg::NavPoint msg_;
};

class Init_NavPoint_nav_name
{
public:
  explicit Init_NavPoint_nav_name(::ymrobot_msgs::msg::NavPoint & msg)
  : msg_(msg)
  {}
  Init_NavPoint_nav_map_name nav_name(::ymrobot_msgs::msg::NavPoint::_nav_name_type arg)
  {
    msg_.nav_name = std::move(arg);
    return Init_NavPoint_nav_map_name(msg_);
  }

private:
  ::ymrobot_msgs::msg::NavPoint msg_;
};

class Init_NavPoint_position
{
public:
  explicit Init_NavPoint_position(::ymrobot_msgs::msg::NavPoint & msg)
  : msg_(msg)
  {}
  Init_NavPoint_nav_name position(::ymrobot_msgs::msg::NavPoint::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_NavPoint_nav_name(msg_);
  }

private:
  ::ymrobot_msgs::msg::NavPoint msg_;
};

class Init_NavPoint_seq
{
public:
  Init_NavPoint_seq()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NavPoint_position seq(::ymrobot_msgs::msg::NavPoint::_seq_type arg)
  {
    msg_.seq = std::move(arg);
    return Init_NavPoint_position(msg_);
  }

private:
  ::ymrobot_msgs::msg::NavPoint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ymrobot_msgs::msg::NavPoint>()
{
  return ymrobot_msgs::msg::builder::Init_NavPoint_seq();
}

}  // namespace ymrobot_msgs

#endif  // YMROBOT_MSGS__MSG__DETAIL__NAV_POINT__BUILDER_HPP_
