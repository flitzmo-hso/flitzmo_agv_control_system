// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from rmf_building_map_msgs:msg/Level.idl
// generated code does not contain a copyright notice

#ifndef RMF_BUILDING_MAP_MSGS__MSG__DETAIL__LEVEL__FUNCTIONS_H_
#define RMF_BUILDING_MAP_MSGS__MSG__DETAIL__LEVEL__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "rmf_building_map_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "rmf_building_map_msgs/msg/detail/level__struct.h"

/// Initialize msg/Level message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * rmf_building_map_msgs__msg__Level
 * )) before or use
 * rmf_building_map_msgs__msg__Level__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_building_map_msgs
bool
rmf_building_map_msgs__msg__Level__init(rmf_building_map_msgs__msg__Level * msg);

/// Finalize msg/Level message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_building_map_msgs
void
rmf_building_map_msgs__msg__Level__fini(rmf_building_map_msgs__msg__Level * msg);

/// Create msg/Level message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * rmf_building_map_msgs__msg__Level__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_building_map_msgs
rmf_building_map_msgs__msg__Level *
rmf_building_map_msgs__msg__Level__create();

/// Destroy msg/Level message.
/**
 * It calls
 * rmf_building_map_msgs__msg__Level__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_building_map_msgs
void
rmf_building_map_msgs__msg__Level__destroy(rmf_building_map_msgs__msg__Level * msg);


/// Initialize array of msg/Level messages.
/**
 * It allocates the memory for the number of elements and calls
 * rmf_building_map_msgs__msg__Level__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_building_map_msgs
bool
rmf_building_map_msgs__msg__Level__Sequence__init(rmf_building_map_msgs__msg__Level__Sequence * array, size_t size);

/// Finalize array of msg/Level messages.
/**
 * It calls
 * rmf_building_map_msgs__msg__Level__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_building_map_msgs
void
rmf_building_map_msgs__msg__Level__Sequence__fini(rmf_building_map_msgs__msg__Level__Sequence * array);

/// Create array of msg/Level messages.
/**
 * It allocates the memory for the array and calls
 * rmf_building_map_msgs__msg__Level__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_building_map_msgs
rmf_building_map_msgs__msg__Level__Sequence *
rmf_building_map_msgs__msg__Level__Sequence__create(size_t size);

/// Destroy array of msg/Level messages.
/**
 * It calls
 * rmf_building_map_msgs__msg__Level__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_building_map_msgs
void
rmf_building_map_msgs__msg__Level__Sequence__destroy(rmf_building_map_msgs__msg__Level__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // RMF_BUILDING_MAP_MSGS__MSG__DETAIL__LEVEL__FUNCTIONS_H_
