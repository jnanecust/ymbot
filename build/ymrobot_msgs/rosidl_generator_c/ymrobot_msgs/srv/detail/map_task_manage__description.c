// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ymrobot_msgs:srv/MapTaskManage.idl
// generated code does not contain a copyright notice

#include "ymrobot_msgs/srv/detail/map_task_manage__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ymrobot_msgs
const rosidl_type_hash_t *
ymrobot_msgs__srv__MapTaskManage__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xe4, 0x41, 0xf0, 0x51, 0x09, 0x46, 0xce, 0xe3,
      0x4f, 0xd6, 0xcd, 0x52, 0xc7, 0x2e, 0xea, 0xd8,
      0xbc, 0x6c, 0x1c, 0x16, 0x0d, 0xd3, 0xaf, 0x64,
      0x4b, 0x6b, 0x0e, 0x85, 0x00, 0x0d, 0x2a, 0x0f,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_ymrobot_msgs
const rosidl_type_hash_t *
ymrobot_msgs__srv__MapTaskManage_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x1f, 0x29, 0xd9, 0x20, 0xbc, 0x92, 0xaa, 0xd0,
      0xfb, 0xa5, 0x32, 0x58, 0x1a, 0xde, 0xc0, 0x08,
      0xff, 0x06, 0x81, 0x6f, 0x2f, 0xf3, 0xcb, 0xcf,
      0x5a, 0x75, 0xf8, 0x09, 0xc7, 0xb8, 0xd1, 0x4b,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_ymrobot_msgs
const rosidl_type_hash_t *
ymrobot_msgs__srv__MapTaskManage_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xcd, 0x58, 0x07, 0x9f, 0x12, 0x10, 0x30, 0x53,
      0xc1, 0x91, 0xc3, 0x08, 0x1c, 0x1a, 0x17, 0x88,
      0x7f, 0xd2, 0x01, 0x53, 0x63, 0xbb, 0x2d, 0x66,
      0x39, 0xb9, 0x81, 0xf1, 0xc3, 0xee, 0xa6, 0x0e,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_ymrobot_msgs
const rosidl_type_hash_t *
ymrobot_msgs__srv__MapTaskManage_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x3c, 0x0e, 0xfb, 0x80, 0x7f, 0x2b, 0xa8, 0x0a,
      0xfe, 0x83, 0x61, 0x60, 0xe0, 0x59, 0xf7, 0x09,
      0x69, 0xfb, 0xa0, 0x94, 0x52, 0x10, 0x5e, 0xf2,
      0x59, 0x21, 0x18, 0x54, 0x92, 0x7e, 0xf8, 0x03,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "ymrobot_msgs/msg/detail/map_task_command__functions.h"
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
static const rosidl_type_hash_t ymrobot_msgs__msg__MapTaskCommand__EXPECTED_HASH = {1, {
    0xac, 0xc6, 0x22, 0x32, 0xa7, 0x85, 0xd3, 0xf5,
    0x78, 0x0d, 0x33, 0xc5, 0xec, 0xa3, 0xa8, 0xdd,
    0xfb, 0x45, 0xc0, 0x6d, 0xbe, 0xa8, 0xfe, 0xbe,
    0x42, 0xeb, 0x4f, 0xc2, 0x0f, 0x7f, 0x00, 0x09,
  }};
#endif

static char ymrobot_msgs__srv__MapTaskManage__TYPE_NAME[] = "ymrobot_msgs/srv/MapTaskManage";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";
static char ymrobot_msgs__msg__MapTaskCommand__TYPE_NAME[] = "ymrobot_msgs/msg/MapTaskCommand";
static char ymrobot_msgs__srv__MapTaskManage_Event__TYPE_NAME[] = "ymrobot_msgs/srv/MapTaskManage_Event";
static char ymrobot_msgs__srv__MapTaskManage_Request__TYPE_NAME[] = "ymrobot_msgs/srv/MapTaskManage_Request";
static char ymrobot_msgs__srv__MapTaskManage_Response__TYPE_NAME[] = "ymrobot_msgs/srv/MapTaskManage_Response";

