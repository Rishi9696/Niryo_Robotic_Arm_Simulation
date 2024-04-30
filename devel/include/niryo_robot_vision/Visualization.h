// Generated by gencpp from file niryo_robot_vision/Visualization.msg
// DO NOT EDIT!


#ifndef NIRYO_ROBOT_VISION_MESSAGE_VISUALIZATION_H
#define NIRYO_ROBOT_VISION_MESSAGE_VISUALIZATION_H

#include <ros/service_traits.h>


#include <niryo_robot_vision/VisualizationRequest.h>
#include <niryo_robot_vision/VisualizationResponse.h>


namespace niryo_robot_vision
{

struct Visualization
{

typedef VisualizationRequest Request;
typedef VisualizationResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct Visualization
} // namespace niryo_robot_vision


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::niryo_robot_vision::Visualization > {
  static const char* value()
  {
    return "137ed21db0b20a9ae0eba8eb8afcd908";
  }

  static const char* value(const ::niryo_robot_vision::Visualization&) { return value(); }
};

template<>
struct DataType< ::niryo_robot_vision::Visualization > {
  static const char* value()
  {
    return "niryo_robot_vision/Visualization";
  }

  static const char* value(const ::niryo_robot_vision::Visualization&) { return value(); }
};


// service_traits::MD5Sum< ::niryo_robot_vision::VisualizationRequest> should match
// service_traits::MD5Sum< ::niryo_robot_vision::Visualization >
template<>
struct MD5Sum< ::niryo_robot_vision::VisualizationRequest>
{
  static const char* value()
  {
    return MD5Sum< ::niryo_robot_vision::Visualization >::value();
  }
  static const char* value(const ::niryo_robot_vision::VisualizationRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::niryo_robot_vision::VisualizationRequest> should match
// service_traits::DataType< ::niryo_robot_vision::Visualization >
template<>
struct DataType< ::niryo_robot_vision::VisualizationRequest>
{
  static const char* value()
  {
    return DataType< ::niryo_robot_vision::Visualization >::value();
  }
  static const char* value(const ::niryo_robot_vision::VisualizationRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::niryo_robot_vision::VisualizationResponse> should match
// service_traits::MD5Sum< ::niryo_robot_vision::Visualization >
template<>
struct MD5Sum< ::niryo_robot_vision::VisualizationResponse>
{
  static const char* value()
  {
    return MD5Sum< ::niryo_robot_vision::Visualization >::value();
  }
  static const char* value(const ::niryo_robot_vision::VisualizationResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::niryo_robot_vision::VisualizationResponse> should match
// service_traits::DataType< ::niryo_robot_vision::Visualization >
template<>
struct DataType< ::niryo_robot_vision::VisualizationResponse>
{
  static const char* value()
  {
    return DataType< ::niryo_robot_vision::Visualization >::value();
  }
  static const char* value(const ::niryo_robot_vision::VisualizationResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // NIRYO_ROBOT_VISION_MESSAGE_VISUALIZATION_H
