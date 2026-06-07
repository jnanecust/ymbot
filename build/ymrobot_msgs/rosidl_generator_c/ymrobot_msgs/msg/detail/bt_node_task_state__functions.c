// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ymrobot_msgs:msg/BTNodeTaskState.idl
// generated code does not contain a copyright notice
#include "ymrobot_msgs/msg/detail/bt_node_task_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `task_id`
// Member `task_type`
// Member `node_name`
// Member `node_task_state`
// Member `node_task_error`
// Member `node_task_error_message`
// Member `node_action_content`
#include "rosidl_runtime_c/string_functions.h"

bool
ymrobot_msgs__msg__BTNodeTaskState__init(ymrobot_msgs__msg__BTNodeTaskState * msg)
{
  if (!msg) {
    return false;
  }
  // task_id
  if (!rosidl_runtime_c__String__init(&msg->task_id)) {
    ymrobot_msgs__msg__BTNodeTaskState__fini(msg);
    return false;
  }
  // task_type
  if (!rosidl_runtime_c__String__init(&msg->task_type)) {
    ymrobot_msgs__msg__BTNodeTaskState__fini(msg);
    return false;
  }
  // node_name
  if (!rosidl_runtime_c__String__init(&msg->node_name)) {
    ymrobot_msgs__msg__BTNodeTaskState__fini(msg);
    return false;
  }
  // node_task_state
  if (!rosidl_runtime_c__String__init(&msg->node_task_state)) {
    ymrobot_msgs__msg__BTNodeTaskState__fini(msg);
    return false;
  }
  // node_task_error
  if (!rosidl_runtime_c__String__init(&msg->node_task_error)) {
    ymrobot_msgs__msg__BTNodeTaskState__fini(msg);
    return false;
  }
  // node_task_error_message
  if (!rosidl_runtime_c__String__init(&msg->node_task_error_message)) {
    ymrobot_msgs__msg__BTNodeTaskState__fini(msg);
    return false;
  }
  // node_action_content
  if (!rosidl_runtime_c__String__init(&msg->node_action_content)) {
    ymrobot_msgs__msg__BTNodeTaskState__fini(msg);
    return false;
  }
  return true;
}

void
ymrobot_msgs__msg__BTNodeTaskState__fini(ymrobot_msgs__msg__BTNodeTaskState * msg)
{
  if (!msg) {
    return;
  }
  // task_id
  rosidl_runtime_c__String__fini(&msg->task_id);
  // task_type
  rosidl_runtime_c__String__fini(&msg->task_type);
  // node_name
  rosidl_runtime_c__String__fini(&msg->node_name);
  // node_task_state
  rosidl_runtime_c__String__fini(&msg->node_task_state);
  // node_task_error
  rosidl_runtime_c__String__fini(&msg->node_task_error);
  // node_task_error_message
  rosidl_runtime_c__String__fini(&msg->node_task_error_message);
  // node_action_content
  rosidl_runtime_c__String__fini(&msg->node_action_content);
}

bool
ymrobot_msgs__msg__BTNodeTaskState__are_equal(const ymrobot_msgs__msg__BTNodeTaskState * lhs, const ymrobot_msgs__msg__BTNodeTaskState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // task_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->task_id), &(rhs->task_id)))
  {
    return false;
  }
  // task_type
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->task_type), &(rhs->task_type)))
  {
    return false;
  }
  // node_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->node_name), &(rhs->node_name)))
  {
    return false;
  }
  // node_task_state
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->node_task_state), &(rhs->node_task_state)))
  {
    return false;
  }
  // node_task_error
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->node_task_error), &(rhs->node_task_error)))
  {
    return false;
  }
  // node_task_error_message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->node_task_error_message), &(rhs->node_task_error_message)))
  {
    return false;
  }
  // node_action_content
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->node_action_content), &(rhs->node_action_content)))
  {
    return false;
  }
  return true;
}

