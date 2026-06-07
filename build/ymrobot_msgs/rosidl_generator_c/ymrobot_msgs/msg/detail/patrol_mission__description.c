// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ymrobot_msgs:msg/PatrolMission.idl
// generated code does not contain a copyright notice

#include "ymrobot_msgs/msg/detail/patrol_mission__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ymrobot_msgs
const rosidl_type_hash_t *
ymrobot_msgs__msg__PatrolMission__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x48, 0xa4, 0x5f, 0x03, 0x0b, 0xec, 0x6c, 0x73,
      0x74, 0x26, 0x7b, 0xc2, 0x28, 0x59, 0x9e, 0xfd,
      0x91, 0x15, 0x30, 0x37, 0x04, 0x0c, 0xf1, 0x43,
      0x4d, 0x77, 0x77, 0x5a, 0xc9, 0xba, 0x50, 0xb5,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "ymrobot_msgs/msg/detail/image_video__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t ymrobot_msgs__msg__ImageVideo__EXPECTED_HASH = {1, {
    0xca, 0xeb, 0x10, 0xf1, 0x97, 0x5d, 0x8b, 0xca,
    0xc4, 0xcd, 0x74, 0x28, 0xa4, 0x3e, 0x7c, 0xd2,
    0x56, 0x4e, 0xc8, 0xff, 0x52, 0x38, 0xf6, 0x47,
    0x3c, 0xd9, 0xc6, 0x7a, 0x91, 0x4a, 0x30, 0x3a,
  }};
#endif

static char ymrobot_msgs__msg__PatrolMission__TYPE_NAME[] = "ymrobot_msgs/msg/PatrolMission";
static char ymrobot_msgs__msg__ImageVideo__TYPE_NAME[] = "ymrobot_msgs/msg/ImageVideo";

// Define type names, field names, and default values
static char ymrobot_msgs__msg__PatrolMission__FIELD_NAME__image_video_msg[] = "image_video_msg";
static char ymrobot_msgs__msg__PatrolMission__FIELD_NAME__is_audio_played_throughout_the_entire_process[] = "is_audio_played_throughout_the_entire_process";
static char ymrobot_msgs__msg__PatrolMission__FIELD_NAME__full_audio_name[] = "full_audio_name";
static char ymrobot_msgs__msg__PatrolMission__FIELD_NAME__is_the_entire_process_recorded[] = "is_the_entire_process_recorded";
static char ymrobot_msgs__msg__PatrolMission__FIELD_NAME__is_activate_the_nearby_point[] = "is_activate_the_nearby_point";
static char ymrobot_msgs__msg__PatrolMission__FIELD_NAME__nearby_point_radius[] = "nearby_point_radius";
static char ymrobot_msgs__msg__PatrolMission__FIELD_NAME__nav_name_list[] = "nav_name_list";

static rosidl_runtime_c__type_description__Field ymrobot_msgs__msg__PatrolMission__FIELDS[] = {
  {
    {ymrobot_msgs__msg__PatrolMission__FIELD_NAME__image_video_msg, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ymrobot_msgs__msg__ImageVideo__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__msg__PatrolMission__FIELD_NAME__is_audio_played_throughout_the_entire_process, 45, 45},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__msg__PatrolMission__FIELD_NAME__full_audio_name, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__msg__PatrolMission__FIELD_NAME__is_the_entire_process_recorded, 30, 30},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__msg__PatrolMission__FIELD_NAME__is_activate_the_nearby_point, 28, 28},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__msg__PatrolMission__FIELD_NAME__nearby_point_radius, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__msg__PatrolMission__FIELD_NAME__nav_name_list, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription ymrobot_msgs__msg__PatrolMission__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {ymrobot_msgs__msg__ImageVideo__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ymrobot_msgs__msg__PatrolMission__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ymrobot_msgs__msg__PatrolMission__TYPE_NAME, 30, 30},
      {ymrobot_msgs__msg__PatrolMission__FIELDS, 7, 7},
    },
    {ymrobot_msgs__msg__PatrolMission__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&ymrobot_msgs__msg__ImageVideo__EXPECTED_HASH, ymrobot_msgs__msg__ImageVideo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = ymrobot_msgs__msg__ImageVideo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "#\\xe5\\xb7\\xa1\\xe9\\x80\\xbb\\xe4\\xbb\\xbb\\xe5\\x8a\\xa1\\xe6\\xb6\\x88\\xe6\\x81\\xaf\n"
  "ImageVideo  image_video_msg                                 # \\xe5\\x9b\\xbe\\xe5\\x83\\x8f\\xe5\\x92\\x8c\\xe8\\xa7\\x86\\xe9\\xa2\\x91\\xe6\\xb6\\x88\\xe6\\x81\\xaf\n"
  "bool        is_audio_played_throughout_the_entire_process   # \\xe6\\x98\\xaf\\xe5\\x90\\xa6\\xe5\\x85\\xa8\\xe7\\xa8\\x8b\\xe6\\x92\\xad\\xe6\\x94\\xbe\\xe9\\x9f\\xb3\\xe9\\xa2\\x91\n"
  "string      full_audio_name                                 # \\xe5\\x85\\xa8\\xe7\\xa8\\x8b\\xe9\\x9f\\xb3\\xe9\\xa2\\x91\\xe6\\x96\\x87\\xe4\\xbb\\xb6\\xe5\\x90\\x8d\n"
  "bool        is_the_entire_process_recorded                  # \\xe6\\x98\\xaf\\xe5\\x90\\xa6\\xe5\\x85\\xa8\\xe7\\xa8\\x8b\\xe5\\xbd\\x95\\xe5\\x88\\xb6\n"
  "bool        is_activate_the_nearby_point                    # \\xe6\\x98\\xaf\\xe5\\x90\\xa6\\xe6\\xbf\\x80\\xe6\\xb4\\xbb\\xe9\\x99\\x84\\xe8\\xbf\\x91\\xe7\\x82\\xb9\n"
  "float32     nearby_point_radius                             # \\xe5\\xb0\\xb1\\xe8\\xbf\\x91\\xe7\\x82\\xb9\\xe8\\xb7\\x9d\\xe7\\xa6\\xbb\n"
  "string[]    nav_name_list                                   # \\xe5\\xaf\\xbc\\xe8\\x88\\xaa\\xe7\\x82\\xb9\\xe5\\x90\\x8d\\xe7\\xa7\\xb0\\xe5\\x88\\x97\\xe8\\xa1\\xa8";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ymrobot_msgs__msg__PatrolMission__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ymrobot_msgs__msg__PatrolMission__TYPE_NAME, 30, 30},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 495, 495},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ymrobot_msgs__msg__PatrolMission__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ymrobot_msgs__msg__PatrolMission__get_individual_type_description_source(NULL),
    sources[1] = *ymrobot_msgs__msg__ImageVideo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
