// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ymrobot_msgs:srv/UpLimb.idl
// generated code does not contain a copyright notice

#include "ymrobot_msgs/srv/detail/up_limb__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ymrobot_msgs
const rosidl_type_hash_t *
ymrobot_msgs__srv__UpLimb__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x7f, 0x49, 0xef, 0xb6, 0x71, 0x61, 0x3d, 0x02,
      0xb1, 0xe3, 0x69, 0x97, 0x73, 0x4f, 0x5e, 0xfd,
      0xd3, 0xfd, 0x06, 0x71, 0xfa, 0x92, 0xc4, 0xb1,
      0xb3, 0xf9, 0x0f, 0x81, 0xd5, 0xb0, 0x61, 0x7a,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_ymrobot_msgs
const rosidl_type_hash_t *
ymrobot_msgs__srv__UpLimb_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xac, 0xb0, 0xb2, 0x80, 0xc0, 0x70, 0xac, 0xe1,
      0x11, 0x89, 0xf7, 0x28, 0x26, 0xee, 0xbe, 0x9b,
      0x11, 0x4d, 0xaa, 0xb2, 0x80, 0x22, 0x09, 0xd9,
      0xe8, 0xd2, 0x5f, 0xe9, 0xde, 0x97, 0x11, 0xda,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_ymrobot_msgs
const rosidl_type_hash_t *
ymrobot_msgs__srv__UpLimb_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x93, 0x46, 0xd6, 0x2b, 0xc3, 0x0a, 0xc5, 0x4f,
      0xbe, 0x4b, 0xd8, 0x91, 0x19, 0xee, 0xb5, 0x37,
      0x9a, 0x95, 0x4c, 0xa3, 0xe3, 0x9a, 0xf3, 0xaa,
      0x02, 0x56, 0x4a, 0x25, 0x7f, 0xdf, 0xf4, 0xdf,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_ymrobot_msgs
const rosidl_type_hash_t *
ymrobot_msgs__srv__UpLimb_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xd7, 0xed, 0xd1, 0x7a, 0xe8, 0xb3, 0x16, 0xf0,
      0x3b, 0xf2, 0xce, 0x71, 0x9d, 0x09, 0x3d, 0xc8,
      0xb0, 0xf1, 0xee, 0x1c, 0xb2, 0xe2, 0x18, 0xf8,
      0x0b, 0xc5, 0x9b, 0x6c, 0x3b, 0x68, 0x6c, 0x61,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "geometry_msgs/msg/detail/point__functions.h"
#include "std_msgs/msg/detail/header__functions.h"
#include "geometry_msgs/msg/detail/pose__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "service_msgs/msg/detail/service_event_info__functions.h"
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
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
static const rosidl_type_hash_t std_msgs__msg__Header__EXPECTED_HASH = {1, {
    0xf4, 0x9f, 0xb3, 0xae, 0x2c, 0xf0, 0x70, 0xf7,
    0x93, 0x64, 0x5f, 0xf7, 0x49, 0x68, 0x3a, 0xc6,
    0xb0, 0x62, 0x03, 0xe4, 0x1c, 0x89, 0x1e, 0x17,
    0x70, 0x1b, 0x1c, 0xb5, 0x97, 0xce, 0x6a, 0x01,
  }};
#endif

static char ymrobot_msgs__srv__UpLimb__TYPE_NAME[] = "ymrobot_msgs/srv/UpLimb";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char geometry_msgs__msg__Point__TYPE_NAME[] = "geometry_msgs/msg/Point";
static char geometry_msgs__msg__Pose__TYPE_NAME[] = "geometry_msgs/msg/Pose";
static char geometry_msgs__msg__PoseStamped__TYPE_NAME[] = "geometry_msgs/msg/PoseStamped";
static char geometry_msgs__msg__Quaternion__TYPE_NAME[] = "geometry_msgs/msg/Quaternion";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";
static char ymrobot_msgs__srv__UpLimb_Event__TYPE_NAME[] = "ymrobot_msgs/srv/UpLimb_Event";
static char ymrobot_msgs__srv__UpLimb_Request__TYPE_NAME[] = "ymrobot_msgs/srv/UpLimb_Request";
static char ymrobot_msgs__srv__UpLimb_Response__TYPE_NAME[] = "ymrobot_msgs/srv/UpLimb_Response";

