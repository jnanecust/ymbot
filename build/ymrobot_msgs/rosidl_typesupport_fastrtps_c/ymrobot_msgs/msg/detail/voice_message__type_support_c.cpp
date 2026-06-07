// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from ymrobot_msgs:msg/VoiceMessage.idl
// generated code does not contain a copyright notice
#include "ymrobot_msgs/msg/detail/voice_message__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "ymrobot_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ymrobot_msgs/msg/detail/voice_message__struct.h"
#include "ymrobot_msgs/msg/detail/voice_message__functions.h"
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

#include "rosidl_runtime_c/string.h"  // delete_fixed_audio, fixed_audio_name, play_online_audio, synthetic_audio_title, synthetic_audio_txt, timbre
#include "rosidl_runtime_c/string_functions.h"  // delete_fixed_audio, fixed_audio_name, play_online_audio, synthetic_audio_title, synthetic_audio_txt, timbre

// forward declare type support functions


using _VoiceMessage__ros_msg_type = ymrobot_msgs__msg__VoiceMessage;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ymrobot_msgs
bool cdr_serialize_ymrobot_msgs__msg__VoiceMessage(
  const ymrobot_msgs__msg__VoiceMessage * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: audio_task_type
  {
    cdr << ros_message->audio_task_type;
  }

  // Field name: fixed_audio_name
  {
    const rosidl_runtime_c__String * str = &ros_message->fixed_audio_name;
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

  // Field name: timbre
  {
    const rosidl_runtime_c__String * str = &ros_message->timbre;
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

  // Field name: synthetic_audio_txt
  {
    const rosidl_runtime_c__String * str = &ros_message->synthetic_audio_txt;
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

  // Field name: synthetic_audio_title
  {
    const rosidl_runtime_c__String * str = &ros_message->synthetic_audio_title;
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

  // Field name: delete_fixed_audio
  {
    const rosidl_runtime_c__String * str = &ros_message->delete_fixed_audio;
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

  // Field name: play_online_audio
  {
    const rosidl_runtime_c__String * str = &ros_message->play_online_audio;
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
bool cdr_deserialize_ymrobot_msgs__msg__VoiceMessage(
  eprosima::fastcdr::Cdr & cdr,
  ymrobot_msgs__msg__VoiceMessage * ros_message)
{
  // Field name: audio_task_type
  {
    cdr >> ros_message->audio_task_type;
  }

  // Field name: fixed_audio_name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->fixed_audio_name.data) {
      rosidl_runtime_c__String__init(&ros_message->fixed_audio_name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->fixed_audio_name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'fixed_audio_name'\n");
      return false;
    }
  }

  // Field name: timbre
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->timbre.data) {
      rosidl_runtime_c__String__init(&ros_message->timbre);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->timbre,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'timbre'\n");
      return false;
    }
  }

  // Field name: synthetic_audio_txt
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->synthetic_audio_txt.data) {
      rosidl_runtime_c__String__init(&ros_message->synthetic_audio_txt);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->synthetic_audio_txt,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'synthetic_audio_txt'\n");
      return false;
    }
  }

  // Field name: synthetic_audio_title
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->synthetic_audio_title.data) {
      rosidl_runtime_c__String__init(&ros_message->synthetic_audio_title);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->synthetic_audio_title,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'synthetic_audio_title'\n");
      return false;
    }
  }

  // Field name: delete_fixed_audio
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->delete_fixed_audio.data) {
      rosidl_runtime_c__String__init(&ros_message->delete_fixed_audio);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->delete_fixed_audio,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'delete_fixed_audio'\n");
      return false;
    }
  }

  // Field name: play_online_audio
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->play_online_audio.data) {
      rosidl_runtime_c__String__init(&ros_message->play_online_audio);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->play_online_audio,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'play_online_audio'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ymrobot_msgs
size_t get_serialized_size_ymrobot_msgs__msg__VoiceMessage(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _VoiceMessage__ros_msg_type * ros_message = static_cast<const _VoiceMessage__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: audio_task_type
  {
    size_t item_size = sizeof(ros_message->audio_task_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: fixed_audio_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->fixed_audio_name.size + 1);

  // Field name: timbre
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->timbre.size + 1);

  // Field name: synthetic_audio_txt
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->synthetic_audio_txt.size + 1);

  // Field name: synthetic_audio_title
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->synthetic_audio_title.size + 1);

  // Field name: delete_fixed_audio
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->delete_fixed_audio.size + 1);

  // Field name: play_online_audio
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->play_online_audio.size + 1);

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ymrobot_msgs
size_t max_serialized_size_ymrobot_msgs__msg__VoiceMessage(
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

  // Field name: audio_task_type
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: fixed_audio_name
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

  // Field name: timbre
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

  // Field name: synthetic_audio_txt
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

  // Field name: synthetic_audio_title
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

  // Field name: delete_fixed_audio
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

  // Field name: play_online_audio
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
    using DataType = ymrobot_msgs__msg__VoiceMessage;
    is_plain =
      (
      offsetof(DataType, play_online_audio) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ymrobot_msgs
bool cdr_serialize_key_ymrobot_msgs__msg__VoiceMessage(
  const ymrobot_msgs__msg__VoiceMessage * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: audio_task_type
  {
    cdr << ros_message->audio_task_type;
  }

  // Field name: fixed_audio_name
  {
    const rosidl_runtime_c__String * str = &ros_message->fixed_audio_name;
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

  // Field name: timbre
  {
    const rosidl_runtime_c__String * str = &ros_message->timbre;
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

  // Field name: synthetic_audio_txt
  {
    const rosidl_runtime_c__String * str = &ros_message->synthetic_audio_txt;
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

  // Field name: synthetic_audio_title
  {
    const rosidl_runtime_c__String * str = &ros_message->synthetic_audio_title;
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

  // Field name: delete_fixed_audio
  {
    const rosidl_runtime_c__String * str = &ros_message->delete_fixed_audio;
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

  // Field name: play_online_audio
  {
    const rosidl_runtime_c__String * str = &ros_message->play_online_audio;
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
size_t get_serialized_size_key_ymrobot_msgs__msg__VoiceMessage(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _VoiceMessage__ros_msg_type * ros_message = static_cast<const _VoiceMessage__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: audio_task_type
  {
    size_t item_size = sizeof(ros_message->audio_task_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: fixed_audio_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->fixed_audio_name.size + 1);

  // Field name: timbre
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->timbre.size + 1);

  // Field name: synthetic_audio_txt
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->synthetic_audio_txt.size + 1);

  // Field name: synthetic_audio_title
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->synthetic_audio_title.size + 1);

  // Field name: delete_fixed_audio
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->delete_fixed_audio.size + 1);

  // Field name: play_online_audio
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->play_online_audio.size + 1);

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ymrobot_msgs
size_t max_serialized_size_key_ymrobot_msgs__msg__VoiceMessage(
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
  // Field name: audio_task_type
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: fixed_audio_name
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

  // Field name: timbre
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

  // Field name: synthetic_audio_txt
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

  // Field name: synthetic_audio_title
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

  // Field name: delete_fixed_audio
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

  // Field name: play_online_audio
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
    using DataType = ymrobot_msgs__msg__VoiceMessage;
    is_plain =
      (
      offsetof(DataType, play_online_audio) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _VoiceMessage__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const ymrobot_msgs__msg__VoiceMessage * ros_message = static_cast<const ymrobot_msgs__msg__VoiceMessage *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_ymrobot_msgs__msg__VoiceMessage(ros_message, cdr);
}

static bool _VoiceMessage__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  ymrobot_msgs__msg__VoiceMessage * ros_message = static_cast<ymrobot_msgs__msg__VoiceMessage *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_ymrobot_msgs__msg__VoiceMessage(cdr, ros_message);
}

static uint32_t _VoiceMessage__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_ymrobot_msgs__msg__VoiceMessage(
      untyped_ros_message, 0));
}

static size_t _VoiceMessage__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ymrobot_msgs__msg__VoiceMessage(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_VoiceMessage = {
  "ymrobot_msgs::msg",
  "VoiceMessage",
  _VoiceMessage__cdr_serialize,
  _VoiceMessage__cdr_deserialize,
  _VoiceMessage__get_serialized_size,
  _VoiceMessage__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _VoiceMessage__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_VoiceMessage,
  get_message_typesupport_handle_function,
  &ymrobot_msgs__msg__VoiceMessage__get_type_hash,
  &ymrobot_msgs__msg__VoiceMessage__get_type_description,
  &ymrobot_msgs__msg__VoiceMessage__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ymrobot_msgs, msg, VoiceMessage)() {
  return &_VoiceMessage__type_support;
}

#if defined(__cplusplus)
}
#endif
