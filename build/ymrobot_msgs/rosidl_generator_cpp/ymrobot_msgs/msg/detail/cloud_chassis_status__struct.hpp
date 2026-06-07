// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ymrobot_msgs:msg/CloudChassisStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ymrobot_msgs/msg/cloud_chassis_status.hpp"


#ifndef YMROBOT_MSGS__MSG__DETAIL__CLOUD_CHASSIS_STATUS__STRUCT_HPP_
#define YMROBOT_MSGS__MSG__DETAIL__CLOUD_CHASSIS_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ymrobot_msgs__msg__CloudChassisStatus __attribute__((deprecated))
#else
# define DEPRECATED__ymrobot_msgs__msg__CloudChassisStatus __declspec(deprecated)
#endif

namespace ymrobot_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CloudChassisStatus_
{
  using Type = CloudChassisStatus_<ContainerAllocator>;

  explicit CloudChassisStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->charge_state = false;
      this->soft_estop_state = false;
      this->hard_estop_state = false;
      this->estop_state = false;
      this->power_percent = 0;
      this->x = 0.0;
      this->y = 0.0;
      this->yaw = 0.0;
      this->current_floor = 0;
      this->error_code = 0;
      this->move_target = "";
      this->move_status = "";
      this->running_status = "";
      this->target_floor = "";
    }
  }

  explicit CloudChassisStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : move_target(_alloc),
    move_status(_alloc),
    running_status(_alloc),
    target_floor(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->charge_state = false;
      this->soft_estop_state = false;
      this->hard_estop_state = false;
      this->estop_state = false;
      this->power_percent = 0;
      this->x = 0.0;
      this->y = 0.0;
      this->yaw = 0.0;
      this->current_floor = 0;
      this->error_code = 0;
      this->move_target = "";
      this->move_status = "";
      this->running_status = "";
      this->target_floor = "";
    }
  }

  // field types and members
  using _charge_state_type =
    bool;
  _charge_state_type charge_state;
  using _soft_estop_state_type =
    bool;
  _soft_estop_state_type soft_estop_state;
  using _hard_estop_state_type =
    bool;
  _hard_estop_state_type hard_estop_state;
  using _estop_state_type =
    bool;
  _estop_state_type estop_state;
  using _power_percent_type =
    uint8_t;
  _power_percent_type power_percent;
  using _x_type =
    double;
  _x_type x;
  using _y_type =
    double;
  _y_type y;
  using _yaw_type =
    double;
  _yaw_type yaw;
  using _current_floor_type =
    uint8_t;
  _current_floor_type current_floor;
  using _error_code_type =
    uint8_t;
  _error_code_type error_code;
  using _move_target_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _move_target_type move_target;
  using _move_status_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _move_status_type move_status;
  using _running_status_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _running_status_type running_status;
  using _target_floor_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _target_floor_type target_floor;

  // setters for named parameter idiom
  Type & set__charge_state(
    const bool & _arg)
  {
    this->charge_state = _arg;
    return *this;
  }
  Type & set__soft_estop_state(
    const bool & _arg)
  {
    this->soft_estop_state = _arg;
    return *this;
  }
  Type & set__hard_estop_state(
    const bool & _arg)
  {
    this->hard_estop_state = _arg;
    return *this;
  }
  Type & set__estop_state(
    const bool & _arg)
  {
    this->estop_state = _arg;
    return *this;
  }
  Type & set__power_percent(
    const uint8_t & _arg)
  {
    this->power_percent = _arg;
    return *this;
  }
  Type & set__x(
    const double & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const double & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__yaw(
    const double & _arg)
  {
    this->yaw = _arg;
    return *this;
  }
  Type & set__current_floor(
    const uint8_t & _arg)
  {
    this->current_floor = _arg;
    return *this;
  }
  Type & set__error_code(
    const uint8_t & _arg)
  {
    this->error_code = _arg;
    return *this;
  }
  Type & set__move_target(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->move_target = _arg;
    return *this;
  }
  Type & set__move_status(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->move_status = _arg;
    return *this;
  }
  Type & set__running_status(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->running_status = _arg;
    return *this;
  }
  Type & set__target_floor(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->target_floor = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ymrobot_msgs::msg::CloudChassisStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const ymrobot_msgs::msg::CloudChassisStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ymrobot_msgs::msg::CloudChassisStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ymrobot_msgs::msg::CloudChassisStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ymrobot_msgs::msg::CloudChassisStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ymrobot_msgs::msg::CloudChassisStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ymrobot_msgs::msg::CloudChassisStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ymrobot_msgs::msg::CloudChassisStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ymrobot_msgs::msg::CloudChassisStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ymrobot_msgs::msg::CloudChassisStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ymrobot_msgs__msg__CloudChassisStatus
    std::shared_ptr<ymrobot_msgs::msg::CloudChassisStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ymrobot_msgs__msg__CloudChassisStatus
    std::shared_ptr<ymrobot_msgs::msg::CloudChassisStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CloudChassisStatus_ & other) const
  {
    if (this->charge_state != other.charge_state) {
      return false;
    }
    if (this->soft_estop_state != other.soft_estop_state) {
      return false;
    }
    if (this->hard_estop_state != other.hard_estop_state) {
      return false;
    }
    if (this->estop_state != other.estop_state) {
      return false;
    }
    if (this->power_percent != other.power_percent) {
      return false;
    }
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->yaw != other.yaw) {
      return false;
    }
    if (this->current_floor != other.current_floor) {
      return false;
    }
    if (this->error_code != other.error_code) {
      return false;
    }
    if (this->move_target != other.move_target) {
      return false;
    }
    if (this->move_status != other.move_status) {
      return false;
    }
    if (this->running_status != other.running_status) {
      return false;
    }
    if (this->target_floor != other.target_floor) {
      return false;
    }
    return true;
  }
  bool operator!=(const CloudChassisStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CloudChassisStatus_

// alias to use template instance with default allocator
using CloudChassisStatus =
  ymrobot_msgs::msg::CloudChassisStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ymrobot_msgs

#endif  // YMROBOT_MSGS__MSG__DETAIL__CLOUD_CHASSIS_STATUS__STRUCT_HPP_