// Define type names, field names, and default values
static char ymrobot_msgs__srv__UpLimb__FIELD_NAME__request_message[] = "request_message";
static char ymrobot_msgs__srv__UpLimb__FIELD_NAME__response_message[] = "response_message";
static char ymrobot_msgs__srv__UpLimb__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field ymrobot_msgs__srv__UpLimb__FIELDS[] = {
  {
    {ymrobot_msgs__srv__UpLimb__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ymrobot_msgs__srv__UpLimb_Request__TYPE_NAME, 31, 31},
    },
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__srv__UpLimb__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ymrobot_msgs__srv__UpLimb_Response__TYPE_NAME, 32, 32},
    },
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__srv__UpLimb__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ymrobot_msgs__srv__UpLimb_Event__TYPE_NAME, 29, 29},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription ymrobot_msgs__srv__UpLimb__REFERENCED_TYPE_DESCRIPTIONS[] = {
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
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__srv__UpLimb_Event__TYPE_NAME, 29, 29},
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__srv__UpLimb_Request__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__srv__UpLimb_Response__TYPE_NAME, 32, 32},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ymrobot_msgs__srv__UpLimb__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ymrobot_msgs__srv__UpLimb__TYPE_NAME, 23, 23},
      {ymrobot_msgs__srv__UpLimb__FIELDS, 3, 3},
    },
    {ymrobot_msgs__srv__UpLimb__REFERENCED_TYPE_DESCRIPTIONS, 10, 10},
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
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[6].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[7].fields = ymrobot_msgs__srv__UpLimb_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[8].fields = ymrobot_msgs__srv__UpLimb_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[9].fields = ymrobot_msgs__srv__UpLimb_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char ymrobot_msgs__srv__UpLimb_Request__FIELD_NAME__up_limb_task_type[] = "up_limb_task_type";
static char ymrobot_msgs__srv__UpLimb_Request__FIELD_NAME__position[] = "position";
static char ymrobot_msgs__srv__UpLimb_Request__FIELD_NAME__place_joint_list[] = "place_joint_list";
static char ymrobot_msgs__srv__UpLimb_Request__FIELD_NAME__action_fixed[] = "action_fixed";
static char ymrobot_msgs__srv__UpLimb_Request__FIELD_NAME__left_and_right_select[] = "left_and_right_select";

static rosidl_runtime_c__type_description__Field ymrobot_msgs__srv__UpLimb_Request__FIELDS[] = {
  {
    {ymrobot_msgs__srv__UpLimb_Request__FIELD_NAME__up_limb_task_type, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__srv__UpLimb_Request__FIELD_NAME__position, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geometry_msgs__msg__PoseStamped__TYPE_NAME, 29, 29},
    },
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__srv__UpLimb_Request__FIELD_NAME__place_joint_list, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__srv__UpLimb_Request__FIELD_NAME__action_fixed, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__srv__UpLimb_Request__FIELD_NAME__left_and_right_select, 21, 21},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription ymrobot_msgs__srv__UpLimb_Request__REFERENCED_TYPE_DESCRIPTIONS[] = {
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
};

const rosidl_runtime_c__type_description__TypeDescription *
ymrobot_msgs__srv__UpLimb_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ymrobot_msgs__srv__UpLimb_Request__TYPE_NAME, 31, 31},
      {ymrobot_msgs__srv__UpLimb_Request__FIELDS, 5, 5},
    },
    {ymrobot_msgs__srv__UpLimb_Request__REFERENCED_TYPE_DESCRIPTIONS, 6, 6},
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
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char ymrobot_msgs__srv__UpLimb_Response__FIELD_NAME__success[] = "success";
static char ymrobot_msgs__srv__UpLimb_Response__FIELD_NAME__message[] = "message";

