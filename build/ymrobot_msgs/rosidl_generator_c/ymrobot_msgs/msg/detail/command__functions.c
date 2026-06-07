// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ymrobot_msgs:msg/Command.idl
// generated code does not contain a copyright notice
#include "ymrobot_msgs/msg/detail/command__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `params_code`
// Member `params`
#include "rosidl_runtime_c/string_functions.h"

bool
ymrobot_msgs__msg__Command__init(ymrobot_msgs__msg__Command * msg)
{
  if (!msg) {
    return false;
  }
  // code
  // params_code
  if (!rosidl_runtime_c__String__init(&msg->params_code)) {
    ymrobot_msgs__msg__Command__fini(msg);
    return false;
  }
  // params
  if (!rosidl_runtime_c__String__Sequence__init(&msg->params, 0)) {
    ymrobot_msgs__msg__Command__fini(msg);
    return false;
  }
  return true;
}

void
ymrobot_msgs__msg__Command__fini(ymrobot_msgs__msg__Command * msg)
{
  if (!msg) {
    return;
  }
  // code
  // params_code
  rosidl_runtime_c__String__fini(&msg->params_code);
  // params
  rosidl_runtime_c__String__Sequence__fini(&msg->params);
}

bool
ymrobot_msgs__msg__Command__are_equal(const ymrobot_msgs__msg__Command * lhs, const ymrobot_msgs__msg__Command * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // code
  if (lhs->code != rhs->code) {
    return false;
  }
  // params_code
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->params_code), &(rhs->params_code)))
  {
    return false;
  }
  // params
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->params), &(rhs->params)))
  {
    return false;
  }
  return true;
}

bool
ymrobot_msgs__msg__Command__copy(
  const ymrobot_msgs__msg__Command * input,
  ymrobot_msgs__msg__Command * output)
{
  if (!input || !output) {
    return false;
  }
  // code
  output->code = input->code;
  // params_code
  if (!rosidl_runtime_c__String__copy(
      &(input->params_code), &(output->params_code)))
  {
    return false;
  }
  // params
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->params), &(output->params)))
  {
    return false;
  }
  return true;
}

ymrobot_msgs__msg__Command *
ymrobot_msgs__msg__Command__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ymrobot_msgs__msg__Command * msg = (ymrobot_msgs__msg__Command *)allocator.allocate(sizeof(ymrobot_msgs__msg__Command), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ymrobot_msgs__msg__Command));
  bool success = ymrobot_msgs__msg__Command__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ymrobot_msgs__msg__Command__destroy(ymrobot_msgs__msg__Command * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ymrobot_msgs__msg__Command__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ymrobot_msgs__msg__Command__Sequence__init(ymrobot_msgs__msg__Command__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ymrobot_msgs__msg__Command * data = NULL;

  if (size) {
    data = (ymrobot_msgs__msg__Command *)allocator.zero_allocate(size, sizeof(ymrobot_msgs__msg__Command), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ymrobot_msgs__msg__Command__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ymrobot_msgs__msg__Command__fini(&data[i - 1]);
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
ymrobot_msgs__msg__Command__Sequence__fini(ymrobot_msgs__msg__Command__Sequence * array)
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
      ymrobot_msgs__msg__Command__fini(&array->data[i]);
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

ymrobot_msgs__msg__Command__Sequence *
ymrobot_msgs__msg__Command__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ymrobot_msgs__msg__Command__Sequence * array = (ymrobot_msgs__msg__Command__Sequence *)allocator.allocate(sizeof(ymrobot_msgs__msg__Command__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ymrobot_msgs__msg__Command__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ymrobot_msgs__msg__Command__Sequence__destroy(ymrobot_msgs__msg__Command__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ymrobot_msgs__msg__Command__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ymrobot_msgs__msg__Command__Sequence__are_equal(const ymrobot_msgs__msg__Command__Sequence * lhs, const ymrobot_msgs__msg__Command__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ymrobot_msgs__msg__Command__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ymrobot_msgs__msg__Command__Sequence__copy(
  const ymrobot_msgs__msg__Command__Sequence * input,
  ymrobot_msgs__msg__Command__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ymrobot_msgs__msg__Command);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ymrobot_msgs__msg__Command * data =
      (ymrobot_msgs__msg__Command *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ymrobot_msgs__msg__Command__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ymrobot_msgs__msg__Command__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ymrobot_msgs__msg__Command__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
