// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ymrobot_msgs:msg/Task.idl
// generated code does not contain a copyright notice
#include "ymrobot_msgs/msg/detail/task__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `platform_id`
// Member `amr_id`
// Member `task_id`
// Member `behavior_tree`
// Member `index`
#include "rosidl_runtime_c/string_functions.h"
// Member `nav_points`
#include "ymrobot_msgs/msg/detail/nav_point__functions.h"
// Member `commands`
#include "ymrobot_msgs/msg/detail/command__functions.h"
// Member `binary_file`
#include "ymrobot_msgs/msg/detail/binary_data__functions.h"

bool
ymrobot_msgs__msg__Task__init(ymrobot_msgs__msg__Task * msg)
{
  if (!msg) {
    return false;
  }
  // platform_id
  if (!rosidl_runtime_c__String__init(&msg->platform_id)) {
    ymrobot_msgs__msg__Task__fini(msg);
    return false;
  }
  // amr_id
  if (!rosidl_runtime_c__String__init(&msg->amr_id)) {
    ymrobot_msgs__msg__Task__fini(msg);
    return false;
  }
  // task_id
  if (!rosidl_runtime_c__String__init(&msg->task_id)) {
    ymrobot_msgs__msg__Task__fini(msg);
    return false;
  }
  // task_type
  msg->task_type = 0;
  // control_mode
  // nav_points
  if (!ymrobot_msgs__msg__NavPoint__Sequence__init(&msg->nav_points, 0)) {
    ymrobot_msgs__msg__Task__fini(msg);
    return false;
  }
  // commands
  if (!ymrobot_msgs__msg__Command__Sequence__init(&msg->commands, 0)) {
    ymrobot_msgs__msg__Task__fini(msg);
    return false;
  }
  // behavior_tree
  if (!rosidl_runtime_c__String__init(&msg->behavior_tree)) {
    ymrobot_msgs__msg__Task__fini(msg);
    return false;
  }
  {
    bool success = rosidl_runtime_c__String__assign(&msg->behavior_tree, "");
    if (!success) {
      goto abort_init_0;
    }
  }
  // reload
  msg->reload = false;
  // index
  if (!rosidl_runtime_c__String__init(&msg->index)) {
    ymrobot_msgs__msg__Task__fini(msg);
    return false;
  }
  // binary_file
  if (!ymrobot_msgs__msg__BinaryData__init(&msg->binary_file)) {
    ymrobot_msgs__msg__Task__fini(msg);
    return false;
  }
  return true;
abort_init_0:
  return false;
}

void
ymrobot_msgs__msg__Task__fini(ymrobot_msgs__msg__Task * msg)
{
  if (!msg) {
    return;
  }
  // platform_id
  rosidl_runtime_c__String__fini(&msg->platform_id);
  // amr_id
  rosidl_runtime_c__String__fini(&msg->amr_id);
  // task_id
  rosidl_runtime_c__String__fini(&msg->task_id);
  // task_type
  // control_mode
  // nav_points
  ymrobot_msgs__msg__NavPoint__Sequence__fini(&msg->nav_points);
  // commands
  ymrobot_msgs__msg__Command__Sequence__fini(&msg->commands);
  // behavior_tree
  rosidl_runtime_c__String__fini(&msg->behavior_tree);
  // reload
  // index
  rosidl_runtime_c__String__fini(&msg->index);
  // binary_file
  ymrobot_msgs__msg__BinaryData__fini(&msg->binary_file);
}

bool
ymrobot_msgs__msg__Task__are_equal(const ymrobot_msgs__msg__Task * lhs, const ymrobot_msgs__msg__Task * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // platform_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->platform_id), &(rhs->platform_id)))
  {
    return false;
  }
  // amr_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->amr_id), &(rhs->amr_id)))
  {
    return false;
  }
  // task_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->task_id), &(rhs->task_id)))
  {
    return false;
  }
  // task_type
  if (lhs->task_type != rhs->task_type) {
    return false;
  }
  // control_mode
  if (lhs->control_mode != rhs->control_mode) {
    return false;
  }
  // nav_points
  if (!ymrobot_msgs__msg__NavPoint__Sequence__are_equal(
      &(lhs->nav_points), &(rhs->nav_points)))
  {
    return false;
  }
  // commands
  if (!ymrobot_msgs__msg__Command__Sequence__are_equal(
      &(lhs->commands), &(rhs->commands)))
  {
    return false;
  }
  // behavior_tree
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->behavior_tree), &(rhs->behavior_tree)))
  {
    return false;
  }
  // reload
  if (lhs->reload != rhs->reload) {
    return false;
  }
  // index
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->index), &(rhs->index)))
  {
    return false;
  }
  // binary_file
  if (!ymrobot_msgs__msg__BinaryData__are_equal(
      &(lhs->binary_file), &(rhs->binary_file)))
  {
    return false;
  }
  return true;
}

