// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ymrobot_msgs:msg/BinaryData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ymrobot_msgs/msg/binary_data.hpp"


#ifndef YMROBOT_MSGS__MSG__DETAIL__BINARY_DATA__STRUCT_HPP_
#define YMROBOT_MSGS__MSG__DETAIL__BINARY_DATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ymrobot_msgs__msg__BinaryData __attribute__((deprecated))
#else
# define DEPRECATED__ymrobot_msgs__msg__BinaryData __declspec(deprecated)
#endif

namespace ymrobot_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BinaryData_
{
  using Type = BinaryData_<ContainerAllocator>;

  explicit BinaryData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->file_format = "";
    }
  }

  explicit BinaryData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : file_format(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->file_format = "";
    }
  }

  // field types and members
  using _file_format_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _file_format_type file_format;
  using _binary_data_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _binary_data_type binary_data;

  // setters for named parameter idiom
  Type & set__file_format(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->file_format = _arg;
    return *this;
  }
  Type & set__binary_data(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->binary_data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ymrobot_msgs::msg::BinaryData_<ContainerAllocator> *;
  using ConstRawPtr =
    const ymrobot_msgs::msg::BinaryData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ymrobot_msgs::msg::BinaryData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ymrobot_msgs::msg::BinaryData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ymrobot_msgs::msg::BinaryData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ymrobot_msgs::msg::BinaryData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ymrobot_msgs::msg::BinaryData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ymrobot_msgs::msg::BinaryData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ymrobot_msgs::msg::BinaryData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ymrobot_msgs::msg::BinaryData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ymrobot_msgs__msg__BinaryData
    std::shared_ptr<ymrobot_msgs::msg::BinaryData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ymrobot_msgs__msg__BinaryData
    std::shared_ptr<ymrobot_msgs::msg::BinaryData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BinaryData_ & other) const
  {
    if (this->file_format != other.file_format) {
      return false;
    }
    if (this->binary_data != other.binary_data) {
      return false;
    }
    return true;
  }
  bool operator!=(const BinaryData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BinaryData_

// alias to use template instance with default allocator
using BinaryData =
  ymrobot_msgs::msg::BinaryData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ymrobot_msgs

#endif  // YMROBOT_MSGS__MSG__DETAIL__BINARY_DATA__STRUCT_HPP_
