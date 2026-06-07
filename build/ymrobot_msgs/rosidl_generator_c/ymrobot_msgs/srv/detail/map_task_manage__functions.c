// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ymrobot_msgs:srv/MapTaskManage.idl
// generated code does not contain a copyright notice
#include "ymrobot_msgs/srv/detail/map_task_manage__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `map_task`
#include "ymrobot_msgs/msg/detail/map_task_command__functions.h"
// Member `map_id`
// Member `map_name`
// Member `pcd_name`
// Member `pgm_name`
#include "rosidl_runtime_c/string_functions.h"

bool
ymrobot_msgs__srv__MapTaskManage_Request__init(ymrobot_msgs__srv__MapTaskManage_Request * msg)
{
  if (!msg) {
    return false;
  }
  // map_task
  if (!ymrobot_msgs__msg__MapTaskCommand__init(&msg->map_task)) {
    ymrobot_msgs__srv__MapTaskManage_Request__fini(msg);
    return false;
  }
  // map_id
  if (!rosidl_runtime_c__String__init(&msg->map_id)) {
    ymrobot_msgs__srv__MapTaskManage_Request__fini(msg);
    return false;
  }
  // map_name
  if (!rosidl_runtime_c__String__init(&msg->map_name)) {
    ymrobot_msgs__srv__MapTaskManage_Request__fini(msg);
    return false;
  }
  // pcd_name
  if (!rosidl_runtime_c__String__init(&msg->pcd_name)) {
    ymrobot_msgs__srv__MapTaskManage_Request__fini(msg);
    return false;
  }
  // pgm_name
  if (!rosidl_runtime_c__String__init(&msg->pgm_name)) {
    ymrobot_msgs__srv__MapTaskManage_Request__fini(msg);
    return false;
  }
  return true;
}

void
ymrobot_msgs__srv__MapTaskManage_Request__fini(ymrobot_msgs__srv__MapTaskManage_Request * msg)
{
  if (!msg) {
    return;
  }
  // map_task
  ymrobot_msgs__msg__MapTaskCommand__fini(&msg->map_task);
  // map_id
  rosidl_runtime_c__String__fini(&msg->map_id);
  // map_name
  rosidl_runtime_c__String__fini(&msg->map_name);
  // pcd_name
  rosidl_runtime_c__String__fini(&msg->pcd_name);
  // pgm_name
  rosidl_runtime_c__String__fini(&msg->pgm_name);
}

bool
ymrobot_msgs__srv__MapTaskManage_Request__are_equal(const ymrobot_msgs__srv__MapTaskManage_Request * lhs, const ymrobot_msgs__srv__MapTaskManage_Request * rhs)
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
  // map_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->map_id), &(rhs->map_id)))
  {
    return false;
  }
  // map_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->map_name), &(rhs->map_name)))
  {
    return false;
  }
  // pcd_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->pcd_name), &(rhs->pcd_name)))
  {
    return false;
  }
  // pgm_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->pgm_name), &(rhs->pgm_name)))
  {
    return false;
  }
  return true;
}

bool
ymrobot_msgs__srv__MapTaskManage_Request__copy(
  const ymrobot_msgs__srv__MapTaskManage_Request * input,
  ymrobot_msgs__srv__MapTaskManage_Request * output)
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
  // map_id
  if (!rosidl_runtime_c__String__copy(
      &(input->map_id), &(output->map_id)))
  {
    return false;
  }
  // map_name
  if (!rosidl_runtime_c__String__copy(
      &(input->map_name), &(output->map_name)))
  {
    return false;
  }
  // pcd_name
  if (!rosidl_runtime_c__String__copy(
      &(input->pcd_name), &(output->pcd_name)))
  {
    return false;
  }
  // pgm_name
  if (!rosidl_runtime_c__String__copy(
      &(input->pgm_name), &(output->pgm_name)))
  {
    return false;
  }
  return true;
}

