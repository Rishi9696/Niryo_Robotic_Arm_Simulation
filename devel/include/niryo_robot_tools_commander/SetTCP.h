// Generated by gencpp from file niryo_robot_tools_commander/SetTCP.msg
// DO NOT EDIT!


#ifndef NIRYO_ROBOT_TOOLS_COMMANDER_MESSAGE_SETTCP_H
#define NIRYO_ROBOT_TOOLS_COMMANDER_MESSAGE_SETTCP_H

#include <ros/service_traits.h>


#include <niryo_robot_tools_commander/SetTCPRequest.h>
#include <niryo_robot_tools_commander/SetTCPResponse.h>


namespace niryo_robot_tools_commander
{

struct SetTCP
{

typedef SetTCPRequest Request;
typedef SetTCPResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct SetTCP
} // namespace niryo_robot_tools_commander


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::niryo_robot_tools_commander::SetTCP > {
  static const char* value()
  {
    return "7e7b3d8cc25cf3ee8617fe16c36dee57";
  }

  static const char* value(const ::niryo_robot_tools_commander::SetTCP&) { return value(); }
};

template<>
struct DataType< ::niryo_robot_tools_commander::SetTCP > {
  static const char* value()
  {
    return "niryo_robot_tools_commander/SetTCP";
  }

  static const char* value(const ::niryo_robot_tools_commander::SetTCP&) { return value(); }
};


// service_traits::MD5Sum< ::niryo_robot_tools_commander::SetTCPRequest> should match
// service_traits::MD5Sum< ::niryo_robot_tools_commander::SetTCP >
template<>
struct MD5Sum< ::niryo_robot_tools_commander::SetTCPRequest>
{
  static const char* value()
  {
    return MD5Sum< ::niryo_robot_tools_commander::SetTCP >::value();
  }
  static const char* value(const ::niryo_robot_tools_commander::SetTCPRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::niryo_robot_tools_commander::SetTCPRequest> should match
// service_traits::DataType< ::niryo_robot_tools_commander::SetTCP >
template<>
struct DataType< ::niryo_robot_tools_commander::SetTCPRequest>
{
  static const char* value()
  {
    return DataType< ::niryo_robot_tools_commander::SetTCP >::value();
  }
  static const char* value(const ::niryo_robot_tools_commander::SetTCPRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::niryo_robot_tools_commander::SetTCPResponse> should match
// service_traits::MD5Sum< ::niryo_robot_tools_commander::SetTCP >
template<>
struct MD5Sum< ::niryo_robot_tools_commander::SetTCPResponse>
{
  static const char* value()
  {
    return MD5Sum< ::niryo_robot_tools_commander::SetTCP >::value();
  }
  static const char* value(const ::niryo_robot_tools_commander::SetTCPResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::niryo_robot_tools_commander::SetTCPResponse> should match
// service_traits::DataType< ::niryo_robot_tools_commander::SetTCP >
template<>
struct DataType< ::niryo_robot_tools_commander::SetTCPResponse>
{
  static const char* value()
  {
    return DataType< ::niryo_robot_tools_commander::SetTCP >::value();
  }
  static const char* value(const ::niryo_robot_tools_commander::SetTCPResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // NIRYO_ROBOT_TOOLS_COMMANDER_MESSAGE_SETTCP_H
