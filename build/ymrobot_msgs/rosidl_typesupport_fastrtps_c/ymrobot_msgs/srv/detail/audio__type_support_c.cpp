// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from ymrobot_msgs:srv/Audio.idl
// generated code does not contain a copyright notice
#include "ymrobot_msgs/srv/detail/audio__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "ymrobot_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ymrobot_msgs/srv/detail/audio__struct.h"
#include "ymrobot_msgs/srv/detail/audio__functions.h"
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


using _Audio_Request__ros_msg_type = ymrobot_msgs__srv__Audio_Request;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ymrobot_msgs
bool cdr_serialize_ymrobot_msgs__srv__Audio_Request(
  const ymrobot_msgs__srv__Audio_Request * ros_message,
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
bool cdr_deserialize_ymrobot_msgs__srv__Audio_Request(
  eprosima::fastcdr::Cdr & cdr,
  ymrobot_msgs__srv__Audio_Request * ros_message)
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
size_t get_serialized_size_ymrobot_msgs__srv__Audio_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Audio_Request__ros_msg_type * ros_message = static_cast<const _Audio_Request__ros_msg_type *>(untyped_ros_message);
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
size_t max_serialized_size_ymrobot_msgs__srv__Audio_Request(
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
    using DataType = ymrobot_msgs__srv__Audio_Request;
    is_plain =
      (
      offsetof(DataType, play_online_audio) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ymrobot_msgs
bool cdr_serialize_key_ymrobot_msgs__srv__Audio_Request(
  const ymrobot_msgs__srv__Audio_Request * ros_message,
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
size_t get_serialized_size_key_ymrobot_msgs__srv__Audio_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Audio_Request__ros_msg_type * ros_message = static_cast<const _Audio_Request__ros_msg_type *>(untyped_ros_message);
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
size_t max_serialized_size_key_ymrobot_msgs__srv__Audio_Request(
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
    using DataType = ymrobot_msgs__srv__Audio_Request;
    is_plain =
      (
      offsetof(DataType, play_online_audio) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _Audio_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const ymrobot_msgs__srv__Audio_Request * ros_message = static_cast<const ymrobot_msgs__srv__Audio_Request *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_ymrobot_msgs__srv__Audio_Request(ros_message, cdr);
}

static bool _Audio_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  ymrobot_msgs__srv__Audio_Request * ros_message = static_cast<ymrobot_msgs__srv__Audio_Request *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_ymrobot_msgs__srv__Audio_Request(cdr, ros_message);
}

static uint32_t _Audio_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_ymrobot_msgs__srv__Audio_Request(
      untyped_ros_message, 0));
}

static size_t _Audio_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ymrobot_msgs__srv__Audio_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Audio_Request = {
  "ymrobot_msgs::srv",
  "Audio_Request",
  _Audio_Request__cdr_serialize,
  _Audio_Request__cdr_deserialize,
  _Audio_Request__get_serialized_size,
  _Audio_Request__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _Audio_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Audio_Request,
  get_message_typesupport_handle_function,
  &ymrobot_msgs__srv__Audio_Request__get_type_hash,
  &ymrobot_msgs__srv__Audio_Request__get_type_description,
  &ymrobot_msgs__srv__Audio_Request__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ymrobot_msgs, srv, Audio_Request)() {
  return &_Audio_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <cstddef>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "ymrobot_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "ymrobot_msgs/srv/detail/audio__struct.h"
// already included above
// #include "ymrobot_msgs/srv/detail/audio__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

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

// already included above
// #include "rosidl_runtime_c/string.h"  // message
// already included above
// #include "rosidl_runtime_c/string_functions.h"  // message

// forward declare type support functions


using _Audio_Response__ros_msg_type = ymrobot_msgs__srv__Audio_Response;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ymrobot_msgs
bool cdr_serialize_ymrobot_msgs__srv__Audio_Response(
  const ymrobot_msgs__srv__Audio_Response * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: success
  {
    cdr << (ros_message->success ? true : false);
  }

  // Field name: message
  {
    const rosidl_runtime_c__String * str = &ros_message->message;
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

  // Field name: total_elapsed_time
  {
    cdr << ros_message->total_elapsed_time;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ymrobot_msgs
bool cdr_deserialize_ymrobot_msgs__srv__Audio_Response(
  eprosima::fastcdr::Cdr & cdr,
  ymrobot_msgs__srv__Audio_Response * ros_message)
{
  // Field name: success
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->success = tmp ? true : false;
  }

  // Field name: message
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->message.data) {
      rosidl_runtime_c__String__init(&ros_message->message);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->message,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'message'\n");
      return false;
    }
  }

  // Field name: total_elapsed_time
  {
    cdr >> ros_message->total_elapsed_time;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ymrobot_msgs
size_t get_serialized_size_ymrobot_msgs__srv__Audio_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Audio_Response__ros_msg_type * ros_message = static_cast<const _Audio_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: success
  {
    size_t item_size = sizeof(ros_message->success);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: message
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->message.size + 1);

  // Field name: total_elapsed_time
  {
    size_t item_size = sizeof(ros_message->total_elapsed_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ymrobot_msgs
size_t max_serialized_size_ymrobot_msgs__srv__Audio_Response(
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

  // Field name: success
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: message
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

  // Field name: total_elapsed_time
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = ymrobot_msgs__srv__Audio_Response;
    is_plain =
      (
      offsetof(DataType, total_elapsed_time) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ymrobot_msgs
bool cdr_serialize_key_ymrobot_msgs__srv__Audio_Response(
  const ymrobot_msgs__srv__Audio_Response * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: success
  {
    cdr << (ros_message->success ? true : false);
  }

  // Field name: message
  {
    const rosidl_runtime_c__String * str = &ros_message->message;
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

  // Field name: total_elapsed_time
  {
    cdr << ros_message->total_elapsed_time;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ymrobot_msgs
size_t get_serialized_size_key_ymrobot_msgs__srv__Audio_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Audio_Response__ros_msg_type * ros_message = static_cast<const _Audio_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: success
  {
    size_t item_size = sizeof(ros_message->success);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: message
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->message.size + 1);

  // Field name: total_elapsed_time
  {
    size_t item_size = sizeof(ros_message->total_elapsed_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ymrobot_msgs
size_t max_serialized_size_key_ymrobot_msgs__srv__Audio_Response(
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
  // Field name: success
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: message
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

  // Field name: total_elapsed_time
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = ymrobot_msgs__srv__Audio_Response;
    is_plain =
      (
      offsetof(DataType, total_elapsed_time) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _Audio_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const ymrobot_msgs__srv__Audio_Response * ros_message = static_cast<const ymrobot_msgs__srv__Audio_Response *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_ymrobot_msgs__srv__Audio_Response(ros_message, cdr);
}

static bool _Audio_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  ymrobot_msgs__srv__Audio_Response * ros_message = static_cast<ymrobot_msgs__srv__Audio_Response *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_ymrobot_msgs__srv__Audio_Response(cdr, ros_message);
}

static uint32_t _Audio_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_ymrobot_msgs__srv__Audio_Response(
      untyped_ros_message, 0));
}

static size_t _Audio_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ymrobot_msgs__srv__Audio_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Audio_Response = {
  "ymrobot_msgs::srv",
  "Audio_Response",
  _Audio_Response__cdr_serialize,
  _Audio_Response__cdr_deserialize,
  _Audio_Response__get_serialized_size,
  _Audio_Response__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _Audio_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Audio_Response,
  get_message_typesupport_handle_function,
  &ymrobot_msgs__srv__Audio_Response__get_type_hash,
  &ymrobot_msgs__srv__Audio_Response__get_type_description,
  &ymrobot_msgs__srv__Audio_Response__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ymrobot_msgs, srv, Audio_Response)() {
  return &_Audio_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <cstddef>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "ymrobot_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "ymrobot_msgs/srv/detail/audio__struct.h"
// already included above
// #include "ymrobot_msgs/srv/detail/audio__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

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

#include "service_msgs/msg/detail/service_event_info__functions.h"  // info

// forward declare type support functions

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_ymrobot_msgs
bool cdr_serialize_service_msgs__msg__ServiceEventInfo(
  const service_msgs__msg__ServiceEventInfo * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_ymrobot_msgs
bool cdr_deserialize_service_msgs__msg__ServiceEventInfo(
  eprosima::fastcdr::Cdr & cdr,
  service_msgs__msg__ServiceEventInfo * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_ymrobot_msgs
size_t get_serialized_size_service_msgs__msg__ServiceEventInfo(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_ymrobot_msgs
size_t max_serialized_size_service_msgs__msg__ServiceEventInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_ymrobot_msgs
bool cdr_serialize_key_service_msgs__msg__ServiceEventInfo(
  const service_msgs__msg__ServiceEventInfo * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_ymrobot_msgs
size_t get_serialized_size_key_service_msgs__msg__ServiceEventInfo(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_ymrobot_msgs
size_t max_serialized_size_key_service_msgs__msg__ServiceEventInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_ymrobot_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, service_msgs, msg, ServiceEventInfo)();

bool cdr_serialize_ymrobot_msgs__srv__Audio_Request(
  const ymrobot_msgs__srv__Audio_Request * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_ymrobot_msgs__srv__Audio_Request(
  eprosima::fastcdr::Cdr & cdr,
  ymrobot_msgs__srv__Audio_Request * ros_message);

size_t get_serialized_size_ymrobot_msgs__srv__Audio_Request(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_ymrobot_msgs__srv__Audio_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_ymrobot_msgs__srv__Audio_Request(
  const ymrobot_msgs__srv__Audio_Request * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_ymrobot_msgs__srv__Audio_Request(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_ymrobot_msgs__srv__Audio_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ymrobot_msgs, srv, Audio_Request)();

bool cdr_serialize_ymrobot_msgs__srv__Audio_Response(
  const ymrobot_msgs__srv__Audio_Response * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_ymrobot_msgs__srv__Audio_Response(
  eprosima::fastcdr::Cdr & cdr,
  ymrobot_msgs__srv__Audio_Response * ros_message);

size_t get_serialized_size_ymrobot_msgs__srv__Audio_Response(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_ymrobot_msgs__srv__Audio_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_ymrobot_msgs__srv__Audio_Response(
  const ymrobot_msgs__srv__Audio_Response * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_ymrobot_msgs__srv__Audio_Response(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_ymrobot_msgs__srv__Audio_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ymrobot_msgs, srv, Audio_Response)();


using _Audio_Event__ros_msg_type = ymrobot_msgs__srv__Audio_Event;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ymrobot_msgs
bool cdr_serialize_ymrobot_msgs__srv__Audio_Event(
  const ymrobot_msgs__srv__Audio_Event * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: info
  {
    cdr_serialize_service_msgs__msg__ServiceEventInfo(
      &ros_message->info, cdr);
  }

  // Field name: request
  {
    size_t size = ros_message->request.size;
    auto array_ptr = ros_message->request.data;
    if (size > 1) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_ymrobot_msgs__srv__Audio_Request(
        &array_ptr[i], cdr);
    }
  }

  // Field name: response
  {
    size_t size = ros_message->response.size;
    auto array_ptr = ros_message->response.data;
    if (size > 1) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_ymrobot_msgs__srv__Audio_Response(
        &array_ptr[i], cdr);
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ymrobot_msgs
bool cdr_deserialize_ymrobot_msgs__srv__Audio_Event(
  eprosima::fastcdr::Cdr & cdr,
  ymrobot_msgs__srv__Audio_Event * ros_message)
{
  // Field name: info
  {
    cdr_deserialize_service_msgs__msg__ServiceEventInfo(cdr, &ros_message->info);
  }

  // Field name: request
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->request.data) {
      ymrobot_msgs__srv__Audio_Request__Sequence__fini(&ros_message->request);
    }
    if (!ymrobot_msgs__srv__Audio_Request__Sequence__init(&ros_message->request, size)) {
      fprintf(stderr, "failed to create array for field 'request'");
      return false;
    }
    auto array_ptr = ros_message->request.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_ymrobot_msgs__srv__Audio_Request(cdr, &array_ptr[i]);
    }
  }

  // Field name: response
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->response.data) {
      ymrobot_msgs__srv__Audio_Response__Sequence__fini(&ros_message->response);
    }
    if (!ymrobot_msgs__srv__Audio_Response__Sequence__init(&ros_message->response, size)) {
      fprintf(stderr, "failed to create array for field 'response'");
      return false;
    }
    auto array_ptr = ros_message->response.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_ymrobot_msgs__srv__Audio_Response(cdr, &array_ptr[i]);
    }
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ymrobot_msgs
size_t get_serialized_size_ymrobot_msgs__srv__Audio_Event(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Audio_Event__ros_msg_type * ros_message = static_cast<const _Audio_Event__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: info
  current_alignment += get_serialized_size_service_msgs__msg__ServiceEventInfo(
    &(ros_message->info), current_alignment);

  // Field name: request
  {
    size_t array_size = ros_message->request.size;
    auto array_ptr = ros_message->request.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_ymrobot_msgs__srv__Audio_Request(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: response
  {
    size_t array_size = ros_message->response.size;
    auto array_ptr = ros_message->response.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_ymrobot_msgs__srv__Audio_Response(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ymrobot_msgs
size_t max_serialized_size_ymrobot_msgs__srv__Audio_Event(
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

  // Field name: info
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_service_msgs__msg__ServiceEventInfo(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: request
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_ymrobot_msgs__srv__Audio_Request(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: response
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_ymrobot_msgs__srv__Audio_Response(
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
    using DataType = ymrobot_msgs__srv__Audio_Event;
    is_plain =
      (
      offsetof(DataType, response) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ymrobot_msgs
bool cdr_serialize_key_ymrobot_msgs__srv__Audio_Event(
  const ymrobot_msgs__srv__Audio_Event * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: info
  {
    cdr_serialize_key_service_msgs__msg__ServiceEventInfo(
      &ros_message->info, cdr);
  }

  // Field name: request
  {
    size_t size = ros_message->request.size;
    auto array_ptr = ros_message->request.data;
    if (size > 1) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_ymrobot_msgs__srv__Audio_Request(
        &array_ptr[i], cdr);
    }
  }

  // Field name: response
  {
    size_t size = ros_message->response.size;
    auto array_ptr = ros_message->response.data;
    if (size > 1) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_ymrobot_msgs__srv__Audio_Response(
        &array_ptr[i], cdr);
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ymrobot_msgs
size_t get_serialized_size_key_ymrobot_msgs__srv__Audio_Event(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Audio_Event__ros_msg_type * ros_message = static_cast<const _Audio_Event__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: info
  current_alignment += get_serialized_size_key_service_msgs__msg__ServiceEventInfo(
    &(ros_message->info), current_alignment);

  // Field name: request
  {
    size_t array_size = ros_message->request.size;
    auto array_ptr = ros_message->request.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_ymrobot_msgs__srv__Audio_Request(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: response
  {
    size_t array_size = ros_message->response.size;
    auto array_ptr = ros_message->response.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_ymrobot_msgs__srv__Audio_Response(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ymrobot_msgs
size_t max_serialized_size_key_ymrobot_msgs__srv__Audio_Event(
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
  // Field name: info
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_service_msgs__msg__ServiceEventInfo(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: request
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_ymrobot_msgs__srv__Audio_Request(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: response
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_ymrobot_msgs__srv__Audio_Response(
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
    using DataType = ymrobot_msgs__srv__Audio_Event;
    is_plain =
      (
      offsetof(DataType, response) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _Audio_Event__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const ymrobot_msgs__srv__Audio_Event * ros_message = static_cast<const ymrobot_msgs__srv__Audio_Event *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_ymrobot_msgs__srv__Audio_Event(ros_message, cdr);
}

static bool _Audio_Event__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  ymrobot_msgs__srv__Audio_Event * ros_message = static_cast<ymrobot_msgs__srv__Audio_Event *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_ymrobot_msgs__srv__Audio_Event(cdr, ros_message);
}

static uint32_t _Audio_Event__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_ymrobot_msgs__srv__Audio_Event(
      untyped_ros_message, 0));
}

static size_t _Audio_Event__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ymrobot_msgs__srv__Audio_Event(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Audio_Event = {
  "ymrobot_msgs::srv",
  "Audio_Event",
  _Audio_Event__cdr_serialize,
  _Audio_Event__cdr_deserialize,
  _Audio_Event__get_serialized_size,
  _Audio_Event__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _Audio_Event__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Audio_Event,
  get_message_typesupport_handle_function,
  &ymrobot_msgs__srv__Audio_Event__get_type_hash,
  &ymrobot_msgs__srv__Audio_Event__get_type_description,
  &ymrobot_msgs__srv__Audio_Event__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ymrobot_msgs, srv, Audio_Event)() {
  return &_Audio_Event__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "ymrobot_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ymrobot_msgs/srv/audio.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t Audio__callbacks = {
  "ymrobot_msgs::srv",
  "Audio",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ymrobot_msgs, srv, Audio_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ymrobot_msgs, srv, Audio_Response)(),
};

static rosidl_service_type_support_t Audio__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &Audio__callbacks,
  get_service_typesupport_handle_function,
  &_Audio_Request__type_support,
  &_Audio_Response__type_support,
  &_Audio_Event__type_support,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    ymrobot_msgs,
    srv,
    Audio
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    ymrobot_msgs,
    srv,
    Audio
  ),
  &ymrobot_msgs__srv__Audio__get_type_hash,
  &ymrobot_msgs__srv__Audio__get_type_description,
  &ymrobot_msgs__srv__Audio__get_type_description_sources,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ymrobot_msgs, srv, Audio)() {
  return &Audio__handle;
}

#if defined(__cplusplus)
}
#endif
