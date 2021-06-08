// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from rmf_charger_msgs:msg/ChargerRequest.idl
// generated code does not contain a copyright notice

#ifndef RMF_CHARGER_MSGS__MSG__DETAIL__CHARGER_REQUEST__FUNCTIONS_H_
#define RMF_CHARGER_MSGS__MSG__DETAIL__CHARGER_REQUEST__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "rmf_charger_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "rmf_charger_msgs/msg/detail/charger_request__struct.h"

/// Initialize msg/ChargerRequest message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * rmf_charger_msgs__msg__ChargerRequest
 * )) before or use
 * rmf_charger_msgs__msg__ChargerRequest__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_charger_msgs
bool
rmf_charger_msgs__msg__ChargerRequest__init(rmf_charger_msgs__msg__ChargerRequest * msg);

/// Finalize msg/ChargerRequest message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_charger_msgs
void
rmf_charger_msgs__msg__ChargerRequest__fini(rmf_charger_msgs__msg__ChargerRequest * msg);

/// Create msg/ChargerRequest message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * rmf_charger_msgs__msg__ChargerRequest__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_charger_msgs
rmf_charger_msgs__msg__ChargerRequest *
rmf_charger_msgs__msg__ChargerRequest__create();

/// Destroy msg/ChargerRequest message.
/**
 * It calls
 * rmf_charger_msgs__msg__ChargerRequest__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_charger_msgs
void
rmf_charger_msgs__msg__ChargerRequest__destroy(rmf_charger_msgs__msg__ChargerRequest * msg);


/// Initialize array of msg/ChargerRequest messages.
/**
 * It allocates the memory for the number of elements and calls
 * rmf_charger_msgs__msg__ChargerRequest__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_charger_msgs
bool
rmf_charger_msgs__msg__ChargerRequest__Sequence__init(rmf_charger_msgs__msg__ChargerRequest__Sequence * array, size_t size);

/// Finalize array of msg/ChargerRequest messages.
/**
 * It calls
 * rmf_charger_msgs__msg__ChargerRequest__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_charger_msgs
void
rmf_charger_msgs__msg__ChargerRequest__Sequence__fini(rmf_charger_msgs__msg__ChargerRequest__Sequence * array);

/// Create array of msg/ChargerRequest messages.
/**
 * It allocates the memory for the array and calls
 * rmf_charger_msgs__msg__ChargerRequest__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_charger_msgs
rmf_charger_msgs__msg__ChargerRequest__Sequence *
rmf_charger_msgs__msg__ChargerRequest__Sequence__create(size_t size);

/// Destroy array of msg/ChargerRequest messages.
/**
 * It calls
 * rmf_charger_msgs__msg__ChargerRequest__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_charger_msgs
void
rmf_charger_msgs__msg__ChargerRequest__Sequence__destroy(rmf_charger_msgs__msg__ChargerRequest__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // RMF_CHARGER_MSGS__MSG__DETAIL__CHARGER_REQUEST__FUNCTIONS_H_
