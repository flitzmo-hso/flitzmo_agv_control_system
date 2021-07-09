// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rmf_traffic_msgs:msg/ParticipantDescription.idl
// generated code does not contain a copyright notice
#include "rmf_traffic_msgs/msg/detail/participant_description__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `name`
// Member `owner`
#include "rosidl_runtime_c/string_functions.h"
// Member `profile`
#include "rmf_traffic_msgs/msg/detail/profile__functions.h"

bool
rmf_traffic_msgs__msg__ParticipantDescription__init(rmf_traffic_msgs__msg__ParticipantDescription * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    rmf_traffic_msgs__msg__ParticipantDescription__fini(msg);
    return false;
  }
  // owner
  if (!rosidl_runtime_c__String__init(&msg->owner)) {
    rmf_traffic_msgs__msg__ParticipantDescription__fini(msg);
    return false;
  }
  // responsiveness
  // profile
  if (!rmf_traffic_msgs__msg__Profile__init(&msg->profile)) {
    rmf_traffic_msgs__msg__ParticipantDescription__fini(msg);
    return false;
  }
  return true;
}

void
rmf_traffic_msgs__msg__ParticipantDescription__fini(rmf_traffic_msgs__msg__ParticipantDescription * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // owner
  rosidl_runtime_c__String__fini(&msg->owner);
  // responsiveness
  // profile
  rmf_traffic_msgs__msg__Profile__fini(&msg->profile);
}

rmf_traffic_msgs__msg__ParticipantDescription *
rmf_traffic_msgs__msg__ParticipantDescription__create()
{
  rmf_traffic_msgs__msg__ParticipantDescription * msg = (rmf_traffic_msgs__msg__ParticipantDescription *)malloc(sizeof(rmf_traffic_msgs__msg__ParticipantDescription));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rmf_traffic_msgs__msg__ParticipantDescription));
  bool success = rmf_traffic_msgs__msg__ParticipantDescription__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
rmf_traffic_msgs__msg__ParticipantDescription__destroy(rmf_traffic_msgs__msg__ParticipantDescription * msg)
{
  if (msg) {
    rmf_traffic_msgs__msg__ParticipantDescription__fini(msg);
  }
  free(msg);
}


bool
rmf_traffic_msgs__msg__ParticipantDescription__Sequence__init(rmf_traffic_msgs__msg__ParticipantDescription__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rmf_traffic_msgs__msg__ParticipantDescription * data = NULL;
  if (size) {
    data = (rmf_traffic_msgs__msg__ParticipantDescription *)calloc(size, sizeof(rmf_traffic_msgs__msg__ParticipantDescription));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rmf_traffic_msgs__msg__ParticipantDescription__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rmf_traffic_msgs__msg__ParticipantDescription__fini(&data[i - 1]);
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
rmf_traffic_msgs__msg__ParticipantDescription__Sequence__fini(rmf_traffic_msgs__msg__ParticipantDescription__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rmf_traffic_msgs__msg__ParticipantDescription__fini(&array->data[i]);
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

rmf_traffic_msgs__msg__ParticipantDescription__Sequence *
rmf_traffic_msgs__msg__ParticipantDescription__Sequence__create(size_t size)
{
  rmf_traffic_msgs__msg__ParticipantDescription__Sequence * array = (rmf_traffic_msgs__msg__ParticipantDescription__Sequence *)malloc(sizeof(rmf_traffic_msgs__msg__ParticipantDescription__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = rmf_traffic_msgs__msg__ParticipantDescription__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
rmf_traffic_msgs__msg__ParticipantDescription__Sequence__destroy(rmf_traffic_msgs__msg__ParticipantDescription__Sequence * array)
{
  if (array) {
    rmf_traffic_msgs__msg__ParticipantDescription__Sequence__fini(array);
  }
  free(array);
}
