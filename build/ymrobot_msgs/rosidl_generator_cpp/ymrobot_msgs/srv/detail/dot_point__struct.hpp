// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ymrobot_msgs:srv/DotPoint.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ymrobot_msgs/srv/dot_point.hpp"


#ifndef YMROBOT_MSGS__SRV__DETAIL__DOT_POINT__STRUCT_HPP_
#define YMROBOT_MSGS__SRV__DETAIL__DOT_POINT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'dot_point'
#include "ymrobot_msgs/msg/detail/dot_points__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ymrobot_msgs__srv__DotPoint_Request __attribute__((deprecated))
#else
# define DEPRECATED__ymrobot_msgs__srv__DotPoint_Request __declspec(deprecated)
#endif

namespace ymrobot_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct DotPoint_Request_
{
  using Type = DotPoint_Request_<ContainerAllocator>;

  explicit DotPoint_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : dot_point(_init)
  {
    (void)_init;
  }

  explicit DotPoint_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : dot_point(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _dot_point_type =
    ymrobot_msgs::msg::DotPoints_<ContainerAllocator>;
  _dot_point_type dot_point;

  // setters for named parameter idiom
  Type & set__dot_point(
    const ymrobot_msgs::msg::DotPoints_<ContainerAllocator> & _arg)
  {
    this->dot_point = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ymrobot_msgs::srv::DotPoint_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const ymrobot_msgs::srv::DotPoint_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ymrobot_msgs::srv::DotPoint_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ymrobot_msgs::srv::DotPoint_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ymrobot_msgs::srv::DotPoint_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ymrobot_msgs::srv::DotPoint_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ymrobot_msgs::srv::DotPoint_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ymrobot_msgs::srv::DotPoint_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ymrobot_msgs::srv::DotPoint_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ymrobot_msgs::srv::DotPoint_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ymrobot_msgs__srv__DotPoint_Request
    std::shared_ptr<ymrobot_msgs::srv::DotPoint_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ymrobot_msgs__srv__DotPoint_Request
    std::shared_ptr<ymrobot_msgs::srv::DotPoint_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DotPoint_Request_ & other) const
  {
    if (this->dot_point != other.dot_point) {
      return false;
    }
    return true;
  }
  bool operator!=(const DotPoint_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DotPoint_Request_

// alias to use template instance with default allocator
using DotPoint_Request =
  ymrobot_msgs::srv::DotPoint_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace ymrobot_msgs


#ifndef _WIN32
# define DEPRECATED__ymrobot_msgs__srv__DotPoint_Response __attribute__((deprecated))
#else
# define DEPRECATED__ymrobot_msgs__srv__DotPoint_Response __declspec(deprecated)
#endif

namespace ymrobot_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct DotPoint_Response_
{
  using Type = DotPoint_Response_<ContainerAllocator>;

  explicit DotPoint_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  explicit DotPoint_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    ymrobot_msgs::srv::DotPoint_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const ymrobot_msgs::srv::DotPoint_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ymrobot_msgs::srv::DotPoint_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ymrobot_msgs::srv::DotPoint_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ymrobot_msgs::srv::DotPoint_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ymrobot_msgs::srv::DotPoint_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ymrobot_msgs::srv::DotPoint_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ymrobot_msgs::srv::DotPoint_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ymrobot_msgs::srv::DotPoint_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ymrobot_msgs::srv::DotPoint_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ymrobot_msgs__srv__DotPoint_Response
    std::shared_ptr<ymrobot_msgs::srv::DotPoint_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ymrobot_msgs__srv__DotPoint_Response
    std::shared_ptr<ymrobot_msgs::srv::DotPoint_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DotPoint_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const DotPoint_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DotPoint_Response_

// alias to use template instance with default allocator
using DotPoint_Response =
  ymrobot_msgs::srv::DotPoint_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace ymrobot_msgs


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ymrobot_msgs__srv__DotPoint_Event __attribute__((deprecated))
#else
# define DEPRECATED__ymrobot_msgs__srv__DotPoint_Event __declspec(deprecated)
#endif

namespace ymrobot_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct DotPoint_Event_
{
  using Type = DotPoint_Event_<ContainerAllocator>;

  explicit DotPoint_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit DotPoint_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<ymrobot_msgs::srv::DotPoint_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ymrobot_msgs::srv::DotPoint_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<ymrobot_msgs::srv::DotPoint_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ymrobot_msgs::srv::DotPoint_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<ymrobot_msgs::srv::DotPoint_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ymrobot_msgs::srv::DotPoint_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<ymrobot_msgs::srv::DotPoint_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ymrobot_msgs::srv::DotPoint_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ymrobot_msgs::srv::DotPoint_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const ymrobot_msgs::srv::DotPoint_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ymrobot_msgs::srv::DotPoint_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ymrobot_msgs::srv::DotPoint_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ymrobot_msgs::srv::DotPoint_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ymrobot_msgs::srv::DotPoint_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ymrobot_msgs::srv::DotPoint_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ymrobot_msgs::srv::DotPoint_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ymrobot_msgs::srv::DotPoint_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ymrobot_msgs::srv::DotPoint_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ymrobot_msgs__srv__DotPoint_Event
    std::shared_ptr<ymrobot_msgs::srv::DotPoint_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ymrobot_msgs__srv__DotPoint_Event
    std::shared_ptr<ymrobot_msgs::srv::DotPoint_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DotPoint_Event_ & other) const
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
  bool operator!=(const DotPoint_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DotPoint_Event_

// alias to use template instance with default allocator
using DotPoint_Event =
  ymrobot_msgs::srv::DotPoint_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace ymrobot_msgs

namespace ymrobot_msgs
{

namespace srv
{

struct DotPoint
{
  using Request = ymrobot_msgs::srv::DotPoint_Request;
  using Response = ymrobot_msgs::srv::DotPoint_Response;
  using Event = ymrobot_msgs::srv::DotPoint_Event;
};

}  // namespace srv

}  // namespace ymrobot_msgs

#endif  // YMROBOT_MSGS__SRV__DETAIL__DOT_POINT__STRUCT_HPP_
