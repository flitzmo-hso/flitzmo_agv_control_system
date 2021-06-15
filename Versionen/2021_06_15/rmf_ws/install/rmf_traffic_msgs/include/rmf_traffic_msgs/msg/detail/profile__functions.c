// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rmf_traffic_msgs:msg/Profile.idl
// generated code does not contain a copyright notice
#include "rmf_traffic_msgs/msg/detail/profile__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `footprint`
// Member `vicinity`
#include "rmf_traffic_msgs/msg/detail/convex_shape__functions.h"
// Member `shape_context`
#include "rmf_traffic_msgs/msg/detail/convex_shape_context__functions.h"

bool
rmf_traffic_msgs__msg__Profile__init(rmf_traffic_msgs__msg__Profile * msg)
{
  if (!msg) {
    return false;
  }
  // footprint
  if (!rmf_traffic_msgs__msg__ConvexShape__init(&msg->footprint)) {
    rmf_traffic_msgs__msg__Profile__fini(msg);
    return false;
  }
  // vicinity
  if (!rmf_traffic_msgs__msg__ConvexShape__init(&msg->vicinity)) {
    rmf_traffic_msgs__msg__Profile__fini(msg);
    return false;
  }
  // shape_context
  if (!rmf_traffic_msgs__msg__ConvexShapeContext__init(&msg->shape_context)) {
    rmf_traffic_msgs__msg__Profile__fini(msg);
    return false;
  }
  return true;
}

void
rmf_traffic_msgs__msg__Profile__fini(rmf_traffic_msgs__msg__Profile * msg)
{
  if (!msg) {
    return;
  }
  // footprint
  rmf_traffic_msgs__msg__ConvexShape__fini(&msg->footprint);
  // vicinity
  rmf_traffic_msgs__msg__ConvexShape__fini(&msg->vicinity);
  // shape_context
  rmf_traffic_msgs__msg__ConvexShapeContext__fini(&msg->shape_context);
}

rmf_traffic_msgs__msg__Profile *
rmf_traffic_msgs__msg__Profile__create()
{
  rmf_traffic_msgs__msg__Profile * msg = (rmf_traffic_msgs__msg__Profile *)malloc(sizeof(rmf_traffic_msgs__msg__Profile));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rmf_traffic_msgs__msg__Profile));
  bool success = rmf_traffic_msgs__msg__Profile__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
rmf_traffic_msgs__msg__Profile__destroy(rmf_traffic_msgs__msg__Profile * msg)
{
  if (msg) {
    rmf_traffic_msgs__msg__Profile__fini(msg);
  }
  free(msg);
}


bool
rmf_traffic_msgs__msg__Profile__Sequence__init(rmf_traffic_msgs__msg__Profile__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rmf_traffic_msgs__msg__Profile * data = NULL;
  if (size) {
    data = (rmf_traffic_msgs__msg__Profile *)calloc(size, sizeof(rmf_traffic_msgs__msg__Profile));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rmf_traffic_msgs__msg__Profile__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rmf_traffic_msgs__msg__Profile__fini(&data[i - 1]);
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
rmf_traffic_msgs__msg__Profile__Sequence__fini(rmf_traffic_msgs__msg__Profile__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rmf_traffic_msgs__msg__Profile__fini(&array->data[i]);
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

rmf_traffic_msgs__msg__Profile__Sequence *
rmf_traffic_msgs__msg__Profile__Sequence__create(size_t size)
{
  rmf_traffic_msgs__msg__Profile__Sequence * array = (rmf_traffic_msgs__msg__Profile__Sequence *)malloc(sizeof(rmf_traffic_msgs__msg__Profile__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = rmf_traffic_msgs__msg__Profile__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
rmf_traffic_msgs__msg__Profile__Sequence__destroy(rmf_traffic_msgs__msg__Profile__Sequence * array)
{
  if (array) {
    rmf_traffic_msgs__msg__Profile__Sequence__fini(array);
  }
  free(array);
}
