// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rmf_traffic_msgs:msg/NegotiationRejection.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rmf_traffic_msgs/msg/detail/negotiation_rejection__rosidl_typesupport_introspection_c.h"
#include "rmf_traffic_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rmf_traffic_msgs/msg/detail/negotiation_rejection__functions.h"
#include "rmf_traffic_msgs/msg/detail/negotiation_rejection__struct.h"


// Include directives for member types
// Member `table`
#include "rmf_traffic_msgs/msg/negotiation_key.h"
// Member `table`
#include "rmf_traffic_msgs/msg/detail/negotiation_key__rosidl_typesupport_introspection_c.h"
// Member `alternatives`
#include "rmf_traffic_msgs/msg/itinerary.h"
// Member `alternatives`
#include "rmf_traffic_msgs/msg/detail/itinerary__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void NegotiationRejection__rosidl_typesupport_introspection_c__NegotiationRejection_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rmf_traffic_msgs__msg__NegotiationRejection__init(message_memory);
}

void NegotiationRejection__rosidl_typesupport_introspection_c__NegotiationRejection_fini_function(void * message_memory)
{
  rmf_traffic_msgs__msg__NegotiationRejection__fini(message_memory);
}

size_t NegotiationRejection__rosidl_typesupport_introspection_c__size_function__NegotiationKey__table(
  const void * untyped_member)
{
  const rmf_traffic_msgs__msg__NegotiationKey__Sequence * member =
    (const rmf_traffic_msgs__msg__NegotiationKey__Sequence *)(untyped_member);
  return member->size;
}

const void * NegotiationRejection__rosidl_typesupport_introspection_c__get_const_function__NegotiationKey__table(
  const void * untyped_member, size_t index)
{
  const rmf_traffic_msgs__msg__NegotiationKey__Sequence * member =
    (const rmf_traffic_msgs__msg__NegotiationKey__Sequence *)(untyped_member);
  return &member->data[index];
}

void * NegotiationRejection__rosidl_typesupport_introspection_c__get_function__NegotiationKey__table(
  void * untyped_member, size_t index)
{
  rmf_traffic_msgs__msg__NegotiationKey__Sequence * member =
    (rmf_traffic_msgs__msg__NegotiationKey__Sequence *)(untyped_member);
  return &member->data[index];
}

bool NegotiationRejection__rosidl_typesupport_introspection_c__resize_function__NegotiationKey__table(
  void * untyped_member, size_t size)
{
  rmf_traffic_msgs__msg__NegotiationKey__Sequence * member =
    (rmf_traffic_msgs__msg__NegotiationKey__Sequence *)(untyped_member);
  rmf_traffic_msgs__msg__NegotiationKey__Sequence__fini(member);
  return rmf_traffic_msgs__msg__NegotiationKey__Sequence__init(member, size);
}

size_t NegotiationRejection__rosidl_typesupport_introspection_c__size_function__Itinerary__alternatives(
  const void * untyped_member)
{
  const rmf_traffic_msgs__msg__Itinerary__Sequence * member =
    (const rmf_traffic_msgs__msg__Itinerary__Sequence *)(untyped_member);
  return member->size;
}

const void * NegotiationRejection__rosidl_typesupport_introspection_c__get_const_function__Itinerary__alternatives(
  const void * untyped_member, size_t index)
{
  const rmf_traffic_msgs__msg__Itinerary__Sequence * member =
    (const rmf_traffic_msgs__msg__Itinerary__Sequence *)(untyped_member);
  return &member->data[index];
}

void * NegotiationRejection__rosidl_typesupport_introspection_c__get_function__Itinerary__alternatives(
  void * untyped_member, size_t index)
{
  rmf_traffic_msgs__msg__Itinerary__Sequence * member =
    (rmf_traffic_msgs__msg__Itinerary__Sequence *)(untyped_member);
  return &member->data[index];
}

bool NegotiationRejection__rosidl_typesupport_introspection_c__resize_function__Itinerary__alternatives(
  void * untyped_member, size_t size)
{
  rmf_traffic_msgs__msg__Itinerary__Sequence * member =
    (rmf_traffic_msgs__msg__Itinerary__Sequence *)(untyped_member);
  rmf_traffic_msgs__msg__Itinerary__Sequence__fini(member);
  return rmf_traffic_msgs__msg__Itinerary__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember NegotiationRejection__rosidl_typesupport_introspection_c__NegotiationRejection_message_member_array[4] = {
  {
    "conflict_version",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_traffic_msgs__msg__NegotiationRejection, conflict_version),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "table",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_traffic_msgs__msg__NegotiationRejection, table),  // bytes offset in struct
    NULL,  // default value
    NegotiationRejection__rosidl_typesupport_introspection_c__size_function__NegotiationKey__table,  // size() function pointer
    NegotiationRejection__rosidl_typesupport_introspection_c__get_const_function__NegotiationKey__table,  // get_const(index) function pointer
    NegotiationRejection__rosidl_typesupport_introspection_c__get_function__NegotiationKey__table,  // get(index) function pointer
    NegotiationRejection__rosidl_typesupport_introspection_c__resize_function__NegotiationKey__table  // resize(index) function pointer
  },
  {
    "rejected_by",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_traffic_msgs__msg__NegotiationRejection, rejected_by),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "alternatives",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_traffic_msgs__msg__NegotiationRejection, alternatives),  // bytes offset in struct
    NULL,  // default value
    NegotiationRejection__rosidl_typesupport_introspection_c__size_function__Itinerary__alternatives,  // size() function pointer
    NegotiationRejection__rosidl_typesupport_introspection_c__get_const_function__Itinerary__alternatives,  // get_const(index) function pointer
    NegotiationRejection__rosidl_typesupport_introspection_c__get_function__Itinerary__alternatives,  // get(index) function pointer
    NegotiationRejection__rosidl_typesupport_introspection_c__resize_function__Itinerary__alternatives  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers NegotiationRejection__rosidl_typesupport_introspection_c__NegotiationRejection_message_members = {
  "rmf_traffic_msgs__msg",  // message namespace
  "NegotiationRejection",  // message name
  4,  // number of fields
  sizeof(rmf_traffic_msgs__msg__NegotiationRejection),
  NegotiationRejection__rosidl_typesupport_introspection_c__NegotiationRejection_message_member_array,  // message members
  NegotiationRejection__rosidl_typesupport_introspection_c__NegotiationRejection_init_function,  // function to initialize message memory (memory has to be allocated)
  NegotiationRejection__rosidl_typesupport_introspection_c__NegotiationRejection_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t NegotiationRejection__rosidl_typesupport_introspection_c__NegotiationRejection_message_type_support_handle = {
  0,
  &NegotiationRejection__rosidl_typesupport_introspection_c__NegotiationRejection_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rmf_traffic_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_traffic_msgs, msg, NegotiationRejection)() {
  NegotiationRejection__rosidl_typesupport_introspection_c__NegotiationRejection_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_traffic_msgs, msg, NegotiationKey)();
  NegotiationRejection__rosidl_typesupport_introspection_c__NegotiationRejection_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_traffic_msgs, msg, Itinerary)();
  if (!NegotiationRejection__rosidl_typesupport_introspection_c__NegotiationRejection_message_type_support_handle.typesupport_identifier) {
    NegotiationRejection__rosidl_typesupport_introspection_c__NegotiationRejection_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &NegotiationRejection__rosidl_typesupport_introspection_c__NegotiationRejection_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
