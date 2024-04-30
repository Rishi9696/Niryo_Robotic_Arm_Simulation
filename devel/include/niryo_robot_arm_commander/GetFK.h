// Generated by gencpp from file niryo_robot_arm_commander/GetFK.msg
// DO NOT EDIT!


#ifndef NIRYO_ROBOT_ARM_COMMANDER_MESSAGE_GETFK_H
#define NIRYO_ROBOT_ARM_COMMANDER_MESSAGE_GETFK_H

#include <ros/service_traits.h>


#include <niryo_robot_arm_commander/GetFKRequest.h>
#include <niryo_robot_arm_commander/GetFKResponse.h>


namespace niryo_robot_arm_commander
{

struct GetFK
{

typedef GetFKRequest Request;
typedef GetFKResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct GetFK
} // namespace niryo_robot_arm_commander


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::niryo_robot_arm_commander::GetFK > {
  static const char* value()
  {
    return "4f539bf98a6c903b06a0f551c15e98a8";
  }

  static const char* value(const ::niryo_robot_arm_commander::GetFK&) { return value(); }
};

template<>
struct DataType< ::niryo_robot_arm_commander::GetFK > {
  static const char* value()
  {
    return "niryo_robot_arm_commander/GetFK";
  }

  static const char* value(const ::niryo_robot_arm_commander::GetFK&) { return value(); }
};


// service_traits::MD5Sum< ::niryo_robot_arm_commander::GetFKRequest> should match
// service_traits::MD5Sum< ::niryo_robot_arm_commander::GetFK >
template<>
struct MD5Sum< ::niryo_robot_arm_commander::GetFKRequest>
{
  static const char* value()
  {
    return MD5Sum< ::niryo_robot_arm_commander::GetFK >::value();
  }
  static const char* value(const ::niryo_robot_arm_commander::GetFKRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::niryo_robot_arm_commander::GetFKRequest> should match
// service_traits::DataType< ::niryo_robot_arm_commander::GetFK >
template<>
struct DataType< ::niryo_robot_arm_commander::GetFKRequest>
{
  static const char* value()
  {
    return DataType< ::niryo_robot_arm_commander::GetFK >::value();
  }
  static const char* value(const ::niryo_robot_arm_commander::GetFKRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::niryo_robot_arm_commander::GetFKResponse> should match
// service_traits::MD5Sum< ::niryo_robot_arm_commander::GetFK >
template<>
struct MD5Sum< ::niryo_robot_arm_commander::GetFKResponse>
{
  static const char* value()
  {
    return MD5Sum< ::niryo_robot_arm_commander::GetFK >::value();
  }
  static const char* value(const ::niryo_robot_arm_commander::GetFKResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::niryo_robot_arm_commander::GetFKResponse> should match
// service_traits::DataType< ::niryo_robot_arm_commander::GetFK >
template<>
struct DataType< ::niryo_robot_arm_commander::GetFKResponse>
{
  static const char* value()
  {
    return DataType< ::niryo_robot_arm_commander::GetFK >::value();
  }
  static const char* value(const ::niryo_robot_arm_commander::GetFKResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // NIRYO_ROBOT_ARM_COMMANDER_MESSAGE_GETFK_H