// Define type names, field names, and default values
static char ymrobot_msgs__srv__MapTaskManage__FIELD_NAME__request_message[] = "request_message";
static char ymrobot_msgs__srv__MapTaskManage__FIELD_NAME__response_message[] = "response_message";
static char ymrobot_msgs__srv__MapTaskManage__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field ymrobot_msgs__srv__MapTaskManage__FIELDS[] = {
  {
    {ymrobot_msgs__srv__MapTaskManage__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ymrobot_msgs__srv__MapTaskManage_Request__TYPE_NAME, 38, 38},
    },
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__srv__MapTaskManage__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ymrobot_msgs__srv__MapTaskManage_Response__TYPE_NAME, 39, 39},
    },
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__srv__MapTaskManage__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ymrobot_msgs__srv__MapTaskManage_Event__TYPE_NAME, 36, 36},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription ymrobot_msgs__srv__MapTaskManage__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__msg__MapTaskCommand__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__srv__MapTaskManage_Event__TYPE_NAME, 36, 36},
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__srv__MapTaskManage_Request__TYPE_NAME, 38, 38},
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__srv__MapTaskManage_Response__TYPE_NAME, 39, 39},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ymrobot_msgs__srv__MapTaskManage__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ymrobot_msgs__srv__MapTaskManage__TYPE_NAME, 30, 30},
      {ymrobot_msgs__srv__MapTaskManage__FIELDS, 3, 3},
    },
    {ymrobot_msgs__srv__MapTaskManage__REFERENCED_TYPE_DESCRIPTIONS, 6, 6},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&ymrobot_msgs__msg__MapTaskCommand__EXPECTED_HASH, ymrobot_msgs__msg__MapTaskCommand__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = ymrobot_msgs__msg__MapTaskCommand__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = ymrobot_msgs__srv__MapTaskManage_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = ymrobot_msgs__srv__MapTaskManage_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[5].fields = ymrobot_msgs__srv__MapTaskManage_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char ymrobot_msgs__srv__MapTaskManage_Request__FIELD_NAME__map_task[] = "map_task";
static char ymrobot_msgs__srv__MapTaskManage_Request__FIELD_NAME__map_id[] = "map_id";
static char ymrobot_msgs__srv__MapTaskManage_Request__FIELD_NAME__map_name[] = "map_name";
static char ymrobot_msgs__srv__MapTaskManage_Request__FIELD_NAME__pcd_name[] = "pcd_name";
static char ymrobot_msgs__srv__MapTaskManage_Request__FIELD_NAME__pgm_name[] = "pgm_name";