static rosidl_runtime_c__type_description__Field ymrobot_msgs__srv__UpLimb_Response__FIELDS[] = {
  {
    {ymrobot_msgs__srv__UpLimb_Response__FIELD_NAME__success, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__srv__UpLimb_Response__FIELD_NAME__message, 7, 7},
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
ymrobot_msgs__srv__UpLimb_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ymrobot_msgs__srv__UpLimb_Response__TYPE_NAME, 32, 32},
      {ymrobot_msgs__srv__UpLimb_Response__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char ymrobot_msgs__srv__UpLimb_Event__FIELD_NAME__info[] = "info";
static char ymrobot_msgs__srv__UpLimb_Event__FIELD_NAME__request[] = "request";
static char ymrobot_msgs__srv__UpLimb_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field ymrobot_msgs__srv__UpLimb_Event__FIELDS[] = {
  {
    {ymrobot_msgs__srv__UpLimb_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__srv__UpLimb_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {ymrobot_msgs__srv__UpLimb_Request__TYPE_NAME, 31, 31},
    },
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__srv__UpLimb_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {ymrobot_msgs__srv__UpLimb_Response__TYPE_NAME, 32, 32},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription ymrobot_msgs__srv__UpLimb_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
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
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__srv__UpLimb_Request__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__srv__UpLimb_Response__TYPE_NAME, 32, 32},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ymrobot_msgs__srv__UpLimb_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ymrobot_msgs__srv__UpLimb_Event__TYPE_NAME, 29, 29},
      {ymrobot_msgs__srv__UpLimb_Event__FIELDS, 3, 3},
    },
    {ymrobot_msgs__srv__UpLimb_Event__REFERENCED_TYPE_DESCRIPTIONS, 9, 9},
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
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[6].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[7].fields = ymrobot_msgs__srv__UpLimb_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[8].fields = ymrobot_msgs__srv__UpLimb_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint8                       up_limb_task_type   # \\xe4\\xb8\\x8a\\xe8\\x82\\xa2\\xe4\\xbb\\xbb\\xe5\\x8a\\xa1\\xe7\\xb1\\xbb\\xe5\\x9e\\x8b 0\\xef\\xbc\\x9a\\xe6\\x9c\\xab\\xe7\\xab\\xaf\\xe5\\x8f\\x98\\xe5\\x8c\\x96\\xe7\\xac\\x9b\\xe5\\x8d\\xa1\\xe5\\xb0\\x94  1\\xef\\xbc\\x9a\\xe5\\x85\\xb3\\xe8\\x8a\\x82\\xe5\\x8f\\x98\\xe5\\x8c\\x96  2\\xef\\xbc\\x9a\\xe9\\xa2\\x84\\xe8\\xae\\xbe\\xe5\\x8a\\xa8\\xe4\\xbd\\x9c\\xe5\\x8f\\x98\\xe5\\x8c\\x96  3\\xef\\xbc\\x9a\\xe5\\xa4\\xb9\\xe7\\x88\\xaa\\xe5\\x8a\\xa8\\xe4\\xbd\\x9c 4:\\xe7\\x9b\\xb4\\xe7\\xba\\xbf\\xe8\\xbf\\x90\\xe5\\x8a\\xa8\\xe8\\xa7\\x84\\xe5\\x88\\x92\n"
  "geometry_msgs/PoseStamped   position            # 0 \\xe7\\xac\\x9b\\xe5\\x8d\\xa1\\xe5\\xb0\\x94\\xe5\\x9d\\x90\\xe6\\xa0\\x87\\xe4\\xb8\\x8b \\xe5\\xaf\\xbc\\xe8\\x88\\xaa\\xe7\\x82\\xb9  -- \\xe4\\xbb\\xbb\\xe5\\x8a\\xa1\\xe7\\xb1\\xbb\\xe5\\x9e\\x8b\\xe6\\x98\\xaf0\\xe6\\x97\\xb6\\xe5\\x80\\x99\n"
  "float64[]                   place_joint_list    # 1\\xef\\xbc\\x9a\\xe5\\x85\\xb3\\xe8\\x8a\\x82\\xe5\\x8f\\x98\\xe5\\x8c\\x96\\xef\\xbc\\x8c\\xe6\\x95\\xb0\\xe6\\x8d\\xae\\xe5\\x88\\x97\\xe8\\xa1\\xa8  \\xe5\\x85\\xb3\\xe8\\x8a\\x821\\xe3\\x80\\x81\\xe5\\x85\\xb3\\xe8\\x8a\\x822\\xe3\\x80\\x81\\xe5\\x85\\xb3\\xe8\\x8a\\x823......\n"
  "uint8                       action_fixed        # 2: \\xe9\\xa2\\x84\\xe8\\xae\\xbe\\xe5\\x8a\\xa8\\xe4\\xbd\\x9c\\xe5\\x8f\\x98\\xe5\\x8c\\x96\\xef\\xbc\\x8c\\xe6\\xa0\\x87\\xe5\\xbf\\x97\\xe4\\xbd\\x8d\\xef\\xbc\\x8c0--\\xe5\\x8a\\xa8\\xe4\\xbd\\x9c0  1---\\xe5\\x8a\\xa8\\xe4\\xbd\\x9c1\n"
  "uint8                       left_and_right_select          # 3: \\xe5\\xb7\\xa6\\xe5\\x8f\\xb3\\xe9\\x80\\x89\\xe6\\x8b\\xa9  0--\\xe5\\xb7\\xa6  1--\\xe5\\x8f\\xb3\n"
  "---\n"
  "bool                        success            #\\xe6\\x98\\xaf\\xe5\\x90\\xa6\\xe6\\x88\\x90\\xe5\\x8a\\x9f           \n"
  "string                      message            #\\xe6\\xb6\\x88\\xe6\\x81\\xaf\\xe5\\x8f\\x8d\\xe9\\xa6\\x88  --\\xe5\\xa4\\xb1\\xe8\\xb4\\xa5\\xe5\\x8e\\x9f\\xe5\\x9b\\xa0 \\xe6\\x88\\x90\\xe5\\x8a\\x9f\\xe4\\xba\\x86 \\xe5\\x95\\xa5\\xe7\\x9a\\x84........";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ymrobot_msgs__srv__UpLimb__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ymrobot_msgs__srv__UpLimb__TYPE_NAME, 23, 23},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 563, 563},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
