// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ymrobot_msgs:msg/TaskStatusCode.idl
// generated code does not contain a copyright notice

#include "ymrobot_msgs/msg/detail/task_status_code__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ymrobot_msgs
const rosidl_type_hash_t *
ymrobot_msgs__msg__TaskStatusCode__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x71, 0xf0, 0xdf, 0xbb, 0xf2, 0xe1, 0xcb, 0x80,
      0x08, 0x3a, 0xd6, 0x69, 0x31, 0x01, 0x22, 0x61,
      0x0d, 0x86, 0xc6, 0x45, 0xfd, 0x17, 0xf9, 0x02,
      0xe1, 0xfd, 0x79, 0x16, 0xe1, 0xc4, 0x88, 0xe4,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ymrobot_msgs__msg__TaskStatusCode__TYPE_NAME[] = "ymrobot_msgs/msg/TaskStatusCode";

// Define type names, field names, and default values
static char ymrobot_msgs__msg__TaskStatusCode__FIELD_NAME__structure_needs_at_least_one_member[] = "structure_needs_at_least_one_member";

static rosidl_runtime_c__type_description__Field ymrobot_msgs__msg__TaskStatusCode__FIELDS[] = {
  {
    {ymrobot_msgs__msg__TaskStatusCode__FIELD_NAME__structure_needs_at_least_one_member, 35, 35},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ymrobot_msgs__msg__TaskStatusCode__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ymrobot_msgs__msg__TaskStatusCode__TYPE_NAME, 31, 31},
      {ymrobot_msgs__msg__TaskStatusCode__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Task status code from robot to platform\n"
  "uint8   RUNNING     =   0   # 0x00  \\xe4\\xbb\\xbb\\xe5\\x8a\\xa1\\xe6\\x89\\xa7\\xe8\\xa1\\x8c\\xe4\\xb8\\xad\n"
  "uint8   DONDE       =   1   # 0x01  \\xe4\\xbb\\xbb\\xe5\\x8a\\xa1\\xe5\\xb7\\xb2\\xe5\\xae\\x8c\\xe6\\x88\\x90\n"
  "uint8   SUCCEEDED   =   2   # 0x02  \\xe4\\xbb\\xbb\\xe5\\x8a\\xa1\\xe6\\x88\\x90\\xe5\\x8a\\x9f\n"
  "uint8   ABORTED     =   3   # 0x03  \\xe4\\xbb\\xbb\\xe5\\x8a\\xa1\\xe5\\xa4\\xb1\\xe8\\xb4\\xa5\n"
  "uint8   CANCLE      =   4   # 0x04  \\xe4\\xbb\\xbb\\xe5\\x8a\\xa1\\xe5\\x8f\\x96\\xe6\\xb6\\x88\n"
  "uint8   HELD        =   5   # 0x05  \\xe4\\xbb\\xbb\\xe5\\x8a\\xa1\\xe6\\x8c\\x82\\xe8\\xb5\\xb7/\\xe4\\xbb\\xbb\\xe5\\x8a\\xa1\\xe7\\xad\\x89\\xe5\\xbe\\x85\n"
  "uint8   REFUSE      =   6   # 0x05  \\xe4\\xbb\\xbb\\xe5\\x8a\\xa1\\xe6\\x8b\\x92\\xe7\\xbb\\x9d\n"
  "uint8   NONE        =   7   # 0x06  \\xe5\\xbd\\x93\\xe5\\x89\\x8d\\xe6\\xb2\\xa1\\xe6\\x9c\\x89\\xe4\\xbb\\xbb\\xe5\\x8a\\xa1";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ymrobot_msgs__msg__TaskStatusCode__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ymrobot_msgs__msg__TaskStatusCode__TYPE_NAME, 31, 31},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 379, 379},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ymrobot_msgs__msg__TaskStatusCode__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ymrobot_msgs__msg__TaskStatusCode__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
