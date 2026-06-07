// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ymrobot_msgs:msg/ImageVideo.idl
// generated code does not contain a copyright notice

#include "ymrobot_msgs/msg/detail/image_video__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ymrobot_msgs
const rosidl_type_hash_t *
ymrobot_msgs__msg__ImageVideo__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xca, 0xeb, 0x10, 0xf1, 0x97, 0x5d, 0x8b, 0xca,
      0xc4, 0xcd, 0x74, 0x28, 0xa4, 0x3e, 0x7c, 0xd2,
      0x56, 0x4e, 0xc8, 0xff, 0x52, 0x38, 0xf6, 0x47,
      0x3c, 0xd9, 0xc6, 0x7a, 0x91, 0x4a, 0x30, 0x3a,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ymrobot_msgs__msg__ImageVideo__TYPE_NAME[] = "ymrobot_msgs/msg/ImageVideo";

// Define type names, field names, and default values
static char ymrobot_msgs__msg__ImageVideo__FIELD_NAME__camera_task_type[] = "camera_task_type";
static char ymrobot_msgs__msg__ImageVideo__FIELD_NAME__number_of_photos[] = "number_of_photos";
static char ymrobot_msgs__msg__ImageVideo__FIELD_NAME__photos_interval[] = "photos_interval";
static char ymrobot_msgs__msg__ImageVideo__FIELD_NAME__video_recording_time[] = "video_recording_time";
static char ymrobot_msgs__msg__ImageVideo__FIELD_NAME__detect_target_name[] = "detect_target_name";

static rosidl_runtime_c__type_description__Field ymrobot_msgs__msg__ImageVideo__FIELDS[] = {
  {
    {ymrobot_msgs__msg__ImageVideo__FIELD_NAME__camera_task_type, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__msg__ImageVideo__FIELD_NAME__number_of_photos, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__msg__ImageVideo__FIELD_NAME__photos_interval, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__msg__ImageVideo__FIELD_NAME__video_recording_time, 20, 20},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__msg__ImageVideo__FIELD_NAME__detect_target_name, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ymrobot_msgs__msg__ImageVideo__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ymrobot_msgs__msg__ImageVideo__TYPE_NAME, 27, 27},
      {ymrobot_msgs__msg__ImageVideo__FIELDS, 5, 5},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint8                       camera_task_type        # \\xe7\\x9b\\xb8\\xe6\\x9c\\xba\\xe4\\xbb\\xbb\\xe5\\x8a\\xa1\\xe7\\xb1\\xbb\\xe5\\x9e\\x8b 0\\xef\\xbc\\x9a\\xe6\\x8b\\x8d\\xe7\\x85\\xa7 1\\xef\\xbc\\x9a\\xe5\\xbd\\x95\\xe5\\x88\\xb6\\xe8\\xa7\\x86\\xe9\\xa2\\x91 2\\xef\\xbc\\x9a\\xe6\\x8b\\x8d\\xe7\\x85\\xa7\\xe5\\xb9\\xb6\\xe5\\xbd\\x95\\xe5\\x88\\xb6\\xe8\\xa7\\x86\\xe9\\xa2\\x91 3\\xef\\xbc\\x9a\\xe7\\x9b\\xae\\xe6\\xa0\\x87\\xe6\\xa3\\x80\\xe6\\xb5\\x8b\n"
  "uint8                       number_of_photos        # \\xe7\\x9b\\xb8\\xe6\\x9c\\xba\\xe6\\x8b\\x8d\\xe7\\x85\\xa7\\xe6\\x95\\xb0\\xe9\\x87\\x8f\n"
  "uint8                       photos_interval         # \\xe6\\x8b\\x8d\\xe7\\x85\\xa7\\xe9\\x97\\xb4\\xe9\\x9a\\x94 ms\n"
  "uint8                       video_recording_time    # \\xe5\\xbd\\x95\\xe5\\x88\\xb6\\xe8\\xa7\\x86\\xe9\\xa2\\x91\\xe6\\x97\\xb6\\xe9\\x95\\xbf\n"
  "string                       detect_target_name       # 3\\xef\\xbc\\x9a\\xe7\\x9b\\xae\\xe6\\xa0\\x87\\xe6\\xa3\\x80\\xe6\\xb5\\x8b";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ymrobot_msgs__msg__ImageVideo__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ymrobot_msgs__msg__ImageVideo__TYPE_NAME, 27, 27},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 336, 336},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ymrobot_msgs__msg__ImageVideo__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ymrobot_msgs__msg__ImageVideo__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
