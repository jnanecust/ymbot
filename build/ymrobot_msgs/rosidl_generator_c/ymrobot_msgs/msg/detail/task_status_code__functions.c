// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ymrobot_msgs:msg/TaskStatusCode.idl
// generated code does not contain a copyright notice
#include "ymrobot_msgs/msg/detail/task_status_code__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
ymrobot_msgs__msg__TaskStatusCode__init(ymrobot_msgs__msg__TaskStatusCode * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
ymrobot_msgs__msg__TaskStatusCode__fini(ymrobot_msgs__msg__TaskStatusCode * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
ymrobot_msgs__msg__TaskStatusCode__are_equal(const ymrobot_msgs__msg__TaskStatusCode * lhs, const ymrobot_msgs__msg__TaskStatusCode * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // structure_needs_at_least_one_member
  if (lhs->structure_needs_at_least_one_member != rhs->structure_needs_at_least_one_member) {
    return false;
  }
  return true;
}

bool
ymrobot_msgs__msg__TaskStatusCode__copy(
  const ymrobot_msgs__msg__TaskStatusCode * input,
  ymrobot_msgs__msg__TaskStatusCode * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

ymrobot_msgs__msg__TaskStatusCode *
ymrobot_msgs__msg__TaskStatusCode__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ymrobot_msgs__msg__TaskStatusCode * msg = (ymrobot_msgs__msg__TaskStatusCode *)allocator.allocate(sizeof(ymrobot_msgs__msg__TaskStatusCode), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ymrobot_msgs__msg__TaskStatusCode));
  bool success = ymrobot_msgs__msg__TaskStatusCode__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ymrobot_msgs__msg__TaskStatusCode__destroy(ymrobot_msgs__msg__TaskStatusCode * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ymrobot_msgs__msg__TaskStatusCode__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ymrobot_msgs__msg__TaskStatusCode__Sequence__init(ymrobot_msgs__msg__TaskStatusCode__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ymrobot_msgs__msg__TaskStatusCode * data = NULL;

  if (size) {
    data = (ymrobot_msgs__msg__TaskStatusCode *)allocator.zero_allocate(size, sizeof(ymrobot_msgs__msg__TaskStatusCode), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ymrobot_msgs__msg__TaskStatusCode__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ymrobot_msgs__msg__TaskStatusCode__fini(&data[i - 1]);
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
ymrobot_msgs__msg__TaskStatusCode__Sequence__fini(ymrobot_msgs__msg__TaskStatusCode__Sequence * array)
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
      ymrobot_msgs__msg__TaskStatusCode__fini(&array->data[i]);
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

ymrobot_msgs__msg__TaskStatusCode__Sequence *
ymrobot_msgs__msg__TaskStatusCode__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ymrobot_msgs__msg__TaskStatusCode__Sequence * array = (ymrobot_msgs__msg__TaskStatusCode__Sequence *)allocator.allocate(sizeof(ymrobot_msgs__msg__TaskStatusCode__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ymrobot_msgs__msg__TaskStatusCode__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ymrobot_msgs__msg__TaskStatusCode__Sequence__destroy(ymrobot_msgs__msg__TaskStatusCode__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ymrobot_msgs__msg__TaskStatusCode__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ymrobot_msgs__msg__TaskStatusCode__Sequence__are_equal(const ymrobot_msgs__msg__TaskStatusCode__Sequence * lhs, const ymrobot_msgs__msg__TaskStatusCode__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ymrobot_msgs__msg__TaskStatusCode__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ymrobot_msgs__msg__TaskStatusCode__Sequence__copy(
  const ymrobot_msgs__msg__TaskStatusCode__Sequence * input,
  ymrobot_msgs__msg__TaskStatusCode__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ymrobot_msgs__msg__TaskStatusCode);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ymrobot_msgs__msg__TaskStatusCode * data =
      (ymrobot_msgs__msg__TaskStatusCode *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ymrobot_msgs__msg__TaskStatusCode__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ymrobot_msgs__msg__TaskStatusCode__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ymrobot_msgs__msg__TaskStatusCode__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
