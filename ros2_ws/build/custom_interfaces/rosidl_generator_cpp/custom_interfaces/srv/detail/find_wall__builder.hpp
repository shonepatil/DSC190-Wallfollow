// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_interfaces:srv/FindWall.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__SRV__DETAIL__FIND_WALL__BUILDER_HPP_
#define CUSTOM_INTERFACES__SRV__DETAIL__FIND_WALL__BUILDER_HPP_

#include "custom_interfaces/srv/detail/find_wall__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace custom_interfaces
{

namespace srv
{

namespace builder
{

class Init_FindWall_Request_move
{
public:
  Init_FindWall_Request_move()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::custom_interfaces::srv::FindWall_Request move(::custom_interfaces::srv::FindWall_Request::_move_type arg)
  {
    msg_.move = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::srv::FindWall_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::srv::FindWall_Request>()
{
  return custom_interfaces::srv::builder::Init_FindWall_Request_move();
}

}  // namespace custom_interfaces


namespace custom_interfaces
{

namespace srv
{

namespace builder
{

class Init_FindWall_Response_wallfound
{
public:
  Init_FindWall_Response_wallfound()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::custom_interfaces::srv::FindWall_Response wallfound(::custom_interfaces::srv::FindWall_Response::_wallfound_type arg)
  {
    msg_.wallfound = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::srv::FindWall_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::srv::FindWall_Response>()
{
  return custom_interfaces::srv::builder::Init_FindWall_Response_wallfound();
}

}  // namespace custom_interfaces

#endif  // CUSTOM_INTERFACES__SRV__DETAIL__FIND_WALL__BUILDER_HPP_
