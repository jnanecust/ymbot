// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from ymrobot_msgs:msg/Task.idl
// generated code does not contain a copyright notice
#include "ymrobot_msgs/msg/detail/task__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "ymrobot_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ymrobot_msgs/msg/detail/task__struct.h"
#include "ymrobot_msgs/msg/detail/task__functions.h"
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

#include "rosidl_runtime_c/string.h"  // amr_id, behavior_tree, index, platform_id, task_id
#include "rosidl_runtime_c/string_functions.h"  // amr_id, behavior_tree, index, platform_id, task_id
#include "ymrobot_msgs/msg/detail/binary_data__functions.h"  // binary_file
#include "ymrobot_msgs/msg/detail/command__functions.h"  // commands
#include "ymrobot_msgs/msg/detail/nav_point__functions.h"  // nav_points

// forward declare type support functions

bool cdr_serialize_ymrobot_msgs__msg__BinaryData(
  const ymrobot_msgs__msg__BinaryData * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_ymrobot_msgs__msg__BinaryData(
  eprosima::fastcdr::Cdr & cdr,
  ymrobot_msgs__msg__BinaryData * ros_message);

size_t get_serialized_size_ymrobot_msgs__msg__BinaryData(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_ymrobot_msgs__msg__BinaryData(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_ymrobot_msgs__msg__BinaryData(
  const ymrobot_msgs__msg__BinaryData * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_ymrobot_msgs__msg__BinaryData(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_ymrobot_msgs__msg__BinaryData(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ymrobot_msgs, msg, BinaryData)();

bool cdr_serialize_ymrobot_msgs__msg__Command(
  const ymrobot_msgs__msg__Command * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_ymrobot_msgs__msg__Command(
  eprosima::fastcdr::Cdr & cdr,
  ymrobot_msgs__msg__Command * ros_message);

size_t get_serialized_size_ymrobot_msgs__msg__Command(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_ymrobot_msgs__msg__Command(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_ymrobot_msgs__msg__Command(
  const ymrobot_msgs__msg__Command * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_ymrobot_msgs__msg__Command(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_ymrobot_msgs__msg__Command(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ymrobot_msgs, msg, Command)();

bool cdr_serialize_ymrobot_msgs__msg__NavPoint(
  const ymrobot_msgs__msg__NavPoint * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_ymrobot_msgs__msg__NavPoint(
  eprosima::fastcdr::Cdr & cdr,
  ymrobot_msgs__msg__NavPoint * ros_message);

size_t get_serialized_size_ymrobot_msgs__msg__NavPoint(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_ymrobot_msgs__msg__NavPoint(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_ymrobot_msgs__msg__NavPoint(
  const ymrobot_msgs__msg__NavPoint * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_ymrobot_msgs__msg__NavPoint(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_ymrobot_msgs__msg__NavPoint(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ymrobot_msgs, msg, NavPoint)();


using _Task__ros_msg_type = ymrobot_msgs__msg__Task;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ymrobot_msgs
bool cdr_serialize_ymrobot_msgs__msg__Task(
  const ymrobot_msgs__msg__Task * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: platform_id
  {
    const rosidl_runtime_c__String * str = &ros_message->platform_id;
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

  // Field name: amr_id
  {
    const rosidl_runtime_c__String * str = &ros_message->amr_id;
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

  // Field name: task_id
  {
    const rosidl_runtime_c__String * str = &ros_message->task_id;
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

  // Field name: task_type
  {
    cdr << ros_message->task_type;
  }

  // Field name: control_mode
  {
    cdr << ros_message->control_mode;
  }

  // Field name: nav_points
  {
    size_t size = ros_message->nav_points.size;
    auto array_ptr = ros_message->nav_points.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_ymrobot_msgs__msg__NavPoint(
        &array_ptr[i], cdr);
    }
  }

  // Field name: commands
  {
    size_t size = ros_message->commands.size;
    auto array_ptr = ros_message->commands.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_ymrobot_msgs__msg__Command(
        &array_ptr[i], cdr);
    }
  }

  // Field name: behavior_tree
  {
    const rosidl_runtime_c__String * str = &ros_message->behavior_tree;
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

  // Field name: reload
  {
    cdr << (ros_message->reload ? true : false);
  }

  // Field name: index
  {
    const rosidl_runtime_c__String * str = &ros_message->index;
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

  // Field name: binary_file
  {
    cdr_serialize_ymrobot_msgs__msg__BinaryData(
      &ros_message->binary_file, cdr);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ymrobot_msgs
bool cdr_deserialize_ymrobot_msgs__msg__Task(
  eprosima::fastcdr::Cdr & cdr,
  ymrobot_msgs__msg__Task * ros_message)
{
  // Field name: platform_id
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->platform_id.data) {
      rosidl_runtime_c__String__init(&ros_message->platform_id);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->platform_id,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'platform_id'\n");
      return false;
    }
  }

  // Field name: amr_id
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->amr_id.data) {
      rosidl_runtime_c__String__init(&ros_message->amr_id);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->amr_id,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'amr_id'\n");
      return false;
    }
  }

  // Field name: task_id
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->task_id.data) {
      rosidl_runtime_c__String__init(&ros_message->task_id);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->task_id,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'task_id'\n");
      return false;
    }
  }

  // Field name: task_type
  {
    cdr >> ros_message->task_type;
  }

  // Field name: control_mode
  {
    cdr >> ros_message->control_mode;
  }

  // Field name: nav_points
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->nav_points.data) {
      ymrobot_msgs__msg__NavPoint__Sequence__fini(&ros_message->nav_points);
    }
    if (!ymrobot_msgs__msg__NavPoint__Sequence__init(&ros_message->nav_points, size)) {
      fprintf(stderr, "failed to create array for field 'nav_points'");
      return false;
    }
    auto array_ptr = ros_message->nav_points.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_ymrobot_msgs__msg__NavPoint(cdr, &array_ptr[i]);
    }
  }

  // Field name: commands
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->commands.data) {
      ymrobot_msgs__msg__Command__Sequence__fini(&ros_message->commands);
    }
    if (!ymrobot_msgs__msg__Command__Sequence__init(&ros_message->commands, size)) {
      fprintf(stderr, "failed to create array for field 'commands'");
      return false;
    }
    auto array_ptr = ros_message->commands.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_ymrobot_msgs__msg__Command(cdr, &array_ptr[i]);
    }
  }

  // Field name: behavior_tree
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->behavior_tree.data) {
      rosidl_runtime_c__String__init(&ros_message->behavior_tree);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->behavior_tree,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'behavior_tree'\n");
      return false;
    }
  }

  // Field name: reload
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->reload = tmp ? true : false;
  }

  // Field name: index
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->index.data) {
      rosidl_runtime_c__String__init(&ros_message->index);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->index,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'index'\n");
      return false;
    }
  }

  // Field name: binary_file
  {
    cdr_deserialize_ymrobot_msgs__msg__BinaryData(cdr, &ros_message->binary_file);
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ymrobot_msgs
size_t get_serialized_size_ymrobot_msgs__msg__Task(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Task__ros_msg_type * ros_message = static_cast<const _Task__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: platform_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->platform_id.size + 1);

  // Field name: amr_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->amr_id.size + 1);

  // Field name: task_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->task_id.size + 1);

  // Field name: task_type
  {
    size_t item_size = sizeof(ros_message->task_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: control_mode
  {
    size_t item_size = sizeof(ros_message->control_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: nav_points
  {
    size_t array_size = ros_message->nav_points.size;
    auto array_ptr = ros_message->nav_points.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_ymrobot_msgs__msg__NavPoint(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: commands
  {
    size_t array_size = ros_message->commands.size;
    auto array_ptr = ros_message->commands.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_ymrobot_msgs__msg__Command(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: behavior_tree
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->behavior_tree.size + 1);

  // Field name: reload
  {
    size_t item_size = sizeof(ros_message->reload);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: index
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->index.size + 1);

  // Field name: binary_file
  current_alignment += get_serialized_size_ymrobot_msgs__msg__BinaryData(
    &(ros_message->binary_file), current_alignment);

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ymrobot_msgs
size_t max_serialized_size_ymrobot_msgs__msg__Task(
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

  // Field name: platform_id
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

  // Field name: amr_id
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

  // Field name: task_id
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

  // Field name: task_type
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: control_mode
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: nav_points
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_ymrobot_msgs__msg__NavPoint(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: commands
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_ymrobot_msgs__msg__Command(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: behavior_tree
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

  // Field name: reload
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: index
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

  // Field name: binary_file
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_ymrobot_msgs__msg__BinaryData(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = ymrobot_msgs__msg__Task;
    is_plain =
      (
      offsetof(DataType, binary_file) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ymrobot_msgs
bool cdr_serialize_key_ymrobot_msgs__msg__Task(
  const ymrobot_msgs__msg__Task * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: platform_id
  {
    const rosidl_runtime_c__String * str = &ros_message->platform_id;
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

  // Field name: amr_id
  {
    const rosidl_runtime_c__String * str = &ros_message->amr_id;
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

  // Field name: task_id
  {
    const rosidl_runtime_c__String * str = &ros_message->task_id;
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

  // Field name: task_type
  {
    cdr << ros_message->task_type;
  }

  // Field name: control_mode
  {
    cdr << ros_message->control_mode;
  }

  // Field name: nav_points
  {
    size_t size = ros_message->nav_points.size;
    auto array_ptr = ros_message->nav_points.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_ymrobot_msgs__msg__NavPoint(
        &array_ptr[i], cdr);
    }
  }

  // Field name: commands
  {
    size_t size = ros_message->commands.size;
    auto array_ptr = ros_message->commands.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_ymrobot_msgs__msg__Command(
        &array_ptr[i], cdr);
    }
  }

  // Field name: behavior_tree
  {
    const rosidl_runtime_c__String * str = &ros_message->behavior_tree;
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

  // Field name: reload
  {
    cdr << (ros_message->reload ? true : false);
  }

  // Field name: index
  {
    const rosidl_runtime_c__String * str = &ros_message->index;
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

  // Field name: binary_file
  {
    cdr_serialize_key_ymrobot_msgs__msg__BinaryData(
      &ros_message->binary_file, cdr);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ymrobot_msgs
size_t get_serialized_size_key_ymrobot_msgs__msg__Task(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Task__ros_msg_type * ros_message = static_cast<const _Task__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: platform_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->platform_id.size + 1);

  // Field name: amr_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->amr_id.size + 1);

  // Field name: task_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->task_id.size + 1);

  // Field name: task_type
  {
    size_t item_size = sizeof(ros_message->task_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: control_mode
  {
    size_t item_size = sizeof(ros_message->control_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: nav_points
  {
    size_t array_size = ros_message->nav_points.size;
    auto array_ptr = ros_message->nav_points.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_ymrobot_msgs__msg__NavPoint(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: commands
  {
    size_t array_size = ros_message->commands.size;
    auto array_ptr = ros_message->commands.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_ymrobot_msgs__msg__Command(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: behavior_tree
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->behavior_tree.size + 1);

  // Field name: reload
  {
    size_t item_size = sizeof(ros_message->reload);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: index
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->index.size + 1);

  // Field name: binary_file
  current_alignment += get_serialized_size_key_ymrobot_msgs__msg__BinaryData(
    &(ros_message->binary_file), current_alignment);

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ymrobot_msgs
size_t max_serialized_size_key_ymrobot_msgs__msg__Task(
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
  // Field name: platform_id
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

  // Field name: amr_id
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

  // Field name: task_id
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

  // Field name: task_type
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: control_mode
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: nav_points
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_ymrobot_msgs__msg__NavPoint(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: commands
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_ymrobot_msgs__msg__Command(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: behavior_tree
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

  // Field name: reload
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: index
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

  // Field name: binary_file
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_ymrobot_msgs__msg__BinaryData(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = ymrobot_msgs__msg__Task;
    is_plain =
      (
      offsetof(DataType, binary_file) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _Task__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const ymrobot_msgs__msg__Task * ros_message = static_cast<const ymrobot_msgs__msg__Task *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_ymrobot_msgs__msg__Task(ros_message, cdr);
}

static bool _Task__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  ymrobot_msgs__msg__Task * ros_message = static_cast<ymrobot_msgs__msg__Task *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_ymrobot_msgs__msg__Task(cdr, ros_message);
}

static uint32_t _Task__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_ymrobot_msgs__msg__Task(
      untyped_ros_message, 0));
}

static size_t _Task__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ymrobot_msgs__msg__Task(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Task = {
  "ymrobot_msgs::msg",
  "Task",
  _Task__cdr_serialize,
  _Task__cdr_deserialize,
  _Task__get_serialized_size,
  _Task__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _Task__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Task,
  get_message_typesupport_handle_function,
  &ymrobot_msgs__msg__Task__get_type_hash,
  &ymrobot_msgs__msg__Task__get_type_description,
  &ymrobot_msgs__msg__Task__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ymrobot_msgs, msg, Task)() {
  return &_Task__type_support;
}

#if defined(__cplusplus)
}
#endif
