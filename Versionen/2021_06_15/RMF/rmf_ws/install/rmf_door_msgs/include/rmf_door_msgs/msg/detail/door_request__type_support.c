// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rmf_door_msgs:msg/DoorRequest.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rmf_door_msgs/msg/detail/door_request__rosidl_typesupport_introspection_c.h"
#include "rmf_door_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rmf_door_msgs/msg/detail/door_request__functions.h"
#include "rmf_door_msgs/msg/detail/door_request__struct.h"


// Include directives for member types
// Member `request_time`
#include "builtin_interfaces/msg/time.h"
// Member `request_time`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"
// Member `requester_id`
// Member `door_name`
#include "rosidl_runtime_c/string_functions.h"
// Member `requested_mode`
#include "rmf_door_msgs/msg/door_mode.h"
// Member `requested_mode`
#include "rmf_door_msgs/msg/detail/door_mode__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void DoorRequest__rosidl_typesupport_introspection_c__DoorRequest_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rmf_door_msgs__msg__DoorRequest__init(message_memory);
}

void DoorRequest__rosidl_typesupport_introspection_c__DoorRequest_fini_function(void * message_memory)
{
  rmf_door_msgs__msg__DoorRequest__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember DoorRequest__rosidl_typesupport_introspection_c__DoorRequest_message_member_array[4] = {
  {
    "request_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_door_msgs__msg__DoorRequest, request_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "requester_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_door_msgs__msg__DoorRequest, requester_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "door_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_door_msgs__msg__DoorRequest, door_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "requested_mode",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_door_msgs__msg__DoorRequest, requested_mode),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers DoorRequest__rosidl_typesupport_introspection_c__DoorRequest_message_members = {
  "rmf_door_msgs__msg",  // message namespace
  "DoorRequest",  // message name
  4,  // number of fields
  sizeof(rmf_door_msgs__msg__DoorRequest),
  DoorRequest__rosidl_typesupport_introspection_c__DoorRequest_message_member_array,  // message members
  DoorRequest__rosidl_typesupport_introspection_c__DoorRequest_init_function,  // function to initialize message memory (memory has to be allocated)
  DoorRequest__rosidl_typesupport_introspection_c__DoorRequest_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t DoorRequest__rosidl_typesupport_introspection_c__DoorRequest_message_type_support_handle = {
  0,
  &DoorRequest__rosidl_typesupport_introspection_c__DoorRequest_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rmf_door_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_door_msgs, msg, DoorRequest)() {
  DoorRequest__rosidl_typesupport_introspection_c__DoorRequest_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  DoorRequest__rosidl_typesupport_introspection_c__DoorRequest_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_door_msgs, msg, DoorMode)();
  if (!DoorRequest__rosidl_typesupport_introspection_c__DoorRequest_message_type_support_handle.typesupport_identifier) {
    DoorRequest__rosidl_typesupport_introspection_c__DoorRequest_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &DoorRequest__rosidl_typesupport_introspection_c__DoorRequest_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
