// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ymrobot_msgs:msg/VoiceMessage.idl
// generated code does not contain a copyright notice

#include "ymrobot_msgs/msg/detail/voice_message__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ymrobot_msgs
const rosidl_type_hash_t *
ymrobot_msgs__msg__VoiceMessage__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x0d, 0x4d, 0x67, 0x71, 0xd3, 0x88, 0xb8, 0x31,
      0xa2, 0x9f, 0x89, 0x01, 0xc2, 0xb8, 0x5f, 0x1e,
      0xdb, 0x64, 0x3d, 0x38, 0x2d, 0x5a, 0x39, 0x48,
      0x4f, 0x45, 0x86, 0x8f, 0xf3, 0xa2, 0xd9, 0xba,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ymrobot_msgs__msg__VoiceMessage__TYPE_NAME[] = "ymrobot_msgs/msg/VoiceMessage";

// Define type names, field names, and default values
static char ymrobot_msgs__msg__VoiceMessage__FIELD_NAME__audio_task_type[] = "audio_task_type";
static char ymrobot_msgs__msg__VoiceMessage__FIELD_NAME__fixed_audio_name[] = "fixed_audio_name";
static char ymrobot_msgs__msg__VoiceMessage__FIELD_NAME__timbre[] = "timbre";
static char ymrobot_msgs__msg__VoiceMessage__FIELD_NAME__synthetic_audio_txt[] = "synthetic_audio_txt";
static char ymrobot_msgs__msg__VoiceMessage__FIELD_NAME__synthetic_audio_title[] = "synthetic_audio_title";
static char ymrobot_msgs__msg__VoiceMessage__FIELD_NAME__delete_fixed_audio[] = "delete_fixed_audio";
static char ymrobot_msgs__msg__VoiceMessage__FIELD_NAME__play_online_audio[] = "play_online_audio";

static rosidl_runtime_c__type_description__Field ymrobot_msgs__msg__VoiceMessage__FIELDS[] = {
  {
    {ymrobot_msgs__msg__VoiceMessage__FIELD_NAME__audio_task_type, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__msg__VoiceMessage__FIELD_NAME__fixed_audio_name, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__msg__VoiceMessage__FIELD_NAME__timbre, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__msg__VoiceMessage__FIELD_NAME__synthetic_audio_txt, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__msg__VoiceMessage__FIELD_NAME__synthetic_audio_title, 21, 21},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__msg__VoiceMessage__FIELD_NAME__delete_fixed_audio, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__msg__VoiceMessage__FIELD_NAME__play_online_audio, 17, 17},
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
ymrobot_msgs__msg__VoiceMessage__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ymrobot_msgs__msg__VoiceMessage__TYPE_NAME, 29, 29},
      {ymrobot_msgs__msg__VoiceMessage__FIELDS, 7, 7},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint8                       audio_task_type     # \\xe8\\xa1\\xa8\\xe6\\x83\\x85\\xe4\\xbb\\xbb\\xe5\\x8a\\xa1\\xe7\\xb1\\xbb\\xe5\\x9e\\x8b 0--\\xe6\\x92\\xad\\xe6\\x94\\xbe\\xe5\\x9b\\xba\\xe5\\xae\\x9a\\xe9\\x9f\\xb3\\xe9\\xa2\\x91\\xe3\\x80\\x82 1: \\xe5\\x90\\x88\\xe6\\x88\\x90\\xe9\\x9f\\xb3\\xe9\\xa2\\x91 \\xe3\\x80\\x82 2: \\xe5\\x88\\xa0\\xe9\\x99\\xa4\\xe5\\x9b\\xba\\xe5\\xae\\x9a\\xe9\\x9f\\xb3\\xe9\\xa2\\x91  3\\xef\\xbc\\x9a\\xe4\\xb8\\x8a\\xe4\\xbc\\xa0\\xe5\\xaf\\xb9\\xe8\\xaf\\x9d\\xe8\\xae\\xb0\\xe5\\xbd\\x95  4. \\xe6\\x92\\xad\\xe6\\x94\\xbe\\xe5\\x9c\\xa8\\xe7\\xba\\xbf\\xe9\\x9f\\xb3\\xe9\\xa2\\x91 -- \\xe9\\x80\\x9a\\xe8\\xbf\\x87\\xe2\\x80\\x9cstring\\xe7\\xb1\\xbb\\xe5\\x9e\\x8b\\xe2\\x80\\x9d\n"
  "string                      fixed_audio_name    # \\xe6\\x92\\xad\\xe6\\x94\\xbe\\xe5\\x9b\\xba\\xe5\\xae\\x9a\\xe9\\x9f\\xb3\\xe9\\xa2\\x91  string\\xe7\\xb1\\xbb\\xe5\\x9e\\x8b string\\xe7\\xb1\\xbb\\xe5\\x9e\\x8b\\xe7\\x9a\\x840\n"
  "string                      timbre                      # \\xe9\\x9f\\xb3\\xe8\\x89\\xb2 0\\xef\\xbc\\x9a\\xe7\\x94\\xb7  1\\xef\\xbc\\x9a\\xe5\\xa5\\xb3\\xe7\\x94\\x9f\n"
  "string                      synthetic_audio_txt         # \\xe5\\x90\\x88\\xe6\\x88\\x90\\xe9\\x9f\\xb3\\xe9\\xa2\\x91\\xe5\\x86\\x85\\xe5\\xae\\xb9\n"
  "string                      synthetic_audio_title       # \\xe5\\x90\\x88\\xe6\\x88\\x90\\xe9\\x9f\\xb3\\xe9\\xa2\\x91\\xe6\\xa0\\x87\\xe9\\xa2\\x98\n"
  "string                      delete_fixed_audio          # \\xe5\\x88\\xa0\\xe9\\x99\\xa4\\xe5\\x9b\\xba\\xe5\\xae\\x9a\\xe9\\x9f\\xb3\\xe9\\xa2\\x91\n"
  "string                      play_online_audio           # \\xe6\\x92\\xad\\xe6\\x94\\xbe\\xe5\\x9c\\xa8\\xe7\\xba\\xbf\\xe9\\x9f\\xb3\\xe9\\xa2\\x91";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ymrobot_msgs__msg__VoiceMessage__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ymrobot_msgs__msg__VoiceMessage__TYPE_NAME, 29, 29},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 534, 534},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ymrobot_msgs__msg__VoiceMessage__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ymrobot_msgs__msg__VoiceMessage__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
