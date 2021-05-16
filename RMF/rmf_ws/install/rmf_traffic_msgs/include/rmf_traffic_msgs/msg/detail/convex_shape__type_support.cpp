// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from rmf_traffic_msgs:msg/ConvexShape.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "rmf_traffic_msgs/msg/detail/convex_shape__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace rmf_traffic_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void ConvexShape_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) rmf_traffic_msgs::msg::ConvexShape(_init);
}

void ConvexShape_fini_function(void * message_memory)
{
  auto typed_message = static_cast<rmf_traffic_msgs::msg::ConvexShape *>(message_memory);
  typed_message->~ConvexShape();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ConvexShape_message_member_array[2] = {
  {
    "type",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_traffic_msgs::msg::ConvexShape, type),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "index",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_traffic_msgs::msg::ConvexShape, index),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ConvexShape_message_members = {
  "rmf_traffic_msgs::msg",  // message namespace
  "ConvexShape",  // message name
  2,  // number of fields
  sizeof(rmf_traffic_msgs::msg::ConvexShape),
  ConvexShape_message_member_array,  // message members
  ConvexShape_init_function,  // function to initialize message memory (memory has to be allocated)
  ConvexShape_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ConvexShape_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ConvexShape_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace rmf_traffic_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<rmf_traffic_msgs::msg::ConvexShape>()
{
  return &::rmf_traffic_msgs::msg::rosidl_typesupport_introspection_cpp::ConvexShape_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rmf_traffic_msgs, msg, ConvexShape)() {
  return &::rmf_traffic_msgs::msg::rosidl_typesupport_introspection_cpp::ConvexShape_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
