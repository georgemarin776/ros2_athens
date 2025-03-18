// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from first_interfaces:msg/FirstMessage.idl
// generated code does not contain a copyright notice

#ifndef FIRST_INTERFACES__MSG__DETAIL__FIRST_MESSAGE__BUILDER_HPP_
#define FIRST_INTERFACES__MSG__DETAIL__FIRST_MESSAGE__BUILDER_HPP_

#include "first_interfaces/msg/detail/first_message__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace first_interfaces
{

namespace msg
{

namespace builder
{

class Init_FirstMessage_variance
{
public:
  explicit Init_FirstMessage_variance(::first_interfaces::msg::FirstMessage & msg)
  : msg_(msg)
  {}
  ::first_interfaces::msg::FirstMessage variance(::first_interfaces::msg::FirstMessage::_variance_type arg)
  {
    msg_.variance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::first_interfaces::msg::FirstMessage msg_;
};

class Init_FirstMessage_temperatures
{
public:
  Init_FirstMessage_temperatures()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FirstMessage_variance temperatures(::first_interfaces::msg::FirstMessage::_temperatures_type arg)
  {
    msg_.temperatures = std::move(arg);
    return Init_FirstMessage_variance(msg_);
  }

private:
  ::first_interfaces::msg::FirstMessage msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::first_interfaces::msg::FirstMessage>()
{
  return first_interfaces::msg::builder::Init_FirstMessage_temperatures();
}

}  // namespace first_interfaces

#endif  // FIRST_INTERFACES__MSG__DETAIL__FIRST_MESSAGE__BUILDER_HPP_
