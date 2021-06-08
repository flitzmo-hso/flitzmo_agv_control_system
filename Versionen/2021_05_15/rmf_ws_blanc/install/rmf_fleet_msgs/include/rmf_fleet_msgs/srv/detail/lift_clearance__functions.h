// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from rmf_fleet_msgs:srv/LiftClearance.idl
// generated code does not contain a copyright notice

#ifndef RMF_FLEET_MSGS__SRV__DETAIL__LIFT_CLEARANCE__FUNCTIONS_H_
#define RMF_FLEET_MSGS__SRV__DETAIL__LIFT_CLEARANCE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "rmf_fleet_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "rmf_fleet_msgs/srv/detail/lift_clearance__struct.h"

/// Initialize srv/LiftClearance message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * rmf_fleet_msgs__srv__LiftClearance_Request
 * )) before or use
 * rmf_fleet_msgs__srv__LiftClearance_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_fleet_msgs
bool
rmf_fleet_msgs__srv__LiftClearance_Request__init(rmf_fleet_msgs__srv__LiftClearance_Request * msg);

/// Finalize srv/LiftClearance message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_fleet_msgs
void
rmf_fleet_msgs__srv__LiftClearance_Request__fini(rmf_fleet_msgs__srv__LiftClearance_Request * msg);

/// Create srv/LiftClearance message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * rmf_fleet_msgs__srv__LiftClearance_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_fleet_msgs
rmf_fleet_msgs__srv__LiftClearance_Request *
rmf_fleet_msgs__srv__LiftClearance_Request__create();

/// Destroy srv/LiftClearance message.
/**
 * It calls
 * rmf_fleet_msgs__srv__LiftClearance_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_fleet_msgs
void
rmf_fleet_msgs__srv__LiftClearance_Request__destroy(rmf_fleet_msgs__srv__LiftClearance_Request * msg);


/// Initialize array of srv/LiftClearance messages.
/**
 * It allocates the memory for the number of elements and calls
 * rmf_fleet_msgs__srv__LiftClearance_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_fleet_msgs
bool
rmf_fleet_msgs__srv__LiftClearance_Request__Sequence__init(rmf_fleet_msgs__srv__LiftClearance_Request__Sequence * array, size_t size);

/// Finalize array of srv/LiftClearance messages.
/**
 * It calls
 * rmf_fleet_msgs__srv__LiftClearance_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_fleet_msgs
void
rmf_fleet_msgs__srv__LiftClearance_Request__Sequence__fini(rmf_fleet_msgs__srv__LiftClearance_Request__Sequence * array);

/// Create array of srv/LiftClearance messages.
/**
 * It allocates the memory for the array and calls
 * rmf_fleet_msgs__srv__LiftClearance_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_fleet_msgs
rmf_fleet_msgs__srv__LiftClearance_Request__Sequence *
rmf_fleet_msgs__srv__LiftClearance_Request__Sequence__create(size_t size);

/// Destroy array of srv/LiftClearance messages.
/**
 * It calls
 * rmf_fleet_msgs__srv__LiftClearance_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_fleet_msgs
void
rmf_fleet_msgs__srv__LiftClearance_Request__Sequence__destroy(rmf_fleet_msgs__srv__LiftClearance_Request__Sequence * array);

/// Initialize srv/LiftClearance message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * rmf_fleet_msgs__srv__LiftClearance_Response
 * )) before or use
 * rmf_fleet_msgs__srv__LiftClearance_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_fleet_msgs
bool
rmf_fleet_msgs__srv__LiftClearance_Response__init(rmf_fleet_msgs__srv__LiftClearance_Response * msg);

/// Finalize srv/LiftClearance message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_fleet_msgs
void
rmf_fleet_msgs__srv__LiftClearance_Response__fini(rmf_fleet_msgs__srv__LiftClearance_Response * msg);

/// Create srv/LiftClearance message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * rmf_fleet_msgs__srv__LiftClearance_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_fleet_msgs
rmf_fleet_msgs__srv__LiftClearance_Response *
rmf_fleet_msgs__srv__LiftClearance_Response__create();

/// Destroy srv/LiftClearance message.
/**
 * It calls
 * rmf_fleet_msgs__srv__LiftClearance_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_fleet_msgs
void
rmf_fleet_msgs__srv__LiftClearance_Response__destroy(rmf_fleet_msgs__srv__LiftClearance_Response * msg);


/// Initialize array of srv/LiftClearance messages.
/**
 * It allocates the memory for the number of elements and calls
 * rmf_fleet_msgs__srv__LiftClearance_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_fleet_msgs
bool
rmf_fleet_msgs__srv__LiftClearance_Response__Sequence__init(rmf_fleet_msgs__srv__LiftClearance_Response__Sequence * array, size_t size);

/// Finalize array of srv/LiftClearance messages.
/**
 * It calls
 * rmf_fleet_msgs__srv__LiftClearance_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_fleet_msgs
void
rmf_fleet_msgs__srv__LiftClearance_Response__Sequence__fini(rmf_fleet_msgs__srv__LiftClearance_Response__Sequence * array);

/// Create array of srv/LiftClearance messages.
/**
 * It allocates the memory for the array and calls
 * rmf_fleet_msgs__srv__LiftClearance_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_fleet_msgs
rmf_fleet_msgs__srv__LiftClearance_Response__Sequence *
rmf_fleet_msgs__srv__LiftClearance_Response__Sequence__create(size_t size);

/// Destroy array of srv/LiftClearance messages.
/**
 * It calls
 * rmf_fleet_msgs__srv__LiftClearance_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_fleet_msgs
void
rmf_fleet_msgs__srv__LiftClearance_Response__Sequence__destroy(rmf_fleet_msgs__srv__LiftClearance_Response__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // RMF_FLEET_MSGS__SRV__DETAIL__LIFT_CLEARANCE__FUNCTIONS_H_
