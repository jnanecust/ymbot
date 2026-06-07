// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ymrobot_msgs:msg/GuideRoute.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ymrobot_msgs/msg/guide_route.hpp"


#ifndef YMROBOT_MSGS__MSG__DETAIL__GUIDE_ROUTE__BUILDER_HPP_
#define YMROBOT_MSGS__MSG__DETAIL__GUIDE_ROUTE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ymrobot_msgs/msg/detail/guide_route__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ymrobot_msgs
{

namespace msg
{

namespace builder
{

class Init_GuideRoute_audios_list
{
public:
  explicit Init_GuideRoute_audios_list(::ymrobot_msgs::msg::GuideRoute & msg)
  : msg_(msg)
  {}
  ::ymrobot_msgs::msg::GuideRoute audios_list(::ymrobot_msgs::msg::GuideRoute::_audios_list_type arg)
  {
    msg_.audios_list = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ymrobot_msgs::msg::GuideRoute msg_;
};

class Init_GuideRoute_mark_points_list
{
public:
  Init_GuideRoute_mark_points_list()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GuideRoute_audios_list mark_points_list(::ymrobot_msgs::msg::GuideRoute::_mark_points_list_type arg)
  {
    msg_.mark_points_list = std::move(arg);
    return Init_GuideRoute_audios_list(msg_);
  }

private:
  ::ymrobot_msgs::msg::GuideRoute msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ymrobot_msgs::msg::GuideRoute>()
{
  return ymrobot_msgs::msg::builder::Init_GuideRoute_mark_points_list();
}

}  // namespace ymrobot_msgs

#endif  // YMROBOT_MSGS__MSG__DETAIL__GUIDE_ROUTE__BUILDER_HPP_
