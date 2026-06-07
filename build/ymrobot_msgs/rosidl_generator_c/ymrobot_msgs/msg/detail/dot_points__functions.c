// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ymrobot_msgs:msg/DotPoints.idl
// generated code does not contain a copyright notice
#include "ymrobot_msgs/msg/detail/dot_points__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `pose_name`
// Member `map_name`
// Member `pose_describe`
#include "rosidl_runtime_c/string_functions.h"

bool
ymrobot_msgs__msg__DotPoints__init(ymrobot_msgs__msg__DotPoints * msg)
{
  if (!msg) {
    return false;
  }
  // action
  // pose_name
  if (!rosidl_runtime_c__String__init(&msg->pose_name)) {
    ymrobot_msgs__msg__DotPoints__fini(msg);
    return false;
  }
  // map_name
  if (!rosidl_runtime_c__String__init(&msg->map_name)) {
    ymrobot_msgs__msg__DotPoints__fini(msg);
    return false;
  }
  // pose_describe
  if (!rosidl_runtime_c__String__init(&msg->pose_describe)) {
    ymrobot_msgs__msg__DotPoints__fini(msg);
    return false;
  }
  return true;
}

void
ymrobot_msgs__msg__DotPoints__fini(ymrobot_msgs__msg__DotPoints * msg)
{
  if (!msg) {
    return;
  }
  // action
  // pose_name
  rosidl_runtime_c__String__fini(&msg->pose_name);
  // map_name
  rosidl_runtime_c__String__fini(&msg->map_name);
  // pose_describe
  rosidl_runtime_c__String__fini(&msg->pose_describe);
}

bool
ymrobot_msgs__msg__DotPoints__are_equal(const ymrobot_msgs__msg__DotPoints * lhs, const ymrobot_msgs__msg__DotPoints * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // action
  if (lhs->action != rhs->action) {
    return false;
  }
  // pose_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->pose_name), &(rhs->pose_name)))
  {
    return false;
  }
  // map_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->map_name), &(rhs->map_name)))
  {
    return false;
  }
  // pose_describe
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->pose_describe), &(rhs->pose_describe)))
  {
    return false;
  }
  return true;
}

bool
ymrobot_msgs__msg__DotPoints__copy(
  const ymrobot_msgs__msg__DotPoints * input,
  ymrobot_msgs__msg__DotPoints * output)
{
  if (!input || !output) {
    return false;
  }
  // action
  output->action = input->action;
  // pose_name
  if (!rosidl_runtime_c__String__copy(
      &(input->pose_name), &(output->pose_name)))
  {
    return false;
  }
  // map_name
  if (!rosidl_runtime_c__String__copy(
      &(input->map_name), &(output->map_name)))
  {
    return false;
  }
  // pose_describe
  if (!rosidl_runtime_c__String__copy(
      &(input->pose_describe), &(output->pose_describe)))
  {
    return false;
  }
  return true;
}

ymrobot_msgs__msg__DotPoints *
ymrobot_msgs__msg__DotPoints__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ymrobot_msgs__msg__DotPoints * msg = (ymrobot_msgs__msg__DotPoints *)allocator.allocate(sizeof(ymrobot_msgs__msg__DotPoints), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ymrobot_msgs__msg__DotPoints));
  bool success = ymrobot_msgs__msg__DotPoints__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ymrobot_msgs__msg__DotPoints__destroy(ymrobot_msgs__msg__DotPoints * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ymrobot_msgs__msg__DotPoints__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ymrobot_msgs__msg__DotPoints__Sequence__init(ymrobot_msgs__msg__DotPoints__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ymrobot_msgs__msg__DotPoints * data = NULL;

  if (size) {
    data = (ymrobot_msgs__msg__DotPoints *)allocator.zero_allocate(size, sizeof(ymrobot_msgs__msg__DotPoints), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ymrobot_msgs__msg__DotPoints__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ymrobot_msgs__msg__DotPoints__fini(&data[i - 1]);
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
ymrobot_msgs__msg__DotPoints__Sequence__fini(ymrobot_msgs__msg__DotPoints__Sequence * array)
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
      ymrobot_msgs__msg__DotPoints__fini(&array->data[i]);
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

ymrobot_msgs__msg__DotPoints__Sequence *
ymrobot_msgs__msg__DotPoints__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ymrobot_msgs__msg__DotPoints__Sequence * array = (ymrobot_msgs__msg__DotPoints__Sequence *)allocator.allocate(sizeof(ymrobot_msgs__msg__DotPoints__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ymrobot_msgs__msg__DotPoints__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ymrobot_msgs__msg__DotPoints__Sequence__destroy(ymrobot_msgs__msg__DotPoints__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ymrobot_msgs__msg__DotPoints__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ymrobot_msgs__msg__DotPoints__Sequence__are_equal(const ymrobot_msgs__msg__DotPoints__Sequence * lhs, const ymrobot_msgs__msg__DotPoints__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ymrobot_msgs__msg__DotPoints__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ymrobot_msgs__msg__DotPoints__Sequence__copy(
  const ymrobot_msgs__msg__DotPoints__Sequence * input,
  ymrobot_msgs__msg__DotPoints__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ymrobot_msgs__msg__DotPoints);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ymrobot_msgs__msg__DotPoints * data =
      (ymrobot_msgs__msg__DotPoints *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ymrobot_msgs__msg__DotPoints__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ymrobot_msgs__msg__DotPoints__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ymrobot_msgs__msg__DotPoints__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
