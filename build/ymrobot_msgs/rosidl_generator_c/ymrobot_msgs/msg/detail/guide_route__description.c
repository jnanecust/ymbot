// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ymrobot_msgs:msg/GuideRoute.idl
// generated code does not contain a copyright notice

#include "ymrobot_msgs/msg/detail/guide_route__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ymrobot_msgs
const rosidl_type_hash_t *
ymrobot_msgs__msg__GuideRoute__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xde, 0xae, 0xd0, 0x67, 0xf2, 0xd9, 0x07, 0xb5,
      0xdf, 0x5f, 0xf6, 0x0a, 0x33, 0x79, 0xb2, 0xc2,
      0x96, 0x6c, 0x8f, 0x43, 0x5f, 0xd0, 0x7d, 0x91,
      0x74, 0x4e, 0xe3, 0xaf, 0x63, 0x12, 0xd4, 0xd0,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ymrobot_msgs__msg__GuideRoute__TYPE_NAME[] = "ymrobot_msgs/msg/GuideRoute";

// Define type names, field names, and default values
static char ymrobot_msgs__msg__GuideRoute__FIELD_NAME__mark_points_list[] = "mark_points_list";
static char ymrobot_msgs__msg__GuideRoute__FIELD_NAME__audios_list[] = "audios_list";

static rosidl_runtime_c__type_description__Field ymrobot_msgs__msg__GuideRoute__FIELDS[] = {
  {
    {ymrobot_msgs__msg__GuideRoute__FIELD_NAME__mark_points_list, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__msg__GuideRoute__FIELD_NAME__audios_list, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ymrobot_msgs__msg__GuideRoute__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ymrobot_msgs__msg__GuideRoute__TYPE_NAME, 27, 27},
      {ymrobot_msgs__msg__GuideRoute__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string[] mark_points_list\n"
  "string[] audios_list";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ymrobot_msgs__msg__GuideRoute__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ymrobot_msgs__msg__GuideRoute__TYPE_NAME, 27, 27},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 46, 46},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ymrobot_msgs__msg__GuideRoute__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ymrobot_msgs__msg__GuideRoute__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