bool
ymrobot_msgs__msg__BTNodeTaskState__copy(
  const ymrobot_msgs__msg__BTNodeTaskState * input,
  ymrobot_msgs__msg__BTNodeTaskState * output)
{
  if (!input || !output) {
    return false;
  }
  // task_id
  if (!rosidl_runtime_c__String__copy(
      &(input->task_id), &(output->task_id)))
  {
    return false;
  }
  // task_type
  if (!rosidl_runtime_c__String__copy(
      &(input->task_type), &(output->task_type)))
  {
    return false;
  }
  // node_name
  if (!rosidl_runtime_c__String__copy(
      &(input->node_name), &(output->node_name)))
  {
    return false;
  }
  // node_task_state
  if (!rosidl_runtime_c__String__copy(
      &(input->node_task_state), &(output->node_task_state)))
  {
    return false;
  }
  // node_task_error
  if (!rosidl_runtime_c__String__copy(
      &(input->node_task_error), &(output->node_task_error)))
  {
    return false;
  }
  // node_task_error_message
  if (!rosidl_runtime_c__String__copy(
      &(input->node_task_error_message), &(output->node_task_error_message)))
  {
    return false;
  }
  // node_action_content
  if (!rosidl_runtime_c__String__copy(
      &(input->node_action_content), &(output->node_action_content)))
  {
    return false;
  }
  return true;
}

ymrobot_msgs__msg__BTNodeTaskState *
ymrobot_msgs__msg__BTNodeTaskState__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ymrobot_msgs__msg__BTNodeTaskState * msg = (ymrobot_msgs__msg__BTNodeTaskState *)allocator.allocate(sizeof(ymrobot_msgs__msg__BTNodeTaskState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ymrobot_msgs__msg__BTNodeTaskState));
  bool success = ymrobot_msgs__msg__BTNodeTaskState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ymrobot_msgs__msg__BTNodeTaskState__destroy(ymrobot_msgs__msg__BTNodeTaskState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ymrobot_msgs__msg__BTNodeTaskState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ymrobot_msgs__msg__BTNodeTaskState__Sequence__init(ymrobot_msgs__msg__BTNodeTaskState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ymrobot_msgs__msg__BTNodeTaskState * data = NULL;

  if (size) {
    data = (ymrobot_msgs__msg__BTNodeTaskState *)allocator.zero_allocate(size, sizeof(ymrobot_msgs__msg__BTNodeTaskState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ymrobot_msgs__msg__BTNodeTaskState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ymrobot_msgs__msg__BTNodeTaskState__fini(&data[i - 1]);
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
ymrobot_msgs__msg__BTNodeTaskState__Sequence__fini(ymrobot_msgs__msg__BTNodeTaskState__Sequence * array)
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
      ymrobot_msgs__msg__BTNodeTaskState__fini(&array->data[i]);
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

ymrobot_msgs__msg__BTNodeTaskState__Sequence *
ymrobot_msgs__msg__BTNodeTaskState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ymrobot_msgs__msg__BTNodeTaskState__Sequence * array = (ymrobot_msgs__msg__BTNodeTaskState__Sequence *)allocator.allocate(sizeof(ymrobot_msgs__msg__BTNodeTaskState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ymrobot_msgs__msg__BTNodeTaskState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ymrobot_msgs__msg__BTNodeTaskState__Sequence__destroy(ymrobot_msgs__msg__BTNodeTaskState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ymrobot_msgs__msg__BTNodeTaskState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ymrobot_msgs__msg__BTNodeTaskState__Sequence__are_equal(const ymrobot_msgs__msg__BTNodeTaskState__Sequence * lhs, const ymrobot_msgs__msg__BTNodeTaskState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ymrobot_msgs__msg__BTNodeTaskState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ymrobot_msgs__msg__BTNodeTaskState__Sequence__copy(
  const ymrobot_msgs__msg__BTNodeTaskState__Sequence * input,
  ymrobot_msgs__msg__BTNodeTaskState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ymrobot_msgs__msg__BTNodeTaskState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ymrobot_msgs__msg__BTNodeTaskState * data =
      (ymrobot_msgs__msg__BTNodeTaskState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ymrobot_msgs__msg__BTNodeTaskState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ymrobot_msgs__msg__BTNodeTaskState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ymrobot_msgs__msg__BTNodeTaskState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
