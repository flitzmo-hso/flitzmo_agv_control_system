// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rmf_fleet_msgs:msg/FleetState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rmf_fleet_msgs/msg/detail/fleet_state__rosidl_typesupport_introspection_c.h"
#include "rmf_fleet_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rmf_fleet_msgs/msg/detail/fleet_state__functions.h"
#include "rmf_fleet_msgs/msg/detail/fleet_state__struct.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"
// Member `robots`
#include "rmf_fleet_msgs/msg/robot_state.h"
// Member `robots`
#include "rmf_fleet_msgs/msg/detail/robot_state__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void FleetState__rosidl_typesupport_introspection_c__FleetState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rmf_fleet_msgs__msg__FleetState__init(message_memory);
}

void FleetState__rosidl_typesupport_introspection_c__FleetState_fini_function(void * message_memory)
{
  rmf_fleet_msgs__msg__FleetState__fini(message_memory);
}

size_t FleetState__rosidl_typesupport_introspection_c__size_function__RobotState__robots(
  const void * untyped_member)
{
  const rmf_fleet_msgs__msg__RobotState__Sequence * member =
    (const rmf_fleet_msgs__msg__RobotState__Sequence *)(untyped_member);
  return member->size;
}

const void * FleetState__rosidl_typesupport_introspection_c__get_const_function__RobotState__robots(
  const void * untyped_member, size_t index)
{
  const rmf_fleet_msgs__msg__RobotState__Sequence * member =
    (const rmf_fleet_msgs__msg__RobotState__Sequence *)(untyped_member);
  return &member->data[index];
}

void * FleetState__rosidl_typesupport_introspection_c__get_function__RobotState__robots(
  void * untyped_member, size_t index)
{
  rmf_fleet_msgs__msg__RobotState__Sequence * member =
    (rmf_fleet_msgs__msg__RobotState__Sequence *)(untyped_member);
  return &member->data[index];
}

bool FleetState__rosidl_typesupport_introspection_c__resize_function__RobotState__robots(
  void * untyped_member, size_t size)
{
  rmf_fleet_msgs__msg__RobotState__Sequence * member =
    (rmf_fleet_msgs__msg__RobotState__Sequence *)(untyped_member);
  rmf_fleet_msgs__msg__RobotState__Sequence__fini(member);
  return rmf_fleet_msgs__msg__RobotState__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember FleetState__rosidl_typesupport_introspection_c__FleetState_message_member_array[2] = {
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_fleet_msgs__msg__FleetState, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "robots",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_fleet_msgs__msg__FleetState, robots),  // bytes offset in struct
    NULL,  // default value
    FleetState__rosidl_typesupport_introspection_c__size_function__RobotState__robots,  // size() function pointer
    FleetState__rosidl_typesupport_introspection_c__get_const_function__RobotState__robots,  // get_const(index) function pointer
    FleetState__rosidl_typesupport_introspection_c__get_function__RobotState__robots,  // get(index) function pointer
    FleetState__rosidl_typesupport_introspection_c__resize_function__RobotState__robots  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers FleetState__rosidl_typesupport_introspection_c__FleetState_message_members = {
  "rmf_fleet_msgs__msg",  // message namespace
  "FleetState",  // message name
  2,  // number of fields
  sizeof(rmf_fleet_msgs__msg__FleetState),
  FleetState__rosidl_typesupport_introspection_c__FleetState_message_member_array,  // message members
  FleetState__rosidl_typesupport_introspection_c__FleetState_init_function,  // function to initialize message memory (memory has to be allocated)
  FleetState__rosidl_typesupport_introspection_c__FleetState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t FleetState__rosidl_typesupport_introspection_c__FleetState_message_type_support_handle = {
  0,
  &FleetState__rosidl_typesupport_introspection_c__FleetState_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rmf_fleet_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_fleet_msgs, msg, FleetState)() {
  FleetState__rosidl_typesupport_introspection_c__FleetState_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_fleet_msgs, msg, RobotState)();
  if (!FleetState__rosidl_typesupport_introspection_c__FleetState_message_type_support_handle.typesupport_identifier) {
    FleetState__rosidl_typesupport_introspection_c__FleetState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &FleetState__rosidl_typesupport_introspection_c__FleetState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
