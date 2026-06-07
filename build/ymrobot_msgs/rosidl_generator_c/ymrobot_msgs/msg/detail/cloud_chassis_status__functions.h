// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from ymrobot_msgs:msg/CloudChassisStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ymrobot_msgs/msg/cloud_chassis_status.h"


#ifndef YMROBOT_MSGS__MSG__DETAIL__CLOUD_CHASSIS_STATUS__FUNCTIONS_H_
#define YMROBOT_MSGS__MSG__DETAIL__CLOUD_CHASSIS_STATUS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_runtime_c/type_description/type_description__struct.h"
#include "rosidl_runtime_c/type_description/type_source__struct.h"
#include "rosidl_runtime_c/type_hash.h"
#include "rosidl_runtime_c/visibility_control.h"
#include "ymrobot_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "ymrobot_msgs/msg/detail/cloud_chassis_status__struct.h"

/// Initialize msg/CloudChassisStatus message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * ymrobot_msgs__msg__CloudChassisStatus
 * )) before or use
 * ymrobot_msgs__msg__CloudChassisStatus__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_ymrobot_msgs
bool
ymrobot_msgs__msg__CloudChassisStatus__init(ymrobot_msgs__msg__CloudChassisStatus * msg);

/// Finalize msg/CloudChassisStatus message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ymrobot_msgs
void
ymrobot_msgs__msg__CloudChassisStatus__fini(ymrobot_msgs__msg__CloudChassisStatus * msg);

/// Create msg/CloudChassisStatus message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * ymrobot_msgs__msg__CloudChassisStatus__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ymrobot_msgs
ymrobot_msgs__msg__CloudChassisStatus *
ymrobot_msgs__msg__CloudChassisStatus__create(void);

/// Destroy msg/CloudChassisStatus message.
/**
 * It calls
 * ymrobot_msgs__msg__CloudChassisStatus__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ymrobot_msgs
void
ymrobot_msgs__msg__CloudChassisStatus__destroy(ymrobot_msgs__msg__CloudChassisStatus * msg);

/// Check for msg/CloudChassisStatus message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ymrobot_msgs
bool
ymrobot_msgs__msg__CloudChassisStatus__are_equal(const ymrobot_msgs__msg__CloudChassisStatus * lhs, const ymrobot_msgs__msg__CloudChassisStatus * rhs);

/// Copy a msg/CloudChassisStatus message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_ymrobot_msgs
bool
ymrobot_msgs__msg__CloudChassisStatus__copy(
  const ymrobot_msgs__msg__CloudChassisStatus * input,
  ymrobot_msgs__msg__CloudChassisStatus * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_ymrobot_msgs
const rosidl_type_hash_t *
ymrobot_msgs__msg__CloudChassisStatus__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_ymrobot_msgs
const rosidl_runtime_c__type_description__TypeDescription *
ymrobot_msgs__msg__CloudChassisStatus__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_ymrobot_msgs
const rosidl_runtime_c__type_description__TypeSource *
ymrobot_msgs__msg__CloudChassisStatus__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_ymrobot_msgs
const rosidl_runtime_c__type_description__TypeSource__Sequence *
ymrobot_msgs__msg__CloudChassisStatus__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of msg/CloudChassisStatus messages.
/**
 * It allocates the memory for the number of elements and calls
 * ymrobot_msgs__msg__CloudChassisStatus__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_ymrobot_msgs
bool
ymrobot_msgs__msg__CloudChassisStatus__Sequence__init(ymrobot_msgs__msg__CloudChassisStatus__Sequence * array, size_t size);

/// Finalize array of msg/CloudChassisStatus messages.
/**
 * It calls
 * ymrobot_msgs__msg__CloudChassisStatus__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ymrobot_msgs
void
ymrobot_msgs__msg__CloudChassisStatus__Sequence__fini(ymrobot_msgs__msg__CloudChassisStatus__Sequence * array);

/// Create array of msg/CloudChassisStatus messages.
/**
 * It allocates the memory for the array and calls
 * ymrobot_msgs__msg__CloudChassisStatus__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ymrobot_msgs
ymrobot_msgs__msg__CloudChassisStatus__Sequence *
ymrobot_msgs__msg__CloudChassisStatus__Sequence__create(size_t size);

/// Destroy array of msg/CloudChassisStatus messages.
/**
 * It calls
 * ymrobot_msgs__msg__CloudChassisStatus__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ymrobot_msgs
void
ymrobot_msgs__msg__CloudChassisStatus__Sequence__destroy(ymrobot_msgs__msg__CloudChassisStatus__Sequence * array);

/// Check for msg/CloudChassisStatus message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ymrobot_msgs
bool
ymrobot_msgs__msg__CloudChassisStatus__Sequence__are_equal(const ymrobot_msgs__msg__CloudChassisStatus__Sequence * lhs, const ymrobot_msgs__msg__CloudChassisStatus__Sequence * rhs);

/// Copy an array of msg/CloudChassisStatus messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_ymrobot_msgs
bool
ymrobot_msgs__msg__CloudChassisStatus__Sequence__copy(
  const ymrobot_msgs__msg__CloudChassisStatus__Sequence * input,
  ymrobot_msgs__msg__CloudChassisStatus__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // YMROBOT_MSGS__MSG__DETAIL__CLOUD_CHASSIS_STATUS__FUNCTIONS_H_
