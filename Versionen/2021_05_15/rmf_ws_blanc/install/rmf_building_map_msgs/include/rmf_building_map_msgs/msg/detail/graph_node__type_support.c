// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rmf_building_map_msgs:msg/GraphNode.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rmf_building_map_msgs/msg/detail/graph_node__rosidl_typesupport_introspection_c.h"
#include "rmf_building_map_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rmf_building_map_msgs/msg/detail/graph_node__functions.h"
#include "rmf_building_map_msgs/msg/detail/graph_node__struct.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"
// Member `params`
#include "rmf_building_map_msgs/msg/param.h"
// Member `params`
#include "rmf_building_map_msgs/msg/detail/param__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void GraphNode__rosidl_typesupport_introspection_c__GraphNode_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rmf_building_map_msgs__msg__GraphNode__init(message_memory);
}

void GraphNode__rosidl_typesupport_introspection_c__GraphNode_fini_function(void * message_memory)
{
  rmf_building_map_msgs__msg__GraphNode__fini(message_memory);
}

size_t GraphNode__rosidl_typesupport_introspection_c__size_function__Param__params(
  const void * untyped_member)
{
  const rmf_building_map_msgs__msg__Param__Sequence * member =
    (const rmf_building_map_msgs__msg__Param__Sequence *)(untyped_member);
  return member->size;
}

const void * GraphNode__rosidl_typesupport_introspection_c__get_const_function__Param__params(
  const void * untyped_member, size_t index)
{
  const rmf_building_map_msgs__msg__Param__Sequence * member =
    (const rmf_building_map_msgs__msg__Param__Sequence *)(untyped_member);
  return &member->data[index];
}

void * GraphNode__rosidl_typesupport_introspection_c__get_function__Param__params(
  void * untyped_member, size_t index)
{
  rmf_building_map_msgs__msg__Param__Sequence * member =
    (rmf_building_map_msgs__msg__Param__Sequence *)(untyped_member);
  return &member->data[index];
}

bool GraphNode__rosidl_typesupport_introspection_c__resize_function__Param__params(
  void * untyped_member, size_t size)
{
  rmf_building_map_msgs__msg__Param__Sequence * member =
    (rmf_building_map_msgs__msg__Param__Sequence *)(untyped_member);
  rmf_building_map_msgs__msg__Param__Sequence__fini(member);
  return rmf_building_map_msgs__msg__Param__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember GraphNode__rosidl_typesupport_introspection_c__GraphNode_message_member_array[4] = {
  {
    "x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_building_map_msgs__msg__GraphNode, x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_building_map_msgs__msg__GraphNode, y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_building_map_msgs__msg__GraphNode, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "params",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_building_map_msgs__msg__GraphNode, params),  // bytes offset in struct
    NULL,  // default value
    GraphNode__rosidl_typesupport_introspection_c__size_function__Param__params,  // size() function pointer
    GraphNode__rosidl_typesupport_introspection_c__get_const_function__Param__params,  // get_const(index) function pointer
    GraphNode__rosidl_typesupport_introspection_c__get_function__Param__params,  // get(index) function pointer
    GraphNode__rosidl_typesupport_introspection_c__resize_function__Param__params  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GraphNode__rosidl_typesupport_introspection_c__GraphNode_message_members = {
  "rmf_building_map_msgs__msg",  // message namespace
  "GraphNode",  // message name
  4,  // number of fields
  sizeof(rmf_building_map_msgs__msg__GraphNode),
  GraphNode__rosidl_typesupport_introspection_c__GraphNode_message_member_array,  // message members
  GraphNode__rosidl_typesupport_introspection_c__GraphNode_init_function,  // function to initialize message memory (memory has to be allocated)
  GraphNode__rosidl_typesupport_introspection_c__GraphNode_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GraphNode__rosidl_typesupport_introspection_c__GraphNode_message_type_support_handle = {
  0,
  &GraphNode__rosidl_typesupport_introspection_c__GraphNode_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rmf_building_map_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_building_map_msgs, msg, GraphNode)() {
  GraphNode__rosidl_typesupport_introspection_c__GraphNode_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_building_map_msgs, msg, Param)();
  if (!GraphNode__rosidl_typesupport_introspection_c__GraphNode_message_type_support_handle.typesupport_identifier) {
    GraphNode__rosidl_typesupport_introspection_c__GraphNode_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GraphNode__rosidl_typesupport_introspection_c__GraphNode_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
