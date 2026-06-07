// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ymrobot_msgs:msg/NavPoint.idl
// generated code does not contain a copyright notice
#include "ymrobot_msgs/msg/detail/nav_point__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `position`
#include "geometry_msgs/msg/detail/pose_stamped__functions.h"
// Member `nav_name`
// Member `nav_map_name`
#include "rosidl_runtime_c/string_functions.h"

bool
ymrobot_msgs__msg__NavPoint__init(ymrobot_msgs__msg__NavPoint * msg)
{
  if (!msg) {
    return false;
  }
  // seq
  // position
  if (!geometry_msgs__msg__PoseStamped__init(&msg->position)) {
    ymrobot_msgs__msg__NavPoint__fini(msg);
    return false;
  }
  // nav_name
  if (!rosidl_runtime_c__String__init(&msg->nav_name)) {
    ymrobot_msgs__msg__NavPoint__fini(msg);
    return false;
  }
  // nav_map_name
  if (!rosidl_runtime_c__String__init(&msg->nav_map_name)) {
    ymrobot_msgs__msg__NavPoint__fini(msg);
    return false;
  }
  // map_index
  return true;
}

void
ymrobot_msgs__msg__NavPoint__fini(ymrobot_msgs__msg__NavPoint * msg)
{
  if (!msg) {
    return;
  }
  // seq
  // position
  geometry_msgs__msg__PoseStamped__fini(&msg->position);
  // nav_name
  rosidl_runtime_c__String__fini(&msg->nav_name);
  // nav_map_name
  rosidl_runtime_c__String__fini(&msg->nav_map_name);
  // map_index
}

bool
ymrobot_msgs__msg__NavPoint__are_equal(const ymrobot_msgs__msg__NavPoint * lhs, const ymrobot_msgs__msg__NavPoint * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // seq
  if (lhs->seq != rhs->seq) {
    return false;
  }
  // position
  if (!geometry_msgs__msg__PoseStamped__are_equal(
      &(lhs->position), &(rhs->position)))
  {
    return false;
  }
  // nav_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->nav_name), &(rhs->nav_name)))
  {
    return false;
  }
  // nav_map_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->nav_map_name), &(rhs->nav_map_name)))
  {
    return false;
  }
  // map_index
  if (lhs->map_index != rhs->map_index) {
    return false;
  }
  return true;
}

bool
ymrobot_msgs__msg__NavPoint__copy(
  const ymrobot_msgs__msg__NavPoint * input,
  ymrobot_msgs__msg__NavPoint * output)
{
  if (!input || !output) {
    return false;
  }
  // seq
  output->seq = input->seq;
  // position
  if (!geometry_msgs__msg__PoseStamped__copy(
      &(input->position), &(output->position)))
  {
    return false;
  }
  // nav_name
  if (!rosidl_runtime_c__String__copy(
      &(input->nav_name), &(output->nav_name)))
  {
    return false;
  }
  // nav_map_name
  if (!rosidl_runtime_c__String__copy(
      &(input->nav_map_name), &(output->nav_map_name)))
  {
    return false;
  }
  // map_index
  output->map_index = input->map_index;
  return true;
}

ymrobot_msgs__msg__NavPoint *
ymrobot_msgs__msg__NavPoint__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ymrobot_msgs__msg__NavPoint * msg = (ymrobot_msgs__msg__NavPoint *)allocator.allocate(sizeof(ymrobot_msgs__msg__NavPoint), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ymrobot_msgs__msg__NavPoint));
  bool success = ymrobot_msgs__msg__NavPoint__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ymrobot_msgs__msg__NavPoint__destroy(ymrobot_msgs__msg__NavPoint * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ymrobot_msgs__msg__NavPoint__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ymrobot_msgs__msg__NavPoint__Sequence__init(ymrobot_msgs__msg__NavPoint__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ymrobot_msgs__msg__NavPoint * data = NULL;

  if (size) {
    data = (ymrobot_msgs__msg__NavPoint *)allocator.zero_allocate(size, sizeof(ymrobot_msgs__msg__NavPoint), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ymrobot_msgs__msg__NavPoint__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ymrobot_msgs__msg__NavPoint__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
ymrobot_msgs__msg__NavPoint__Sequence__fini(ymrobot_msgs__msg__NavPoint__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ymrobot_msgs__msg__NavPoint__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

ymrobot_msgs__msg__NavPoint__Sequence *
ymrobot_msgs__msg__NavPoint__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ymrobot_msgs__msg__NavPoint__Sequence * array = (ymrobot_msgs__msg__NavPoint__Sequence *)allocator.allocate(sizeof(ymrobot_msgs__msg__NavPoint__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ymrobot_msgs__msg__NavPoint__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ymrobot_msgs__msg__NavPoint__Sequence__destroy(ymrobot_msgs__msg__NavPoint__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ymrobot_msgs__msg__NavPoint__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ymrobot_msgs__msg__NavPoint__Sequence__are_equal(const ymrobot_msgs__msg__NavPoint__Sequence * lhs, const ymrobot_msgs__msg__NavPoint__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ymrobot_msgs__msg__NavPoint__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ymrobot_msgs__msg__NavPoint__Sequence__copy(
  const ymrobot_msgs__msg__NavPoint__Sequence * input,
  ymrobot_msgs__msg__NavPoint__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ymrobot_msgs__msg__NavPoint);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ymrobot_msgs__msg__NavPoint * data =
      (ymrobot_msgs__msg__NavPoint *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ymrobot_msgs__msg__NavPoint__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ymrobot_msgs__msg__NavPoint__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ymrobot_msgs__msg__NavPoint__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
