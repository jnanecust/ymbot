// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ymrobot_msgs:action/ElevatorDetection.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ymrobot_msgs/action/elevator_detection.hpp"


#ifndef YMROBOT_MSGS__ACTION__DETAIL__ELEVATOR_DETECTION__BUILDER_HPP_
#define YMROBOT_MSGS__ACTION__DETAIL__ELEVATOR_DETECTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ymrobot_msgs/action/detail/elevator_detection__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ymrobot_msgs
{

namespace action
{

namespace builder
{

class Init_ElevatorDetection_Goal_detrctor_time
{
public:
  explicit Init_ElevatorDetection_Goal_detrctor_time(::ymrobot_msgs::action::ElevatorDetection_Goal & msg)
  : msg_(msg)
  {}
  ::ymrobot_msgs::action::ElevatorDetection_Goal detrctor_time(::ymrobot_msgs::action::ElevatorDetection_Goal::_detrctor_time_type arg)
  {
    msg_.detrctor_time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ymrobot_msgs::action::ElevatorDetection_Goal msg_;
};

class Init_ElevatorDetection_Goal_detectot_range
{
public:
  Init_ElevatorDetection_Goal_detectot_range()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ElevatorDetection_Goal_detrctor_time detectot_range(::ymrobot_msgs::action::ElevatorDetection_Goal::_detectot_range_type arg)
  {
    msg_.detectot_range = std::move(arg);
    return Init_ElevatorDetection_Goal_detrctor_time(msg_);
  }

private:
  ::ymrobot_msgs::action::ElevatorDetection_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ymrobot_msgs::action::ElevatorDetection_Goal>()
{
  return ymrobot_msgs::action::builder::Init_ElevatorDetection_Goal_detectot_range();
}

}  // namespace ymrobot_msgs


namespace ymrobot_msgs
{

namespace action
{

namespace builder
{

class Init_ElevatorDetection_Result_message
{
public:
  explicit Init_ElevatorDetection_Result_message(::ymrobot_msgs::action::ElevatorDetection_Result & msg)
  : msg_(msg)
  {}
  ::ymrobot_msgs::action::ElevatorDetection_Result message(::ymrobot_msgs::action::ElevatorDetection_Result::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ymrobot_msgs::action::ElevatorDetection_Result msg_;
};

class Init_ElevatorDetection_Result_success
{
public:
  Init_ElevatorDetection_Result_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ElevatorDetection_Result_message success(::ymrobot_msgs::action::ElevatorDetection_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_ElevatorDetection_Result_message(msg_);
  }

private:
  ::ymrobot_msgs::action::ElevatorDetection_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ymrobot_msgs::action::ElevatorDetection_Result>()
{
  return ymrobot_msgs::action::builder::Init_ElevatorDetection_Result_success();
}

}  // namespace ymrobot_msgs


namespace ymrobot_msgs
{

namespace action
{

namespace builder
{

class Init_ElevatorDetection_Feedback_progress
{
public:
  Init_ElevatorDetection_Feedback_progress()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ymrobot_msgs::action::ElevatorDetection_Feedback progress(::ymrobot_msgs::action::ElevatorDetection_Feedback::_progress_type arg)
  {
    msg_.progress = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ymrobot_msgs::action::ElevatorDetection_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ymrobot_msgs::action::ElevatorDetection_Feedback>()
{
  return ymrobot_msgs::action::builder::Init_ElevatorDetection_Feedback_progress();
}

}  // namespace ymrobot_msgs


namespace ymrobot_msgs
{

namespace action
{

namespace builder
{

class Init_ElevatorDetection_SendGoal_Request_goal
{
public:
  explicit Init_ElevatorDetection_SendGoal_Request_goal(::ymrobot_msgs::action::ElevatorDetection_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::ymrobot_msgs::action::ElevatorDetection_SendGoal_Request goal(::ymrobot_msgs::action::ElevatorDetection_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ymrobot_msgs::action::ElevatorDetection_SendGoal_Request msg_;
};

class Init_ElevatorDetection_SendGoal_Request_goal_id
{
public:
  Init_ElevatorDetection_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ElevatorDetection_SendGoal_Request_goal goal_id(::ymrobot_msgs::action::ElevatorDetection_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_ElevatorDetection_SendGoal_Request_goal(msg_);
  }

private:
  ::ymrobot_msgs::action::ElevatorDetection_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ymrobot_msgs::action::ElevatorDetection_SendGoal_Request>()
{
  return ymrobot_msgs::action::builder::Init_ElevatorDetection_SendGoal_Request_goal_id();
}

}  // namespace ymrobot_msgs


namespace ymrobot_msgs
{

namespace action
{

namespace builder
{

class Init_ElevatorDetection_SendGoal_Response_stamp
{
public:
  explicit Init_ElevatorDetection_SendGoal_Response_stamp(::ymrobot_msgs::action::ElevatorDetection_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::ymrobot_msgs::action::ElevatorDetection_SendGoal_Response stamp(::ymrobot_msgs::action::ElevatorDetection_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ymrobot_msgs::action::ElevatorDetection_SendGoal_Response msg_;
};

class Init_ElevatorDetection_SendGoal_Response_accepted
{
public:
  Init_ElevatorDetection_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ElevatorDetection_SendGoal_Response_stamp accepted(::ymrobot_msgs::action::ElevatorDetection_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_ElevatorDetection_SendGoal_Response_stamp(msg_);
  }

private:
  ::ymrobot_msgs::action::ElevatorDetection_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ymrobot_msgs::action::ElevatorDetection_SendGoal_Response>()
{
  return ymrobot_msgs::action::builder::Init_ElevatorDetection_SendGoal_Response_accepted();
}

}  // namespace ymrobot_msgs


namespace ymrobot_msgs
{

namespace action
{

namespace builder
{

class Init_ElevatorDetection_SendGoal_Event_response
{
public:
  explicit Init_ElevatorDetection_SendGoal_Event_response(::ymrobot_msgs::action::ElevatorDetection_SendGoal_Event & msg)
  : msg_(msg)
  {}
  ::ymrobot_msgs::action::ElevatorDetection_SendGoal_Event response(::ymrobot_msgs::action::ElevatorDetection_SendGoal_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ymrobot_msgs::action::ElevatorDetection_SendGoal_Event msg_;
};

class Init_ElevatorDetection_SendGoal_Event_request
{
public:
  explicit Init_ElevatorDetection_SendGoal_Event_request(::ymrobot_msgs::action::ElevatorDetection_SendGoal_Event & msg)
  : msg_(msg)
  {}
  Init_ElevatorDetection_SendGoal_Event_response request(::ymrobot_msgs::action::ElevatorDetection_SendGoal_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_ElevatorDetection_SendGoal_Event_response(msg_);
  }

private:
  ::ymrobot_msgs::action::ElevatorDetection_SendGoal_Event msg_;
};

class Init_ElevatorDetection_SendGoal_Event_info
{
public:
  Init_ElevatorDetection_SendGoal_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ElevatorDetection_SendGoal_Event_request info(::ymrobot_msgs::action::ElevatorDetection_SendGoal_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_ElevatorDetection_SendGoal_Event_request(msg_);
  }

private:
  ::ymrobot_msgs::action::ElevatorDetection_SendGoal_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ymrobot_msgs::action::ElevatorDetection_SendGoal_Event>()
{
  return ymrobot_msgs::action::builder::Init_ElevatorDetection_SendGoal_Event_info();
}

}  // namespace ymrobot_msgs


namespace ymrobot_msgs
{

namespace action
{

namespace builder
{

class Init_ElevatorDetection_GetResult_Request_goal_id
{
public:
  Init_ElevatorDetection_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ymrobot_msgs::action::ElevatorDetection_GetResult_Request goal_id(::ymrobot_msgs::action::ElevatorDetection_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ymrobot_msgs::action::ElevatorDetection_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ymrobot_msgs::action::ElevatorDetection_GetResult_Request>()
{
  return ymrobot_msgs::action::builder::Init_ElevatorDetection_GetResult_Request_goal_id();
}

}  // namespace ymrobot_msgs


namespace ymrobot_msgs
{

namespace action
{

namespace builder
{

class Init_ElevatorDetection_GetResult_Response_result
{
public:
  explicit Init_ElevatorDetection_GetResult_Response_result(::ymrobot_msgs::action::ElevatorDetection_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::ymrobot_msgs::action::ElevatorDetection_GetResult_Response result(::ymrobot_msgs::action::ElevatorDetection_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ymrobot_msgs::action::ElevatorDetection_GetResult_Response msg_;
};

class Init_ElevatorDetection_GetResult_Response_status
{
public:
  Init_ElevatorDetection_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ElevatorDetection_GetResult_Response_result status(::ymrobot_msgs::action::ElevatorDetection_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_ElevatorDetection_GetResult_Response_result(msg_);
  }

private:
  ::ymrobot_msgs::action::ElevatorDetection_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ymrobot_msgs::action::ElevatorDetection_GetResult_Response>()
{
  return ymrobot_msgs::action::builder::Init_ElevatorDetection_GetResult_Response_status();
}

}  // namespace ymrobot_msgs


namespace ymrobot_msgs
{

namespace action
{

namespace builder
{

class Init_ElevatorDetection_GetResult_Event_response
{
public:
  explicit Init_ElevatorDetection_GetResult_Event_response(::ymrobot_msgs::action::ElevatorDetection_GetResult_Event & msg)
  : msg_(msg)
  {}
  ::ymrobot_msgs::action::ElevatorDetection_GetResult_Event response(::ymrobot_msgs::action::ElevatorDetection_GetResult_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ymrobot_msgs::action::ElevatorDetection_GetResult_Event msg_;
};

class Init_ElevatorDetection_GetResult_Event_request
{
public:
  explicit Init_ElevatorDetection_GetResult_Event_request(::ymrobot_msgs::action::ElevatorDetection_GetResult_Event & msg)
  : msg_(msg)
  {}
  Init_ElevatorDetection_GetResult_Event_response request(::ymrobot_msgs::action::ElevatorDetection_GetResult_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_ElevatorDetection_GetResult_Event_response(msg_);
  }

private:
  ::ymrobot_msgs::action::ElevatorDetection_GetResult_Event msg_;
};

class Init_ElevatorDetection_GetResult_Event_info
{
public:
  Init_ElevatorDetection_GetResult_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ElevatorDetection_GetResult_Event_request info(::ymrobot_msgs::action::ElevatorDetection_GetResult_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_ElevatorDetection_GetResult_Event_request(msg_);
  }

private:
  ::ymrobot_msgs::action::ElevatorDetection_GetResult_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ymrobot_msgs::action::ElevatorDetection_GetResult_Event>()
{
  return ymrobot_msgs::action::builder::Init_ElevatorDetection_GetResult_Event_info();
}

}  // namespace ymrobot_msgs


namespace ymrobot_msgs
{

namespace action
{

namespace builder
{

class Init_ElevatorDetection_FeedbackMessage_feedback
{
public:
  explicit Init_ElevatorDetection_FeedbackMessage_feedback(::ymrobot_msgs::action::ElevatorDetection_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::ymrobot_msgs::action::ElevatorDetection_FeedbackMessage feedback(::ymrobot_msgs::action::ElevatorDetection_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ymrobot_msgs::action::ElevatorDetection_FeedbackMessage msg_;
};

class Init_ElevatorDetection_FeedbackMessage_goal_id
{
public:
  Init_ElevatorDetection_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ElevatorDetection_FeedbackMessage_feedback goal_id(::ymrobot_msgs::action::ElevatorDetection_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_ElevatorDetection_FeedbackMessage_feedback(msg_);
  }

private:
  ::ymrobot_msgs::action::ElevatorDetection_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ymrobot_msgs::action::ElevatorDetection_FeedbackMessage>()
{
  return ymrobot_msgs::action::builder::Init_ElevatorDetection_FeedbackMessage_goal_id();
}

}  // namespace ymrobot_msgs

#endif  // YMROBOT_MSGS__ACTION__DETAIL__ELEVATOR_DETECTION__BUILDER_HPP_
