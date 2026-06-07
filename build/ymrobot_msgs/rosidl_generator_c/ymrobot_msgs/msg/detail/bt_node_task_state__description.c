// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ymrobot_msgs:msg/BTNodeTaskState.idl
// generated code does not contain a copyright notice

#include "ymrobot_msgs/msg/detail/bt_node_task_state__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ymrobot_msgs
const rosidl_type_hash_t *
ymrobot_msgs__msg__BTNodeTaskState__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x2f, 0x9b, 0xe6, 0xf2, 0xdb, 0xbf, 0x60, 0xac,
      0xd2, 0xb2, 0x4c, 0xbc, 0xae, 0x01, 0x4a, 0xf9,
      0x08, 0xdd, 0x0b, 0xdb, 0x57, 0xd9, 0x78, 0x63,
      0x0f, 0x55, 0xa0, 0xe7, 0xb6, 0xbb, 0x60, 0x3b,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ymrobot_msgs__msg__BTNodeTaskState__TYPE_NAME[] = "ymrobot_msgs/msg/BTNodeTaskState";

// Define type names, field names, and default values
static char ymrobot_msgs__msg__BTNodeTaskState__FIELD_NAME__task_id[] = "task_id";
static char ymrobot_msgs__msg__BTNodeTaskState__FIELD_NAME__task_type[] = "task_type";
static char ymrobot_msgs__msg__BTNodeTaskState__FIELD_NAME__node_name[] = "node_name";
static char ymrobot_msgs__msg__BTNodeTaskState__FIELD_NAME__node_task_state[] = "node_task_state";
static char ymrobot_msgs__msg__BTNodeTaskState__FIELD_NAME__node_task_error[] = "node_task_error";
static char ymrobot_msgs__msg__BTNodeTaskState__FIELD_NAME__node_task_error_message[] = "node_task_error_message";
static char ymrobot_msgs__msg__BTNodeTaskState__FIELD_NAME__node_action_content[] = "node_action_content";

static rosidl_runtime_c__type_description__Field ymrobot_msgs__msg__BTNodeTaskState__FIELDS[] = {
  {
    {ymrobot_msgs__msg__BTNodeTaskState__FIELD_NAME__task_id, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__msg__BTNodeTaskState__FIELD_NAME__task_type, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__msg__BTNodeTaskState__FIELD_NAME__node_name, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__msg__BTNodeTaskState__FIELD_NAME__node_task_state, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__msg__BTNodeTaskState__FIELD_NAME__node_task_error, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__msg__BTNodeTaskState__FIELD_NAME__node_task_error_message, 23, 23},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__msg__BTNodeTaskState__FIELD_NAME__node_action_content, 19, 19},
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
ymrobot_msgs__msg__BTNodeTaskState__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ymrobot_msgs__msg__BTNodeTaskState__TYPE_NAME, 32, 32},
      {ymrobot_msgs__msg__BTNodeTaskState__FIELDS, 7, 7},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# BTNodeState.msg\n"
  "string task_id                    # \\xe4\\xbb\\xbb\\xe5\\x8a\\xa1\\xe7\\xb1\\xbb\\xe5\\x9e\\x8b -- 1. guide_explanation \\xe7\\xb1\\xbb\\xe4\\xbc\\xbc\\xe8\\xa1\\x8c\\xe4\\xb8\\xba\\xe6\\xa0\\x91\\xe7\\x9a\\x84\\xe4\\xbb\\xbb\\xe5\\x8a\\xa1\\xe7\\xb1\\xbb\\xe5\\x9e\\x8b\n"
  "string task_type                    # \\xe4\\xbb\\xbb\\xe5\\x8a\\xa1\\xe7\\xb1\\xbb\\xe5\\x9e\\x8b -- 1. guide_explanation \\xe7\\xb1\\xbb\\xe4\\xbc\\xbc\\xe8\\xa1\\x8c\\xe4\\xb8\\xba\\xe6\\xa0\\x91\\xe7\\x9a\\x84\\xe4\\xbb\\xbb\\xe5\\x8a\\xa1\\xe7\\xb1\\xbb\\xe5\\x9e\\x8b\n"
  "string node_name                    # \\xe8\\x8a\\x82\\xe7\\x82\\xb9\\xe5\\x90\\x8d\\xe7\\xa7\\xb0 \\xe5\\xaf\\xbc\\xe8\\x88\\xaa\\xe3\\x80\\x81\\xe8\\xaf\\xad\\xe9\\x9f\\xb3\\xe6\\x92\\xad\\xe6\\x8a\\xa5\\xe3\\x80\\x81\\xe6\\x8b\\x8d\\xe7\\x85\\xa7\\xe3\\x80\\x81\\xe5\\xbd\\x95\\xe5\\x83\\x8f\n"
  "string node_task_state              # started, successed, failure, running\n"
  "string node_task_error              # \\xe9\\x94\\x99\\xe8\\xaf\\xaf\\xe4\\xbb\\xa3\\xe7\\xa0\\x81\n"
  "string node_task_error_message      # \\xe9\\x94\\x99\\xe8\\xaf\\xaf\\xe6\\x8f\\x8f\\xe8\\xbf\\xb0\n"
  "string node_action_content          # \\xe5\\x8a\\xa8\\xe4\\xbd\\x9c\\xe5\\x86\\x85\\xe5\\xae\\xb9";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ymrobot_msgs__msg__BTNodeTaskState__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ymrobot_msgs__msg__BTNodeTaskState__TYPE_NAME, 32, 32},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 432, 432},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ymrobot_msgs__msg__BTNodeTaskState__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ymrobot_msgs__msg__BTNodeTaskState__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
