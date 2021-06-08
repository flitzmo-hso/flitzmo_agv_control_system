// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from rmf_traffic_msgs:msg/MirrorUpdate.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__MIRROR_UPDATE__FUNCTIONS_H_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__MIRROR_UPDATE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "rmf_traffic_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "rmf_traffic_msgs/msg/detail/mirror_update__struct.h"

/// Initialize msg/MirrorUpdate message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * rmf_traffic_msgs__msg__MirrorUpdate
 * )) before or use
 * rmf_traffic_msgs__msg__MirrorUpdate__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_traffic_msgs
bool
rmf_traffic_msgs__msg__MirrorUpdate__init(rmf_traffic_msgs__msg__MirrorUpdate * msg);

/// Finalize msg/MirrorUpdate message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_traffic_msgs
void
rmf_traffic_msgs__msg__MirrorUpdate__fini(rmf_traffic_msgs__msg__MirrorUpdate * msg);

/// Create msg/MirrorUpdate message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * rmf_traffic_msgs__msg__MirrorUpdate__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_traffic_msgs
rmf_traffic_msgs__msg__MirrorUpdate *
rmf_traffic_msgs__msg__MirrorUpdate__create();

/// Destroy msg/MirrorUpdate message.
/**
 * It calls
 * rmf_traffic_msgs__msg__MirrorUpdate__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_traffic_msgs
void
rmf_traffic_msgs__msg__MirrorUpdate__destroy(rmf_traffic_msgs__msg__MirrorUpdate * msg);


/// Initialize array of msg/MirrorUpdate messages.
/**
 * It allocates the memory for the number of elements and calls
 * rmf_traffic_msgs__msg__MirrorUpdate__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_traffic_msgs
bool
rmf_traffic_msgs__msg__MirrorUpdate__Sequence__init(rmf_traffic_msgs__msg__MirrorUpdate__Sequence * array, size_t size);

/// Finalize array of msg/MirrorUpdate messages.
/**
 * It calls
 * rmf_traffic_msgs__msg__MirrorUpdate__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_traffic_msgs
void
rmf_traffic_msgs__msg__MirrorUpdate__Sequence__fini(rmf_traffic_msgs__msg__MirrorUpdate__Sequence * array);

/// Create array of msg/MirrorUpdate messages.
/**
 * It allocates the memory for the array and calls
 * rmf_traffic_msgs__msg__MirrorUpdate__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_traffic_msgs
rmf_traffic_msgs__msg__MirrorUpdate__Sequence *
rmf_traffic_msgs__msg__MirrorUpdate__Sequence__create(size_t size);

/// Destroy array of msg/MirrorUpdate messages.
/**
 * It calls
 * rmf_traffic_msgs__msg__MirrorUpdate__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_traffic_msgs
void
rmf_traffic_msgs__msg__MirrorUpdate__Sequence__destroy(rmf_traffic_msgs__msg__MirrorUpdate__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__MIRROR_UPDATE__FUNCTIONS_H_
