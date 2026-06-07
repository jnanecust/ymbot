// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ymrobot_msgs:msg/SlamCommand.idl
// generated code does not contain a copyright notice

#include "ymrobot_msgs/msg/detail/slam_command__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ymrobot_msgs
const rosidl_type_hash_t *
ymrobot_msgs__msg__SlamCommand__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xa7, 0xeb, 0x73, 0x54, 0x20, 0x37, 0x79, 0x8a,
      0x58, 0xfb, 0x37, 0xce, 0x4e, 0x84, 0x4c, 0x02,
      0xe7, 0xb7, 0xe1, 0xfc, 0x9c, 0x6c, 0xac, 0xf2,
      0xaa, 0x7e, 0x02, 0x25, 0xf5, 0x13, 0x53, 0x51,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ymrobot_msgs__msg__SlamCommand__TYPE_NAME[] = "ymrobot_msgs/msg/SlamCommand";

// Define type names, field names, and default values
static char ymrobot_msgs__msg__SlamCommand__FIELD_NAME__mapping[] = "mapping";
static char ymrobot_msgs__msg__SlamCommand__FIELD_NAME__relocalize[] = "relocalize";
static char ymrobot_msgs__msg__SlamCommand__FIELD_NAME__start[] = "start";
static char ymrobot_msgs__msg__SlamCommand__FIELD_NAME__stop[] = "stop";

static rosidl_runtime_c__type_description__Field ymrobot_msgs__msg__SlamCommand__FIELDS[] = {
  {
    {ymrobot_msgs__msg__SlamCommand__FIELD_NAME__mapping, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__msg__SlamCommand__FIELD_NAME__relocalize, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__msg__SlamCommand__FIELD_NAME__start, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__msg__SlamCommand__FIELD_NAME__stop, 4, 4},
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
ymrobot_msgs__msg__SlamCommand__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ymrobot_msgs__msg__SlamCommand__TYPE_NAME, 28, 28},
      {ymrobot_msgs__msg__SlamCommand__FIELDS, 4, 4},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string mapping\n"
  "string relocalize\n"
  "\n"
  "string start\n"
  "string stop";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ymrobot_msgs__msg__SlamCommand__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ymrobot_msgs__msg__SlamCommand__TYPE_NAME, 28, 28},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 58, 58},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ymrobot_msgs__msg__SlamCommand__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ymrobot_msgs__msg__SlamCommand__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
