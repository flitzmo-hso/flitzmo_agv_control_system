// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rmf_traffic_msgs:msg/ItineraryErase.idl
// generated code does not contain a copyright notice
#include "rmf_traffic_msgs/msg/detail/itinerary_erase__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `routes`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
rmf_traffic_msgs__msg__ItineraryErase__init(rmf_traffic_msgs__msg__ItineraryErase * msg)
{
  if (!msg) {
    return false;
  }
  // participant
  // routes
  if (!rosidl_runtime_c__uint64__Sequence__init(&msg->routes, 0)) {
    rmf_traffic_msgs__msg__ItineraryErase__fini(msg);
    return false;
  }
  // itinerary_version
  return true;
}

void
rmf_traffic_msgs__msg__ItineraryErase__fini(rmf_traffic_msgs__msg__ItineraryErase * msg)
{
  if (!msg) {
    return;
  }
  // participant
  // routes
  rosidl_runtime_c__uint64__Sequence__fini(&msg->routes);
  // itinerary_version
}

rmf_traffic_msgs__msg__ItineraryErase *
rmf_traffic_msgs__msg__ItineraryErase__create()
{
  rmf_traffic_msgs__msg__ItineraryErase * msg = (rmf_traffic_msgs__msg__ItineraryErase *)malloc(sizeof(rmf_traffic_msgs__msg__ItineraryErase));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rmf_traffic_msgs__msg__ItineraryErase));
  bool success = rmf_traffic_msgs__msg__ItineraryErase__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
rmf_traffic_msgs__msg__ItineraryErase__destroy(rmf_traffic_msgs__msg__ItineraryErase * msg)
{
  if (msg) {
    rmf_traffic_msgs__msg__ItineraryErase__fini(msg);
  }
  free(msg);
}


bool
rmf_traffic_msgs__msg__ItineraryErase__Sequence__init(rmf_traffic_msgs__msg__ItineraryErase__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rmf_traffic_msgs__msg__ItineraryErase * data = NULL;
  if (size) {
    data = (rmf_traffic_msgs__msg__ItineraryErase *)calloc(size, sizeof(rmf_traffic_msgs__msg__ItineraryErase));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rmf_traffic_msgs__msg__ItineraryErase__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rmf_traffic_msgs__msg__ItineraryErase__fini(&data[i - 1]);
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
rmf_traffic_msgs__msg__ItineraryErase__Sequence__fini(rmf_traffic_msgs__msg__ItineraryErase__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rmf_traffic_msgs__msg__ItineraryErase__fini(&array->data[i]);
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

rmf_traffic_msgs__msg__ItineraryErase__Sequence *
rmf_traffic_msgs__msg__ItineraryErase__Sequence__create(size_t size)
{
  rmf_traffic_msgs__msg__ItineraryErase__Sequence * array = (rmf_traffic_msgs__msg__ItineraryErase__Sequence *)malloc(sizeof(rmf_traffic_msgs__msg__ItineraryErase__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = rmf_traffic_msgs__msg__ItineraryErase__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
rmf_traffic_msgs__msg__ItineraryErase__Sequence__destroy(rmf_traffic_msgs__msg__ItineraryErase__Sequence * array)
{
  if (array) {
    rmf_traffic_msgs__msg__ItineraryErase__Sequence__fini(array);
  }
  free(array);
}
