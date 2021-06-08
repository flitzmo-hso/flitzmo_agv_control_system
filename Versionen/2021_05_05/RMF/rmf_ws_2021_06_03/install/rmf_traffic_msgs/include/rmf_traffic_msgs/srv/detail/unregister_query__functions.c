// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rmf_traffic_msgs:srv/UnregisterQuery.idl
// generated code does not contain a copyright notice
#include "rmf_traffic_msgs/srv/detail/unregister_query__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool
rmf_traffic_msgs__srv__UnregisterQuery_Request__init(rmf_traffic_msgs__srv__UnregisterQuery_Request * msg)
{
  if (!msg) {
    return false;
  }
  // query_id
  return true;
}

void
rmf_traffic_msgs__srv__UnregisterQuery_Request__fini(rmf_traffic_msgs__srv__UnregisterQuery_Request * msg)
{
  if (!msg) {
    return;
  }
  // query_id
}

rmf_traffic_msgs__srv__UnregisterQuery_Request *
rmf_traffic_msgs__srv__UnregisterQuery_Request__create()
{
  rmf_traffic_msgs__srv__UnregisterQuery_Request * msg = (rmf_traffic_msgs__srv__UnregisterQuery_Request *)malloc(sizeof(rmf_traffic_msgs__srv__UnregisterQuery_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rmf_traffic_msgs__srv__UnregisterQuery_Request));
  bool success = rmf_traffic_msgs__srv__UnregisterQuery_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
rmf_traffic_msgs__srv__UnregisterQuery_Request__destroy(rmf_traffic_msgs__srv__UnregisterQuery_Request * msg)
{
  if (msg) {
    rmf_traffic_msgs__srv__UnregisterQuery_Request__fini(msg);
  }
  free(msg);
}


bool
rmf_traffic_msgs__srv__UnregisterQuery_Request__Sequence__init(rmf_traffic_msgs__srv__UnregisterQuery_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rmf_traffic_msgs__srv__UnregisterQuery_Request * data = NULL;
  if (size) {
    data = (rmf_traffic_msgs__srv__UnregisterQuery_Request *)calloc(size, sizeof(rmf_traffic_msgs__srv__UnregisterQuery_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rmf_traffic_msgs__srv__UnregisterQuery_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rmf_traffic_msgs__srv__UnregisterQuery_Request__fini(&data[i - 1]);
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
rmf_traffic_msgs__srv__UnregisterQuery_Request__Sequence__fini(rmf_traffic_msgs__srv__UnregisterQuery_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rmf_traffic_msgs__srv__UnregisterQuery_Request__fini(&array->data[i]);
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

rmf_traffic_msgs__srv__UnregisterQuery_Request__Sequence *
rmf_traffic_msgs__srv__UnregisterQuery_Request__Sequence__create(size_t size)
{
  rmf_traffic_msgs__srv__UnregisterQuery_Request__Sequence * array = (rmf_traffic_msgs__srv__UnregisterQuery_Request__Sequence *)malloc(sizeof(rmf_traffic_msgs__srv__UnregisterQuery_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = rmf_traffic_msgs__srv__UnregisterQuery_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
rmf_traffic_msgs__srv__UnregisterQuery_Request__Sequence__destroy(rmf_traffic_msgs__srv__UnregisterQuery_Request__Sequence * array)
{
  if (array) {
    rmf_traffic_msgs__srv__UnregisterQuery_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `error`
#include "rosidl_runtime_c/string_functions.h"

bool
rmf_traffic_msgs__srv__UnregisterQuery_Response__init(rmf_traffic_msgs__srv__UnregisterQuery_Response * msg)
{
  if (!msg) {
    return false;
  }
  // confirmation
  // error
  if (!rosidl_runtime_c__String__init(&msg->error)) {
    rmf_traffic_msgs__srv__UnregisterQuery_Response__fini(msg);
    return false;
  }
  return true;
}

void
rmf_traffic_msgs__srv__UnregisterQuery_Response__fini(rmf_traffic_msgs__srv__UnregisterQuery_Response * msg)
{
  if (!msg) {
    return;
  }
  // confirmation
  // error
  rosidl_runtime_c__String__fini(&msg->error);
}

rmf_traffic_msgs__srv__UnregisterQuery_Response *
rmf_traffic_msgs__srv__UnregisterQuery_Response__create()
{
  rmf_traffic_msgs__srv__UnregisterQuery_Response * msg = (rmf_traffic_msgs__srv__UnregisterQuery_Response *)malloc(sizeof(rmf_traffic_msgs__srv__UnregisterQuery_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rmf_traffic_msgs__srv__UnregisterQuery_Response));
  bool success = rmf_traffic_msgs__srv__UnregisterQuery_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
rmf_traffic_msgs__srv__UnregisterQuery_Response__destroy(rmf_traffic_msgs__srv__UnregisterQuery_Response * msg)
{
  if (msg) {
    rmf_traffic_msgs__srv__UnregisterQuery_Response__fini(msg);
  }
  free(msg);
}


bool
rmf_traffic_msgs__srv__UnregisterQuery_Response__Sequence__init(rmf_traffic_msgs__srv__UnregisterQuery_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rmf_traffic_msgs__srv__UnregisterQuery_Response * data = NULL;
  if (size) {
    data = (rmf_traffic_msgs__srv__UnregisterQuery_Response *)calloc(size, sizeof(rmf_traffic_msgs__srv__UnregisterQuery_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rmf_traffic_msgs__srv__UnregisterQuery_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rmf_traffic_msgs__srv__UnregisterQuery_Response__fini(&data[i - 1]);
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
rmf_traffic_msgs__srv__UnregisterQuery_Response__Sequence__fini(rmf_traffic_msgs__srv__UnregisterQuery_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rmf_traffic_msgs__srv__UnregisterQuery_Response__fini(&array->data[i]);
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

rmf_traffic_msgs__srv__UnregisterQuery_Response__Sequence *
rmf_traffic_msgs__srv__UnregisterQuery_Response__Sequence__create(size_t size)
{
  rmf_traffic_msgs__srv__UnregisterQuery_Response__Sequence * array = (rmf_traffic_msgs__srv__UnregisterQuery_Response__Sequence *)malloc(sizeof(rmf_traffic_msgs__srv__UnregisterQuery_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = rmf_traffic_msgs__srv__UnregisterQuery_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
rmf_traffic_msgs__srv__UnregisterQuery_Response__Sequence__destroy(rmf_traffic_msgs__srv__UnregisterQuery_Response__Sequence * array)
{
  if (array) {
    rmf_traffic_msgs__srv__UnregisterQuery_Response__Sequence__fini(array);
  }
  free(array);
}
