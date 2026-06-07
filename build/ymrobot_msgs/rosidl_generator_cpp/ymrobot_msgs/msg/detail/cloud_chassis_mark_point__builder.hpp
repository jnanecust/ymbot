// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ymrobot_msgs:msg/CloudChassisMarkPoint.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ymrobot_msgs/msg/cloud_chassis_mark_point.hpp"


#ifndef YMROBOT_MSGS__MSG__DETAIL__CLOUD_CHASSIS_MARK_POINT__BUILDER_HPP_
#define YMROBOT_MSGS__MSG__DETAIL__CLOUD_CHASSIS_MARK_POINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ymrobot_msgs/msg/detail/cloud_chassis_mark_point__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ymrobot_msgs
{

namespace msg
{

namespace builder
{

class Init_CloudChassisMarkPoint_nearby_point_radius
{
public:
  explicit Init_CloudChassisMarkPoint_nearby_point_radius(::ymrobot_msgs::msg::CloudChassisMarkPoint & msg)
  : msg_(msg)
  {}
  ::ymrobot_msgs::msg::CloudChassisMarkPoint nearby_point_radius(::ymrobot_msgs::msg::CloudChassisMarkPoint::_nearby_point_radius_type arg)
  {
    msg_.nearby_point_radius = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ymrobot_msgs::msg::CloudChassisMarkPoint msg_;
};

class Init_CloudChassisMarkPoint_is_activate_the_nearby_point
{
public:
  explicit Init_CloudChassisMarkPoint_is_activate_the_nearby_point(::ymrobot_msgs::msg::CloudChassisMarkPoint & msg)
  : msg_(msg)
  {}
  Init_CloudChassisMarkPoint_nearby_point_radius is_activate_the_nearby_point(::ymrobot_msgs::msg::CloudChassisMarkPoint::_is_activate_the_nearby_point_type arg)
  {
    msg_.is_activate_the_nearby_point = std::move(arg);
    return Init_CloudChassisMarkPoint_nearby_point_radius(msg_);
  }

private:
  ::ymrobot_msgs::msg::CloudChassisMarkPoint msg_;
};

class Init_CloudChassisMarkPoint_nav_target_yaw
{
public:
  explicit Init_CloudChassisMarkPoint_nav_target_yaw(::ymrobot_msgs::msg::CloudChassisMarkPoint & msg)
  : msg_(msg)
  {}
  Init_CloudChassisMarkPoint_is_activate_the_nearby_point nav_target_yaw(::ymrobot_msgs::msg::CloudChassisMarkPoint::_nav_target_yaw_type arg)
  {
    msg_.nav_target_yaw = std::move(arg);
    return Init_CloudChassisMarkPoint_is_activate_the_nearby_point(msg_);
  }

private:
  ::ymrobot_msgs::msg::CloudChassisMarkPoint msg_;
};

class Init_CloudChassisMarkPoint_nav_target_y
{
public:
  explicit Init_CloudChassisMarkPoint_nav_target_y(::ymrobot_msgs::msg::CloudChassisMarkPoint & msg)
  : msg_(msg)
  {}
  Init_CloudChassisMarkPoint_nav_target_yaw nav_target_y(::ymrobot_msgs::msg::CloudChassisMarkPoint::_nav_target_y_type arg)
  {
    msg_.nav_target_y = std::move(arg);
    return Init_CloudChassisMarkPoint_nav_target_yaw(msg_);
  }

private:
  ::ymrobot_msgs::msg::CloudChassisMarkPoint msg_;
};

class Init_CloudChassisMarkPoint_nav_target_x
{
public:
  explicit Init_CloudChassisMarkPoint_nav_target_x(::ymrobot_msgs::msg::CloudChassisMarkPoint & msg)
  : msg_(msg)
  {}
  Init_CloudChassisMarkPoint_nav_target_y nav_target_x(::ymrobot_msgs::msg::CloudChassisMarkPoint::_nav_target_x_type arg)
  {
    msg_.nav_target_x = std::move(arg);
    return Init_CloudChassisMarkPoint_nav_target_y(msg_);
  }

private:
  ::ymrobot_msgs::msg::CloudChassisMarkPoint msg_;
};

class Init_CloudChassisMarkPoint_nav_target_name
{
public:
  explicit Init_CloudChassisMarkPoint_nav_target_name(::ymrobot_msgs::msg::CloudChassisMarkPoint & msg)
  : msg_(msg)
  {}
  Init_CloudChassisMarkPoint_nav_target_x nav_target_name(::ymrobot_msgs::msg::CloudChassisMarkPoint::_nav_target_name_type arg)
  {
    msg_.nav_target_name = std::move(arg);
    return Init_CloudChassisMarkPoint_nav_target_x(msg_);
  }

private:
  ::ymrobot_msgs::msg::CloudChassisMarkPoint msg_;
};

class Init_CloudChassisMarkPoint_nav_mode
{
public:
  Init_CloudChassisMarkPoint_nav_mode()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CloudChassisMarkPoint_nav_target_name nav_mode(::ymrobot_msgs::msg::CloudChassisMarkPoint::_nav_mode_type arg)
  {
    msg_.nav_mode = std::move(arg);
    return Init_CloudChassisMarkPoint_nav_target_name(msg_);
  }

private:
  ::ymrobot_msgs::msg::CloudChassisMarkPoint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ymrobot_msgs::msg::CloudChassisMarkPoint>()
{
  return ymrobot_msgs::msg::builder::Init_CloudChassisMarkPoint_nav_mode();
}

}  // namespace ymrobot_msgs

#endif  // YMROBOT_MSGS__MSG__DETAIL__CLOUD_CHASSIS_MARK_POINT__BUILDER_HPP_
