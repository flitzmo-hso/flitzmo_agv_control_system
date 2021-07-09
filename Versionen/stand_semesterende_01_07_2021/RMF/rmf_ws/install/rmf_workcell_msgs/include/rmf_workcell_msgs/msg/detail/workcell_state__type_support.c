// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rmf_workcell_msgs:msg/WorkcellState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rmf_workcell_msgs/msg/detail/workcell_state__rosidl_typesupport_introspection_c.h"
#include "rmf_workcell_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rmf_workcell_msgs/msg/detail/workcell_state__functions.h"
#include "rmf_workcell_msgs/msg/detail/workcell_state__struct.h"


// Include directives for member types
// Member `time`
#include "builtin_interfaces/msg/time.h"
// Member `time`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"
// Member `guid`
// Member `request_guid_queue`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void WorkcellState__rosidl_typesupport_introspection_c__WorkcellState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rmf_workcell_msgs__msg__WorkcellState__init(message_memory);
}

void WorkcellState__rosidl_typesupport_introspection_c__WorkcellState_fini_function(void * message_memory)
{
  rmf_workcell_msgs__msg__WorkcellState__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember WorkcellState__rosidl_typesupport_introspection_c__WorkcellState_message_member_array[4] = {
  {
    "time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_workcell_msgs__msg__WorkcellState, time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "guid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_workcell_msgs__msg__WorkcellState, guid),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "mode",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_workcell_msgs__msg__WorkcellState, mode),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request_guid_queue",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_workcell_msgs__msg__WorkcellState, request_guid_queue),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers WorkcellState__rosidl_typesupport_introspection_c__WorkcellState_message_members = {
  "rmf_workcell_msgs__msg",  // message namespace
  "WorkcellState",  // message name
  4,  // number of fields
  sizeof(rmf_workcell_msgs__msg__WorkcellState),
  WorkcellState__rosidl_typesupport_introspection_c__WorkcellState_message_member_array,  // message members
  WorkcellState__rosidl_typesupport_introspection_c__WorkcellState_init_function,  // function to initialize message memory (memory has to be allocated)
  WorkcellState__rosidl_typesupport_introspection_c__WorkcellState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t WorkcellState__rosidl_typesupport_introspection_c__WorkcellState_message_type_support_handle = {
  0,
  &WorkcellState__rosidl_typesupport_introspection_c__WorkcellState_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rmf_workcell_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_workcell_msgs, msg, WorkcellState)() {
  WorkcellState__rosidl_typesupport_introspection_c__WorkcellState_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!WorkcellState__rosidl_typesupport_introspection_c__WorkcellState_message_type_support_handle.typesupport_identifier) {
    WorkcellState__rosidl_typesupport_introspection_c__WorkcellState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &WorkcellState__rosidl_typesupport_introspection_c__WorkcellState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
