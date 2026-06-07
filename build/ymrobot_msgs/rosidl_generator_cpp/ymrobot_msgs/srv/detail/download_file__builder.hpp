// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ymrobot_msgs:srv/DownloadFile.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ymrobot_msgs/srv/download_file.hpp"


#ifndef YMROBOT_MSGS__SRV__DETAIL__DOWNLOAD_FILE__BUILDER_HPP_
#define YMROBOT_MSGS__SRV__DETAIL__DOWNLOAD_FILE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ymrobot_msgs/srv/detail/download_file__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ymrobot_msgs
{

namespace srv
{

namespace builder
{

class Init_DownloadFile_Request_save_path
{
public:
  explicit Init_DownloadFile_Request_save_path(::ymrobot_msgs::srv::DownloadFile_Request & msg)
  : msg_(msg)
  {}
  ::ymrobot_msgs::srv::DownloadFile_Request save_path(::ymrobot_msgs::srv::DownloadFile_Request::_save_path_type arg)
  {
    msg_.save_path = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ymrobot_msgs::srv::DownloadFile_Request msg_;
};

class Init_DownloadFile_Request_url
{
public:
  Init_DownloadFile_Request_url()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DownloadFile_Request_save_path url(::ymrobot_msgs::srv::DownloadFile_Request::_url_type arg)
  {
    msg_.url = std::move(arg);
    return Init_DownloadFile_Request_save_path(msg_);
  }

private:
  ::ymrobot_msgs::srv::DownloadFile_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ymrobot_msgs::srv::DownloadFile_Request>()
{
  return ymrobot_msgs::srv::builder::Init_DownloadFile_Request_url();
}

}  // namespace ymrobot_msgs


namespace ymrobot_msgs
{

namespace srv
{

namespace builder
{

class Init_DownloadFile_Response_message
{
public:
  explicit Init_DownloadFile_Response_message(::ymrobot_msgs::srv::DownloadFile_Response & msg)
  : msg_(msg)
  {}
  ::ymrobot_msgs::srv::DownloadFile_Response message(::ymrobot_msgs::srv::DownloadFile_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ymrobot_msgs::srv::DownloadFile_Response msg_;
};

class Init_DownloadFile_Response_success
{
public:
  Init_DownloadFile_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DownloadFile_Response_message success(::ymrobot_msgs::srv::DownloadFile_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_DownloadFile_Response_message(msg_);
  }

private:
  ::ymrobot_msgs::srv::DownloadFile_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ymrobot_msgs::srv::DownloadFile_Response>()
{
  return ymrobot_msgs::srv::builder::Init_DownloadFile_Response_success();
}

}  // namespace ymrobot_msgs


namespace ymrobot_msgs
{

namespace srv
{

namespace builder
{

class Init_DownloadFile_Event_response
{
public:
  explicit Init_DownloadFile_Event_response(::ymrobot_msgs::srv::DownloadFile_Event & msg)
  : msg_(msg)
  {}
  ::ymrobot_msgs::srv::DownloadFile_Event response(::ymrobot_msgs::srv::DownloadFile_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ymrobot_msgs::srv::DownloadFile_Event msg_;
};

class Init_DownloadFile_Event_request
{
public:
  explicit Init_DownloadFile_Event_request(::ymrobot_msgs::srv::DownloadFile_Event & msg)
  : msg_(msg)
  {}
  Init_DownloadFile_Event_response request(::ymrobot_msgs::srv::DownloadFile_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_DownloadFile_Event_response(msg_);
  }

private:
  ::ymrobot_msgs::srv::DownloadFile_Event msg_;
};

class Init_DownloadFile_Event_info
{
public:
  Init_DownloadFile_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DownloadFile_Event_request info(::ymrobot_msgs::srv::DownloadFile_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_DownloadFile_Event_request(msg_);
  }

private:
  ::ymrobot_msgs::srv::DownloadFile_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ymrobot_msgs::srv::DownloadFile_Event>()
{
  return ymrobot_msgs::srv::builder::Init_DownloadFile_Event_info();
}

}  // namespace ymrobot_msgs

#endif  // YMROBOT_MSGS__SRV__DETAIL__DOWNLOAD_FILE__BUILDER_HPP_
