// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ymrobot_msgs:srv/Audio.idl
// generated code does not contain a copyright notice

#include "ymrobot_msgs/srv/detail/audio__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ymrobot_msgs
const rosidl_type_hash_t *
ymrobot_msgs__srv__Audio__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xf6, 0xa3, 0x95, 0xf3, 0x95, 0x0c, 0x6f, 0xf1,
      0xe8, 0x67, 0x8e, 0xe2, 0x0a, 0x8d, 0x2f, 0x72,
      0xd2, 0x23, 0xb7, 0xcd, 0x4e, 0xf3, 0xe6, 0xe8,
      0xe6, 0x28, 0x45, 0x23, 0xa6, 0x45, 0x1e, 0x66,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_ymrobot_msgs
const rosidl_type_hash_t *
ymrobot_msgs__srv__Audio_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x8e, 0xf6, 0x26, 0x11, 0x96, 0x89, 0xa9, 0x72,
      0xaf, 0x0c, 0xa4, 0x40, 0x4d, 0x07, 0x3a, 0x06,
      0xb9, 0x33, 0xa5, 0xb4, 0x2d, 0x06, 0x9e, 0xf8,
      0xc2, 0xe3, 0xad, 0xb6, 0x77, 0xd2, 0xaa, 0x4c,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_ymrobot_msgs
const rosidl_type_hash_t *
ymrobot_msgs__srv__Audio_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x71, 0x6f, 0xfb, 0x09, 0x47, 0x91, 0x3c, 0x47,
      0xbd, 0x45, 0x44, 0xfb, 0xaf, 0x09, 0x33, 0x83,
      0x0e, 0x28, 0xef, 0xb3, 0x15, 0x24, 0xf4, 0x11,
      0x06, 0xc1, 0xa8, 0xfc, 0xf9, 0xa5, 0x22, 0x52,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_ymrobot_msgs
const rosidl_type_hash_t *
ymrobot_msgs__srv__Audio_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x5e, 0x95, 0x88, 0xb8, 0x8a, 0xb7, 0x29, 0x12,
      0x06, 0x88, 0x14, 0x9c, 0xbe, 0x78, 0xea, 0x65,
      0xa0, 0x4a, 0x32, 0x41, 0xc4, 0x59, 0x90, 0xe0,
      0xa4, 0x46, 0x0c, 0xb7, 0xac, 0x00, 0x76, 0x01,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "service_msgs/msg/detail/service_event_info__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char ymrobot_msgs__srv__Audio__TYPE_NAME[] = "ymrobot_msgs/srv/Audio";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";
static char ymrobot_msgs__srv__Audio_Event__TYPE_NAME[] = "ymrobot_msgs/srv/Audio_Event";
static char ymrobot_msgs__srv__Audio_Request__TYPE_NAME[] = "ymrobot_msgs/srv/Audio_Request";
static char ymrobot_msgs__srv__Audio_Response__TYPE_NAME[] = "ymrobot_msgs/srv/Audio_Response";

