// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ymrobot_msgs:srv/CLoudNav.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ymrobot_msgs/srv/c_loud_nav.hpp"


#ifndef YMROBOT_MSGS__SRV__DETAIL__C_LOUD_NAV__STRUCT_HPP_
#define YMROBOT_MSGS__SRV__DETAIL__C_LOUD_NAV__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ymrobot_msgs__srv__CLoudNav_Request __attribute__((deprecated))
#else
# define DEPRECATED__ymrobot_msgs__srv__CLoudNav_Request __declspec(deprecated)
#endif

namespace ymrobot_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CLoudNav_Request_
{
  using Type = CLoudNav_Request_<ContainerAllocator>;

  explicit CLoudNav_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->nav_mode = 0;
      this->nav_target_name = "";
      this->nav_target_x = 0.0;
      this->nav_target_y = 0.0;
      this->nav_target_yaw = 0.0;
    }
  }

  explicit CLoudNav_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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

  // constant declarations

  // pointer types
  using RawPtr =
    ymrobot_msgs::srv::CLoudNav_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const ymrobot_msgs::srv::CLoudNav_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ymrobot_msgs::srv::CLoudNav_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ymrobot_msgs::srv::CLoudNav_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ymrobot_msgs::srv::CLoudNav_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ymrobot_msgs::srv::CLoudNav_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ymrobot_msgs::srv::CLoudNav_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ymrobot_msgs::srv::CLoudNav_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ymrobot_msgs::srv::CLoudNav_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ymrobot_msgs::srv::CLoudNav_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ymrobot_msgs__srv__CLoudNav_Request
    std::shared_ptr<ymrobot_msgs::srv::CLoudNav_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ymrobot_msgs__srv__CLoudNav_Request
    std::shared_ptr<ymrobot_msgs::srv::CLoudNav_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CLoudNav_Request_ & other) const
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
    return true;
  }
  bool operator!=(const CLoudNav_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CLoudNav_Request_

// alias to use template instance with default allocator
using CLoudNav_Request =
  ymrobot_msgs::srv::CLoudNav_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace ymrobot_msgs


#ifndef _WIN32
# define DEPRECATED__ymrobot_msgs__srv__CLoudNav_Response __attribute__((deprecated))
#else
# define DEPRECATED__ymrobot_msgs__srv__CLoudNav_Response __declspec(deprecated)
#endif

namespace ymrobot_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CLoudNav_Response_
{
  using Type = CLoudNav_Response_<ContainerAllocator>;

  explicit CLoudNav_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  explicit CLoudNav_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    ymrobot_msgs::srv::CLoudNav_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const ymrobot_msgs::srv::CLoudNav_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ymrobot_msgs::srv::CLoudNav_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ymrobot_msgs::srv::CLoudNav_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ymrobot_msgs::srv::CLoudNav_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ymrobot_msgs::srv::CLoudNav_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ymrobot_msgs::srv::CLoudNav_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ymrobot_msgs::srv::CLoudNav_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ymrobot_msgs::srv::CLoudNav_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ymrobot_msgs::srv::CLoudNav_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ymrobot_msgs__srv__CLoudNav_Response
    std::shared_ptr<ymrobot_msgs::srv::CLoudNav_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ymrobot_msgs__srv__CLoudNav_Response
    std::shared_ptr<ymrobot_msgs::srv::CLoudNav_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CLoudNav_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const CLoudNav_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CLoudNav_Response_

// alias to use template instance with default allocator
using CLoudNav_Response =
  ymrobot_msgs::srv::CLoudNav_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace ymrobot_msgs


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ymrobot_msgs__srv__CLoudNav_Event __attribute__((deprecated))
#else
# define DEPRECATED__ymrobot_msgs__srv__CLoudNav_Event __declspec(deprecated)
#endif

namespace ymrobot_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CLoudNav_Event_
{
  using Type = CLoudNav_Event_<ContainerAllocator>;

  explicit CLoudNav_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit CLoudNav_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<ymrobot_msgs::srv::CLoudNav_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ymrobot_msgs::srv::CLoudNav_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<ymrobot_msgs::srv::CLoudNav_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ymrobot_msgs::srv::CLoudNav_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<ymrobot_msgs::srv::CLoudNav_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ymrobot_msgs::srv::CLoudNav_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<ymrobot_msgs::srv::CLoudNav_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ymrobot_msgs::srv::CLoudNav_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ymrobot_msgs::srv::CLoudNav_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const ymrobot_msgs::srv::CLoudNav_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ymrobot_msgs::srv::CLoudNav_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ymrobot_msgs::srv::CLoudNav_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ymrobot_msgs::srv::CLoudNav_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ymrobot_msgs::srv::CLoudNav_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ymrobot_msgs::srv::CLoudNav_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ymrobot_msgs::srv::CLoudNav_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ymrobot_msgs::srv::CLoudNav_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ymrobot_msgs::srv::CLoudNav_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ymrobot_msgs__srv__CLoudNav_Event
    std::shared_ptr<ymrobot_msgs::srv::CLoudNav_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ymrobot_msgs__srv__CLoudNav_Event
    std::shared_ptr<ymrobot_msgs::srv::CLoudNav_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CLoudNav_Event_ & other) const
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
  bool operator!=(const CLoudNav_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CLoudNav_Event_

// alias to use template instance with default allocator
using CLoudNav_Event =
  ymrobot_msgs::srv::CLoudNav_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace ymrobot_msgs

namespace ymrobot_msgs
{

namespace srv
{

struct CLoudNav
{
  using Request = ymrobot_msgs::srv::CLoudNav_Request;
  using Response = ymrobot_msgs::srv::CLoudNav_Response;
  using Event = ymrobot_msgs::srv::CLoudNav_Event;
};

}  // namespace srv

}  // namespace ymrobot_msgs

#endif  // YMROBOT_MSGS__SRV__DETAIL__C_LOUD_NAV__STRUCT_HPP_
