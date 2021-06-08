// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_traffic_msgs:msg/ItineraryErase.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__ITINERARY_ERASE__BUILDER_HPP_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__ITINERARY_ERASE__BUILDER_HPP_

#include "rmf_traffic_msgs/msg/detail/itinerary_erase__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace rmf_traffic_msgs
{

namespace msg
{

namespace builder
{

class Init_ItineraryErase_itinerary_version
{
public:
  explicit Init_ItineraryErase_itinerary_version(::rmf_traffic_msgs::msg::ItineraryErase & msg)
  : msg_(msg)
  {}
  ::rmf_traffic_msgs::msg::ItineraryErase itinerary_version(::rmf_traffic_msgs::msg::ItineraryErase::_itinerary_version_type arg)
  {
    msg_.itinerary_version = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::ItineraryErase msg_;
};

class Init_ItineraryErase_routes
{
public:
  explicit Init_ItineraryErase_routes(::rmf_traffic_msgs::msg::ItineraryErase & msg)
  : msg_(msg)
  {}
  Init_ItineraryErase_itinerary_version routes(::rmf_traffic_msgs::msg::ItineraryErase::_routes_type arg)
  {
    msg_.routes = std::move(arg);
    return Init_ItineraryErase_itinerary_version(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::ItineraryErase msg_;
};

class Init_ItineraryErase_participant
{
public:
  Init_ItineraryErase_participant()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ItineraryErase_routes participant(::rmf_traffic_msgs::msg::ItineraryErase::_participant_type arg)
  {
    msg_.participant = std::move(arg);
    return Init_ItineraryErase_routes(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::ItineraryErase msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_traffic_msgs::msg::ItineraryErase>()
{
  return rmf_traffic_msgs::msg::builder::Init_ItineraryErase_participant();
}

}  // namespace rmf_traffic_msgs

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__ITINERARY_ERASE__BUILDER_HPP_
