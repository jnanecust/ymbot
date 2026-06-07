// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ymrobot_msgs:msg/MapManage.idl
// generated code does not contain a copyright notice

#include "ymrobot_msgs/msg/detail/map_manage__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ymrobot_msgs
const rosidl_type_hash_t *
ymrobot_msgs__msg__MapManage__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x86, 0xd7, 0x3c, 0xdb, 0x93, 0xf3, 0x9d, 0xb6,
      0xd5, 0xcc, 0x74, 0xc4, 0x4f, 0x1d, 0x60, 0x17,
      0x1b, 0xa1, 0xa9, 0x42, 0xdb, 0x49, 0x8b, 0x54,
      0xf5, 0x4c, 0xe8, 0xbf, 0x0f, 0x2f, 0x05, 0x53,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "ymrobot_msgs/msg/detail/map_task_command__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t ymrobot_msgs__msg__MapTaskCommand__EXPECTED_HASH = {1, {
    0xac, 0xc6, 0x22, 0x32, 0xa7, 0x85, 0xd3, 0xf5,
    0x78, 0x0d, 0x33, 0xc5, 0xec, 0xa3, 0xa8, 0xdd,
    0xfb, 0x45, 0xc0, 0x6d, 0xbe, 0xa8, 0xfe, 0xbe,
    0x42, 0xeb, 0x4f, 0xc2, 0x0f, 0x7f, 0x00, 0x09,
  }};
#endif

static char ymrobot_msgs__msg__MapManage__TYPE_NAME[] = "ymrobot_msgs/msg/MapManage";
static char ymrobot_msgs__msg__MapTaskCommand__TYPE_NAME[] = "ymrobot_msgs/msg/MapTaskCommand";

// Define type names, field names, and default values
static char ymrobot_msgs__msg__MapManage__FIELD_NAME__map_task[] = "map_task";
static char ymrobot_msgs__msg__MapManage__FIELD_NAME__pcd_file[] = "pcd_file";
static char ymrobot_msgs__msg__MapManage__FIELD_NAME__pgm_file[] = "pgm_file";

static rosidl_runtime_c__type_description__Field ymrobot_msgs__msg__MapManage__FIELDS[] = {
  {
    {ymrobot_msgs__msg__MapManage__FIELD_NAME__map_task, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ymrobot_msgs__msg__MapTaskCommand__TYPE_NAME, 31, 31},
    },
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__msg__MapManage__FIELD_NAME__pcd_file, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__msg__MapManage__FIELD_NAME__pgm_file, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription ymrobot_msgs__msg__MapManage__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {ymrobot_msgs__msg__MapTaskCommand__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ymrobot_msgs__msg__MapManage__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ymrobot_msgs__msg__MapManage__TYPE_NAME, 26, 26},
      {ymrobot_msgs__msg__MapManage__FIELDS, 3, 3},
    },
    {ymrobot_msgs__msg__MapManage__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&ymrobot_msgs__msg__MapTaskCommand__EXPECTED_HASH, ymrobot_msgs__msg__MapTaskCommand__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = ymrobot_msgs__msg__MapTaskCommand__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "MapTaskCommand map_task\n"
  "string pcd_file\n"
  "string pgm_file";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ymrobot_msgs__msg__MapManage__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ymrobot_msgs__msg__MapManage__TYPE_NAME, 26, 26},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 55, 55},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ymrobot_msgs__msg__MapManage__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ymrobot_msgs__msg__MapManage__get_individual_type_description_source(NULL),
    sources[1] = *ymrobot_msgs__msg__MapTaskCommand__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
