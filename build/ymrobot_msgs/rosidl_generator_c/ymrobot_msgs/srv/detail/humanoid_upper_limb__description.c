// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ymrobot_msgs:srv/HumanoidUpperLimb.idl
// generated code does not contain a copyright notice

#include "ymrobot_msgs/srv/detail/humanoid_upper_limb__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ymrobot_msgs
const rosidl_type_hash_t *
ymrobot_msgs__srv__HumanoidUpperLimb__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x86, 0xb8, 0x94, 0x77, 0xd5, 0x71, 0x9f, 0xd6,
      0xaf, 0x7a, 0xfe, 0x9c, 0x12, 0x48, 0x47, 0xd9,
      0x10, 0x88, 0x7c, 0x0b, 0x98, 0xf3, 0x97, 0xde,
      0x7c, 0xdb, 0x8c, 0xfd, 0x48, 0xa2, 0xa7, 0x1e,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_ymrobot_msgs
const rosidl_type_hash_t *
ymrobot_msgs__srv__HumanoidUpperLimb_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x4c, 0xa9, 0x5e, 0x74, 0x93, 0xe2, 0x78, 0x01,
      0x4d, 0xf4, 0xc8, 0x81, 0x85, 0xa1, 0xa7, 0xcb,
      0xe0, 0xd4, 0x1e, 0xec, 0xdf, 0xf7, 0x27, 0xa9,
      0x74, 0xe3, 0xa2, 0x87, 0x72, 0x69, 0x4e, 0xc7,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_ymrobot_msgs
const rosidl_type_hash_t *
ymrobot_msgs__srv__HumanoidUpperLimb_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xee, 0xc9, 0x0b, 0xd0, 0xaa, 0x05, 0xec, 0x97,
      0x41, 0x56, 0x77, 0xf2, 0xc4, 0x3c, 0x14, 0x8a,
      0xae, 0xff, 0x73, 0x93, 0x13, 0x52, 0xfc, 0x99,
      0xdd, 0xe7, 0x4d, 0x3f, 0x4e, 0x4f, 0x34, 0xc8,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_ymrobot_msgs
const rosidl_type_hash_t *
ymrobot_msgs__srv__HumanoidUpperLimb_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xa9, 0x3d, 0xdf, 0xeb, 0xa6, 0xeb, 0x24, 0x1c,
      0xda, 0x64, 0x54, 0x21, 0xba, 0xcd, 0x21, 0x1b,
      0x02, 0x70, 0xb3, 0x45, 0xd5, 0xc7, 0x5f, 0x54,
      0xaa, 0x59, 0xa1, 0x17, 0x56, 0xfa, 0x4c, 0x34,
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

static char ymrobot_msgs__srv__HumanoidUpperLimb__TYPE_NAME[] = "ymrobot_msgs/srv/HumanoidUpperLimb";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";
static char ymrobot_msgs__srv__HumanoidUpperLimb_Event__TYPE_NAME[] = "ymrobot_msgs/srv/HumanoidUpperLimb_Event";
static char ymrobot_msgs__srv__HumanoidUpperLimb_Request__TYPE_NAME[] = "ymrobot_msgs/srv/HumanoidUpperLimb_Request";
static char ymrobot_msgs__srv__HumanoidUpperLimb_Response__TYPE_NAME[] = "ymrobot_msgs/srv/HumanoidUpperLimb_Response";

