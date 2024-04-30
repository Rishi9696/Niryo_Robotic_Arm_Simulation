// Generated by gencpp from file niryo_robot_arm_commander/GetIK.msg
// DO NOT EDIT!


#ifndef NIRYO_ROBOT_ARM_COMMANDER_MESSAGE_GETIK_H
#define NIRYO_ROBOT_ARM_COMMANDER_MESSAGE_GETIK_H

#include <ros/service_traits.h>


#include <niryo_robot_arm_commander/GetIKRequest.h>
#include <niryo_robot_arm_commander/GetIKResponse.h>


namespace niryo_robot_arm_commander
{

struct GetIK
{

typedef GetIKRequest Request;
typedef GetIKResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct GetIK
} // namespace niryo_robot_arm_commander


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::niryo_robot_arm_commander::GetIK > {
  static const char* value()
  {
    return "45576484cd6aed54d3d440c48b4c229e";
  }

  static const char* value(const ::niryo_robot_arm_commander::GetIK&) { return value(); }
};

template<>
struct DataType< ::niryo_robot_arm_commander::GetIK > {
  static const char* value()
  {
    return "niryo_robot_arm_commander/GetIK";
  }

  static const char* value(const ::niryo_robot_arm_commander::GetIK&) { return value(); }
};


// service_traits::MD5Sum< ::niryo_robot_arm_commander::GetIKRequest> should match
// service_traits::MD5Sum< ::niryo_robot_arm_commander::GetIK >
template<>
struct MD5Sum< ::niryo_robot_arm_commander::GetIKRequest>
{
  static const char* value()
  {
    return MD5Sum< ::niryo_robot_arm_commander::GetIK >::value();
  }
  static const char* value(const ::niryo_robot_arm_commander::GetIKRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::niryo_robot_arm_commander::GetIKRequest> should match
// service_traits::DataType< ::niryo_robot_arm_commander::GetIK >
template<>
struct DataType< ::niryo_robot_arm_commander::GetIKRequest>
{
  static const char* value()
  {
    return DataType< ::niryo_robot_arm_commander::GetIK >::value();
  }
  static const char* value(const ::niryo_robot_arm_commander::GetIKRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::niryo_robot_arm_commander::GetIKResponse> should match
// service_traits::MD5Sum< ::niryo_robot_arm_commander::GetIK >
template<>
struct MD5Sum< ::niryo_robot_arm_commander::GetIKResponse>
{
  static const char* value()
  {
    return MD5Sum< ::niryo_robot_arm_commander::GetIK >::value();
  }
  static const char* value(const ::niryo_robot_arm_commander::GetIKResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::niryo_robot_arm_commander::GetIKResponse> should match
// service_traits::DataType< ::niryo_robot_arm_commander::GetIK >
template<>
struct DataType< ::niryo_robot_arm_commander::GetIKResponse>
{
  static const char* value()
  {
    return DataType< ::niryo_robot_arm_commander::GetIK >::value();
  }
  static const char* value(const ::niryo_robot_arm_commander::GetIKResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // NIRYO_ROBOT_ARM_COMMANDER_MESSAGE_GETIK_H