ymrobot_msgs__srv__MapTaskManage_Request *
ymrobot_msgs__srv__MapTaskManage_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ymrobot_msgs__srv__MapTaskManage_Request * msg = (ymrobot_msgs__srv__MapTaskManage_Request *)allocator.allocate(sizeof(ymrobot_msgs__srv__MapTaskManage_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ymrobot_msgs__srv__MapTaskManage_Request));
  bool success = ymrobot_msgs__srv__MapTaskManage_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ymrobot_msgs__srv__MapTaskManage_Request__destroy(ymrobot_msgs__srv__MapTaskManage_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ymrobot_msgs__srv__MapTaskManage_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ymrobot_msgs__srv__MapTaskManage_Request__Sequence__init(ymrobot_msgs__srv__MapTaskManage_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ymrobot_msgs__srv__MapTaskManage_Request * data = NULL;

  if (size) {
    data = (ymrobot_msgs__srv__MapTaskManage_Request *)allocator.zero_allocate(size, sizeof(ymrobot_msgs__srv__MapTaskManage_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ymrobot_msgs__srv__MapTaskManage_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ymrobot_msgs__srv__MapTaskManage_Request__fini(&data[i - 1]);
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
ymrobot_msgs__srv__MapTaskManage_Request__Sequence__fini(ymrobot_msgs__srv__MapTaskManage_Request__Sequence * array)
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
      ymrobot_msgs__srv__MapTaskManage_Request__fini(&array->data[i]);
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

ymrobot_msgs__srv__MapTaskManage_Request__Sequence *
ymrobot_msgs__srv__MapTaskManage_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ymrobot_msgs__srv__MapTaskManage_Request__Sequence * array = (ymrobot_msgs__srv__MapTaskManage_Request__Sequence *)allocator.allocate(sizeof(ymrobot_msgs__srv__MapTaskManage_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ymrobot_msgs__srv__MapTaskManage_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ymrobot_msgs__srv__MapTaskManage_Request__Sequence__destroy(ymrobot_msgs__srv__MapTaskManage_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ymrobot_msgs__srv__MapTaskManage_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ymrobot_msgs__srv__MapTaskManage_Request__Sequence__are_equal(const ymrobot_msgs__srv__MapTaskManage_Request__Sequence * lhs, const ymrobot_msgs__srv__MapTaskManage_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ymrobot_msgs__srv__MapTaskManage_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ymrobot_msgs__srv__MapTaskManage_Request__Sequence__copy(
  const ymrobot_msgs__srv__MapTaskManage_Request__Sequence * input,
  ymrobot_msgs__srv__MapTaskManage_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ymrobot_msgs__srv__MapTaskManage_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ymrobot_msgs__srv__MapTaskManage_Request * data =
      (ymrobot_msgs__srv__MapTaskManage_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ymrobot_msgs__srv__MapTaskManage_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ymrobot_msgs__srv__MapTaskManage_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ymrobot_msgs__srv__MapTaskManage_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `message`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
ymrobot_msgs__srv__MapTaskManage_Response__init(ymrobot_msgs__srv__MapTaskManage_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    ymrobot_msgs__srv__MapTaskManage_Response__fini(msg);
    return false;
  }
  return true;
}

void
ymrobot_msgs__srv__MapTaskManage_Response__fini(ymrobot_msgs__srv__MapTaskManage_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // message
  rosidl_runtime_c__String__fini(&msg->message);
}

bool
ymrobot_msgs__srv__MapTaskManage_Response__are_equal(const ymrobot_msgs__srv__MapTaskManage_Response * lhs, const ymrobot_msgs__srv__MapTaskManage_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  return true;
}

bool
ymrobot_msgs__srv__MapTaskManage_Response__copy(
  const ymrobot_msgs__srv__MapTaskManage_Response * input,
  ymrobot_msgs__srv__MapTaskManage_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  return true;
}

ymrobot_msgs__srv__MapTaskManage_Response *
ymrobot_msgs__srv__MapTaskManage_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ymrobot_msgs__srv__MapTaskManage_Response * msg = (ymrobot_msgs__srv__MapTaskManage_Response *)allocator.allocate(sizeof(ymrobot_msgs__srv__MapTaskManage_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ymrobot_msgs__srv__MapTaskManage_Response));
  bool success = ymrobot_msgs__srv__MapTaskManage_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ymrobot_msgs__srv__MapTaskManage_Response__destroy(ymrobot_msgs__srv__MapTaskManage_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ymrobot_msgs__srv__MapTaskManage_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ymrobot_msgs__srv__MapTaskManage_Response__Sequence__init(ymrobot_msgs__srv__MapTaskManage_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ymrobot_msgs__srv__MapTaskManage_Response * data = NULL;

  if (size) {
    data = (ymrobot_msgs__srv__MapTaskManage_Response *)allocator.zero_allocate(size, sizeof(ymrobot_msgs__srv__MapTaskManage_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ymrobot_msgs__srv__MapTaskManage_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ymrobot_msgs__srv__MapTaskManage_Response__fini(&data[i - 1]);
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
ymrobot_msgs__srv__MapTaskManage_Response__Sequence__fini(ymrobot_msgs__srv__MapTaskManage_Response__Sequence * array)
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
      ymrobot_msgs__srv__MapTaskManage_Response__fini(&array->data[i]);
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

ymrobot_msgs__srv__MapTaskManage_Response__Sequence *
ymrobot_msgs__srv__MapTaskManage_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ymrobot_msgs__srv__MapTaskManage_Response__Sequence * array = (ymrobot_msgs__srv__MapTaskManage_Response__Sequence *)allocator.allocate(sizeof(ymrobot_msgs__srv__MapTaskManage_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ymrobot_msgs__srv__MapTaskManage_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ymrobot_msgs__srv__MapTaskManage_Response__Sequence__destroy(ymrobot_msgs__srv__MapTaskManage_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ymrobot_msgs__srv__MapTaskManage_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ymrobot_msgs__srv__MapTaskManage_Response__Sequence__are_equal(const ymrobot_msgs__srv__MapTaskManage_Response__Sequence * lhs, const ymrobot_msgs__srv__MapTaskManage_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ymrobot_msgs__srv__MapTaskManage_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ymrobot_msgs__srv__MapTaskManage_Response__Sequence__copy(
  const ymrobot_msgs__srv__MapTaskManage_Response__Sequence * input,
  ymrobot_msgs__srv__MapTaskManage_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ymrobot_msgs__srv__MapTaskManage_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ymrobot_msgs__srv__MapTaskManage_Response * data =
      (ymrobot_msgs__srv__MapTaskManage_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ymrobot_msgs__srv__MapTaskManage_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ymrobot_msgs__srv__MapTaskManage_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ymrobot_msgs__srv__MapTaskManage_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "ymrobot_msgs/srv/detail/map_task_manage__functions.h"

bool
ymrobot_msgs__srv__MapTaskManage_Event__init(ymrobot_msgs__srv__MapTaskManage_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    ymrobot_msgs__srv__MapTaskManage_Event__fini(msg);
    return false;
  }
  // request
  if (!ymrobot_msgs__srv__MapTaskManage_Request__Sequence__init(&msg->request, 0)) {
    ymrobot_msgs__srv__MapTaskManage_Event__fini(msg);
    return false;
  }
  // response
  if (!ymrobot_msgs__srv__MapTaskManage_Response__Sequence__init(&msg->response, 0)) {
    ymrobot_msgs__srv__MapTaskManage_Event__fini(msg);
    return false;
  }
  return true;
}

void
ymrobot_msgs__srv__MapTaskManage_Event__fini(ymrobot_msgs__srv__MapTaskManage_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  ymrobot_msgs__srv__MapTaskManage_Request__Sequence__fini(&msg->request);
  // response
  ymrobot_msgs__srv__MapTaskManage_Response__Sequence__fini(&msg->response);
}

bool
ymrobot_msgs__srv__MapTaskManage_Event__are_equal(const ymrobot_msgs__srv__MapTaskManage_Event * lhs, const ymrobot_msgs__srv__MapTaskManage_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!ymrobot_msgs__srv__MapTaskManage_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!ymrobot_msgs__srv__MapTaskManage_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
ymrobot_msgs__srv__MapTaskManage_Event__copy(
  const ymrobot_msgs__srv__MapTaskManage_Event * input,
  ymrobot_msgs__srv__MapTaskManage_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!ymrobot_msgs__srv__MapTaskManage_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!ymrobot_msgs__srv__MapTaskManage_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

ymrobot_msgs__srv__MapTaskManage_Event *
ymrobot_msgs__srv__MapTaskManage_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ymrobot_msgs__srv__MapTaskManage_Event * msg = (ymrobot_msgs__srv__MapTaskManage_Event *)allocator.allocate(sizeof(ymrobot_msgs__srv__MapTaskManage_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ymrobot_msgs__srv__MapTaskManage_Event));
  bool success = ymrobot_msgs__srv__MapTaskManage_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ymrobot_msgs__srv__MapTaskManage_Event__destroy(ymrobot_msgs__srv__MapTaskManage_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ymrobot_msgs__srv__MapTaskManage_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ymrobot_msgs__srv__MapTaskManage_Event__Sequence__init(ymrobot_msgs__srv__MapTaskManage_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ymrobot_msgs__srv__MapTaskManage_Event * data = NULL;

  if (size) {
    data = (ymrobot_msgs__srv__MapTaskManage_Event *)allocator.zero_allocate(size, sizeof(ymrobot_msgs__srv__MapTaskManage_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ymrobot_msgs__srv__MapTaskManage_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ymrobot_msgs__srv__MapTaskManage_Event__fini(&data[i - 1]);
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
ymrobot_msgs__srv__MapTaskManage_Event__Sequence__fini(ymrobot_msgs__srv__MapTaskManage_Event__Sequence * array)
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
      ymrobot_msgs__srv__MapTaskManage_Event__fini(&array->data[i]);
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

ymrobot_msgs__srv__MapTaskManage_Event__Sequence *
ymrobot_msgs__srv__MapTaskManage_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ymrobot_msgs__srv__MapTaskManage_Event__Sequence * array = (ymrobot_msgs__srv__MapTaskManage_Event__Sequence *)allocator.allocate(sizeof(ymrobot_msgs__srv__MapTaskManage_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ymrobot_msgs__srv__MapTaskManage_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ymrobot_msgs__srv__MapTaskManage_Event__Sequence__destroy(ymrobot_msgs__srv__MapTaskManage_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ymrobot_msgs__srv__MapTaskManage_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ymrobot_msgs__srv__MapTaskManage_Event__Sequence__are_equal(const ymrobot_msgs__srv__MapTaskManage_Event__Sequence * lhs, const ymrobot_msgs__srv__MapTaskManage_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ymrobot_msgs__srv__MapTaskManage_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ymrobot_msgs__srv__MapTaskManage_Event__Sequence__copy(
  const ymrobot_msgs__srv__MapTaskManage_Event__Sequence * input,
  ymrobot_msgs__srv__MapTaskManage_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ymrobot_msgs__srv__MapTaskManage_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ymrobot_msgs__srv__MapTaskManage_Event * data =
      (ymrobot_msgs__srv__MapTaskManage_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ymrobot_msgs__srv__MapTaskManage_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ymrobot_msgs__srv__MapTaskManage_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ymrobot_msgs__srv__MapTaskManage_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
