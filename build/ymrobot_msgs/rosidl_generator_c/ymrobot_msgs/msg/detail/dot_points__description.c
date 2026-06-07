// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ymrobot_msgs:msg/DotPoints.idl
// generated code does not contain a copyright notice

#include "ymrobot_msgs/msg/detail/dot_points__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ymrobot_msgs
const rosidl_type_hash_t *
ymrobot_msgs__msg__DotPoints__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x6a, 0xa4, 0xe7, 0x5e, 0x37, 0xa4, 0x2a, 0xb5,
      0x68, 0xf7, 0x97, 0x22, 0xe8, 0xc6, 0xb6, 0xad,
      0x77, 0xc6, 0x4b, 0x1e, 0x3a, 0xdf, 0x44, 0xe1,
      0x72, 0x5e, 0x3d, 0x89, 0x66, 0x5e, 0xce, 0x14,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ymrobot_msgs__msg__DotPoints__TYPE_NAME[] = "ymrobot_msgs/msg/DotPoints";

// Define type names, field names, and default values
static char ymrobot_msgs__msg__DotPoints__FIELD_NAME__action[] = "action";
static char ymrobot_msgs__msg__DotPoints__FIELD_NAME__pose_name[] = "pose_name";
static char ymrobot_msgs__msg__DotPoints__FIELD_NAME__map_name[] = "map_name";
static char ymrobot_msgs__msg__DotPoints__FIELD_NAME__pose_describe[] = "pose_describe";

static rosidl_runtime_c__type_description__Field ymrobot_msgs__msg__DotPoints__FIELDS[] = {
  {
    {ymrobot_msgs__msg__DotPoints__FIELD_NAME__action, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__msg__DotPoints__FIELD_NAME__pose_name, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__msg__DotPoints__FIELD_NAME__map_name, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__msg__DotPoints__FIELD_NAME__pose_describe, 13, 13},
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
ymrobot_msgs__msg__DotPoints__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ymrobot_msgs__msg__DotPoints__TYPE_NAME, 26, 26},
      {ymrobot_msgs__msg__DotPoints__FIELDS, 4, 4},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint8 SAVE                 = 0  # \\xe4\\xbf\\x9d\\xe5\\xad\\x98\\xe7\\x82\\xb9\\xe4\\xbd\\x8d\n"
  "uint8 DELETE               = 1  # \\xe5\\x88\\xa0\\xe9\\x99\\xa4\\xe7\\x82\\xb9\\xe4\\xbd\\x8d\n"
  "\n"
  "uint8   action              # \\xe6\\x89\\x93\\xe7\\x82\\xb9\\xe5\\x8a\\xa8\\xe4\\xbd\\x9c\n"
  "string  pose_name           # \\xe5\\x9d\\x90\\xe6\\xa0\\x87\\xe7\\x82\\xb9\\xe4\\xbd\\x8d\\xe5\\x90\\x8d\\xe7\\xa7\\xb0\n"
  "string  map_name            # \\xe5\\x9c\\xb0\\xe5\\x9b\\xbe\\xe5\\x90\\x8d\\xe7\\xa7\\xb0\n"
  "string  pose_describe       # \\xe7\\x82\\xb9\\xe4\\xbd\\x8d\\xe7\\xae\\x80\\xe5\\x8d\\x95\\xe6\\x8f\\x8f\\xe8\\xbf\\xb0";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ymrobot_msgs__msg__DotPoints__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ymrobot_msgs__msg__DotPoints__TYPE_NAME, 26, 26},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 223, 223},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ymrobot_msgs__msg__DotPoints__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ymrobot_msgs__msg__DotPoints__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
