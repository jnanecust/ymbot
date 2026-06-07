// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ymrobot_msgs:msg/DotPointsList.idl
// generated code does not contain a copyright notice

#include "ymrobot_msgs/msg/detail/dot_points_list__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ymrobot_msgs
const rosidl_type_hash_t *
ymrobot_msgs__msg__DotPointsList__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x33, 0x63, 0xa0, 0x0d, 0xbe, 0xb3, 0x33, 0x8f,
      0xd9, 0x9b, 0xad, 0xae, 0x92, 0xf4, 0xff, 0xf8,
      0x61, 0x0d, 0x7b, 0x55, 0x0a, 0x33, 0x2b, 0x93,
      0x1e, 0x7c, 0x94, 0xfd, 0xb3, 0x8c, 0x99, 0x7a,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "ymrobot_msgs/msg/detail/dot_points__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t ymrobot_msgs__msg__DotPoints__EXPECTED_HASH = {1, {
    0x6a, 0xa4, 0xe7, 0x5e, 0x37, 0xa4, 0x2a, 0xb5,
    0x68, 0xf7, 0x97, 0x22, 0xe8, 0xc6, 0xb6, 0xad,
    0x77, 0xc6, 0x4b, 0x1e, 0x3a, 0xdf, 0x44, 0xe1,
    0x72, 0x5e, 0x3d, 0x89, 0x66, 0x5e, 0xce, 0x14,
  }};
#endif

static char ymrobot_msgs__msg__DotPointsList__TYPE_NAME[] = "ymrobot_msgs/msg/DotPointsList";
static char ymrobot_msgs__msg__DotPoints__TYPE_NAME[] = "ymrobot_msgs/msg/DotPoints";

// Define type names, field names, and default values
static char ymrobot_msgs__msg__DotPointsList__FIELD_NAME__dot_points_list[] = "dot_points_list";

static rosidl_runtime_c__type_description__Field ymrobot_msgs__msg__DotPointsList__FIELDS[] = {
  {
    {ymrobot_msgs__msg__DotPointsList__FIELD_NAME__dot_points_list, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {ymrobot_msgs__msg__DotPoints__TYPE_NAME, 26, 26},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription ymrobot_msgs__msg__DotPointsList__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {ymrobot_msgs__msg__DotPoints__TYPE_NAME, 26, 26},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ymrobot_msgs__msg__DotPointsList__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ymrobot_msgs__msg__DotPointsList__TYPE_NAME, 30, 30},
      {ymrobot_msgs__msg__DotPointsList__FIELDS, 1, 1},
    },
    {ymrobot_msgs__msg__DotPointsList__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&ymrobot_msgs__msg__DotPoints__EXPECTED_HASH, ymrobot_msgs__msg__DotPoints__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = ymrobot_msgs__msg__DotPoints__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "DotPoints[] dot_points_list  # \\xe6\\x89\\x93\\xe7\\x82\\xb9\\xe5\\x88\\x97\\xe8\\xa1\\xa8";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ymrobot_msgs__msg__DotPointsList__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ymrobot_msgs__msg__DotPointsList__TYPE_NAME, 30, 30},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 35, 35},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ymrobot_msgs__msg__DotPointsList__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ymrobot_msgs__msg__DotPointsList__get_individual_type_description_source(NULL),
    sources[1] = *ymrobot_msgs__msg__DotPoints__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
