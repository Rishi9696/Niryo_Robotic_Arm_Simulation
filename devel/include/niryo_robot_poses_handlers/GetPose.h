// Generated by gencpp from file niryo_robot_poses_handlers/GetPose.msg
// DO NOT EDIT!


#ifndef NIRYO_ROBOT_POSES_HANDLERS_MESSAGE_GETPOSE_H
#define NIRYO_ROBOT_POSES_HANDLERS_MESSAGE_GETPOSE_H

#include <ros/service_traits.h>


#include <niryo_robot_poses_handlers/GetPoseRequest.h>
#include <niryo_robot_poses_handlers/GetPoseResponse.h>


namespace niryo_robot_poses_handlers
{

struct GetPose
{

typedef GetPoseRequest Request;
typedef GetPoseResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct GetPose
} // namespace niryo_robot_poses_handlers


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::niryo_robot_poses_handlers::GetPose > {
  static const char* value()
  {
    return "c35fb38bb51646ef698dd59196a0f931";
  }

  static const char* value(const ::niryo_robot_poses_handlers::GetPose&) { return value(); }
};

template<>
struct DataType< ::niryo_robot_poses_handlers::GetPose > {
  static const char* value()
  {
    return "niryo_robot_poses_handlers/GetPose";
  }

  static const char* value(const ::niryo_robot_poses_handlers::GetPose&) { return value(); }
};


// service_traits::MD5Sum< ::niryo_robot_poses_handlers::GetPoseRequest> should match
// service_traits::MD5Sum< ::niryo_robot_poses_handlers::GetPose >
template<>
struct MD5Sum< ::niryo_robot_poses_handlers::GetPoseRequest>
{
  static const char* value()
  {
    return MD5Sum< ::niryo_robot_poses_handlers::GetPose >::value();
  }
  static const char* value(const ::niryo_robot_poses_handlers::GetPoseRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::niryo_robot_poses_handlers::GetPoseRequest> should match
// service_traits::DataType< ::niryo_robot_poses_handlers::GetPose >
template<>
struct DataType< ::niryo_robot_poses_handlers::GetPoseRequest>
{
  static const char* value()
  {
    return DataType< ::niryo_robot_poses_handlers::GetPose >::value();
  }
  static const char* value(const ::niryo_robot_poses_handlers::GetPoseRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::niryo_robot_poses_handlers::GetPoseResponse> should match
// service_traits::MD5Sum< ::niryo_robot_poses_handlers::GetPose >
template<>
struct MD5Sum< ::niryo_robot_poses_handlers::GetPoseResponse>
{
  static const char* value()
  {
    return MD5Sum< ::niryo_robot_poses_handlers::GetPose >::value();
  }
  static const char* value(const ::niryo_robot_poses_handlers::GetPoseResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::niryo_robot_poses_handlers::GetPoseResponse> should match
// service_traits::DataType< ::niryo_robot_poses_handlers::GetPose >
template<>
struct DataType< ::niryo_robot_poses_handlers::GetPoseResponse>
{
  static const char* value()
  {
    return DataType< ::niryo_robot_poses_handlers::GetPose >::value();
  }
  static const char* value(const ::niryo_robot_poses_handlers::GetPoseResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // NIRYO_ROBOT_POSES_HANDLERS_MESSAGE_GETPOSE_H