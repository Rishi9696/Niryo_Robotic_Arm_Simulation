// Generated by gencpp from file niryo_robot_arm_commander/ComputeTrajectoryRequest.msg
// DO NOT EDIT!


#ifndef NIRYO_ROBOT_ARM_COMMANDER_MESSAGE_COMPUTETRAJECTORYREQUEST_H
#define NIRYO_ROBOT_ARM_COMMANDER_MESSAGE_COMPUTETRAJECTORYREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Pose.h>

namespace niryo_robot_arm_commander
{
template <class ContainerAllocator>
struct ComputeTrajectoryRequest_
{
  typedef ComputeTrajectoryRequest_<ContainerAllocator> Type;

  ComputeTrajectoryRequest_()
    : list_poses()
    , dist_smoothing(0.0)  {
    }
  ComputeTrajectoryRequest_(const ContainerAllocator& _alloc)
    : list_poses(_alloc)
    , dist_smoothing(0.0)  {
  (void)_alloc;
    }



   typedef std::vector< ::geometry_msgs::Pose_<ContainerAllocator> , typename std::allocator_traits<ContainerAllocator>::template rebind_alloc< ::geometry_msgs::Pose_<ContainerAllocator> >> _list_poses_type;
  _list_poses_type list_poses;

   typedef float _dist_smoothing_type;
  _dist_smoothing_type dist_smoothing;





  typedef boost::shared_ptr< ::niryo_robot_arm_commander::ComputeTrajectoryRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::niryo_robot_arm_commander::ComputeTrajectoryRequest_<ContainerAllocator> const> ConstPtr;

}; // struct ComputeTrajectoryRequest_

typedef ::niryo_robot_arm_commander::ComputeTrajectoryRequest_<std::allocator<void> > ComputeTrajectoryRequest;

typedef boost::shared_ptr< ::niryo_robot_arm_commander::ComputeTrajectoryRequest > ComputeTrajectoryRequestPtr;
typedef boost::shared_ptr< ::niryo_robot_arm_commander::ComputeTrajectoryRequest const> ComputeTrajectoryRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::niryo_robot_arm_commander::ComputeTrajectoryRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::niryo_robot_arm_commander::ComputeTrajectoryRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::niryo_robot_arm_commander::ComputeTrajectoryRequest_<ContainerAllocator1> & lhs, const ::niryo_robot_arm_commander::ComputeTrajectoryRequest_<ContainerAllocator2> & rhs)
{
  return lhs.list_poses == rhs.list_poses &&
    lhs.dist_smoothing == rhs.dist_smoothing;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::niryo_robot_arm_commander::ComputeTrajectoryRequest_<ContainerAllocator1> & lhs, const ::niryo_robot_arm_commander::ComputeTrajectoryRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace niryo_robot_arm_commander

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::niryo_robot_arm_commander::ComputeTrajectoryRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::niryo_robot_arm_commander::ComputeTrajectoryRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::niryo_robot_arm_commander::ComputeTrajectoryRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::niryo_robot_arm_commander::ComputeTrajectoryRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::niryo_robot_arm_commander::ComputeTrajectoryRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::niryo_robot_arm_commander::ComputeTrajectoryRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::niryo_robot_arm_commander::ComputeTrajectoryRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "e2b372516f53d72d2c5df3a3bbcf8bfc";
  }

  static const char* value(const ::niryo_robot_arm_commander::ComputeTrajectoryRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xe2b372516f53d72dULL;
  static const uint64_t static_value2 = 0x2c5df3a3bbcf8bfcULL;
};

template<class ContainerAllocator>
struct DataType< ::niryo_robot_arm_commander::ComputeTrajectoryRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "niryo_robot_arm_commander/ComputeTrajectoryRequest";
  }

  static const char* value(const ::niryo_robot_arm_commander::ComputeTrajectoryRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::niryo_robot_arm_commander::ComputeTrajectoryRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "geometry_msgs/Pose[] list_poses\n"
"float32 dist_smoothing\n"
"\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Pose\n"
"# A representation of pose in free space, composed of position and orientation. \n"
"Point position\n"
"Quaternion orientation\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Point\n"
"# This contains the position of a point in free space\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Quaternion\n"
"# This represents an orientation in free space in quaternion form.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"float64 w\n"
;
  }

  static const char* value(const ::niryo_robot_arm_commander::ComputeTrajectoryRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::niryo_robot_arm_commander::ComputeTrajectoryRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.list_poses);
      stream.next(m.dist_smoothing);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ComputeTrajectoryRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::niryo_robot_arm_commander::ComputeTrajectoryRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::niryo_robot_arm_commander::ComputeTrajectoryRequest_<ContainerAllocator>& v)
  {
    s << indent << "list_poses[]" << std::endl;
    for (size_t i = 0; i < v.list_poses.size(); ++i)
    {
      s << indent << "  list_poses[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::geometry_msgs::Pose_<ContainerAllocator> >::stream(s, indent + "    ", v.list_poses[i]);
    }
    s << indent << "dist_smoothing: ";
    Printer<float>::stream(s, indent + "  ", v.dist_smoothing);
  }
};

} // namespace message_operations
} // namespace ros

#endif // NIRYO_ROBOT_ARM_COMMANDER_MESSAGE_COMPUTETRAJECTORYREQUEST_H
