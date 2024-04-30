// Generated by gencpp from file niryo_robot_msgs/GetStringList.msg
// DO NOT EDIT!


#ifndef NIRYO_ROBOT_MSGS_MESSAGE_GETSTRINGLIST_H
#define NIRYO_ROBOT_MSGS_MESSAGE_GETSTRINGLIST_H

#include <ros/service_traits.h>


#include <niryo_robot_msgs/GetStringListRequest.h>
#include <niryo_robot_msgs/GetStringListResponse.h>


namespace niryo_robot_msgs
{

struct GetStringList
{

typedef GetStringListRequest Request;
typedef GetStringListResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct GetStringList
} // namespace niryo_robot_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::niryo_robot_msgs::GetStringList > {
  static const char* value()
  {
    return "b98f2fc9ff4290143d964bc0d59df60a";
  }

  static const char* value(const ::niryo_robot_msgs::GetStringList&) { return value(); }
};

template<>
struct DataType< ::niryo_robot_msgs::GetStringList > {
  static const char* value()
  {
    return "niryo_robot_msgs/GetStringList";
  }

  static const char* value(const ::niryo_robot_msgs::GetStringList&) { return value(); }
};


// service_traits::MD5Sum< ::niryo_robot_msgs::GetStringListRequest> should match
// service_traits::MD5Sum< ::niryo_robot_msgs::GetStringList >
template<>
struct MD5Sum< ::niryo_robot_msgs::GetStringListRequest>
{
  static const char* value()
  {
    return MD5Sum< ::niryo_robot_msgs::GetStringList >::value();
  }
  static const char* value(const ::niryo_robot_msgs::GetStringListRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::niryo_robot_msgs::GetStringListRequest> should match
// service_traits::DataType< ::niryo_robot_msgs::GetStringList >
template<>
struct DataType< ::niryo_robot_msgs::GetStringListRequest>
{
  static const char* value()
  {
    return DataType< ::niryo_robot_msgs::GetStringList >::value();
  }
  static const char* value(const ::niryo_robot_msgs::GetStringListRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::niryo_robot_msgs::GetStringListResponse> should match
// service_traits::MD5Sum< ::niryo_robot_msgs::GetStringList >
template<>
struct MD5Sum< ::niryo_robot_msgs::GetStringListResponse>
{
  static const char* value()
  {
    return MD5Sum< ::niryo_robot_msgs::GetStringList >::value();
  }
  static const char* value(const ::niryo_robot_msgs::GetStringListResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::niryo_robot_msgs::GetStringListResponse> should match
// service_traits::DataType< ::niryo_robot_msgs::GetStringList >
template<>
struct DataType< ::niryo_robot_msgs::GetStringListResponse>
{
  static const char* value()
  {
    return DataType< ::niryo_robot_msgs::GetStringList >::value();
  }
  static const char* value(const ::niryo_robot_msgs::GetStringListResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // NIRYO_ROBOT_MSGS_MESSAGE_GETSTRINGLIST_H