// Define type names, field names, and default values
static char ymrobot_msgs__srv__HumanoidUpperLimb__FIELD_NAME__request_message[] = "request_message";
static char ymrobot_msgs__srv__HumanoidUpperLimb__FIELD_NAME__response_message[] = "response_message";
static char ymrobot_msgs__srv__HumanoidUpperLimb__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field ymrobot_msgs__srv__HumanoidUpperLimb__FIELDS[] = {
  {
    {ymrobot_msgs__srv__HumanoidUpperLimb__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ymrobot_msgs__srv__HumanoidUpperLimb_Request__TYPE_NAME, 42, 42},
    },
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__srv__HumanoidUpperLimb__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ymrobot_msgs__srv__HumanoidUpperLimb_Response__TYPE_NAME, 43, 43},
    },
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__srv__HumanoidUpperLimb__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ymrobot_msgs__srv__HumanoidUpperLimb_Event__TYPE_NAME, 40, 40},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription ymrobot_msgs__srv__HumanoidUpperLimb__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__srv__HumanoidUpperLimb_Event__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__srv__HumanoidUpperLimb_Request__TYPE_NAME, 42, 42},
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__srv__HumanoidUpperLimb_Response__TYPE_NAME, 43, 43},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ymrobot_msgs__srv__HumanoidUpperLimb__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ymrobot_msgs__srv__HumanoidUpperLimb__TYPE_NAME, 34, 34},
      {ymrobot_msgs__srv__HumanoidUpperLimb__FIELDS, 3, 3},
    },
    {ymrobot_msgs__srv__HumanoidUpperLimb__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = ymrobot_msgs__srv__HumanoidUpperLimb_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = ymrobot_msgs__srv__HumanoidUpperLimb_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = ymrobot_msgs__srv__HumanoidUpperLimb_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char ymrobot_msgs__srv__HumanoidUpperLimb_Request__FIELD_NAME__upper_action_task_type[] = "upper_action_task_type";
static char ymrobot_msgs__srv__HumanoidUpperLimb_Request__FIELD_NAME__fixed_upper_action[] = "fixed_upper_action";

static rosidl_runtime_c__type_description__Field ymrobot_msgs__srv__HumanoidUpperLimb_Request__FIELDS[] = {
  {
    {ymrobot_msgs__srv__HumanoidUpperLimb_Request__FIELD_NAME__upper_action_task_type, 22, 22},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__srv__HumanoidUpperLimb_Request__FIELD_NAME__fixed_upper_action, 18, 18},
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
ymrobot_msgs__srv__HumanoidUpperLimb_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ymrobot_msgs__srv__HumanoidUpperLimb_Request__TYPE_NAME, 42, 42},
      {ymrobot_msgs__srv__HumanoidUpperLimb_Request__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char ymrobot_msgs__srv__HumanoidUpperLimb_Response__FIELD_NAME__success[] = "success";
static char ymrobot_msgs__srv__HumanoidUpperLimb_Response__FIELD_NAME__message[] = "message";
static char ymrobot_msgs__srv__HumanoidUpperLimb_Response__FIELD_NAME__total_elapsed_time[] = "total_elapsed_time";

static rosidl_runtime_c__type_description__Field ymrobot_msgs__srv__HumanoidUpperLimb_Response__FIELDS[] = {
  {
    {ymrobot_msgs__srv__HumanoidUpperLimb_Response__FIELD_NAME__success, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__srv__HumanoidUpperLimb_Response__FIELD_NAME__message, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__srv__HumanoidUpperLimb_Response__FIELD_NAME__total_elapsed_time, 18, 18},
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
ymrobot_msgs__srv__HumanoidUpperLimb_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ymrobot_msgs__srv__HumanoidUpperLimb_Response__TYPE_NAME, 43, 43},
      {ymrobot_msgs__srv__HumanoidUpperLimb_Response__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char ymrobot_msgs__srv__HumanoidUpperLimb_Event__FIELD_NAME__info[] = "info";
static char ymrobot_msgs__srv__HumanoidUpperLimb_Event__FIELD_NAME__request[] = "request";
static char ymrobot_msgs__srv__HumanoidUpperLimb_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field ymrobot_msgs__srv__HumanoidUpperLimb_Event__FIELDS[] = {
  {
    {ymrobot_msgs__srv__HumanoidUpperLimb_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__srv__HumanoidUpperLimb_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {ymrobot_msgs__srv__HumanoidUpperLimb_Request__TYPE_NAME, 42, 42},
    },
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__srv__HumanoidUpperLimb_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {ymrobot_msgs__srv__HumanoidUpperLimb_Response__TYPE_NAME, 43, 43},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription ymrobot_msgs__srv__HumanoidUpperLimb_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__srv__HumanoidUpperLimb_Request__TYPE_NAME, 42, 42},
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__srv__HumanoidUpperLimb_Response__TYPE_NAME, 43, 43},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ymrobot_msgs__srv__HumanoidUpperLimb_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ymrobot_msgs__srv__HumanoidUpperLimb_Event__TYPE_NAME, 40, 40},
      {ymrobot_msgs__srv__HumanoidUpperLimb_Event__FIELDS, 3, 3},
    },
    {ymrobot_msgs__srv__HumanoidUpperLimb_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = ymrobot_msgs__srv__HumanoidUpperLimb_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = ymrobot_msgs__srv__HumanoidUpperLimb_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint8                       upper_action_task_type        # \\xe4\\xb8\\x8a\\xe8\\x82\\xa2\\xe5\\x8a\\xa8\\xe4\\xbd\\x9c\\xe7\\xb1\\xbb\\xe5\\x9e\\x8b\\xef\\xbc\\x8c 0 \\xef\\xbc\\x9a \\xe5\\x9b\\xba\\xe5\\xae\\x9a\\xe5\\x8a\\xa8\\xe4\\xbd\\x9c\n"
  "string                      fixed_upper_action            # \\xe4\\xb8\\x8a\\xe8\\x82\\xa2\\xe5\\x9b\\xba\\xe5\\xae\\x9a\\xe5\\x8a\\xa8\\xe4\\xbd\\x9c\n"
  "---\n"
  "# \\xe7\\xbb\\x93\\xe6\\x9e\\x9c\\xef\\xbc\\x88\\xe5\\x93\\x8d\\xe5\\xba\\x94\\xef\\xbc\\x89\n"
  "bool success                 # \\xe6\\x98\\xaf\\xe5\\x90\\xa6\\xe6\\x88\\x90\\xe5\\x8a\\x9f\\xe4\\xb8\\x8e\\xe5\\x90\\xa6\n"
  "string message               # \\xe9\\x94\\x99\\xe8\\xaf\\xaf\\xe6\\x88\\x96\\xe8\\x80\\x85\\xe6\\x88\\x90\\xe5\\x8a\\x9f\\xe7\\x9a\\x84\\xe5\\x8e\\x9f\\xe5\\x9b\\xa0\n"
  "float64 total_elapsed_time   #  \\xe6\\x80\\xbb\\xe6\\x97\\xb6\\xe9\\x97\\xb4";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ymrobot_msgs__srv__HumanoidUpperLimb__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ymrobot_msgs__srv__HumanoidUpperLimb__TYPE_NAME, 34, 34},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 271, 271},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
ymrobot_msgs__srv__HumanoidUpperLimb_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ymrobot_msgs__srv__HumanoidUpperLimb_Request__TYPE_NAME, 42, 42},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
ymrobot_msgs__srv__HumanoidUpperLimb_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ymrobot_msgs__srv__HumanoidUpperLimb_Response__TYPE_NAME, 43, 43},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
ymrobot_msgs__srv__HumanoidUpperLimb_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ymrobot_msgs__srv__HumanoidUpperLimb_Event__TYPE_NAME, 40, 40},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ymrobot_msgs__srv__HumanoidUpperLimb__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ymrobot_msgs__srv__HumanoidUpperLimb__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *ymrobot_msgs__srv__HumanoidUpperLimb_Event__get_individual_type_description_source(NULL);
    sources[4] = *ymrobot_msgs__srv__HumanoidUpperLimb_Request__get_individual_type_description_source(NULL);
    sources[5] = *ymrobot_msgs__srv__HumanoidUpperLimb_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ymrobot_msgs__srv__HumanoidUpperLimb_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ymrobot_msgs__srv__HumanoidUpperLimb_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ymrobot_msgs__srv__HumanoidUpperLimb_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ymrobot_msgs__srv__HumanoidUpperLimb_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ymrobot_msgs__srv__HumanoidUpperLimb_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ymrobot_msgs__srv__HumanoidUpperLimb_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *ymrobot_msgs__srv__HumanoidUpperLimb_Request__get_individual_type_description_source(NULL);
    sources[4] = *ymrobot_msgs__srv__HumanoidUpperLimb_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
