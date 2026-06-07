// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from ymrobot_msgs:msg/RobotDeviceStatus.idl
// generated code does not contain a copyright notice
#include "ymrobot_msgs/msg/detail/robot_device_status__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "ymrobot_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ymrobot_msgs/msg/detail/robot_device_status__struct.h"
#include "ymrobot_msgs/msg/detail/robot_device_status__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _RobotDeviceStatus__ros_msg_type = ymrobot_msgs__msg__RobotDeviceStatus;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ymrobot_msgs
bool cdr_serialize_ymrobot_msgs__msg__RobotDeviceStatus(
  const ymrobot_msgs__msg__RobotDeviceStatus * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: battery_voltage
  {
    cdr << ros_message->battery_voltage;
  }

  // Field name: battery_percentage
  {
    cdr << ros_message->battery_percentage;
  }

  // Field name: battery_temperature
  {
    cdr << ros_message->battery_temperature;
  }

  // Field name: left_motor_speed
  {
    cdr << ros_message->left_motor_speed;
  }

  // Field name: right_motor_speed
  {
    cdr << ros_message->right_motor_speed;
  }

  // Field name: left_motor_temperature
  {
    cdr << ros_message->left_motor_temperature;
  }

  // Field name: right_motor_temperature
  {
    cdr << ros_message->right_motor_temperature;
  }

  // Field name: cpu_usage
  {
    cdr << ros_message->cpu_usage;
  }

  // Field name: memory_usage
  {
    cdr << ros_message->memory_usage;
  }

  // Field name: cpu_temperature
  {
    cdr << ros_message->cpu_temperature;
  }

  // Field name: disk_space_percentage
  {
    cdr << ros_message->disk_space_percentage;
  }

  // Field name: mainboard_temperature
  {
    cdr << ros_message->mainboard_temperature;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ymrobot_msgs
bool cdr_deserialize_ymrobot_msgs__msg__RobotDeviceStatus(
  eprosima::fastcdr::Cdr & cdr,
  ymrobot_msgs__msg__RobotDeviceStatus * ros_message)
{
  // Field name: battery_voltage
  {
    cdr >> ros_message->battery_voltage;
  }

  // Field name: battery_percentage
  {
    cdr >> ros_message->battery_percentage;
  }

  // Field name: battery_temperature
  {
    cdr >> ros_message->battery_temperature;
  }

  // Field name: left_motor_speed
  {
    cdr >> ros_message->left_motor_speed;
  }

  // Field name: right_motor_speed
  {
    cdr >> ros_message->right_motor_speed;
  }

  // Field name: left_motor_temperature
  {
    cdr >> ros_message->left_motor_temperature;
  }

  // Field name: right_motor_temperature
  {
    cdr >> ros_message->right_motor_temperature;
  }

  // Field name: cpu_usage
  {
    cdr >> ros_message->cpu_usage;
  }

  // Field name: memory_usage
  {
    cdr >> ros_message->memory_usage;
  }

  // Field name: cpu_temperature
  {
    cdr >> ros_message->cpu_temperature;
  }

  // Field name: disk_space_percentage
  {
    cdr >> ros_message->disk_space_percentage;
  }

  // Field name: mainboard_temperature
  {
    cdr >> ros_message->mainboard_temperature;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ymrobot_msgs
size_t get_serialized_size_ymrobot_msgs__msg__RobotDeviceStatus(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RobotDeviceStatus__ros_msg_type * ros_message = static_cast<const _RobotDeviceStatus__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: battery_voltage
  {
    size_t item_size = sizeof(ros_message->battery_voltage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: battery_percentage
  {
    size_t item_size = sizeof(ros_message->battery_percentage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: battery_temperature
  {
    size_t item_size = sizeof(ros_message->battery_temperature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: left_motor_speed
  {
    size_t item_size = sizeof(ros_message->left_motor_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: right_motor_speed
  {
    size_t item_size = sizeof(ros_message->right_motor_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: left_motor_temperature
  {
    size_t item_size = sizeof(ros_message->left_motor_temperature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: right_motor_temperature
  {
    size_t item_size = sizeof(ros_message->right_motor_temperature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: cpu_usage
  {
    size_t item_size = sizeof(ros_message->cpu_usage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: memory_usage
  {
    size_t item_size = sizeof(ros_message->memory_usage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: cpu_temperature
  {
    size_t item_size = sizeof(ros_message->cpu_temperature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: disk_space_percentage
  {
    size_t item_size = sizeof(ros_message->disk_space_percentage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: mainboard_temperature
  {
    size_t item_size = sizeof(ros_message->mainboard_temperature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ymrobot_msgs
size_t max_serialized_size_ymrobot_msgs__msg__RobotDeviceStatus(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Field name: battery_voltage
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: battery_percentage
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: battery_temperature
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: left_motor_speed
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: right_motor_speed
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: left_motor_temperature
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: right_motor_temperature
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: cpu_usage
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: memory_usage
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: cpu_temperature
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: disk_space_percentage
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: mainboard_temperature
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = ymrobot_msgs__msg__RobotDeviceStatus;
    is_plain =
      (
      offsetof(DataType, mainboard_temperature) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ymrobot_msgs
bool cdr_serialize_key_ymrobot_msgs__msg__RobotDeviceStatus(
  const ymrobot_msgs__msg__RobotDeviceStatus * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: battery_voltage
  {
    cdr << ros_message->battery_voltage;
  }

  // Field name: battery_percentage
  {
    cdr << ros_message->battery_percentage;
  }

  // Field name: battery_temperature
  {
    cdr << ros_message->battery_temperature;
  }

  // Field name: left_motor_speed
  {
    cdr << ros_message->left_motor_speed;
  }

  // Field name: right_motor_speed
  {
    cdr << ros_message->right_motor_speed;
  }

  // Field name: left_motor_temperature
  {
    cdr << ros_message->left_motor_temperature;
  }

  // Field name: right_motor_temperature
  {
    cdr << ros_message->right_motor_temperature;
  }

  // Field name: cpu_usage
  {
    cdr << ros_message->cpu_usage;
  }

  // Field name: memory_usage
  {
    cdr << ros_message->memory_usage;
  }

  // Field name: cpu_temperature
  {
    cdr << ros_message->cpu_temperature;
  }

  // Field name: disk_space_percentage
  {
    cdr << ros_message->disk_space_percentage;
  }

  // Field name: mainboard_temperature
  {
    cdr << ros_message->mainboard_temperature;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ymrobot_msgs
size_t get_serialized_size_key_ymrobot_msgs__msg__RobotDeviceStatus(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RobotDeviceStatus__ros_msg_type * ros_message = static_cast<const _RobotDeviceStatus__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: battery_voltage
  {
    size_t item_size = sizeof(ros_message->battery_voltage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: battery_percentage
  {
    size_t item_size = sizeof(ros_message->battery_percentage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: battery_temperature
  {
    size_t item_size = sizeof(ros_message->battery_temperature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: left_motor_speed
  {
    size_t item_size = sizeof(ros_message->left_motor_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: right_motor_speed
  {
    size_t item_size = sizeof(ros_message->right_motor_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: left_motor_temperature
  {
    size_t item_size = sizeof(ros_message->left_motor_temperature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: right_motor_temperature
  {
    size_t item_size = sizeof(ros_message->right_motor_temperature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: cpu_usage
  {
    size_t item_size = sizeof(ros_message->cpu_usage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: memory_usage
  {
    size_t item_size = sizeof(ros_message->memory_usage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: cpu_temperature
  {
    size_t item_size = sizeof(ros_message->cpu_temperature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: disk_space_percentage
  {
    size_t item_size = sizeof(ros_message->disk_space_percentage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: mainboard_temperature
  {
    size_t item_size = sizeof(ros_message->mainboard_temperature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ymrobot_msgs
size_t max_serialized_size_key_ymrobot_msgs__msg__RobotDeviceStatus(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;
  // Field name: battery_voltage
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: battery_percentage
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: battery_temperature
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: left_motor_speed
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: right_motor_speed
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: left_motor_temperature
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: right_motor_temperature
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: cpu_usage
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: memory_usage
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: cpu_temperature
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: disk_space_percentage
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: mainboard_temperature
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = ymrobot_msgs__msg__RobotDeviceStatus;
    is_plain =
      (
      offsetof(DataType, mainboard_temperature) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _RobotDeviceStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const ymrobot_msgs__msg__RobotDeviceStatus * ros_message = static_cast<const ymrobot_msgs__msg__RobotDeviceStatus *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_ymrobot_msgs__msg__RobotDeviceStatus(ros_message, cdr);
}

static bool _RobotDeviceStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  ymrobot_msgs__msg__RobotDeviceStatus * ros_message = static_cast<ymrobot_msgs__msg__RobotDeviceStatus *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_ymrobot_msgs__msg__RobotDeviceStatus(cdr, ros_message);
}

static uint32_t _RobotDeviceStatus__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_ymrobot_msgs__msg__RobotDeviceStatus(
      untyped_ros_message, 0));
}

static size_t _RobotDeviceStatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ymrobot_msgs__msg__RobotDeviceStatus(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_RobotDeviceStatus = {
  "ymrobot_msgs::msg",
  "RobotDeviceStatus",
  _RobotDeviceStatus__cdr_serialize,
  _RobotDeviceStatus__cdr_deserialize,
  _RobotDeviceStatus__get_serialized_size,
  _RobotDeviceStatus__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _RobotDeviceStatus__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_RobotDeviceStatus,
  get_message_typesupport_handle_function,
  &ymrobot_msgs__msg__RobotDeviceStatus__get_type_hash,
  &ymrobot_msgs__msg__RobotDeviceStatus__get_type_description,
  &ymrobot_msgs__msg__RobotDeviceStatus__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ymrobot_msgs, msg, RobotDeviceStatus)() {
  return &_RobotDeviceStatus__type_support;
}

#if defined(__cplusplus)
}
#endif
