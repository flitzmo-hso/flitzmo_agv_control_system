// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rmf_ingestor_msgs:msg/IngestorResult.idl
// generated code does not contain a copyright notice
#include "rmf_ingestor_msgs/msg/detail/ingestor_result__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `time`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `request_guid`
// Member `source_guid`
#include "rosidl_runtime_c/string_functions.h"

bool
rmf_ingestor_msgs__msg__IngestorResult__init(rmf_ingestor_msgs__msg__IngestorResult * msg)
{
  if (!msg) {
    return false;
  }
  // time
  if (!builtin_interfaces__msg__Time__init(&msg->time)) {
    rmf_ingestor_msgs__msg__IngestorResult__fini(msg);
    return false;
  }
  // request_guid
  if (!rosidl_runtime_c__String__init(&msg->request_guid)) {
    rmf_ingestor_msgs__msg__IngestorResult__fini(msg);
    return false;
  }
  // source_guid
  if (!rosidl_runtime_c__String__init(&msg->source_guid)) {
    rmf_ingestor_msgs__msg__IngestorResult__fini(msg);
    return false;
  }
  // status
  return true;
}

void
rmf_ingestor_msgs__msg__IngestorResult__fini(rmf_ingestor_msgs__msg__IngestorResult * msg)
{
  if (!msg) {
    return;
  }
  // time
  builtin_interfaces__msg__Time__fini(&msg->time);
  // request_guid
  rosidl_runtime_c__String__fini(&msg->request_guid);
  // source_guid
  rosidl_runtime_c__String__fini(&msg->source_guid);
  // status
}

rmf_ingestor_msgs__msg__IngestorResult *
rmf_ingestor_msgs__msg__IngestorResult__create()
{
  rmf_ingestor_msgs__msg__IngestorResult * msg = (rmf_ingestor_msgs__msg__IngestorResult *)malloc(sizeof(rmf_ingestor_msgs__msg__IngestorResult));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rmf_ingestor_msgs__msg__IngestorResult));
  bool success = rmf_ingestor_msgs__msg__IngestorResult__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
rmf_ingestor_msgs__msg__IngestorResult__destroy(rmf_ingestor_msgs__msg__IngestorResult * msg)
{
  if (msg) {
    rmf_ingestor_msgs__msg__IngestorResult__fini(msg);
  }
  free(msg);
}


bool
rmf_ingestor_msgs__msg__IngestorResult__Sequence__init(rmf_ingestor_msgs__msg__IngestorResult__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rmf_ingestor_msgs__msg__IngestorResult * data = NULL;
  if (size) {
    data = (rmf_ingestor_msgs__msg__IngestorResult *)calloc(size, sizeof(rmf_ingestor_msgs__msg__IngestorResult));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rmf_ingestor_msgs__msg__IngestorResult__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rmf_ingestor_msgs__msg__IngestorResult__fini(&data[i - 1]);
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
rmf_ingestor_msgs__msg__IngestorResult__Sequence__fini(rmf_ingestor_msgs__msg__IngestorResult__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rmf_ingestor_msgs__msg__IngestorResult__fini(&array->data[i]);
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

rmf_ingestor_msgs__msg__IngestorResult__Sequence *
rmf_ingestor_msgs__msg__IngestorResult__Sequence__create(size_t size)
{
  rmf_ingestor_msgs__msg__IngestorResult__Sequence * array = (rmf_ingestor_msgs__msg__IngestorResult__Sequence *)malloc(sizeof(rmf_ingestor_msgs__msg__IngestorResult__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = rmf_ingestor_msgs__msg__IngestorResult__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
rmf_ingestor_msgs__msg__IngestorResult__Sequence__destroy(rmf_ingestor_msgs__msg__IngestorResult__Sequence * array)
{
  if (array) {
    rmf_ingestor_msgs__msg__IngestorResult__Sequence__fini(array);
  }
  free(array);
}
