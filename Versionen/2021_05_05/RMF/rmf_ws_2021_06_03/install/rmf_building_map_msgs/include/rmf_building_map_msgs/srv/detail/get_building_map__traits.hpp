// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rmf_building_map_msgs:srv/GetBuildingMap.idl
// generated code does not contain a copyright notice

#ifndef RMF_BUILDING_MAP_MSGS__SRV__DETAIL__GET_BUILDING_MAP__TRAITS_HPP_
#define RMF_BUILDING_MAP_MSGS__SRV__DETAIL__GET_BUILDING_MAP__TRAITS_HPP_

#include "rmf_building_map_msgs/srv/detail/get_building_map__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rmf_building_map_msgs::srv::GetBuildingMap_Request>()
{
  return "rmf_building_map_msgs::srv::GetBuildingMap_Request";
}

template<>
inline const char * name<rmf_building_map_msgs::srv::GetBuildingMap_Request>()
{
  return "rmf_building_map_msgs/srv/GetBuildingMap_Request";
}

template<>
struct has_fixed_size<rmf_building_map_msgs::srv::GetBuildingMap_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<rmf_building_map_msgs::srv::GetBuildingMap_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<rmf_building_map_msgs::srv::GetBuildingMap_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'building_map'
#include "rmf_building_map_msgs/msg/detail/building_map__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rmf_building_map_msgs::srv::GetBuildingMap_Response>()
{
  return "rmf_building_map_msgs::srv::GetBuildingMap_Response";
}

template<>
inline const char * name<rmf_building_map_msgs::srv::GetBuildingMap_Response>()
{
  return "rmf_building_map_msgs/srv/GetBuildingMap_Response";
}

template<>
struct has_fixed_size<rmf_building_map_msgs::srv::GetBuildingMap_Response>
  : std::integral_constant<bool, has_fixed_size<rmf_building_map_msgs::msg::BuildingMap>::value> {};

template<>
struct has_bounded_size<rmf_building_map_msgs::srv::GetBuildingMap_Response>
  : std::integral_constant<bool, has_bounded_size<rmf_building_map_msgs::msg::BuildingMap>::value> {};

template<>
struct is_message<rmf_building_map_msgs::srv::GetBuildingMap_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rmf_building_map_msgs::srv::GetBuildingMap>()
{
  return "rmf_building_map_msgs::srv::GetBuildingMap";
}

template<>
inline const char * name<rmf_building_map_msgs::srv::GetBuildingMap>()
{
  return "rmf_building_map_msgs/srv/GetBuildingMap";
}

template<>
struct has_fixed_size<rmf_building_map_msgs::srv::GetBuildingMap>
  : std::integral_constant<
    bool,
    has_fixed_size<rmf_building_map_msgs::srv::GetBuildingMap_Request>::value &&
    has_fixed_size<rmf_building_map_msgs::srv::GetBuildingMap_Response>::value
  >
{
};

template<>
struct has_bounded_size<rmf_building_map_msgs::srv::GetBuildingMap>
  : std::integral_constant<
    bool,
    has_bounded_size<rmf_building_map_msgs::srv::GetBuildingMap_Request>::value &&
    has_bounded_size<rmf_building_map_msgs::srv::GetBuildingMap_Response>::value
  >
{
};

template<>
struct is_service<rmf_building_map_msgs::srv::GetBuildingMap>
  : std::true_type
{
};

template<>
struct is_service_request<rmf_building_map_msgs::srv::GetBuildingMap_Request>
  : std::true_type
{
};

template<>
struct is_service_response<rmf_building_map_msgs::srv::GetBuildingMap_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // RMF_BUILDING_MAP_MSGS__SRV__DETAIL__GET_BUILDING_MAP__TRAITS_HPP_
