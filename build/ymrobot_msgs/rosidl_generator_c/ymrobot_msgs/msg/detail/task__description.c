// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ymrobot_msgs:msg/Task.idl
// generated code does not contain a copyright notice

#include "ymrobot_msgs/msg/detail/task__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ymrobot_msgs
const rosidl_type_hash_t *
ymrobot_msgs__msg__Task__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x24, 0x0e, 0x9c, 0xb4, 0x8e, 0xa7, 0x22, 0x26,
      0xba, 0xa7, 0x89, 0x47, 0xb1, 0xf7, 0xbc, 0xf6,
      0x4d, 0xc0, 0x54, 0x56, 0x83, 0xa5, 0x21, 0xb1,
      0xa9, 0x3f, 0x1d, 0x6e, 0xd6, 0x03, 0xe4, 0x25,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "geometry_msgs/msg/detail/point__functions.h"
#include "ymrobot_msgs/msg/detail/nav_point__functions.h"
#include "std_msgs/msg/detail/header__functions.h"
#include "geometry_msgs/msg/detail/pose__functions.h"
#include "ymrobot_msgs/msg/detail/binary_data__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "ymrobot_msgs/msg/detail/command__functions.h"
#include "geometry_msgs/msg/detail/pose_stamped__functions.h"
#include "geometry_msgs/msg/detail/quaternion__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__Point__EXPECTED_HASH = {1, {
    0x69, 0x63, 0x08, 0x48, 0x42, 0xa9, 0xb0, 0x44,
    0x94, 0xd6, 0xb2, 0x94, 0x1d, 0x11, 0x44, 0x47,
    0x08, 0xd8, 0x92, 0xda, 0x2f, 0x4b, 0x09, 0x84,
    0x3b, 0x9c, 0x43, 0xf4, 0x2a, 0x7f, 0x68, 0x81,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__Pose__EXPECTED_HASH = {1, {
    0xd5, 0x01, 0x95, 0x4e, 0x94, 0x76, 0xce, 0xa2,
    0x99, 0x69, 0x84, 0xe8, 0x12, 0x05, 0x4b, 0x68,
    0x02, 0x6a, 0xe0, 0xbf, 0xae, 0x78, 0x9d, 0x9a,
    0x10, 0xb2, 0x3d, 0xaf, 0x35, 0xcc, 0x90, 0xfa,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__PoseStamped__EXPECTED_HASH = {1, {
    0x10, 0xf3, 0x78, 0x6d, 0x7d, 0x40, 0xfd, 0x2b,
    0x54, 0x36, 0x78, 0x35, 0x61, 0x4b, 0xff, 0x85,
    0xd4, 0xad, 0x3b, 0x5d, 0xab, 0x62, 0xbf, 0x8b,
    0xca, 0x0c, 0xc2, 0x32, 0xd7, 0x3b, 0x4c, 0xd8,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__Quaternion__EXPECTED_HASH = {1, {
    0x8a, 0x76, 0x5f, 0x66, 0x77, 0x8c, 0x8f, 0xf7,
    0xc8, 0xab, 0x94, 0xaf, 0xcc, 0x59, 0x0a, 0x2e,
    0xd5, 0x32, 0x5a, 0x1d, 0x9a, 0x07, 0x6f, 0xff,
    0xf3, 0x8f, 0xbc, 0xe3, 0x6f, 0x45, 0x86, 0x84,
  }};
static const rosidl_type_hash_t std_msgs__msg__Header__EXPECTED_HASH = {1, {
    0xf4, 0x9f, 0xb3, 0xae, 0x2c, 0xf0, 0x70, 0xf7,
    0x93, 0x64, 0x5f, 0xf7, 0x49, 0x68, 0x3a, 0xc6,
    0xb0, 0x62, 0x03, 0xe4, 0x1c, 0x89, 0x1e, 0x17,
    0x70, 0x1b, 0x1c, 0xb5, 0x97, 0xce, 0x6a, 0x01,
  }};
static const rosidl_type_hash_t ymrobot_msgs__msg__BinaryData__EXPECTED_HASH = {1, {
    0x06, 0x34, 0x31, 0x69, 0xec, 0x99, 0x7c, 0x22,
    0xbe, 0xa8, 0x48, 0x52, 0x3b, 0xdd, 0xa7, 0x5c,
    0xf6, 0x54, 0x13, 0x45, 0xf8, 0xd1, 0x62, 0x9e,
    0xa1, 0x5f, 0x0e, 0x3a, 0xb7, 0xf6, 0xa9, 0x3b,
  }};
static const rosidl_type_hash_t ymrobot_msgs__msg__Command__EXPECTED_HASH = {1, {
    0x17, 0x84, 0xe7, 0x73, 0x3e, 0x04, 0xd4, 0x8e,
    0xc0, 0x6d, 0xab, 0x63, 0x41, 0x5d, 0x76, 0x0b,
    0x63, 0x23, 0x02, 0x20, 0x82, 0xb2, 0x20, 0x9f,
    0x0a, 0x9d, 0x87, 0xf3, 0x6a, 0x79, 0x14, 0x85,
  }};
static const rosidl_type_hash_t ymrobot_msgs__msg__NavPoint__EXPECTED_HASH = {1, {
    0xbc, 0x3f, 0x31, 0xbf, 0x9b, 0x78, 0x62, 0xc8,
    0xf8, 0x9d, 0xf2, 0x4f, 0xca, 0xef, 0x40, 0x57,
    0xae, 0x2e, 0xcc, 0x87, 0xc5, 0x8f, 0xf2, 0x3f,
    0x6b, 0x8b, 0xd0, 0x52, 0x58, 0x6c, 0x10, 0xd1,
  }};
#endif

static char ymrobot_msgs__msg__Task__TYPE_NAME[] = "ymrobot_msgs/msg/Task";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char geometry_msgs__msg__Point__TYPE_NAME[] = "geometry_msgs/msg/Point";
static char geometry_msgs__msg__Pose__TYPE_NAME[] = "geometry_msgs/msg/Pose";
static char geometry_msgs__msg__PoseStamped__TYPE_NAME[] = "geometry_msgs/msg/PoseStamped";
static char geometry_msgs__msg__Quaternion__TYPE_NAME[] = "geometry_msgs/msg/Quaternion";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";
static char ymrobot_msgs__msg__BinaryData__TYPE_NAME[] = "ymrobot_msgs/msg/BinaryData";
static char ymrobot_msgs__msg__Command__TYPE_NAME[] = "ymrobot_msgs/msg/Command";
static char ymrobot_msgs__msg__NavPoint__TYPE_NAME[] = "ymrobot_msgs/msg/NavPoint";

// Define type names, field names, and default values
static char ymrobot_msgs__msg__Task__FIELD_NAME__platform_id[] = "platform_id";
static char ymrobot_msgs__msg__Task__FIELD_NAME__amr_id[] = "amr_id";
static char ymrobot_msgs__msg__Task__FIELD_NAME__task_id[] = "task_id";
static char ymrobot_msgs__msg__Task__FIELD_NAME__task_type[] = "task_type";
static char ymrobot_msgs__msg__Task__DEFAULT_VALUE__task_type[] = "0";
static char ymrobot_msgs__msg__Task__FIELD_NAME__control_mode[] = "control_mode";
static char ymrobot_msgs__msg__Task__FIELD_NAME__nav_points[] = "nav_points";
static char ymrobot_msgs__msg__Task__FIELD_NAME__commands[] = "commands";
static char ymrobot_msgs__msg__Task__FIELD_NAME__behavior_tree[] = "behavior_tree";
static char ymrobot_msgs__msg__Task__FIELD_NAME__reload[] = "reload";
static char ymrobot_msgs__msg__Task__DEFAULT_VALUE__reload[] = "False";
static char ymrobot_msgs__msg__Task__FIELD_NAME__index[] = "index";
static char ymrobot_msgs__msg__Task__FIELD_NAME__binary_file[] = "binary_file";

static rosidl_runtime_c__type_description__Field ymrobot_msgs__msg__Task__FIELDS[] = {
  {
    {ymrobot_msgs__msg__Task__FIELD_NAME__platform_id, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__msg__Task__FIELD_NAME__amr_id, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__msg__Task__FIELD_NAME__task_id, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__msg__Task__FIELD_NAME__task_type, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {ymrobot_msgs__msg__Task__DEFAULT_VALUE__task_type, 1, 1},
  },
  {
    {ymrobot_msgs__msg__Task__FIELD_NAME__control_mode, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__msg__Task__FIELD_NAME__nav_points, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {ymrobot_msgs__msg__NavPoint__TYPE_NAME, 25, 25},
    },
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__msg__Task__FIELD_NAME__commands, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {ymrobot_msgs__msg__Command__TYPE_NAME, 24, 24},
    },
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__msg__Task__FIELD_NAME__behavior_tree, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__msg__Task__FIELD_NAME__reload, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {ymrobot_msgs__msg__Task__DEFAULT_VALUE__reload, 5, 5},
  },
  {
    {ymrobot_msgs__msg__Task__FIELD_NAME__index, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__msg__Task__FIELD_NAME__binary_file, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ymrobot_msgs__msg__BinaryData__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription ymrobot_msgs__msg__Task__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Pose__TYPE_NAME, 22, 22},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__PoseStamped__TYPE_NAME, 29, 29},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Quaternion__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__msg__BinaryData__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__msg__Command__TYPE_NAME, 24, 24},
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__msg__NavPoint__TYPE_NAME, 25, 25},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ymrobot_msgs__msg__Task__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ymrobot_msgs__msg__Task__TYPE_NAME, 21, 21},
      {ymrobot_msgs__msg__Task__FIELDS, 11, 11},
    },
    {ymrobot_msgs__msg__Task__REFERENCED_TYPE_DESCRIPTIONS, 9, 9},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Point__EXPECTED_HASH, geometry_msgs__msg__Point__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = geometry_msgs__msg__Point__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Pose__EXPECTED_HASH, geometry_msgs__msg__Pose__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = geometry_msgs__msg__Pose__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__PoseStamped__EXPECTED_HASH, geometry_msgs__msg__PoseStamped__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = geometry_msgs__msg__PoseStamped__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Quaternion__EXPECTED_HASH, geometry_msgs__msg__Quaternion__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = geometry_msgs__msg__Quaternion__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&ymrobot_msgs__msg__BinaryData__EXPECTED_HASH, ymrobot_msgs__msg__BinaryData__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[6].fields = ymrobot_msgs__msg__BinaryData__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&ymrobot_msgs__msg__Command__EXPECTED_HASH, ymrobot_msgs__msg__Command__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[7].fields = ymrobot_msgs__msg__Command__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&ymrobot_msgs__msg__NavPoint__EXPECTED_HASH, ymrobot_msgs__msg__NavPoint__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[8].fields = ymrobot_msgs__msg__NavPoint__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Task type constants\n"
  "uint8   REG                 = 0  # \\xe6\\xb3\\xa8\\xe5\\x86\\x8c\\xe4\\xbb\\xbb\\xe5\\x8a\\xa1\n"
  "uint8   TASK_GUIDANCE       = 1  # \\xe4\\xbb\\xbb\\xe5\\x8a\\xa1\\xe7\\xae\\xa1\\xe7\\x90\\x86\n"
  "uint8   BT_TASK             = 2  # \\xe8\\xa1\\x8c\\xe4\\xb8\\xba\\xe6\\xa0\\x91\\xe4\\xbb\\xbb\\xe5\\x8a\\xa1\n"
  "uint8   CHSSIS              = 3  # \\xe5\\xba\\x95\\xe7\\x9b\\x98\\xe5\\xaf\\xbc\\xe8\\x88\\xaa\\xe4\\xbb\\xbb\\xe5\\x8a\\xa1\\xef\\xbc\\x88\\xe8\\x87\\xaa\\xe7\\xa0\\x94\\xef\\xbc\\x89\n"
  "uint8   CLOUD_CHASSIS       = 4  # \\xe4\\xba\\x91\\xe8\\xbf\\xb9\\xe5\\xba\\x95\\xe7\\x9b\\x98\\xe5\\xaf\\xbc\\xe8\\x88\\xaa\\xe4\\xbb\\xbb\\xe5\\x8a\\xa1\n"
  "uint8   UP_LIMB             = 5  # \\xe4\\xb8\\x8a\\xe8\\x82\\xa2\\xe4\\xbb\\xbb\\xe5\\x8a\\xa1\n"
  "uint8   VIDEO_IMAGE         = 6  # \\xe8\\xa7\\x86\\xe9\\xa2\\x91\\xe5\\x9b\\xbe\\xe5\\x83\\x8f\\xe4\\xbb\\xbb\\xe5\\x8a\\xa1\n"
  "uint8   VOICE               = 7  # \\xe8\\xaf\\xad\\xe9\\x9f\\xb3\\xe4\\xbb\\xbb\\xe5\\x8a\\xa1\n"
  "uint8   EMOJI_TASK          = 8  # \\xe8\\xa1\\xa8\\xe6\\x83\\x85\\xe4\\xbb\\xbb\\xe5\\x8a\\xa1\n"
  "uint8   SYSTEM_MANAGEMENT   = 9  # \\xe7\\xb3\\xbb\\xe7\\xbb\\x9f\\xe7\\xae\\xa1\\xe7\\x90\\x86\n"
  "uint8   MOVE_CONTROL        = 10  # \\xe7\\xa7\\xbb\\xe5\\x8a\\xa8\\xe6\\x8e\\xa7\\xe5\\x88\\xb6\n"
  "\n"
  "string                platform_id\n"
  "string                amr_id\n"
  "string                task_id\n"
  "uint8                 task_type   0\n"
  "uint8                 control_mode\n"
  "NavPoint[]            nav_points\n"
  "Command[]             commands\n"
  "string                behavior_tree   \"\"      # behavior tree, either .xml files or texts\n"
  "bool                  reload          false   # force reload of behavior tree\n"
  "string                index\n"
  "BinaryData            binary_file";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ymrobot_msgs__msg__Task__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ymrobot_msgs__msg__Task__TYPE_NAME, 21, 21},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 934, 934},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ymrobot_msgs__msg__Task__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[10];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 10, 10};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ymrobot_msgs__msg__Task__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *geometry_msgs__msg__Point__get_individual_type_description_source(NULL);
    sources[3] = *geometry_msgs__msg__Pose__get_individual_type_description_source(NULL);
    sources[4] = *geometry_msgs__msg__PoseStamped__get_individual_type_description_source(NULL);
    sources[5] = *geometry_msgs__msg__Quaternion__get_individual_type_description_source(NULL);
    sources[6] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    sources[7] = *ymrobot_msgs__msg__BinaryData__get_individual_type_description_source(NULL);
    sources[8] = *ymrobot_msgs__msg__Command__get_individual_type_description_source(NULL);
    sources[9] = *ymrobot_msgs__msg__NavPoint__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
