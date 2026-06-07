// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ymrobot_msgs:srv/UpLimb.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ymrobot_msgs/srv/up_limb.hpp"


#ifndef YMROBOT_MSGS__SRV__DETAIL__UP_LIMB__STRUCT_HPP_
#define YMROBOT_MSGS__SRV__DETAIL__UP_LIMB__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'position'
#include "geometry_msgs/msg/detail/pose_stamped__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ymrobot_msgs__srv__UpLimb_Request __attribute__((deprecated))
#else
# define DEPRECATED__ymrobot_msgs__srv__UpLimb_Request __declspec(deprecated)
#endif

namespace ymrobot_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct UpLimb_Request_
{
  using Type = UpLimb_Request_<ContainerAllocator>;

  explicit UpLimb_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : position(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->up_limb_task_type = 0;
      this->action_fixed = 0;
      this->left_and_right_select = 0;
    }
  }

  explicit UpLimb_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : position(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->up_limb_task_type = 0;
      this->action_fixed = 0;
      this->left_and_right_select = 0;
    }
  }

  // field types and members
  using _up_limb_task_type_type =
    uint8_t;
  _up_limb_task_type_type up_limb_task_type;
  using _position_type =
    geometry_msgs::msg::PoseStamped_<ContainerAllocator>;
  _position_type position;
  using _place_joint_list_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _place_joint_list_type place_joint_list;
  using _action_fixed_type =
    uint8_t;
  _action_fixed_type action_fixed;
  using _left_and_right_select_type =
    uint8_t;
  _left_and_right_select_type left_and_right_select;

  // setters for named parameter idiom
  Type & set__up_limb_task_type(
    const uint8_t & _arg)
  {
    this->up_limb_task_type = _arg;
    return *this;
  }
  Type & set__position(
    const geometry_msgs::msg::PoseStamped_<ContainerAllocator> & _arg)
  {
    this->position = _arg;
    return *this;
  }
  Type & set__place_joint_list(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->place_joint_list = _arg;
    return *this;
  }
  Type & set__action_fixed(
    const uint8_t & _arg)
  {
    this->action_fixed = _arg;
    return *this;
  }
  Type & set__left_and_right_select(
    const uint8_t & _arg)
  {
    this->left_and_right_select = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ymrobot_msgs::srv::UpLimb_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const ymrobot_msgs::srv::UpLimb_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ymrobot_msgs::srv::UpLimb_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ymrobot_msgs::srv::UpLimb_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ymrobot_msgs::srv::UpLimb_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ymrobot_msgs::srv::UpLimb_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ymrobot_msgs::srv::UpLimb_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ymrobot_msgs::srv::UpLimb_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ymrobot_msgs::srv::UpLimb_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ymrobot_msgs::srv::UpLimb_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ymrobot_msgs__srv__UpLimb_Request
    std::shared_ptr<ymrobot_msgs::srv::UpLimb_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ymrobot_msgs__srv__UpLimb_Request
    std::shared_ptr<ymrobot_msgs::srv::UpLimb_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const UpLimb_Request_ & other) const
  {
    if (this->up_limb_task_type != other.up_limb_task_type) {
      return false;
    }
    if (this->position != other.position) {
      return false;
    }
    if (this->place_joint_list != other.place_joint_list) {
      return false;
    }
    if (this->action_fixed != other.action_fixed) {
      return false;
    }
    if (this->left_and_right_select != other.left_and_right_select) {
      return false;
    }
    return true;
  }
  bool operator!=(const UpLimb_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct UpLimb_Request_

// alias to use template instance with default allocator
using UpLimb_Request =
  ymrobot_msgs::srv::UpLimb_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace ymrobot_msgs


#ifndef _WIN32
# define DEPRECATED__ymrobot_msgs__srv__UpLimb_Response __attribute__((deprecated))
#else
# define DEPRECATED__ymrobot_msgs__srv__UpLimb_Response __declspec(deprecated)
#endif

namespace ymrobot_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct UpLimb_Response_
{
  using Type = UpLimb_Response_<ContainerAllocator>;

  explicit UpLimb_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  explicit UpLimb_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    ymrobot_msgs::srv::UpLimb_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const ymrobot_msgs::srv::UpLimb_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ymrobot_msgs::srv::UpLimb_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ymrobot_msgs::srv::UpLimb_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ymrobot_msgs::srv::UpLimb_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ymrobot_msgs::srv::UpLimb_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ymrobot_msgs::srv::UpLimb_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ymrobot_msgs::srv::UpLimb_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ymrobot_msgs::srv::UpLimb_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ymrobot_msgs::srv::UpLimb_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ymrobot_msgs__srv__UpLimb_Response
    std::shared_ptr<ymrobot_msgs::srv::UpLimb_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ymrobot_msgs__srv__UpLimb_Response
    std::shared_ptr<ymrobot_msgs::srv::UpLimb_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const UpLimb_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const UpLimb_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct UpLimb_Response_

// alias to use template instance with default allocator
using UpLimb_Response =
  ymrobot_msgs::srv::UpLimb_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace ymrobot_msgs


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ymrobot_msgs__srv__UpLimb_Event __attribute__((deprecated))
#else
# define DEPRECATED__ymrobot_msgs__srv__UpLimb_Event __declspec(deprecated)
#endif

namespace ymrobot_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct UpLimb_Event_
{
  using Type = UpLimb_Event_<ContainerAllocator>;

  explicit UpLimb_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit UpLimb_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<ymrobot_msgs::srv::UpLimb_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ymrobot_msgs::srv::UpLimb_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<ymrobot_msgs::srv::UpLimb_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ymrobot_msgs::srv::UpLimb_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<ymrobot_msgs::srv::UpLimb_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ymrobot_msgs::srv::UpLimb_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<ymrobot_msgs::srv::UpLimb_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ymrobot_msgs::srv::UpLimb_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ymrobot_msgs::srv::UpLimb_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const ymrobot_msgs::srv::UpLimb_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ymrobot_msgs::srv::UpLimb_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ymrobot_msgs::srv::UpLimb_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ymrobot_msgs::srv::UpLimb_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ymrobot_msgs::srv::UpLimb_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ymrobot_msgs::srv::UpLimb_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ymrobot_msgs::srv::UpLimb_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ymrobot_msgs::srv::UpLimb_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ymrobot_msgs::srv::UpLimb_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ymrobot_msgs__srv__UpLimb_Event
    std::shared_ptr<ymrobot_msgs::srv::UpLimb_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ymrobot_msgs__srv__UpLimb_Event
    std::shared_ptr<ymrobot_msgs::srv::UpLimb_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const UpLimb_Event_ & other) const
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
  bool operator!=(const UpLimb_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct UpLimb_Event_

// alias to use template instance with default allocator
using UpLimb_Event =
  ymrobot_msgs::srv::UpLimb_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace ymrobot_msgs

namespace ymrobot_msgs
{

namespace srv
{

struct UpLimb
{
  using Request = ymrobot_msgs::srv::UpLimb_Request;
  using Response = ymrobot_msgs::srv::UpLimb_Response;
  using Event = ymrobot_msgs::srv::UpLimb_Event;
};

}  // namespace srv

}  // namespace ymrobot_msgs

#endif  // YMROBOT_MSGS__SRV__DETAIL__UP_LIMB__STRUCT_HPP_