// Define type names, field names, and default values
static char ymrobot_msgs__srv__Audio__FIELD_NAME__request_message[] = "request_message";
static char ymrobot_msgs__srv__Audio__FIELD_NAME__response_message[] = "response_message";
static char ymrobot_msgs__srv__Audio__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field ymrobot_msgs__srv__Audio__FIELDS[] = {
  {
    {ymrobot_msgs__srv__Audio__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ymrobot_msgs__srv__Audio_Request__TYPE_NAME, 30, 30},
    },
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__srv__Audio__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ymrobot_msgs__srv__Audio_Response__TYPE_NAME, 31, 31},
    },
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__srv__Audio__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ymrobot_msgs__srv__Audio_Event__TYPE_NAME, 28, 28},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription ymrobot_msgs__srv__Audio__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__srv__Audio_Event__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__srv__Audio_Request__TYPE_NAME, 30, 30},
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__srv__Audio_Response__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ymrobot_msgs__srv__Audio__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ymrobot_msgs__srv__Audio__TYPE_NAME, 22, 22},
      {ymrobot_msgs__srv__Audio__FIELDS, 3, 3},
    },
    {ymrobot_msgs__srv__Audio__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = ymrobot_msgs__srv__Audio_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = ymrobot_msgs__srv__Audio_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = ymrobot_msgs__srv__Audio_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char ymrobot_msgs__srv__Audio_Request__FIELD_NAME__audio_task_type[] = "audio_task_type";
static char ymrobot_msgs__srv__Audio_Request__FIELD_NAME__fixed_audio_name[] = "fixed_audio_name";
static char ymrobot_msgs__srv__Audio_Request__FIELD_NAME__timbre[] = "timbre";
static char ymrobot_msgs__srv__Audio_Request__FIELD_NAME__synthetic_audio_txt[] = "synthetic_audio_txt";
static char ymrobot_msgs__srv__Audio_Request__FIELD_NAME__synthetic_audio_title[] = "synthetic_audio_title";
static char ymrobot_msgs__srv__Audio_Request__FIELD_NAME__delete_fixed_audio[] = "delete_fixed_audio";
static char ymrobot_msgs__srv__Audio_Request__FIELD_NAME__play_online_audio[] = "play_online_audio";

static rosidl_runtime_c__type_description__Field ymrobot_msgs__srv__Audio_Request__FIELDS[] = {
  {
    {ymrobot_msgs__srv__Audio_Request__FIELD_NAME__audio_task_type, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__srv__Audio_Request__FIELD_NAME__fixed_audio_name, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__srv__Audio_Request__FIELD_NAME__timbre, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__srv__Audio_Request__FIELD_NAME__synthetic_audio_txt, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__srv__Audio_Request__FIELD_NAME__synthetic_audio_title, 21, 21},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__srv__Audio_Request__FIELD_NAME__delete_fixed_audio, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__srv__Audio_Request__FIELD_NAME__play_online_audio, 17, 17},
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
ymrobot_msgs__srv__Audio_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ymrobot_msgs__srv__Audio_Request__TYPE_NAME, 30, 30},
      {ymrobot_msgs__srv__Audio_Request__FIELDS, 7, 7},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char ymrobot_msgs__srv__Audio_Response__FIELD_NAME__success[] = "success";
static char ymrobot_msgs__srv__Audio_Response__FIELD_NAME__message[] = "message";
static char ymrobot_msgs__srv__Audio_Response__FIELD_NAME__total_elapsed_time[] = "total_elapsed_time";

static rosidl_runtime_c__type_description__Field ymrobot_msgs__srv__Audio_Response__FIELDS[] = {
  {
    {ymrobot_msgs__srv__Audio_Response__FIELD_NAME__success, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__srv__Audio_Response__FIELD_NAME__message, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__srv__Audio_Response__FIELD_NAME__total_elapsed_time, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ymrobot_msgs__srv__Audio_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ymrobot_msgs__srv__Audio_Response__TYPE_NAME, 31, 31},
      {ymrobot_msgs__srv__Audio_Response__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char ymrobot_msgs__srv__Audio_Event__FIELD_NAME__info[] = "info";
static char ymrobot_msgs__srv__Audio_Event__FIELD_NAME__request[] = "request";
static char ymrobot_msgs__srv__Audio_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field ymrobot_msgs__srv__Audio_Event__FIELDS[] = {
  {
    {ymrobot_msgs__srv__Audio_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__srv__Audio_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {ymrobot_msgs__srv__Audio_Request__TYPE_NAME, 30, 30},
    },
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__srv__Audio_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {ymrobot_msgs__srv__Audio_Response__TYPE_NAME, 31, 31},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription ymrobot_msgs__srv__Audio_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__srv__Audio_Request__TYPE_NAME, 30, 30},
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__srv__Audio_Response__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ymrobot_msgs__srv__Audio_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ymrobot_msgs__srv__Audio_Event__TYPE_NAME, 28, 28},
      {ymrobot_msgs__srv__Audio_Event__FIELDS, 3, 3},
    },
    {ymrobot_msgs__srv__Audio_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = ymrobot_msgs__srv__Audio_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = ymrobot_msgs__srv__Audio_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint8                       audio_task_type             # \\xe8\\xa1\\xa8\\xe6\\x83\\x85\\xe4\\xbb\\xbb\\xe5\\x8a\\xa1\\xe7\\xb1\\xbb\\xe5\\x9e\\x8b 0--\\xe6\\x92\\xad\\xe6\\x94\\xbe\\xe5\\x9b\\xba\\xe5\\xae\\x9a\\xe9\\x9f\\xb3\\xe9\\xa2\\x91\\xe3\\x80\\x82 1: \\xe5\\x90\\x88\\xe6\\x88\\x90\\xe9\\x9f\\xb3\\xe9\\xa2\\x91 \\xe3\\x80\\x82 2: \\xe5\\x88\\xa0\\xe9\\x99\\xa4\\xe5\\x9b\\xba\\xe5\\xae\\x9a\\xe9\\x9f\\xb3\\xe9\\xa2\\x91  3\\xef\\xbc\\x9a\\xe4\\xb8\\x8a\\xe4\\xbc\\xa0\\xe5\\xaf\\xb9\\xe8\\xaf\\x9d\\xe8\\xae\\xb0\\xe5\\xbd\\x95  4. \\xe6\\x92\\xad\\xe6\\x94\\xbe\\xe5\\x9c\\xa8\\xe7\\xba\\xbf\\xe9\\x9f\\xb3\\xe9\\xa2\\x91 -- \\xe9\\x80\\x9a\\xe8\\xbf\\x87\\xe2\\x80\\x9cstring\\xe7\\xb1\\xbb\\xe5\\x9e\\x8b\\xe2\\x80\\x9d  5. \\xe4\\xb8\\x8b\\xe8\\xbd\\xbd\\xe9\\x9f\\xb3\\xe9\\xa2\\x91\n"
  "string                      fixed_audio_name            # \\xe6\\x92\\xad\\xe6\\x94\\xbe\\xe5\\x9b\\xba\\xe5\\xae\\x9a\\xe9\\x9f\\xb3\\xe9\\xa2\\x91  string\\xe7\\xb1\\xbb\\xe5\\x9e\\x8b string\\xe7\\xb1\\xbb\\xe5\\x9e\\x8b\\xe7\\x9a\\x840\n"
  "string                      timbre                      # \\xe9\\x9f\\xb3\\xe8\\x89\\xb2 0\\xef\\xbc\\x9a\\xe7\\x94\\xb7  1\\xef\\xbc\\x9a\\xe5\\xa5\\xb3\\xe7\\x94\\x9f\n"
  "string                      synthetic_audio_txt         # \\xe5\\x90\\x88\\xe6\\x88\\x90\\xe9\\x9f\\xb3\\xe9\\xa2\\x91\\xe5\\x86\\x85\\xe5\\xae\\xb9\n"
  "string                      synthetic_audio_title       # \\xe5\\x90\\x88\\xe6\\x88\\x90\\xe9\\x9f\\xb3\\xe9\\xa2\\x91\\xe6\\xa0\\x87\\xe9\\xa2\\x98\n"
  "string                      delete_fixed_audio          # \\xe5\\x88\\xa0\\xe9\\x99\\xa4\\xe5\\x9b\\xba\\xe5\\xae\\x9a\\xe9\\x9f\\xb3\\xe9\\xa2\\x91\n"
  "string                      play_online_audio           # \\xe6\\x92\\xad\\xe6\\x94\\xbe\\xe5\\x9c\\xa8\\xe7\\xba\\xbf\\xe9\\x9f\\xb3\\xe9\\xa2\\x91\n"
  "---\n"
  "# \\xe7\\xbb\\x93\\xe6\\x9e\\x9c\\xef\\xbc\\x88\\xe5\\x93\\x8d\\xe5\\xba\\x94\\xef\\xbc\\x89\n"
  "bool success                 # \\xe6\\x98\\xaf\\xe5\\x90\\xa6\\xe6\\x88\\x90\\xe5\\x8a\\x9f\\xe4\\xb8\\x8e\\xe5\\x90\\xa6\n"
  "string message               # \\xe9\\x94\\x99\\xe8\\xaf\\xaf\\xe6\\x88\\x96\\xe8\\x80\\x85\\xe6\\x88\\x90\\xe5\\x8a\\x9f\\xe7\\x9a\\x84\\xe5\\x8e\\x9f\\xe5\\x9b\\xa0\n"
  "float64 total_elapsed_time   #  \\xe6\\x80\\xbb\\xe6\\x97\\xb6\\xe9\\x97\\xb4";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ymrobot_msgs__srv__Audio__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ymrobot_msgs__srv__Audio__TYPE_NAME, 22, 22},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 686, 686},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
ymrobot_msgs__srv__Audio_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ymrobot_msgs__srv__Audio_Request__TYPE_NAME, 30, 30},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
ymrobot_msgs__srv__Audio_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ymrobot_msgs__srv__Audio_Response__TYPE_NAME, 31, 31},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
ymrobot_msgs__srv__Audio_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ymrobot_msgs__srv__Audio_Event__TYPE_NAME, 28, 28},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ymrobot_msgs__srv__Audio__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ymrobot_msgs__srv__Audio__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *ymrobot_msgs__srv__Audio_Event__get_individual_type_description_source(NULL);
    sources[4] = *ymrobot_msgs__srv__Audio_Request__get_individual_type_description_source(NULL);
    sources[5] = *ymrobot_msgs__srv__Audio_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ymrobot_msgs__srv__Audio_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ymrobot_msgs__srv__Audio_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ymrobot_msgs__srv__Audio_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ymrobot_msgs__srv__Audio_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ymrobot_msgs__srv__Audio_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ymrobot_msgs__srv__Audio_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *ymrobot_msgs__srv__Audio_Request__get_individual_type_description_source(NULL);
    sources[4] = *ymrobot_msgs__srv__Audio_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