bool
ymrobot_msgs__msg__Task__copy(
  const ymrobot_msgs__msg__Task * input,
  ymrobot_msgs__msg__Task * output)
{
  if (!input || !output) {
    return false;
  }
  // platform_id
  if (!rosidl_runtime_c__String__copy(
      &(input->platform_id), &(output->platform_id)))
  {
    return false;
  }
  // amr_id
  if (!rosidl_runtime_c__String__copy(
      &(input->amr_id), &(output->amr_id)))
  {
    return false;
  }
  // task_id
  if (!rosidl_runtime_c__String__copy(
      &(input->task_id), &(output->task_id)))
  {
    return false;
  }
  // task_type
  output->task_type = input->task_type;
  // control_mode
  output->control_mode = input->control_mode;
  // nav_points
  if (!ymrobot_msgs__msg__NavPoint__Sequence__copy(
      &(input->nav_points), &(output->nav_points)))
  {
    return false;
  }
  // commands
  if (!ymrobot_msgs__msg__Command__Sequence__copy(
      &(input->commands), &(output->commands)))
  {
    return false;
  }
  // behavior_tree
  if (!rosidl_runtime_c__String__copy(
      &(input->behavior_tree), &(output->behavior_tree)))
  {
    return false;
  }
  // reload
  output->reload = input->reload;
  // index
  if (!rosidl_runtime_c__String__copy(
      &(input->index), &(output->index)))
  {
    return false;
  }
  // binary_file
  if (!ymrobot_msgs__msg__BinaryData__copy(
      &(input->binary_file), &(output->binary_file)))
  {
    return false;
  }
  return true;
}

ymrobot_msgs__msg__Task *
ymrobot_msgs__msg__Task__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ymrobot_msgs__msg__Task * msg = (ymrobot_msgs__msg__Task *)allocator.allocate(sizeof(ymrobot_msgs__msg__Task), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ymrobot_msgs__msg__Task));
  bool success = ymrobot_msgs__msg__Task__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ymrobot_msgs__msg__Task__destroy(ymrobot_msgs__msg__Task * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ymrobot_msgs__msg__Task__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ymrobot_msgs__msg__Task__Sequence__init(ymrobot_msgs__msg__Task__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ymrobot_msgs__msg__Task * data = NULL;

  if (size) {
    data = (ymrobot_msgs__msg__Task *)allocator.zero_allocate(size, sizeof(ymrobot_msgs__msg__Task), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ymrobot_msgs__msg__Task__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ymrobot_msgs__msg__Task__fini(&data[i - 1]);
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
ymrobot_msgs__msg__Task__Sequence__fini(ymrobot_msgs__msg__Task__Sequence * array)
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
      ymrobot_msgs__msg__Task__fini(&array->data[i]);
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

ymrobot_msgs__msg__Task__Sequence *
ymrobot_msgs__msg__Task__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ymrobot_msgs__msg__Task__Sequence * array = (ymrobot_msgs__msg__Task__Sequence *)allocator.allocate(sizeof(ymrobot_msgs__msg__Task__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ymrobot_msgs__msg__Task__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ymrobot_msgs__msg__Task__Sequence__destroy(ymrobot_msgs__msg__Task__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ymrobot_msgs__msg__Task__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ymrobot_msgs__msg__Task__Sequence__are_equal(const ymrobot_msgs__msg__Task__Sequence * lhs, const ymrobot_msgs__msg__Task__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ymrobot_msgs__msg__Task__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ymrobot_msgs__msg__Task__Sequence__copy(
  const ymrobot_msgs__msg__Task__Sequence * input,
  ymrobot_msgs__msg__Task__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ymrobot_msgs__msg__Task);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ymrobot_msgs__msg__Task * data =
      (ymrobot_msgs__msg__Task *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ymrobot_msgs__msg__Task__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ymrobot_msgs__msg__Task__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ymrobot_msgs__msg__Task__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
