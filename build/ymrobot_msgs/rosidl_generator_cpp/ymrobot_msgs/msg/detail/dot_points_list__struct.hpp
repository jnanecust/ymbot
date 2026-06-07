// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ymrobot_msgs:msg/DotPointsList.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ymrobot_msgs/msg/dot_points_list.hpp"


#ifndef YMROBOT_MSGS__MSG__DETAIL__DOT_POINTS_LIST__STRUCT_HPP_
#define YMROBOT_MSGS__MSG__DETAIL__DOT_POINTS_LIST__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'dot_points_list'
#include "ymrobot_msgs/msg/detail/dot_points__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ymrobot_msgs__msg__DotPointsList __attribute__((deprecated))
#else
# define DEPRECATED__ymrobot_msgs__msg__DotPointsList __declspec(deprecated)
#endif

namespace ymrobot_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DotPointsList_
{
  using Type = DotPointsList_<ContainerAllocator>;

  explicit DotPointsList_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit DotPointsList_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _dot_points_list_type =
    std::vector<ymrobot_msgs::msg::DotPoints_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ymrobot_msgs::msg::DotPoints_<ContainerAllocator>>>;
  _dot_points_list_type dot_points_list;

  // setters for named parameter idiom
  Type & set__dot_points_list(
    const std::vector<ymrobot_msgs::msg::DotPoints_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ymrobot_msgs::msg::DotPoints_<ContainerAllocator>>> & _arg)
  {
    this->dot_points_list = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ymrobot_msgs::msg::DotPointsList_<ContainerAllocator> *;
  using ConstRawPtr =
    const ymrobot_msgs::msg::DotPointsList_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ymrobot_msgs::msg::DotPointsList_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ymrobot_msgs::msg::DotPointsList_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ymrobot_msgs::msg::DotPointsList_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ymrobot_msgs::msg::DotPointsList_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ymrobot_msgs::msg::DotPointsList_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ymrobot_msgs::msg::DotPointsList_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ymrobot_msgs::msg::DotPointsList_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ymrobot_msgs::msg::DotPointsList_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ymrobot_msgs__msg__DotPointsList
    std::shared_ptr<ymrobot_msgs::msg::DotPointsList_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ymrobot_msgs__msg__DotPointsList
    std::shared_ptr<ymrobot_msgs::msg::DotPointsList_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DotPointsList_ & other) const
  {
    if (this->dot_points_list != other.dot_points_list) {
      return false;
    }
    return true;
  }
  bool operator!=(const DotPointsList_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DotPointsList_

// alias to use template instance with default allocator
using DotPointsList =
  ymrobot_msgs::msg::DotPointsList_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ymrobot_msgs

#endif  // YMROBOT_MSGS__MSG__DETAIL__DOT_POINTS_LIST__STRUCT_HPP_
