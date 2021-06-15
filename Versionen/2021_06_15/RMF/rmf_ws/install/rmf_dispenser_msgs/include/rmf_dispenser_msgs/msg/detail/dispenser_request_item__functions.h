// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from rmf_dispenser_msgs:msg/DispenserRequestItem.idl
// generated code does not contain a copyright notice

#ifndef RMF_DISPENSER_MSGS__MSG__DETAIL__DISPENSER_REQUEST_ITEM__FUNCTIONS_H_
#define RMF_DISPENSER_MSGS__MSG__DETAIL__DISPENSER_REQUEST_ITEM__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "rmf_dispenser_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "rmf_dispenser_msgs/msg/detail/dispenser_request_item__struct.h"

/// Initialize msg/DispenserRequestItem message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * rmf_dispenser_msgs__msg__DispenserRequestItem
 * )) before or use
 * rmf_dispenser_msgs__msg__DispenserRequestItem__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_dispenser_msgs
bool
rmf_dispenser_msgs__msg__DispenserRequestItem__init(rmf_dispenser_msgs__msg__DispenserRequestItem * msg);

/// Finalize msg/DispenserRequestItem message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_dispenser_msgs
void
rmf_dispenser_msgs__msg__DispenserRequestItem__fini(rmf_dispenser_msgs__msg__DispenserRequestItem * msg);

/// Create msg/DispenserRequestItem message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * rmf_dispenser_msgs__msg__DispenserRequestItem__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_dispenser_msgs
rmf_dispenser_msgs__msg__DispenserRequestItem *
rmf_dispenser_msgs__msg__DispenserRequestItem__create();

/// Destroy msg/DispenserRequestItem message.
/**
 * It calls
 * rmf_dispenser_msgs__msg__DispenserRequestItem__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_dispenser_msgs
void
rmf_dispenser_msgs__msg__DispenserRequestItem__destroy(rmf_dispenser_msgs__msg__DispenserRequestItem * msg);


/// Initialize array of msg/DispenserRequestItem messages.
/**
 * It allocates the memory for the number of elements and calls
 * rmf_dispenser_msgs__msg__DispenserRequestItem__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_dispenser_msgs
bool
rmf_dispenser_msgs__msg__DispenserRequestItem__Sequence__init(rmf_dispenser_msgs__msg__DispenserRequestItem__Sequence * array, size_t size);

/// Finalize array of msg/DispenserRequestItem messages.
/**
 * It calls
 * rmf_dispenser_msgs__msg__DispenserRequestItem__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_dispenser_msgs
void
rmf_dispenser_msgs__msg__DispenserRequestItem__Sequence__fini(rmf_dispenser_msgs__msg__DispenserRequestItem__Sequence * array);

/// Create array of msg/DispenserRequestItem messages.
/**
 * It allocates the memory for the array and calls
 * rmf_dispenser_msgs__msg__DispenserRequestItem__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_dispenser_msgs
rmf_dispenser_msgs__msg__DispenserRequestItem__Sequence *
rmf_dispenser_msgs__msg__DispenserRequestItem__Sequence__create(size_t size);

/// Destroy array of msg/DispenserRequestItem messages.
/**
 * It calls
 * rmf_dispenser_msgs__msg__DispenserRequestItem__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_dispenser_msgs
void
rmf_dispenser_msgs__msg__DispenserRequestItem__Sequence__destroy(rmf_dispenser_msgs__msg__DispenserRequestItem__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // RMF_DISPENSER_MSGS__MSG__DETAIL__DISPENSER_REQUEST_ITEM__FUNCTIONS_H_
