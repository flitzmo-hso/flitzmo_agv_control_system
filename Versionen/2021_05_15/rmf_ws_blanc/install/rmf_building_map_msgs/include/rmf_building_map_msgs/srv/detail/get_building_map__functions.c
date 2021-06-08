// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rmf_building_map_msgs:srv/GetBuildingMap.idl
// generated code does not contain a copyright notice
#include "rmf_building_map_msgs/srv/detail/get_building_map__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool
rmf_building_map_msgs__srv__GetBuildingMap_Request__init(rmf_building_map_msgs__srv__GetBuildingMap_Request * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
rmf_building_map_msgs__srv__GetBuildingMap_Request__fini(rmf_building_map_msgs__srv__GetBuildingMap_Request * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

rmf_building_map_msgs__srv__GetBuildingMap_Request *
rmf_building_map_msgs__srv__GetBuildingMap_Request__create()
{
  rmf_building_map_msgs__srv__GetBuildingMap_Request * msg = (rmf_building_map_msgs__srv__GetBuildingMap_Request *)malloc(sizeof(rmf_building_map_msgs__srv__GetBuildingMap_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rmf_building_map_msgs__srv__GetBuildingMap_Request));
  bool success = rmf_building_map_msgs__srv__GetBuildingMap_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
rmf_building_map_msgs__srv__GetBuildingMap_Request__destroy(rmf_building_map_msgs__srv__GetBuildingMap_Request * msg)
{
  if (msg) {
    rmf_building_map_msgs__srv__GetBuildingMap_Request__fini(msg);
  }
  free(msg);
}


bool
rmf_building_map_msgs__srv__GetBuildingMap_Request__Sequence__init(rmf_building_map_msgs__srv__GetBuildingMap_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rmf_building_map_msgs__srv__GetBuildingMap_Request * data = NULL;
  if (size) {
    data = (rmf_building_map_msgs__srv__GetBuildingMap_Request *)calloc(size, sizeof(rmf_building_map_msgs__srv__GetBuildingMap_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rmf_building_map_msgs__srv__GetBuildingMap_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rmf_building_map_msgs__srv__GetBuildingMap_Request__fini(&data[i - 1]);
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
rmf_building_map_msgs__srv__GetBuildingMap_Request__Sequence__fini(rmf_building_map_msgs__srv__GetBuildingMap_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rmf_building_map_msgs__srv__GetBuildingMap_Request__fini(&array->data[i]);
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

rmf_building_map_msgs__srv__GetBuildingMap_Request__Sequence *
rmf_building_map_msgs__srv__GetBuildingMap_Request__Sequence__create(size_t size)
{
  rmf_building_map_msgs__srv__GetBuildingMap_Request__Sequence * array = (rmf_building_map_msgs__srv__GetBuildingMap_Request__Sequence *)malloc(sizeof(rmf_building_map_msgs__srv__GetBuildingMap_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = rmf_building_map_msgs__srv__GetBuildingMap_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
rmf_building_map_msgs__srv__GetBuildingMap_Request__Sequence__destroy(rmf_building_map_msgs__srv__GetBuildingMap_Request__Sequence * array)
{
  if (array) {
    rmf_building_map_msgs__srv__GetBuildingMap_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `building_map`
#include "rmf_building_map_msgs/msg/detail/building_map__functions.h"

bool
rmf_building_map_msgs__srv__GetBuildingMap_Response__init(rmf_building_map_msgs__srv__GetBuildingMap_Response * msg)
{
  if (!msg) {
    return false;
  }
  // building_map
  if (!rmf_building_map_msgs__msg__BuildingMap__init(&msg->building_map)) {
    rmf_building_map_msgs__srv__GetBuildingMap_Response__fini(msg);
    return false;
  }
  return true;
}

void
rmf_building_map_msgs__srv__GetBuildingMap_Response__fini(rmf_building_map_msgs__srv__GetBuildingMap_Response * msg)
{
  if (!msg) {
    return;
  }
  // building_map
  rmf_building_map_msgs__msg__BuildingMap__fini(&msg->building_map);
}

rmf_building_map_msgs__srv__GetBuildingMap_Response *
rmf_building_map_msgs__srv__GetBuildingMap_Response__create()
{
  rmf_building_map_msgs__srv__GetBuildingMap_Response * msg = (rmf_building_map_msgs__srv__GetBuildingMap_Response *)malloc(sizeof(rmf_building_map_msgs__srv__GetBuildingMap_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rmf_building_map_msgs__srv__GetBuildingMap_Response));
  bool success = rmf_building_map_msgs__srv__GetBuildingMap_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
rmf_building_map_msgs__srv__GetBuildingMap_Response__destroy(rmf_building_map_msgs__srv__GetBuildingMap_Response * msg)
{
  if (msg) {
    rmf_building_map_msgs__srv__GetBuildingMap_Response__fini(msg);
  }
  free(msg);
}


bool
rmf_building_map_msgs__srv__GetBuildingMap_Response__Sequence__init(rmf_building_map_msgs__srv__GetBuildingMap_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rmf_building_map_msgs__srv__GetBuildingMap_Response * data = NULL;
  if (size) {
    data = (rmf_building_map_msgs__srv__GetBuildingMap_Response *)calloc(size, sizeof(rmf_building_map_msgs__srv__GetBuildingMap_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rmf_building_map_msgs__srv__GetBuildingMap_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rmf_building_map_msgs__srv__GetBuildingMap_Response__fini(&data[i - 1]);
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
rmf_building_map_msgs__srv__GetBuildingMap_Response__Sequence__fini(rmf_building_map_msgs__srv__GetBuildingMap_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rmf_building_map_msgs__srv__GetBuildingMap_Response__fini(&array->data[i]);
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

rmf_building_map_msgs__srv__GetBuildingMap_Response__Sequence *
rmf_building_map_msgs__srv__GetBuildingMap_Response__Sequence__create(size_t size)
{
  rmf_building_map_msgs__srv__GetBuildingMap_Response__Sequence * array = (rmf_building_map_msgs__srv__GetBuildingMap_Response__Sequence *)malloc(sizeof(rmf_building_map_msgs__srv__GetBuildingMap_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = rmf_building_map_msgs__srv__GetBuildingMap_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
rmf_building_map_msgs__srv__GetBuildingMap_Response__Sequence__destroy(rmf_building_map_msgs__srv__GetBuildingMap_Response__Sequence * array)
{
  if (array) {
    rmf_building_map_msgs__srv__GetBuildingMap_Response__Sequence__fini(array);
  }
  free(array);
}
