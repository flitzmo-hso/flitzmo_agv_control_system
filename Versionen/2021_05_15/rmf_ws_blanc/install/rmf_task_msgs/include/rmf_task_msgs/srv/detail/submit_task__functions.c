// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rmf_task_msgs:srv/SubmitTask.idl
// generated code does not contain a copyright notice
#include "rmf_task_msgs/srv/detail/submit_task__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// Include directives for member types
// Member `requester`
#include "rosidl_runtime_c/string_functions.h"
// Member `description`
#include "rmf_task_msgs/msg/detail/task_description__functions.h"

bool
rmf_task_msgs__srv__SubmitTask_Request__init(rmf_task_msgs__srv__SubmitTask_Request * msg)
{
  if (!msg) {
    return false;
  }
  // requester
  if (!rosidl_runtime_c__String__init(&msg->requester)) {
    rmf_task_msgs__srv__SubmitTask_Request__fini(msg);
    return false;
  }
  // description
  if (!rmf_task_msgs__msg__TaskDescription__init(&msg->description)) {
    rmf_task_msgs__srv__SubmitTask_Request__fini(msg);
    return false;
  }
  return true;
}

void
rmf_task_msgs__srv__SubmitTask_Request__fini(rmf_task_msgs__srv__SubmitTask_Request * msg)
{
  if (!msg) {
    return;
  }
  // requester
  rosidl_runtime_c__String__fini(&msg->requester);
  // description
  rmf_task_msgs__msg__TaskDescription__fini(&msg->description);
}

rmf_task_msgs__srv__SubmitTask_Request *
rmf_task_msgs__srv__SubmitTask_Request__create()
{
  rmf_task_msgs__srv__SubmitTask_Request * msg = (rmf_task_msgs__srv__SubmitTask_Request *)malloc(sizeof(rmf_task_msgs__srv__SubmitTask_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rmf_task_msgs__srv__SubmitTask_Request));
  bool success = rmf_task_msgs__srv__SubmitTask_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
rmf_task_msgs__srv__SubmitTask_Request__destroy(rmf_task_msgs__srv__SubmitTask_Request * msg)
{
  if (msg) {
    rmf_task_msgs__srv__SubmitTask_Request__fini(msg);
  }
  free(msg);
}


bool
rmf_task_msgs__srv__SubmitTask_Request__Sequence__init(rmf_task_msgs__srv__SubmitTask_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rmf_task_msgs__srv__SubmitTask_Request * data = NULL;
  if (size) {
    data = (rmf_task_msgs__srv__SubmitTask_Request *)calloc(size, sizeof(rmf_task_msgs__srv__SubmitTask_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rmf_task_msgs__srv__SubmitTask_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rmf_task_msgs__srv__SubmitTask_Request__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
rmf_task_msgs__srv__SubmitTask_Request__Sequence__fini(rmf_task_msgs__srv__SubmitTask_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rmf_task_msgs__srv__SubmitTask_Request__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

rmf_task_msgs__srv__SubmitTask_Request__Sequence *
rmf_task_msgs__srv__SubmitTask_Request__Sequence__create(size_t size)
{
  rmf_task_msgs__srv__SubmitTask_Request__Sequence * array = (rmf_task_msgs__srv__SubmitTask_Request__Sequence *)malloc(sizeof(rmf_task_msgs__srv__SubmitTask_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = rmf_task_msgs__srv__SubmitTask_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
rmf_task_msgs__srv__SubmitTask_Request__Sequence__destroy(rmf_task_msgs__srv__SubmitTask_Request__Sequence * array)
{
  if (array) {
    rmf_task_msgs__srv__SubmitTask_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `task_id`
// Member `message`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
rmf_task_msgs__srv__SubmitTask_Response__init(rmf_task_msgs__srv__SubmitTask_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // task_id
  if (!rosidl_runtime_c__String__init(&msg->task_id)) {
    rmf_task_msgs__srv__SubmitTask_Response__fini(msg);
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    rmf_task_msgs__srv__SubmitTask_Response__fini(msg);
    return false;
  }
  return true;
}

void
rmf_task_msgs__srv__SubmitTask_Response__fini(rmf_task_msgs__srv__SubmitTask_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // task_id
  rosidl_runtime_c__String__fini(&msg->task_id);
  // message
  rosidl_runtime_c__String__fini(&msg->message);
}

rmf_task_msgs__srv__SubmitTask_Response *
rmf_task_msgs__srv__SubmitTask_Response__create()
{
  rmf_task_msgs__srv__SubmitTask_Response * msg = (rmf_task_msgs__srv__SubmitTask_Response *)malloc(sizeof(rmf_task_msgs__srv__SubmitTask_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rmf_task_msgs__srv__SubmitTask_Response));
  bool success = rmf_task_msgs__srv__SubmitTask_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
rmf_task_msgs__srv__SubmitTask_Response__destroy(rmf_task_msgs__srv__SubmitTask_Response * msg)
{
  if (msg) {
    rmf_task_msgs__srv__SubmitTask_Response__fini(msg);
  }
  free(msg);
}


bool
rmf_task_msgs__srv__SubmitTask_Response__Sequence__init(rmf_task_msgs__srv__SubmitTask_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rmf_task_msgs__srv__SubmitTask_Response * data = NULL;
  if (size) {
    data = (rmf_task_msgs__srv__SubmitTask_Response *)calloc(size, sizeof(rmf_task_msgs__srv__SubmitTask_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rmf_task_msgs__srv__SubmitTask_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rmf_task_msgs__srv__SubmitTask_Response__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
rmf_task_msgs__srv__SubmitTask_Response__Sequence__fini(rmf_task_msgs__srv__SubmitTask_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rmf_task_msgs__srv__SubmitTask_Response__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

rmf_task_msgs__srv__SubmitTask_Response__Sequence *
rmf_task_msgs__srv__SubmitTask_Response__Sequence__create(size_t size)
{
  rmf_task_msgs__srv__SubmitTask_Response__Sequence * array = (rmf_task_msgs__srv__SubmitTask_Response__Sequence *)malloc(sizeof(rmf_task_msgs__srv__SubmitTask_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = rmf_task_msgs__srv__SubmitTask_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
rmf_task_msgs__srv__SubmitTask_Response__Sequence__destroy(rmf_task_msgs__srv__SubmitTask_Response__Sequence * array)
{
  if (array) {
    rmf_task_msgs__srv__SubmitTask_Response__Sequence__fini(array);
  }
  free(array);
}
