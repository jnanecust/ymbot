// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ymrobot_msgs:msg/TaskStatus.idl
// generated code does not contain a copyright notice

#include "ymrobot_msgs/msg/detail/task_status__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ymrobot_msgs
const rosidl_type_hash_t *
ymrobot_msgs__msg__TaskStatus__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xb9, 0x42, 0x04, 0x74, 0x5e, 0x19, 0x32, 0xfd,
      0x87, 0x74, 0x92, 0x2b, 0x55, 0x75, 0x8e, 0xd5,
      0xe0, 0x34, 0xf0, 0x6d, 0x9b, 0xb2, 0xf4, 0x56,
      0xf2, 0xf5, 0x4d, 0xbf, 0x49, 0x3b, 0xb8, 0x81,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ymrobot_msgs__msg__TaskStatus__TYPE_NAME[] = "ymrobot_msgs/msg/TaskStatus";

// Define type names, field names, and default values
static char ymrobot_msgs__msg__TaskStatus__FIELD_NAME__amr_id[] = "amr_id";
static char ymrobot_msgs__msg__TaskStatus__FIELD_NAME__task_id[] = "task_id";
static char ymrobot_msgs__msg__TaskStatus__FIELD_NAME__status[] = "status";
static char ymrobot_msgs__msg__TaskStatus__FIELD_NAME__text[] = "text";

static rosidl_runtime_c__type_description__Field ymrobot_msgs__msg__TaskStatus__FIELDS[] = {
  {
    {ymrobot_msgs__msg__TaskStatus__FIELD_NAME__amr_id, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__msg__TaskStatus__FIELD_NAME__task_id, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__msg__TaskStatus__FIELD_NAME__status, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__msg__TaskStatus__FIELD_NAME__text, 4, 4},
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
ymrobot_msgs__msg__TaskStatus__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ymrobot_msgs__msg__TaskStatus__TYPE_NAME, 27, 27},
      {ymrobot_msgs__msg__TaskStatus__FIELDS, 4, 4},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Task status from robot to platform\n"
  "\n"
  "string  amr_id      #\n"
  "string  task_id     #\\xe4\\xbb\\xbb\\xe5\\x8a\\xa1id\n"
  "uint8   status      # TaskStatusCode\n"
  "string  text";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ymrobot_msgs__msg__TaskStatus__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ymrobot_msgs__msg__TaskStatus__TYPE_NAME, 27, 27},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 135, 135},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ymrobot_msgs__msg__TaskStatus__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ymrobot_msgs__msg__TaskStatus__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
