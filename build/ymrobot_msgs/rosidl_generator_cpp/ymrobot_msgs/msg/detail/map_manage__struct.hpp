// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ymrobot_msgs:msg/MapManage.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ymrobot_msgs/msg/map_manage.hpp"


#ifndef YMROBOT_MSGS__MSG__DETAIL__MAP_MANAGE__STRUCT_HPP_
#define YMROBOT_MSGS__MSG__DETAIL__MAP_MANAGE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'map_task'
#include "ymrobot_msgs/msg/detail/map_task_command__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ymrobot_msgs__msg__MapManage __attribute__((deprecated))
#else
# define DEPRECATED__ymrobot_msgs__msg__MapManage __declspec(deprecated)
#endif

namespace ymrobot_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MapManage_
{
  using Type = MapManage_<ContainerAllocator>;

  explicit MapManage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : map_task(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pcd_file = "";
      this->pgm_file = "";
    }
  }

  explicit MapManage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : map_task(_alloc, _init),
    pcd_file(_alloc),
    pgm_file(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pcd_file = "";
      this->pgm_file = "";
    }
  }

  // field types and members
  using _map_task_type =
    ymrobot_msgs::msg::MapTaskCommand_<ContainerAllocator>;
  _map_task_type map_task;
  using _pcd_file_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _pcd_file_type pcd_file;
  using _pgm_file_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _pgm_file_type pgm_file;

  // setters for named parameter idiom
  Type & set__map_task(
    const ymrobot_msgs::msg::MapTaskCommand_<ContainerAllocator> & _arg)
  {
    this->map_task = _arg;
    return *this;
  }
  Type & set__pcd_file(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->pcd_file = _arg;
    return *this;
  }
  Type & set__pgm_file(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->pgm_file = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ymrobot_msgs::msg::MapManage_<ContainerAllocator> *;
  using ConstRawPtr =
    const ymrobot_msgs::msg::MapManage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ymrobot_msgs::msg::MapManage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ymrobot_msgs::msg::MapManage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ymrobot_msgs::msg::MapManage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ymrobot_msgs::msg::MapManage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ymrobot_msgs::msg::MapManage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ymrobot_msgs::msg::MapManage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ymrobot_msgs::msg::MapManage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ymrobot_msgs::msg::MapManage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ymrobot_msgs__msg__MapManage
    std::shared_ptr<ymrobot_msgs::msg::MapManage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ymrobot_msgs__msg__MapManage
    std::shared_ptr<ymrobot_msgs::msg::MapManage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MapManage_ & other) const
  {
    if (this->map_task != other.map_task) {
      return false;
    }
    if (this->pcd_file != other.pcd_file) {
      return false;
    }
    if (this->pgm_file != other.pgm_file) {
      return false;
    }
    return true;
  }
  bool operator!=(const MapManage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MapManage_

// alias to use template instance with default allocator
using MapManage =
  ymrobot_msgs::msg::MapManage_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ymrobot_msgs

#endif  // YMROBOT_MSGS__MSG__DETAIL__MAP_MANAGE__STRUCT_HPP_
