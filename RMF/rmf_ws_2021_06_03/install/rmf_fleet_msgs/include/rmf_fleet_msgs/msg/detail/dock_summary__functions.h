// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from rmf_fleet_msgs:msg/DockSummary.idl
// generated code does not contain a copyright notice

#ifndef RMF_FLEET_MSGS__MSG__DETAIL__DOCK_SUMMARY__FUNCTIONS_H_
#define RMF_FLEET_MSGS__MSG__DETAIL__DOCK_SUMMARY__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "rmf_fleet_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "rmf_fleet_msgs/msg/detail/dock_summary__struct.h"

/// Initialize msg/DockSummary message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * rmf_fleet_msgs__msg__DockSummary
 * )) before or use
 * rmf_fleet_msgs__msg__DockSummary__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_fleet_msgs
bool
rmf_fleet_msgs__msg__DockSummary__init(rmf_fleet_msgs__msg__DockSummary * msg);

/// Finalize msg/DockSummary message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_fleet_msgs
void
rmf_fleet_msgs__msg__DockSummary__fini(rmf_fleet_msgs__msg__DockSummary * msg);

/// Create msg/DockSummary message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * rmf_fleet_msgs__msg__DockSummary__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_fleet_msgs
rmf_fleet_msgs__msg__DockSummary *
rmf_fleet_msgs__msg__DockSummary__create();

/// Destroy msg/DockSummary message.
/**
 * It calls
 * rmf_fleet_msgs__msg__DockSummary__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_fleet_msgs
void
rmf_fleet_msgs__msg__DockSummary__destroy(rmf_fleet_msgs__msg__DockSummary * msg);


/// Initialize array of msg/DockSummary messages.
/**
 * It allocates the memory for the number of elements and calls
 * rmf_fleet_msgs__msg__DockSummary__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_fleet_msgs
bool
rmf_fleet_msgs__msg__DockSummary__Sequence__init(rmf_fleet_msgs__msg__DockSummary__Sequence * array, size_t size);

/// Finalize array of msg/DockSummary messages.
/**
 * It calls
 * rmf_fleet_msgs__msg__DockSummary__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_fleet_msgs
void
rmf_fleet_msgs__msg__DockSummary__Sequence__fini(rmf_fleet_msgs__msg__DockSummary__Sequence * array);

/// Create array of msg/DockSummary messages.
/**
 * It allocates the memory for the array and calls
 * rmf_fleet_msgs__msg__DockSummary__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_fleet_msgs
rmf_fleet_msgs__msg__DockSummary__Sequence *
rmf_fleet_msgs__msg__DockSummary__Sequence__create(size_t size);

/// Destroy array of msg/DockSummary messages.
/**
 * It calls
 * rmf_fleet_msgs__msg__DockSummary__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_fleet_msgs
void
rmf_fleet_msgs__msg__DockSummary__Sequence__destroy(rmf_fleet_msgs__msg__DockSummary__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // RMF_FLEET_MSGS__MSG__DETAIL__DOCK_SUMMARY__FUNCTIONS_H_
