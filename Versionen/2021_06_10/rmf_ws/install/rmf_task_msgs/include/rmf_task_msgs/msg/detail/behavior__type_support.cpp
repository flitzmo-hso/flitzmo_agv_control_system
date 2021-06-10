// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from rmf_task_msgs:msg/Behavior.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "rmf_task_msgs/msg/detail/behavior__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace rmf_task_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Behavior_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) rmf_task_msgs::msg::Behavior(_init);
}

void Behavior_fini_function(void * message_memory)
{
  auto typed_message = static_cast<rmf_task_msgs::msg::Behavior *>(message_memory);
  typed_message->~Behavior();
}

size_t size_function__Behavior__parameters(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<rmf_task_msgs::msg::BehaviorParameter> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Behavior__parameters(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<rmf_task_msgs::msg::BehaviorParameter> *>(untyped_member);
  return &member[index];
}

void * get_function__Behavior__parameters(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<rmf_task_msgs::msg::BehaviorParameter> *>(untyped_member);
  return &member[index];
}

void resize_function__Behavior__parameters(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<rmf_task_msgs::msg::BehaviorParameter> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Behavior_message_member_array[2] = {
  {
    "name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_task_msgs::msg::Behavior, name),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "parameters",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<rmf_task_msgs::msg::BehaviorParameter>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_task_msgs::msg::Behavior, parameters),  // bytes offset in struct
    nullptr,  // default value
    size_function__Behavior__parameters,  // size() function pointer
    get_const_function__Behavior__parameters,  // get_const(index) function pointer
    get_function__Behavior__parameters,  // get(index) function pointer
    resize_function__Behavior__parameters  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Behavior_message_members = {
  "rmf_task_msgs::msg",  // message namespace
  "Behavior",  // message name
  2,  // number of fields
  sizeof(rmf_task_msgs::msg::Behavior),
  Behavior_message_member_array,  // message members
  Behavior_init_function,  // function to initialize message memory (memory has to be allocated)
  Behavior_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Behavior_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Behavior_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace rmf_task_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<rmf_task_msgs::msg::Behavior>()
{
  return &::rmf_task_msgs::msg::rosidl_typesupport_introspection_cpp::Behavior_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rmf_task_msgs, msg, Behavior)() {
  return &::rmf_task_msgs::msg::rosidl_typesupport_introspection_cpp::Behavior_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
