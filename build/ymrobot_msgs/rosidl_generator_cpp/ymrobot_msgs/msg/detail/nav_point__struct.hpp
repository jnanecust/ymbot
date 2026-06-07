// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ymrobot_msgs:msg/NavPoint.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ymrobot_msgs/msg/nav_point.hpp"


#ifndef YMROBOT_MSGS__MSG__DETAIL__NAV_POINT__STRUCT_HPP_
#define YMROBOT_MSGS__MSG__DETAIL__NAV_POINT__STRUCT_HPP_

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
# define DEPRECATED__ymrobot_msgs__msg__NavPoint __attribute__((deprecated))
#else
# define DEPRECATED__ymrobot_msgs__msg__NavPoint __declspec(deprecated)
#endif

namespace ymrobot_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct NavPoint_
{
  using Type = NavPoint_<ContainerAllocator>;

  explicit NavPoint_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : position(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->seq = 0ul;
      this->nav_name = "";
      this->nav_map_name = "";
      this->map_index = 0;
    }
  }

  explicit NavPoint_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : position(_alloc, _init),
    nav_name(_alloc),
    nav_map_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->seq = 0ul;
      this->nav_name = "";
      this->nav_map_name = "";
      this->map_index = 0;
    }
  }

  // field types and members
  using _seq_type =
    uint32_t;
  _seq_type seq;
  using _position_type =
    geometry_msgs::msg::PoseStamped_<ContainerAllocator>;
  _position_type position;
  using _nav_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _nav_name_type nav_name;
  using _nav_map_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _nav_map_name_type nav_map_name;
  using _map_index_type =
    uint8_t;
  _map_index_type map_index;

  // setters for named parameter idiom
  Type & set__seq(
    const uint32_t & _arg)
  {
    this->seq = _arg;
    return *this;
  }
  Type & set__position(
    const geometry_msgs::msg::PoseStamped_<ContainerAllocator> & _arg)
  {
    this->position = _arg;
    return *this;
  }
  Type & set__nav_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->nav_name = _arg;
    return *this;
  }
  Type & set__nav_map_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->nav_map_name = _arg;
    return *this;
  }
  Type & set__map_index(
    const uint8_t & _arg)
  {
    this->map_index = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ymrobot_msgs::msg::NavPoint_<ContainerAllocator> *;
  using ConstRawPtr =
    const ymrobot_msgs::msg::NavPoint_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ymrobot_msgs::msg::NavPoint_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ymrobot_msgs::msg::NavPoint_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ymrobot_msgs::msg::NavPoint_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ymrobot_msgs::msg::NavPoint_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ymrobot_msgs::msg::NavPoint_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ymrobot_msgs::msg::NavPoint_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ymrobot_msgs::msg::NavPoint_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ymrobot_msgs::msg::NavPoint_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ymrobot_msgs__msg__NavPoint
    std::shared_ptr<ymrobot_msgs::msg::NavPoint_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ymrobot_msgs__msg__NavPoint
    std::shared_ptr<ymrobot_msgs::msg::NavPoint_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NavPoint_ & other) const
  {
    if (this->seq != other.seq) {
      return false;
    }
    if (this->position != other.position) {
      return false;
    }
    if (this->nav_name != other.nav_name) {
      return false;
    }
    if (this->nav_map_name != other.nav_map_name) {
      return false;
    }
    if (this->map_index != other.map_index) {
      return false;
    }
    return true;
  }
  bool operator!=(const NavPoint_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NavPoint_

// alias to use template instance with default allocator
using NavPoint =
  ymrobot_msgs::msg::NavPoint_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ymrobot_msgs

#endif  // YMROBOT_MSGS__MSG__DETAIL__NAV_POINT__STRUCT_HPP_
