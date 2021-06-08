// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from rmf_ingestor_msgs:msg/IngestorRequestItem.idl
// generated code does not contain a copyright notice

#ifndef RMF_INGESTOR_MSGS__MSG__DETAIL__INGESTOR_REQUEST_ITEM__FUNCTIONS_H_
#define RMF_INGESTOR_MSGS__MSG__DETAIL__INGESTOR_REQUEST_ITEM__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "rmf_ingestor_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "rmf_ingestor_msgs/msg/detail/ingestor_request_item__struct.h"

/// Initialize msg/IngestorRequestItem message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * rmf_ingestor_msgs__msg__IngestorRequestItem
 * )) before or use
 * rmf_ingestor_msgs__msg__IngestorRequestItem__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_ingestor_msgs
bool
rmf_ingestor_msgs__msg__IngestorRequestItem__init(rmf_ingestor_msgs__msg__IngestorRequestItem * msg);

/// Finalize msg/IngestorRequestItem message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_ingestor_msgs
void
rmf_ingestor_msgs__msg__IngestorRequestItem__fini(rmf_ingestor_msgs__msg__IngestorRequestItem * msg);

/// Create msg/IngestorRequestItem message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * rmf_ingestor_msgs__msg__IngestorRequestItem__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_ingestor_msgs
rmf_ingestor_msgs__msg__IngestorRequestItem *
rmf_ingestor_msgs__msg__IngestorRequestItem__create();

/// Destroy msg/IngestorRequestItem message.
/**
 * It calls
 * rmf_ingestor_msgs__msg__IngestorRequestItem__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_ingestor_msgs
void
rmf_ingestor_msgs__msg__IngestorRequestItem__destroy(rmf_ingestor_msgs__msg__IngestorRequestItem * msg);


/// Initialize array of msg/IngestorRequestItem messages.
/**
 * It allocates the memory for the number of elements and calls
 * rmf_ingestor_msgs__msg__IngestorRequestItem__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_ingestor_msgs
bool
rmf_ingestor_msgs__msg__IngestorRequestItem__Sequence__init(rmf_ingestor_msgs__msg__IngestorRequestItem__Sequence * array, size_t size);

/// Finalize array of msg/IngestorRequestItem messages.
/**
 * It calls
 * rmf_ingestor_msgs__msg__IngestorRequestItem__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_ingestor_msgs
void
rmf_ingestor_msgs__msg__IngestorRequestItem__Sequence__fini(rmf_ingestor_msgs__msg__IngestorRequestItem__Sequence * array);

/// Create array of msg/IngestorRequestItem messages.
/**
 * It allocates the memory for the array and calls
 * rmf_ingestor_msgs__msg__IngestorRequestItem__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_ingestor_msgs
rmf_ingestor_msgs__msg__IngestorRequestItem__Sequence *
rmf_ingestor_msgs__msg__IngestorRequestItem__Sequence__create(size_t size);

/// Destroy array of msg/IngestorRequestItem messages.
/**
 * It calls
 * rmf_ingestor_msgs__msg__IngestorRequestItem__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_ingestor_msgs
void
rmf_ingestor_msgs__msg__IngestorRequestItem__Sequence__destroy(rmf_ingestor_msgs__msg__IngestorRequestItem__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // RMF_INGESTOR_MSGS__MSG__DETAIL__INGESTOR_REQUEST_ITEM__FUNCTIONS_H_
