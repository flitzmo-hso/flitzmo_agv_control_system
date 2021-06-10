// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rmf_fleet_msgs:srv/LiftClearance.idl
// generated code does not contain a copyright notice
#include "rmf_fleet_msgs/srv/detail/lift_clearance__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// Include directives for member types
// Member `robot_name`
// Member `lift_name`
#include "rosidl_runtime_c/string_functions.h"

bool
rmf_fleet_msgs__srv__LiftClearance_Request__init(rmf_fleet_msgs__srv__LiftClearance_Request * msg)
{
  if (!msg) {
    return false;
  }
  // robot_name
  if (!rosidl_runtime_c__String__init(&msg->robot_name)) {
    rmf_fleet_msgs__srv__LiftClearance_Request__fini(msg);
    return false;
  }
  // lift_name
  if (!rosidl_runtime_c__String__init(&msg->lift_name)) {
    rmf_fleet_msgs__srv__LiftClearance_Request__fini(msg);
    return false;
  }
  return true;
}

void
rmf_fleet_msgs__srv__LiftClearance_Request__fini(rmf_fleet_msgs__srv__LiftClearance_Request * msg)
{
  if (!msg) {
    return;
  }
  // robot_name
  rosidl_runtime_c__String__fini(&msg->robot_name);
  // lift_name
  rosidl_runtime_c__String__fini(&msg->lift_name);
}

rmf_fleet_msgs__srv__LiftClearance_Request *
rmf_fleet_msgs__srv__LiftClearance_Request__create()
{
  rmf_fleet_msgs__srv__LiftClearance_Request * msg = (rmf_fleet_msgs__srv__LiftClearance_Request *)malloc(sizeof(rmf_fleet_msgs__srv__LiftClearance_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rmf_fleet_msgs__srv__LiftClearance_Request));
  bool success = rmf_fleet_msgs__srv__LiftClearance_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
rmf_fleet_msgs__srv__LiftClearance_Request__destroy(rmf_fleet_msgs__srv__LiftClearance_Request * msg)
{
  if (msg) {
    rmf_fleet_msgs__srv__LiftClearance_Request__fini(msg);
  }
  free(msg);
}


bool
rmf_fleet_msgs__srv__LiftClearance_Request__Sequence__init(rmf_fleet_msgs__srv__LiftClearance_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rmf_fleet_msgs__srv__LiftClearance_Request * data = NULL;
  if (size) {
    data = (rmf_fleet_msgs__srv__LiftClearance_Request *)calloc(size, sizeof(rmf_fleet_msgs__srv__LiftClearance_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rmf_fleet_msgs__srv__LiftClearance_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rmf_fleet_msgs__srv__LiftClearance_Request__fini(&data[i - 1]);
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
rmf_fleet_msgs__srv__LiftClearance_Request__Sequence__fini(rmf_fleet_msgs__srv__LiftClearance_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rmf_fleet_msgs__srv__LiftClearance_Request__fini(&array->data[i]);
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

rmf_fleet_msgs__srv__LiftClearance_Request__Sequence *
rmf_fleet_msgs__srv__LiftClearance_Request__Sequence__create(size_t size)
{
  rmf_fleet_msgs__srv__LiftClearance_Request__Sequence * array = (rmf_fleet_msgs__srv__LiftClearance_Request__Sequence *)malloc(sizeof(rmf_fleet_msgs__srv__LiftClearance_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = rmf_fleet_msgs__srv__LiftClearance_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
rmf_fleet_msgs__srv__LiftClearance_Request__Sequence__destroy(rmf_fleet_msgs__srv__LiftClearance_Request__Sequence * array)
{
  if (array) {
    rmf_fleet_msgs__srv__LiftClearance_Request__Sequence__fini(array);
  }
  free(array);
}


bool
rmf_fleet_msgs__srv__LiftClearance_Response__init(rmf_fleet_msgs__srv__LiftClearance_Response * msg)
{
  if (!msg) {
    return false;
  }
  // decision
  return true;
}

void
rmf_fleet_msgs__srv__LiftClearance_Response__fini(rmf_fleet_msgs__srv__LiftClearance_Response * msg)
{
  if (!msg) {
    return;
  }
  // decision
}

rmf_fleet_msgs__srv__LiftClearance_Response *
rmf_fleet_msgs__srv__LiftClearance_Response__create()
{
  rmf_fleet_msgs__srv__LiftClearance_Response * msg = (rmf_fleet_msgs__srv__LiftClearance_Response *)malloc(sizeof(rmf_fleet_msgs__srv__LiftClearance_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rmf_fleet_msgs__srv__LiftClearance_Response));
  bool success = rmf_fleet_msgs__srv__LiftClearance_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
rmf_fleet_msgs__srv__LiftClearance_Response__destroy(rmf_fleet_msgs__srv__LiftClearance_Response * msg)
{
  if (msg) {
    rmf_fleet_msgs__srv__LiftClearance_Response__fini(msg);
  }
  free(msg);
}


bool
rmf_fleet_msgs__srv__LiftClearance_Response__Sequence__init(rmf_fleet_msgs__srv__LiftClearance_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rmf_fleet_msgs__srv__LiftClearance_Response * data = NULL;
  if (size) {
    data = (rmf_fleet_msgs__srv__LiftClearance_Response *)calloc(size, sizeof(rmf_fleet_msgs__srv__LiftClearance_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rmf_fleet_msgs__srv__LiftClearance_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rmf_fleet_msgs__srv__LiftClearance_Response__fini(&data[i - 1]);
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
rmf_fleet_msgs__srv__LiftClearance_Response__Sequence__fini(rmf_fleet_msgs__srv__LiftClearance_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rmf_fleet_msgs__srv__LiftClearance_Response__fini(&array->data[i]);
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

rmf_fleet_msgs__srv__LiftClearance_Response__Sequence *
rmf_fleet_msgs__srv__LiftClearance_Response__Sequence__create(size_t size)
{
  rmf_fleet_msgs__srv__LiftClearance_Response__Sequence * array = (rmf_fleet_msgs__srv__LiftClearance_Response__Sequence *)malloc(sizeof(rmf_fleet_msgs__srv__LiftClearance_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = rmf_fleet_msgs__srv__LiftClearance_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
rmf_fleet_msgs__srv__LiftClearance_Response__Sequence__destroy(rmf_fleet_msgs__srv__LiftClearance_Response__Sequence * array)
{
  if (array) {
    rmf_fleet_msgs__srv__LiftClearance_Response__Sequence__fini(array);
  }
  free(array);
}
