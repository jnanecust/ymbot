// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from ymrobot_msgs:msg/MapManage.idl
// generated code does not contain a copyright notice
#include "ymrobot_msgs/msg/detail/map_manage__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "ymrobot_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ymrobot_msgs/msg/detail/map_manage__struct.h"
#include "ymrobot_msgs/msg/detail/map_manage__functions.h"
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

#include "rosidl_runtime_c/string.h"  // pcd_file, pgm_file
#include "rosidl_runtime_c/string_functions.h"  // pcd_file, pgm_file
#include "ymrobot_msgs/msg/detail/map_task_command__functions.h"  // map_task

// forward declare type support functions

bool cdr_serialize_ymrobot_msgs__msg__MapTaskCommand(
  const ymrobot_msgs__msg__MapTaskCommand * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_ymrobot_msgs__msg__MapTaskCommand(
  eprosima::fastcdr::Cdr & cdr,
  ymrobot_msgs__msg__MapTaskCommand * ros_message);

size_t get_serialized_size_ymrobot_msgs__msg__MapTaskCommand(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_ymrobot_msgs__msg__MapTaskCommand(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_ymrobot_msgs__msg__MapTaskCommand(
  const ymrobot_msgs__msg__MapTaskCommand * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_ymrobot_msgs__msg__MapTaskCommand(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_ymrobot_msgs__msg__MapTaskCommand(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ymrobot_msgs, msg, MapTaskCommand)();


using _MapManage__ros_msg_type = ymrobot_msgs__msg__MapManage;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ymrobot_msgs
bool cdr_serialize_ymrobot_msgs__msg__MapManage(
  const ymrobot_msgs__msg__MapManage * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: map_task
  {
    cdr_serialize_ymrobot_msgs__msg__MapTaskCommand(
      &ros_message->map_task, cdr);
  }

  // Field name: pcd_file
  {
    const rosidl_runtime_c__String * str = &ros_message->pcd_file;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: pgm_file
  {
    const rosidl_runtime_c__String * str = &ros_message->pgm_file;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ymrobot_msgs
bool cdr_deserialize_ymrobot_msgs__msg__MapManage(
  eprosima::fastcdr::Cdr & cdr,
  ymrobot_msgs__msg__MapManage * ros_message)
{
  // Field name: map_task
  {
    cdr_deserialize_ymrobot_msgs__msg__MapTaskCommand(cdr, &ros_message->map_task);
  }

  // Field name: pcd_file
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->pcd_file.data) {
      rosidl_runtime_c__String__init(&ros_message->pcd_file);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->pcd_file,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'pcd_file'\n");
      return false;
    }
  }

  // Field name: pgm_file
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->pgm_file.data) {
      rosidl_runtime_c__String__init(&ros_message->pgm_file);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->pgm_file,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'pgm_file'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ymrobot_msgs
size_t get_serialized_size_ymrobot_msgs__msg__MapManage(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MapManage__ros_msg_type * ros_message = static_cast<const _MapManage__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: map_task
  current_alignment += get_serialized_size_ymrobot_msgs__msg__MapTaskCommand(
    &(ros_message->map_task), current_alignment);

  // Field name: pcd_file
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->pcd_file.size + 1);

  // Field name: pgm_file
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->pgm_file.size + 1);

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ymrobot_msgs
size_t max_serialized_size_ymrobot_msgs__msg__MapManage(
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

  // Field name: map_task
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_ymrobot_msgs__msg__MapTaskCommand(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: pcd_file
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: pgm_file
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = ymrobot_msgs__msg__MapManage;
    is_plain =
      (
      offsetof(DataType, pgm_file) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ymrobot_msgs
bool cdr_serialize_key_ymrobot_msgs__msg__MapManage(
  const ymrobot_msgs__msg__MapManage * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: map_task
  {
    cdr_serialize_key_ymrobot_msgs__msg__MapTaskCommand(
      &ros_message->map_task, cdr);
  }

  // Field name: pcd_file
  {
    const rosidl_runtime_c__String * str = &ros_message->pcd_file;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: pgm_file
  {
    const rosidl_runtime_c__String * str = &ros_message->pgm_file;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ymrobot_msgs
size_t get_serialized_size_key_ymrobot_msgs__msg__MapManage(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MapManage__ros_msg_type * ros_message = static_cast<const _MapManage__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: map_task
  current_alignment += get_serialized_size_key_ymrobot_msgs__msg__MapTaskCommand(
    &(ros_message->map_task), current_alignment);

  // Field name: pcd_file
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->pcd_file.size + 1);

  // Field name: pgm_file
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->pgm_file.size + 1);

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ymrobot_msgs
size_t max_serialized_size_key_ymrobot_msgs__msg__MapManage(
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
  // Field name: map_task
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_ymrobot_msgs__msg__MapTaskCommand(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: pcd_file
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: pgm_file
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = ymrobot_msgs__msg__MapManage;
    is_plain =
      (
      offsetof(DataType, pgm_file) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _MapManage__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const ymrobot_msgs__msg__MapManage * ros_message = static_cast<const ymrobot_msgs__msg__MapManage *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_ymrobot_msgs__msg__MapManage(ros_message, cdr);
}

static bool _MapManage__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  ymrobot_msgs__msg__MapManage * ros_message = static_cast<ymrobot_msgs__msg__MapManage *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_ymrobot_msgs__msg__MapManage(cdr, ros_message);
}

static uint32_t _MapManage__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_ymrobot_msgs__msg__MapManage(
      untyped_ros_message, 0));
}

static size_t _MapManage__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ymrobot_msgs__msg__MapManage(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_MapManage = {
  "ymrobot_msgs::msg",
  "MapManage",
  _MapManage__cdr_serialize,
  _MapManage__cdr_deserialize,
  _MapManage__get_serialized_size,
  _MapManage__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _MapManage__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MapManage,
  get_message_typesupport_handle_function,
  &ymrobot_msgs__msg__MapManage__get_type_hash,
  &ymrobot_msgs__msg__MapManage__get_type_description,
  &ymrobot_msgs__msg__MapManage__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ymrobot_msgs, msg, MapManage)() {
  return &_MapManage__type_support;
}

#if defined(__cplusplus)
}
#endif
