// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ymrobot_msgs:action/CloudChassisNav.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ymrobot_msgs/action/cloud_chassis_nav.hpp"


#ifndef YMROBOT_MSGS__ACTION__DETAIL__CLOUD_CHASSIS_NAV__STRUCT_HPP_
#define YMROBOT_MSGS__ACTION__DETAIL__CLOUD_CHASSIS_NAV__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ymrobot_msgs__action__CloudChassisNav_Goal __attribute__((deprecated))
#else
# define DEPRECATED__ymrobot_msgs__action__CloudChassisNav_Goal __declspec(deprecated)
#endif

namespace ymrobot_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct CloudChassisNav_Goal_
{
  using Type = CloudChassisNav_Goal_<ContainerAllocator>;

  explicit CloudChassisNav_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->nav_mode = 0;
      this->nav_target_name = "";
      this->nav_target_x = 0.0;
      this->nav_target_y = 0.0;
      this->nav_target_yaw = 0.0;
      this->is_activate_the_nearby_point = false;
      this->nearby_point_radius = 0.0f;
    }
  }

  explicit CloudChassisNav_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : nav_target_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->nav_mode = 0;
      this->nav_target_name = "";
      this->nav_target_x = 0.0;
      this->nav_target_y = 0.0;
      this->nav_target_yaw = 0.0;
      this->is_activate_the_nearby_point = false;
      this->nearby_point_radius = 0.0f;
    }
  }

  // field types and members
  using _nav_mode_type =
    uint8_t;
  _nav_mode_type nav_mode;
  using _nav_target_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _nav_target_name_type nav_target_name;
  using _nav_target_x_type =
    double;
  _nav_target_x_type nav_target_x;
  using _nav_target_y_type =
    double;
  _nav_target_y_type nav_target_y;
  using _nav_target_yaw_type =
    double;
  _nav_target_yaw_type nav_target_yaw;
  using _is_activate_the_nearby_point_type =
    bool;
  _is_activate_the_nearby_point_type is_activate_the_nearby_point;
  using _nearby_point_radius_type =
    float;
  _nearby_point_radius_type nearby_point_radius;

  // setters for named parameter idiom
  Type & set__nav_mode(
    const uint8_t & _arg)
  {
    this->nav_mode = _arg;
    return *this;
  }
  Type & set__nav_target_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->nav_target_name = _arg;
    return *this;
  }
  Type & set__nav_target_x(
    const double & _arg)
  {
    this->nav_target_x = _arg;
    return *this;
  }
  Type & set__nav_target_y(
    const double & _arg)
  {
    this->nav_target_y = _arg;
    return *this;
  }
  Type & set__nav_target_yaw(
    const double & _arg)
  {
    this->nav_target_yaw = _arg;
    return *this;
  }
  Type & set__is_activate_the_nearby_point(
    const bool & _arg)
  {
    this->is_activate_the_nearby_point = _arg;
    return *this;
  }
  Type & set__nearby_point_radius(
    const float & _arg)
  {
    this->nearby_point_radius = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ymrobot_msgs::action::CloudChassisNav_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const ymrobot_msgs::action::CloudChassisNav_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ymrobot_msgs::action::CloudChassisNav_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ymrobot_msgs::action::CloudChassisNav_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ymrobot_msgs::action::CloudChassisNav_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ymrobot_msgs::action::CloudChassisNav_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ymrobot_msgs::action::CloudChassisNav_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ymrobot_msgs::action::CloudChassisNav_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ymrobot_msgs::action::CloudChassisNav_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ymrobot_msgs::action::CloudChassisNav_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ymrobot_msgs__action__CloudChassisNav_Goal
    std::shared_ptr<ymrobot_msgs::action::CloudChassisNav_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ymrobot_msgs__action__CloudChassisNav_Goal
    std::shared_ptr<ymrobot_msgs::action::CloudChassisNav_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CloudChassisNav_Goal_ & other) const
  {
    if (this->nav_mode != other.nav_mode) {
      return false;
    }
    if (this->nav_target_name != other.nav_target_name) {
      return false;
    }
    if (this->nav_target_x != other.nav_target_x) {
      return false;
    }
    if (this->nav_target_y != other.nav_target_y) {
      return false;
    }
    if (this->nav_target_yaw != other.nav_target_yaw) {
      return false;
    }
    if (this->is_activate_the_nearby_point != other.is_activate_the_nearby_point) {
      return false;
    }
    if (this->nearby_point_radius != other.nearby_point_radius) {
      return false;
    }
    return true;
  }
  bool operator!=(const CloudChassisNav_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CloudChassisNav_Goal_

// alias to use template instance with default allocator
using CloudChassisNav_Goal =
  ymrobot_msgs::action::CloudChassisNav_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace ymrobot_msgs


#ifndef _WIN32
# define DEPRECATED__ymrobot_msgs__action__CloudChassisNav_Result __attribute__((deprecated))
#else
# define DEPRECATED__ymrobot_msgs__action__CloudChassisNav_Result __declspec(deprecated)
#endif

namespace ymrobot_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct CloudChassisNav_Result_
{
  using Type = CloudChassisNav_Result_<ContainerAllocator>;

  explicit CloudChassisNav_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  explicit CloudChassisNav_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ymrobot_msgs::action::CloudChassisNav_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const ymrobot_msgs::action::CloudChassisNav_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ymrobot_msgs::action::CloudChassisNav_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ymrobot_msgs::action::CloudChassisNav_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ymrobot_msgs::action::CloudChassisNav_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ymrobot_msgs::action::CloudChassisNav_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ymrobot_msgs::action::CloudChassisNav_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ymrobot_msgs::action::CloudChassisNav_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ymrobot_msgs::action::CloudChassisNav_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ymrobot_msgs::action::CloudChassisNav_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ymrobot_msgs__action__CloudChassisNav_Result
    std::shared_ptr<ymrobot_msgs::action::CloudChassisNav_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ymrobot_msgs__action__CloudChassisNav_Result
    std::shared_ptr<ymrobot_msgs::action::CloudChassisNav_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CloudChassisNav_Result_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const CloudChassisNav_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CloudChassisNav_Result_

// alias to use template instance with default allocator
using CloudChassisNav_Result =
  ymrobot_msgs::action::CloudChassisNav_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace ymrobot_msgs


#ifndef _WIN32
# define DEPRECATED__ymrobot_msgs__action__CloudChassisNav_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__ymrobot_msgs__action__CloudChassisNav_Feedback __declspec(deprecated)
#endif

namespace ymrobot_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct CloudChassisNav_Feedback_
{
  using Type = CloudChassisNav_Feedback_<ContainerAllocator>;

  explicit CloudChassisNav_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = false;
      this->message = "";
    }
  }

  explicit CloudChassisNav_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = false;
      this->message = "";
    }
  }

  // field types and members
  using _status_type =
    bool;
  _status_type status;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__status(
    const bool & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ymrobot_msgs::action::CloudChassisNav_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const ymrobot_msgs::action::CloudChassisNav_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ymrobot_msgs::action::CloudChassisNav_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ymrobot_msgs::action::CloudChassisNav_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ymrobot_msgs::action::CloudChassisNav_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ymrobot_msgs::action::CloudChassisNav_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ymrobot_msgs::action::CloudChassisNav_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ymrobot_msgs::action::CloudChassisNav_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ymrobot_msgs::action::CloudChassisNav_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ymrobot_msgs::action::CloudChassisNav_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ymrobot_msgs__action__CloudChassisNav_Feedback
    std::shared_ptr<ymrobot_msgs::action::CloudChassisNav_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ymrobot_msgs__action__CloudChassisNav_Feedback
    std::shared_ptr<ymrobot_msgs::action::CloudChassisNav_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CloudChassisNav_Feedback_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const CloudChassisNav_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CloudChassisNav_Feedback_

// alias to use template instance with default allocator
using CloudChassisNav_Feedback =
  ymrobot_msgs::action::CloudChassisNav_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace ymrobot_msgs


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "ymrobot_msgs/action/detail/cloud_chassis_nav__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ymrobot_msgs__action__CloudChassisNav_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__ymrobot_msgs__action__CloudChassisNav_SendGoal_Request __declspec(deprecated)
#endif

namespace ymrobot_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct CloudChassisNav_SendGoal_Request_
{
  using Type = CloudChassisNav_SendGoal_Request_<ContainerAllocator>;

  explicit CloudChassisNav_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit CloudChassisNav_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    ymrobot_msgs::action::CloudChassisNav_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const ymrobot_msgs::action::CloudChassisNav_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ymrobot_msgs::action::CloudChassisNav_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const ymrobot_msgs::action::CloudChassisNav_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ymrobot_msgs::action::CloudChassisNav_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ymrobot_msgs::action::CloudChassisNav_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ymrobot_msgs::action::CloudChassisNav_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ymrobot_msgs::action::CloudChassisNav_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ymrobot_msgs::action::CloudChassisNav_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ymrobot_msgs::action::CloudChassisNav_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ymrobot_msgs::action::CloudChassisNav_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ymrobot_msgs::action::CloudChassisNav_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ymrobot_msgs__action__CloudChassisNav_SendGoal_Request
    std::shared_ptr<ymrobot_msgs::action::CloudChassisNav_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ymrobot_msgs__action__CloudChassisNav_SendGoal_Request
    std::shared_ptr<ymrobot_msgs::action::CloudChassisNav_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CloudChassisNav_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const CloudChassisNav_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CloudChassisNav_SendGoal_Request_

// alias to use template instance with default allocator
using CloudChassisNav_SendGoal_Request =
  ymrobot_msgs::action::CloudChassisNav_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace ymrobot_msgs


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ymrobot_msgs__action__CloudChassisNav_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__ymrobot_msgs__action__CloudChassisNav_SendGoal_Response __declspec(deprecated)
#endif

namespace ymrobot_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct CloudChassisNav_SendGoal_Response_
{
  using Type = CloudChassisNav_SendGoal_Response_<ContainerAllocator>;

  explicit CloudChassisNav_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit CloudChassisNav_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ymrobot_msgs::action::CloudChassisNav_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const ymrobot_msgs::action::CloudChassisNav_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ymrobot_msgs::action::CloudChassisNav_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ymrobot_msgs::action::CloudChassisNav_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ymrobot_msgs::action::CloudChassisNav_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ymrobot_msgs::action::CloudChassisNav_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ymrobot_msgs::action::CloudChassisNav_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ymrobot_msgs::action::CloudChassisNav_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ymrobot_msgs::action::CloudChassisNav_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ymrobot_msgs::action::CloudChassisNav_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ymrobot_msgs__action__CloudChassisNav_SendGoal_Response
    std::shared_ptr<ymrobot_msgs::action::CloudChassisNav_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ymrobot_msgs__action__CloudChassisNav_SendGoal_Response
    std::shared_ptr<ymrobot_msgs::action::CloudChassisNav_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CloudChassisNav_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const CloudChassisNav_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CloudChassisNav_SendGoal_Response_

// alias to use template instance with default allocator
using CloudChassisNav_SendGoal_Response =
  ymrobot_msgs::action::CloudChassisNav_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace ymrobot_msgs


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ymrobot_msgs__action__CloudChassisNav_SendGoal_Event __attribute__((deprecated))
#else
# define DEPRECATED__ymrobot_msgs__action__CloudChassisNav_SendGoal_Event __declspec(deprecated)
#endif

namespace ymrobot_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct CloudChassisNav_SendGoal_Event_
{
  using Type = CloudChassisNav_SendGoal_Event_<ContainerAllocator>;

  explicit CloudChassisNav_SendGoal_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit CloudChassisNav_SendGoal_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<ymrobot_msgs::action::CloudChassisNav_SendGoal_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ymrobot_msgs::action::CloudChassisNav_SendGoal_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<ymrobot_msgs::action::CloudChassisNav_SendGoal_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ymrobot_msgs::action::CloudChassisNav_SendGoal_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<ymrobot_msgs::action::CloudChassisNav_SendGoal_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ymrobot_msgs::action::CloudChassisNav_SendGoal_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<ymrobot_msgs::action::CloudChassisNav_SendGoal_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ymrobot_msgs::action::CloudChassisNav_SendGoal_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ymrobot_msgs::action::CloudChassisNav_SendGoal_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const ymrobot_msgs::action::CloudChassisNav_SendGoal_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ymrobot_msgs::action::CloudChassisNav_SendGoal_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ymrobot_msgs::action::CloudChassisNav_SendGoal_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ymrobot_msgs::action::CloudChassisNav_SendGoal_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ymrobot_msgs::action::CloudChassisNav_SendGoal_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ymrobot_msgs::action::CloudChassisNav_SendGoal_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ymrobot_msgs::action::CloudChassisNav_SendGoal_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ymrobot_msgs::action::CloudChassisNav_SendGoal_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ymrobot_msgs::action::CloudChassisNav_SendGoal_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ymrobot_msgs__action__CloudChassisNav_SendGoal_Event
    std::shared_ptr<ymrobot_msgs::action::CloudChassisNav_SendGoal_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ymrobot_msgs__action__CloudChassisNav_SendGoal_Event
    std::shared_ptr<ymrobot_msgs::action::CloudChassisNav_SendGoal_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CloudChassisNav_SendGoal_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const CloudChassisNav_SendGoal_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CloudChassisNav_SendGoal_Event_

// alias to use template instance with default allocator
using CloudChassisNav_SendGoal_Event =
  ymrobot_msgs::action::CloudChassisNav_SendGoal_Event_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace ymrobot_msgs

namespace ymrobot_msgs
{

namespace action
{

struct CloudChassisNav_SendGoal
{
  using Request = ymrobot_msgs::action::CloudChassisNav_SendGoal_Request;
  using Response = ymrobot_msgs::action::CloudChassisNav_SendGoal_Response;
  using Event = ymrobot_msgs::action::CloudChassisNav_SendGoal_Event;
};

}  // namespace action

}  // namespace ymrobot_msgs


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ymrobot_msgs__action__CloudChassisNav_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__ymrobot_msgs__action__CloudChassisNav_GetResult_Request __declspec(deprecated)
#endif

namespace ymrobot_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct CloudChassisNav_GetResult_Request_
{
  using Type = CloudChassisNav_GetResult_Request_<ContainerAllocator>;

  explicit CloudChassisNav_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit CloudChassisNav_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ymrobot_msgs::action::CloudChassisNav_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const ymrobot_msgs::action::CloudChassisNav_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ymrobot_msgs::action::CloudChassisNav_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ymrobot_msgs::action::CloudChassisNav_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ymrobot_msgs::action::CloudChassisNav_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ymrobot_msgs::action::CloudChassisNav_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ymrobot_msgs::action::CloudChassisNav_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ymrobot_msgs::action::CloudChassisNav_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ymrobot_msgs::action::CloudChassisNav_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ymrobot_msgs::action::CloudChassisNav_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ymrobot_msgs__action__CloudChassisNav_GetResult_Request
    std::shared_ptr<ymrobot_msgs::action::CloudChassisNav_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ymrobot_msgs__action__CloudChassisNav_GetResult_Request
    std::shared_ptr<ymrobot_msgs::action::CloudChassisNav_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CloudChassisNav_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const CloudChassisNav_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CloudChassisNav_GetResult_Request_

// alias to use template instance with default allocator
using CloudChassisNav_GetResult_Request =
  ymrobot_msgs::action::CloudChassisNav_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace ymrobot_msgs


// Include directives for member types
// Member 'result'
// already included above
// #include "ymrobot_msgs/action/detail/cloud_chassis_nav__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ymrobot_msgs__action__CloudChassisNav_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__ymrobot_msgs__action__CloudChassisNav_GetResult_Response __declspec(deprecated)
#endif

namespace ymrobot_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct CloudChassisNav_GetResult_Response_
{
  using Type = CloudChassisNav_GetResult_Response_<ContainerAllocator>;

  explicit CloudChassisNav_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit CloudChassisNav_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    ymrobot_msgs::action::CloudChassisNav_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const ymrobot_msgs::action::CloudChassisNav_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ymrobot_msgs::action::CloudChassisNav_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const ymrobot_msgs::action::CloudChassisNav_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ymrobot_msgs::action::CloudChassisNav_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ymrobot_msgs::action::CloudChassisNav_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ymrobot_msgs::action::CloudChassisNav_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ymrobot_msgs::action::CloudChassisNav_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ymrobot_msgs::action::CloudChassisNav_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ymrobot_msgs::action::CloudChassisNav_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ymrobot_msgs::action::CloudChassisNav_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ymrobot_msgs::action::CloudChassisNav_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ymrobot_msgs__action__CloudChassisNav_GetResult_Response
    std::shared_ptr<ymrobot_msgs::action::CloudChassisNav_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ymrobot_msgs__action__CloudChassisNav_GetResult_Response
    std::shared_ptr<ymrobot_msgs::action::CloudChassisNav_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CloudChassisNav_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const CloudChassisNav_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CloudChassisNav_GetResult_Response_

// alias to use template instance with default allocator
using CloudChassisNav_GetResult_Response =
  ymrobot_msgs::action::CloudChassisNav_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace ymrobot_msgs


// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ymrobot_msgs__action__CloudChassisNav_GetResult_Event __attribute__((deprecated))
#else
# define DEPRECATED__ymrobot_msgs__action__CloudChassisNav_GetResult_Event __declspec(deprecated)
#endif

namespace ymrobot_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct CloudChassisNav_GetResult_Event_
{
  using Type = CloudChassisNav_GetResult_Event_<ContainerAllocator>;

  explicit CloudChassisNav_GetResult_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit CloudChassisNav_GetResult_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<ymrobot_msgs::action::CloudChassisNav_GetResult_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ymrobot_msgs::action::CloudChassisNav_GetResult_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<ymrobot_msgs::action::CloudChassisNav_GetResult_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ymrobot_msgs::action::CloudChassisNav_GetResult_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<ymrobot_msgs::action::CloudChassisNav_GetResult_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ymrobot_msgs::action::CloudChassisNav_GetResult_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<ymrobot_msgs::action::CloudChassisNav_GetResult_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ymrobot_msgs::action::CloudChassisNav_GetResult_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ymrobot_msgs::action::CloudChassisNav_GetResult_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const ymrobot_msgs::action::CloudChassisNav_GetResult_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ymrobot_msgs::action::CloudChassisNav_GetResult_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ymrobot_msgs::action::CloudChassisNav_GetResult_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ymrobot_msgs::action::CloudChassisNav_GetResult_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ymrobot_msgs::action::CloudChassisNav_GetResult_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ymrobot_msgs::action::CloudChassisNav_GetResult_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ymrobot_msgs::action::CloudChassisNav_GetResult_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ymrobot_msgs::action::CloudChassisNav_GetResult_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ymrobot_msgs::action::CloudChassisNav_GetResult_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ymrobot_msgs__action__CloudChassisNav_GetResult_Event
    std::shared_ptr<ymrobot_msgs::action::CloudChassisNav_GetResult_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ymrobot_msgs__action__CloudChassisNav_GetResult_Event
    std::shared_ptr<ymrobot_msgs::action::CloudChassisNav_GetResult_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CloudChassisNav_GetResult_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const CloudChassisNav_GetResult_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CloudChassisNav_GetResult_Event_

// alias to use template instance with default allocator
using CloudChassisNav_GetResult_Event =
  ymrobot_msgs::action::CloudChassisNav_GetResult_Event_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace ymrobot_msgs

namespace ymrobot_msgs
{

namespace action
{

struct CloudChassisNav_GetResult
{
  using Request = ymrobot_msgs::action::CloudChassisNav_GetResult_Request;
  using Response = ymrobot_msgs::action::CloudChassisNav_GetResult_Response;
  using Event = ymrobot_msgs::action::CloudChassisNav_GetResult_Event;
};

}  // namespace action

}  // namespace ymrobot_msgs


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "ymrobot_msgs/action/detail/cloud_chassis_nav__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ymrobot_msgs__action__CloudChassisNav_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__ymrobot_msgs__action__CloudChassisNav_FeedbackMessage __declspec(deprecated)
#endif

namespace ymrobot_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct CloudChassisNav_FeedbackMessage_
{
  using Type = CloudChassisNav_FeedbackMessage_<ContainerAllocator>;

  explicit CloudChassisNav_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit CloudChassisNav_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    ymrobot_msgs::action::CloudChassisNav_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const ymrobot_msgs::action::CloudChassisNav_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ymrobot_msgs::action::CloudChassisNav_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const ymrobot_msgs::action::CloudChassisNav_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ymrobot_msgs::action::CloudChassisNav_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ymrobot_msgs::action::CloudChassisNav_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ymrobot_msgs::action::CloudChassisNav_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ymrobot_msgs::action::CloudChassisNav_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ymrobot_msgs::action::CloudChassisNav_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ymrobot_msgs::action::CloudChassisNav_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ymrobot_msgs::action::CloudChassisNav_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ymrobot_msgs::action::CloudChassisNav_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ymrobot_msgs__action__CloudChassisNav_FeedbackMessage
    std::shared_ptr<ymrobot_msgs::action::CloudChassisNav_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ymrobot_msgs__action__CloudChassisNav_FeedbackMessage
    std::shared_ptr<ymrobot_msgs::action::CloudChassisNav_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CloudChassisNav_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const CloudChassisNav_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CloudChassisNav_FeedbackMessage_

// alias to use template instance with default allocator
using CloudChassisNav_FeedbackMessage =
  ymrobot_msgs::action::CloudChassisNav_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace ymrobot_msgs

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace ymrobot_msgs
{

namespace action
{

struct CloudChassisNav
{
  /// The goal message defined in the action definition.
  using Goal = ymrobot_msgs::action::CloudChassisNav_Goal;
  /// The result message defined in the action definition.
  using Result = ymrobot_msgs::action::CloudChassisNav_Result;
  /// The feedback message defined in the action definition.
  using Feedback = ymrobot_msgs::action::CloudChassisNav_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = ymrobot_msgs::action::CloudChassisNav_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = ymrobot_msgs::action::CloudChassisNav_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = ymrobot_msgs::action::CloudChassisNav_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct CloudChassisNav CloudChassisNav;

}  // namespace action

}  // namespace ymrobot_msgs

#endif  // YMROBOT_MSGS__ACTION__DETAIL__CLOUD_CHASSIS_NAV__STRUCT_HPP_