static rosidl_runtime_c__type_description__Field ymrobot_msgs__srv__MapTaskManage_Request__FIELDS[] = {
  {
    {ymrobot_msgs__srv__MapTaskManage_Request__FIELD_NAME__map_task, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ymrobot_msgs__msg__MapTaskCommand__TYPE_NAME, 31, 31},
    },
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__srv__MapTaskManage_Request__FIELD_NAME__map_id, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__srv__MapTaskManage_Request__FIELD_NAME__map_name, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__srv__MapTaskManage_Request__FIELD_NAME__pcd_name, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__srv__MapTaskManage_Request__FIELD_NAME__pgm_name, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription ymrobot_msgs__srv__MapTaskManage_Request__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {ymrobot_msgs__msg__MapTaskCommand__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ymrobot_msgs__srv__MapTaskManage_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ymrobot_msgs__srv__MapTaskManage_Request__TYPE_NAME, 38, 38},
      {ymrobot_msgs__srv__MapTaskManage_Request__FIELDS, 5, 5},
    },
    {ymrobot_msgs__srv__MapTaskManage_Request__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&ymrobot_msgs__msg__MapTaskCommand__EXPECTED_HASH, ymrobot_msgs__msg__MapTaskCommand__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = ymrobot_msgs__msg__MapTaskCommand__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char ymrobot_msgs__srv__MapTaskManage_Response__FIELD_NAME__success[] = "success";
static char ymrobot_msgs__srv__MapTaskManage_Response__FIELD_NAME__message[] = "message";

static rosidl_runtime_c__type_description__Field ymrobot_msgs__srv__MapTaskManage_Response__FIELDS[] = {
  {
    {ymrobot_msgs__srv__MapTaskManage_Response__FIELD_NAME__success, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__srv__MapTaskManage_Response__FIELD_NAME__message, 7, 7},
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
ymrobot_msgs__srv__MapTaskManage_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ymrobot_msgs__srv__MapTaskManage_Response__TYPE_NAME, 39, 39},
      {ymrobot_msgs__srv__MapTaskManage_Response__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char ymrobot_msgs__srv__MapTaskManage_Event__FIELD_NAME__info[] = "info";
static char ymrobot_msgs__srv__MapTaskManage_Event__FIELD_NAME__request[] = "request";
static char ymrobot_msgs__srv__MapTaskManage_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field ymrobot_msgs__srv__MapTaskManage_Event__FIELDS[] = {
  {
    {ymrobot_msgs__srv__MapTaskManage_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__srv__MapTaskManage_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {ymrobot_msgs__srv__MapTaskManage_Request__TYPE_NAME, 38, 38},
    },
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__srv__MapTaskManage_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {ymrobot_msgs__srv__MapTaskManage_Response__TYPE_NAME, 39, 39},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription ymrobot_msgs__srv__MapTaskManage_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__msg__MapTaskCommand__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__srv__MapTaskManage_Request__TYPE_NAME, 38, 38},
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__srv__MapTaskManage_Response__TYPE_NAME, 39, 39},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ymrobot_msgs__srv__MapTaskManage_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ymrobot_msgs__srv__MapTaskManage_Event__TYPE_NAME, 36, 36},
      {ymrobot_msgs__srv__MapTaskManage_Event__FIELDS, 3, 3},
    },
    {ymrobot_msgs__srv__MapTaskManage_Event__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&ymrobot_msgs__msg__MapTaskCommand__EXPECTED_HASH, ymrobot_msgs__msg__MapTaskCommand__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = ymrobot_msgs__msg__MapTaskCommand__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = ymrobot_msgs__srv__MapTaskManage_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = ymrobot_msgs__srv__MapTaskManage_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "MapTaskCommand map_task\n"
  "string map_id\n"
  "string map_name\n"
  "string pcd_name\n"
  "string pgm_name\n"
  "---\n"
  "bool success\n"
  "string message";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ymrobot_msgs__srv__MapTaskManage__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ymrobot_msgs__srv__MapTaskManage__TYPE_NAME, 30, 30},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 117, 117},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
ymrobot_msgs__srv__MapTaskManage_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ymrobot_msgs__srv__MapTaskManage_Request__TYPE_NAME, 38, 38},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
ymrobot_msgs__srv__MapTaskManage_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ymrobot_msgs__srv__MapTaskManage_Response__TYPE_NAME, 39, 39},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
ymrobot_msgs__srv__MapTaskManage_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ymrobot_msgs__srv__MapTaskManage_Event__TYPE_NAME, 36, 36},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ymrobot_msgs__srv__MapTaskManage__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[7];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 7, 7};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ymrobot_msgs__srv__MapTaskManage__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *ymrobot_msgs__msg__MapTaskCommand__get_individual_type_description_source(NULL);
    sources[4] = *ymrobot_msgs__srv__MapTaskManage_Event__get_individual_type_description_source(NULL);
    sources[5] = *ymrobot_msgs__srv__MapTaskManage_Request__get_individual_type_description_source(NULL);
    sources[6] = *ymrobot_msgs__srv__MapTaskManage_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ymrobot_msgs__srv__MapTaskManage_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ymrobot_msgs__srv__MapTaskManage_Request__get_individual_type_description_source(NULL),
    sources[1] = *ymrobot_msgs__msg__MapTaskCommand__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ymrobot_msgs__srv__MapTaskManage_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ymrobot_msgs__srv__MapTaskManage_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ymrobot_msgs__srv__MapTaskManage_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ymrobot_msgs__srv__MapTaskManage_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *ymrobot_msgs__msg__MapTaskCommand__get_individual_type_description_source(NULL);
    sources[4] = *ymrobot_msgs__srv__MapTaskManage_Request__get_individual_type_description_source(NULL);
    sources[5] = *ymrobot_msgs__srv__MapTaskManage_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
