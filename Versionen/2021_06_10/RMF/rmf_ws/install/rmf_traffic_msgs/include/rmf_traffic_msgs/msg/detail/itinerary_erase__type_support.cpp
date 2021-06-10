// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from rmf_traffic_msgs:msg/ItineraryErase.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "rmf_traffic_msgs/msg/detail/itinerary_erase__struct.hpp"
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

void ItineraryErase_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) rmf_traffic_msgs::msg::ItineraryErase(_init);
}

void ItineraryErase_fini_function(void * message_memory)
{
  auto typed_message = static_cast<rmf_traffic_msgs::msg::ItineraryErase *>(message_memory);
  typed_message->~ItineraryErase();
}

size_t size_function__ItineraryErase__routes(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint64_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ItineraryErase__routes(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint64_t> *>(untyped_member);
  return &member[index];
}

void * get_function__ItineraryErase__routes(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint64_t> *>(untyped_member);
  return &member[index];
}

void resize_function__ItineraryErase__routes(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint64_t> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ItineraryErase_message_member_array[3] = {
  {
    "participant",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_traffic_msgs::msg::ItineraryErase, participant),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "routes",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_traffic_msgs::msg::ItineraryErase, routes),  // bytes offset in struct
    nullptr,  // default value
    size_function__ItineraryErase__routes,  // size() function pointer
    get_const_function__ItineraryErase__routes,  // get_const(index) function pointer
    get_function__ItineraryErase__routes,  // get(index) function pointer
    resize_function__ItineraryErase__routes  // resize(index) function pointer
  },
  {
    "itinerary_version",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_traffic_msgs::msg::ItineraryErase, itinerary_version),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ItineraryErase_message_members = {
  "rmf_traffic_msgs::msg",  // message namespace
  "ItineraryErase",  // message name
  3,  // number of fields
  sizeof(rmf_traffic_msgs::msg::ItineraryErase),
  ItineraryErase_message_member_array,  // message members
  ItineraryErase_init_function,  // function to initialize message memory (memory has to be allocated)
  ItineraryErase_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ItineraryErase_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ItineraryErase_message_members,
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
get_message_type_support_handle<rmf_traffic_msgs::msg::ItineraryErase>()
{
  return &::rmf_traffic_msgs::msg::rosidl_typesupport_introspection_cpp::ItineraryErase_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rmf_traffic_msgs, msg, ItineraryErase)() {
  return &::rmf_traffic_msgs::msg::rosidl_typesupport_introspection_cpp::ItineraryErase_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
