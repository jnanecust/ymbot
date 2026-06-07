// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ymrobot_msgs:msg/MapManage.idl
// generated code does not contain a copyright notice
#include "ymrobot_msgs/msg/detail/map_manage__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `map_task`
#include "ymrobot_msgs/msg/detail/map_task_command__functions.h"
// Member `pcd_file`
// Member `pgm_file`
#include "rosidl_runtime_c/string_functions.h"

bool
ymrobot_msgs__msg__MapManage__init(ymrobot_msgs__msg__MapManage * msg)
{
  if (!msg) {
    return false;
  }
  // map_task
  if (!ymrobot_msgs__msg__MapTaskCommand__init(&msg->map_task)) {
    ymrobot_msgs__msg__MapManage__fini(msg);
    return false;
  }
  // pcd_file
  if (!rosidl_runtime_c__String__init(&msg->pcd_file)) {
    ymrobot_msgs__msg__MapManage__fini(msg);
    return false;
  }
  // pgm_file
  if (!rosidl_runtime_c__String__init(&msg->pgm_file)) {
    ymrobot_msgs__msg__MapManage__fini(msg);
    return false;
  }
  return true;
}

void
ymrobot_msgs__msg__MapManage__fini(ymrobot_msgs__msg__MapManage * msg)
{
  if (!msg) {
    return;
  }
  // map_task
  ymrobot_msgs__msg__MapTaskCommand__fini(&msg->map_task);
  // pcd_file
  rosidl_runtime_c__String__fini(&msg->pcd_file);
  // pgm_file
  rosidl_runtime_c__String__fini(&msg->pgm_file);
}

bool
ymrobot_msgs__msg__MapManage__are_equal(const ymrobot_msgs__msg__MapManage * lhs, const ymrobot_msgs__msg__MapManage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // map_task
  if (!ymrobot_msgs__msg__MapTaskCommand__are_equal(
      &(lhs->map_task), &(rhs->map_task)))
  {
    return false;
  }
  // pcd_file
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->pcd_file), &(rhs->pcd_file)))
  {
    return false;
  }
  // pgm_file
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->pgm_file), &(rhs->pgm_file)))
  {
    return false;
  }
  return true;
}

bool
ymrobot_msgs__msg__MapManage__copy(
  const ymrobot_msgs__msg__MapManage * input,
  ymrobot_msgs__msg__MapManage * output)
{
  if (!input || !output) {
    return false;
  }
  // map_task
  if (!ymrobot_msgs__msg__MapTaskCommand__copy(
      &(input->map_task), &(output->map_task)))
  {
    return false;
  }
  // pcd_file
  if (!rosidl_runtime_c__String__copy(
      &(input->pcd_file), &(output->pcd_file)))
  {
    return false;
  }
  // pgm_file
  if (!rosidl_runtime_c__String__copy(
      &(input->pgm_file), &(output->pgm_file)))
  {
    return false;
  }
  return true;
}

ymrobot_msgs__msg__MapManage *
ymrobot_msgs__msg__MapManage__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ymrobot_msgs__msg__MapManage * msg = (ymrobot_msgs__msg__MapManage *)allocator.allocate(sizeof(ymrobot_msgs__msg__MapManage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ymrobot_msgs__msg__MapManage));
  bool success = ymrobot_msgs__msg__MapManage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ymrobot_msgs__msg__MapManage__destroy(ymrobot_msgs__msg__MapManage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ymrobot_msgs__msg__MapManage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ymrobot_msgs__msg__MapManage__Sequence__init(ymrobot_msgs__msg__MapManage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ymrobot_msgs__msg__MapManage * data = NULL;

  if (size) {
    data = (ymrobot_msgs__msg__MapManage *)allocator.zero_allocate(size, sizeof(ymrobot_msgs__msg__MapManage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ymrobot_msgs__msg__MapManage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ymrobot_msgs__msg__MapManage__fini(&data[i - 1]);
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
ymrobot_msgs__msg__MapManage__Sequence__fini(ymrobot_msgs__msg__MapManage__Sequence * array)
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
      ymrobot_msgs__msg__MapManage__fini(&array->data[i]);
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

ymrobot_msgs__msg__MapManage__Sequence *
ymrobot_msgs__msg__MapManage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ymrobot_msgs__msg__MapManage__Sequence * array = (ymrobot_msgs__msg__MapManage__Sequence *)allocator.allocate(sizeof(ymrobot_msgs__msg__MapManage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ymrobot_msgs__msg__MapManage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ymrobot_msgs__msg__MapManage__Sequence__destroy(ymrobot_msgs__msg__MapManage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ymrobot_msgs__msg__MapManage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ymrobot_msgs__msg__MapManage__Sequence__are_equal(const ymrobot_msgs__msg__MapManage__Sequence * lhs, const ymrobot_msgs__msg__MapManage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ymrobot_msgs__msg__MapManage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ymrobot_msgs__msg__MapManage__Sequence__copy(
  const ymrobot_msgs__msg__MapManage__Sequence * input,
  ymrobot_msgs__msg__MapManage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ymrobot_msgs__msg__MapManage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ymrobot_msgs__msg__MapManage * data =
      (ymrobot_msgs__msg__MapManage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ymrobot_msgs__msg__MapManage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ymrobot_msgs__msg__MapManage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ymrobot_msgs__msg__MapManage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