ymrobot_msgs__srv__UpLimb_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ymrobot_msgs__srv__UpLimb_Request__TYPE_NAME, 31, 31},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
ymrobot_msgs__srv__UpLimb_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ymrobot_msgs__srv__UpLimb_Response__TYPE_NAME, 32, 32},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
ymrobot_msgs__srv__UpLimb_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ymrobot_msgs__srv__UpLimb_Event__TYPE_NAME, 29, 29},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ymrobot_msgs__srv__UpLimb__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[11];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 11, 11};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ymrobot_msgs__srv__UpLimb__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *geometry_msgs__msg__Point__get_individual_type_description_source(NULL);
    sources[3] = *geometry_msgs__msg__Pose__get_individual_type_description_source(NULL);
    sources[4] = *geometry_msgs__msg__PoseStamped__get_individual_type_description_source(NULL);
    sources[5] = *geometry_msgs__msg__Quaternion__get_individual_type_description_source(NULL);
    sources[6] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[7] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    sources[8] = *ymrobot_msgs__srv__UpLimb_Event__get_individual_type_description_source(NULL);
    sources[9] = *ymrobot_msgs__srv__UpLimb_Request__get_individual_type_description_source(NULL);
    sources[10] = *ymrobot_msgs__srv__UpLimb_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ymrobot_msgs__srv__UpLimb_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[7];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 7, 7};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ymrobot_msgs__srv__UpLimb_Request__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *geometry_msgs__msg__Point__get_individual_type_description_source(NULL);
    sources[3] = *geometry_msgs__msg__Pose__get_individual_type_description_source(NULL);
    sources[4] = *geometry_msgs__msg__PoseStamped__get_individual_type_description_source(NULL);
    sources[5] = *geometry_msgs__msg__Quaternion__get_individual_type_description_source(NULL);
    sources[6] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ymrobot_msgs__srv__UpLimb_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ymrobot_msgs__srv__UpLimb_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ymrobot_msgs__srv__UpLimb_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[10];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 10, 10};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ymrobot_msgs__srv__UpLimb_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *geometry_msgs__msg__Point__get_individual_type_description_source(NULL);
    sources[3] = *geometry_msgs__msg__Pose__get_individual_type_description_source(NULL);
    sources[4] = *geometry_msgs__msg__PoseStamped__get_individual_type_description_source(NULL);
    sources[5] = *geometry_msgs__msg__Quaternion__get_individual_type_description_source(NULL);
    sources[6] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[7] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    sources[8] = *ymrobot_msgs__srv__UpLimb_Request__get_individual_type_description_source(NULL);
    sources[9] = *ymrobot_msgs__srv__UpLimb_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
