// Generated by gencpp from file niryo_robot_msgs/CommandStatus.msg
// DO NOT EDIT!


#ifndef NIRYO_ROBOT_MSGS_MESSAGE_COMMANDSTATUS_H
#define NIRYO_ROBOT_MSGS_MESSAGE_COMMANDSTATUS_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace niryo_robot_msgs
{
template <class ContainerAllocator>
struct CommandStatus_
{
  typedef CommandStatus_<ContainerAllocator> Type;

  CommandStatus_()
    : val(0)  {
    }
  CommandStatus_(const ContainerAllocator& _alloc)
    : val(0)  {
  (void)_alloc;
    }



   typedef int32_t _val_type;
  _val_type val;



// reducing the odds to have name collisions with Windows.h 
#if defined(_WIN32) && defined(SUCCESS)
  #undef SUCCESS
#endif
#if defined(_WIN32) && defined(CANCELLED)
  #undef CANCELLED
#endif
#if defined(_WIN32) && defined(PREEMPTED)
  #undef PREEMPTED
#endif
#if defined(_WIN32) && defined(REJECTED)
  #undef REJECTED
#endif
#if defined(_WIN32) && defined(NO_CONNECTION)
  #undef NO_CONNECTION
#endif
#if defined(_WIN32) && defined(GOAL_TIMEOUT)
  #undef GOAL_TIMEOUT
#endif
#if defined(_WIN32) && defined(FAILURE)
  #undef FAILURE
#endif
#if defined(_WIN32) && defined(ABORTED)
  #undef ABORTED
#endif
#if defined(_WIN32) && defined(STOPPED)
  #undef STOPPED
#endif
#if defined(_WIN32) && defined(BAD_HARDWARE_VERSION)
  #undef BAD_HARDWARE_VERSION
#endif
#if defined(_WIN32) && defined(ROS_ERROR)
  #undef ROS_ERROR
#endif
#if defined(_WIN32) && defined(FILE_ALREADY_EXISTS)
  #undef FILE_ALREADY_EXISTS
#endif
#if defined(_WIN32) && defined(FILE_NOT_FOUND)
  #undef FILE_NOT_FOUND
#endif
#if defined(_WIN32) && defined(UNKNOWN_COMMAND)
  #undef UNKNOWN_COMMAND
#endif
#if defined(_WIN32) && defined(NOT_IMPLEMENTED_COMMAND)
  #undef NOT_IMPLEMENTED_COMMAND
#endif
#if defined(_WIN32) && defined(INVALID_PARAMETERS)
  #undef INVALID_PARAMETERS
#endif
#if defined(_WIN32) && defined(HARDWARE_FAILURE)
  #undef HARDWARE_FAILURE
#endif
#if defined(_WIN32) && defined(HARDWARE_NOT_OK)
  #undef HARDWARE_NOT_OK
#endif
#if defined(_WIN32) && defined(LEARNING_MODE_ON)
  #undef LEARNING_MODE_ON
#endif
#if defined(_WIN32) && defined(CALIBRATION_NOT_DONE)
  #undef CALIBRATION_NOT_DONE
#endif
#if defined(_WIN32) && defined(DIGITAL_IO_PANEL_ERROR)
  #undef DIGITAL_IO_PANEL_ERROR
#endif
#if defined(_WIN32) && defined(LED_MANAGER_ERROR)
  #undef LED_MANAGER_ERROR
#endif
#if defined(_WIN32) && defined(BUTTON_ERROR)
  #undef BUTTON_ERROR
#endif
#if defined(_WIN32) && defined(WRONG_MOTOR_TYPE)
  #undef WRONG_MOTOR_TYPE
#endif
#if defined(_WIN32) && defined(TTL_WRITE_ERROR)
  #undef TTL_WRITE_ERROR
#endif
#if defined(_WIN32) && defined(TTL_READ_ERROR)
  #undef TTL_READ_ERROR
#endif
#if defined(_WIN32) && defined(CAN_WRITE_ERROR)
  #undef CAN_WRITE_ERROR
#endif
#if defined(_WIN32) && defined(CAN_READ_ERROR)
  #undef CAN_READ_ERROR
#endif
#if defined(_WIN32) && defined(NO_CONVEYOR_LEFT)
  #undef NO_CONVEYOR_LEFT
#endif
#if defined(_WIN32) && defined(NO_CONVEYOR_FOUND)
  #undef NO_CONVEYOR_FOUND
#endif
#if defined(_WIN32) && defined(CONVEYOR_ID_INVALID)
  #undef CONVEYOR_ID_INVALID
#endif
#if defined(_WIN32) && defined(CALIBRATION_IN_PROGRESS)
  #undef CALIBRATION_IN_PROGRESS
#endif
#if defined(_WIN32) && defined(VIDEO_STREAM_ON_OFF_FAILURE)
  #undef VIDEO_STREAM_ON_OFF_FAILURE
#endif
#if defined(_WIN32) && defined(VIDEO_STREAM_NOT_RUNNING)
  #undef VIDEO_STREAM_NOT_RUNNING
#endif
#if defined(_WIN32) && defined(OBJECT_NOT_FOUND)
  #undef OBJECT_NOT_FOUND
#endif
#if defined(_WIN32) && defined(MARKERS_NOT_FOUND)
  #undef MARKERS_NOT_FOUND
#endif
#if defined(_WIN32) && defined(ARM_COMMANDER_FAILURE)
  #undef ARM_COMMANDER_FAILURE
#endif
#if defined(_WIN32) && defined(GOAL_STILL_ACTIVE)
  #undef GOAL_STILL_ACTIVE
#endif
#if defined(_WIN32) && defined(JOG_CONTROLLER_ENABLED)
  #undef JOG_CONTROLLER_ENABLED
#endif
#if defined(_WIN32) && defined(CONTROLLER_PROBLEMS)
  #undef CONTROLLER_PROBLEMS
#endif
#if defined(_WIN32) && defined(SHOULD_RESTART)
  #undef SHOULD_RESTART
#endif
#if defined(_WIN32) && defined(JOG_CONTROLLER_FAILURE)
  #undef JOG_CONTROLLER_FAILURE
#endif
#if defined(_WIN32) && defined(COLLISION)
  #undef COLLISION
#endif
#if defined(_WIN32) && defined(PAUSE_TIMEOUT)
  #undef PAUSE_TIMEOUT
#endif
#if defined(_WIN32) && defined(CANCEL_PAUSE)
  #undef CANCEL_PAUSE
#endif
#if defined(_WIN32) && defined(PLAN_FAILED)
  #undef PLAN_FAILED
#endif
#if defined(_WIN32) && defined(NO_PLAN_AVAILABLE)
  #undef NO_PLAN_AVAILABLE
#endif
#if defined(_WIN32) && defined(INVERT_KINEMATICS_FAILURE)
  #undef INVERT_KINEMATICS_FAILURE
#endif
#if defined(_WIN32) && defined(TOOL_FAILURE)
  #undef TOOL_FAILURE
#endif
#if defined(_WIN32) && defined(TOOL_ID_INVALID)
  #undef TOOL_ID_INVALID
#endif
#if defined(_WIN32) && defined(TOOL_NOT_CONNECTED)
  #undef TOOL_NOT_CONNECTED
#endif
#if defined(_WIN32) && defined(TOOL_ROS_INTERFACE_ERROR)
  #undef TOOL_ROS_INTERFACE_ERROR
#endif
#if defined(_WIN32) && defined(POSES_HANDLER_CREATION_FAILED)
  #undef POSES_HANDLER_CREATION_FAILED
#endif
#if defined(_WIN32) && defined(POSES_HANDLER_REMOVAL_FAILED)
  #undef POSES_HANDLER_REMOVAL_FAILED
#endif
#if defined(_WIN32) && defined(POSES_HANDLER_READ_FAILURE)
  #undef POSES_HANDLER_READ_FAILURE
#endif
#if defined(_WIN32) && defined(POSES_HANDLER_COMPUTE_FAILURE)
  #undef POSES_HANDLER_COMPUTE_FAILURE
#endif
#if defined(_WIN32) && defined(DYNAMIC_FRAME_EDIT_FAILED)
  #undef DYNAMIC_FRAME_EDIT_FAILED
#endif
#if defined(_WIN32) && defined(DYNAMIC_FRAME_CREATION_FAILED)
  #undef DYNAMIC_FRAME_CREATION_FAILED
#endif
#if defined(_WIN32) && defined(CONVERT_FAILED)
  #undef CONVERT_FAILED
#endif
#if defined(_WIN32) && defined(WORKSPACE_CREATION_FAILED)
  #undef WORKSPACE_CREATION_FAILED
#endif
#if defined(_WIN32) && defined(TRAJECTORY_HANDLER_CREATION_FAILED)
  #undef TRAJECTORY_HANDLER_CREATION_FAILED
#endif
#if defined(_WIN32) && defined(TRAJECTORY_HANDLER_REMOVAL_FAILED)
  #undef TRAJECTORY_HANDLER_REMOVAL_FAILED
#endif
#if defined(_WIN32) && defined(TRAJECTORY_HANDLER_RENAME_FAILURE)
  #undef TRAJECTORY_HANDLER_RENAME_FAILURE
#endif
#if defined(_WIN32) && defined(TRAJECTORY_HANDLER_EXECUTE_REGISTERED_FAILURE)
  #undef TRAJECTORY_HANDLER_EXECUTE_REGISTERED_FAILURE
#endif
#if defined(_WIN32) && defined(TRAJECTORY_HANDLER_EXECUTE_FAILURE)
  #undef TRAJECTORY_HANDLER_EXECUTE_FAILURE
#endif
#if defined(_WIN32) && defined(TRAJECTORY_HANDLER_GET_TRAJECTORY_FAILURE)
  #undef TRAJECTORY_HANDLER_GET_TRAJECTORY_FAILURE
#endif
#if defined(_WIN32) && defined(TRAJECTORY_HANDLER_GET_TRAJECTORY_LIST_FAILURE)
  #undef TRAJECTORY_HANDLER_GET_TRAJECTORY_LIST_FAILURE
#endif
#if defined(_WIN32) && defined(PROGRAMS_MANAGER_FAILURE)
  #undef PROGRAMS_MANAGER_FAILURE
#endif
#if defined(_WIN32) && defined(PROGRAMS_MANAGER_READ_FAILURE)
  #undef PROGRAMS_MANAGER_READ_FAILURE
#endif
#if defined(_WIN32) && defined(PROGRAMS_MANAGER_UNKNOWN_LANGUAGE)
  #undef PROGRAMS_MANAGER_UNKNOWN_LANGUAGE
#endif
#if defined(_WIN32) && defined(PROGRAMS_MANAGER_NOT_RUNNABLE_LANGUAGE)
  #undef PROGRAMS_MANAGER_NOT_RUNNABLE_LANGUAGE
#endif
#if defined(_WIN32) && defined(PROGRAMS_MANAGER_EXECUTION_FAILED)
  #undef PROGRAMS_MANAGER_EXECUTION_FAILED
#endif
#if defined(_WIN32) && defined(PROGRAMS_MANAGER_STOPPING_FAILED)
  #undef PROGRAMS_MANAGER_STOPPING_FAILED
#endif
#if defined(_WIN32) && defined(PROGRAMS_MANAGER_AUTORUN_FAILURE)
  #undef PROGRAMS_MANAGER_AUTORUN_FAILURE
#endif
#if defined(_WIN32) && defined(PROGRAMS_MANAGER_WRITING_FAILURE)
  #undef PROGRAMS_MANAGER_WRITING_FAILURE
#endif
#if defined(_WIN32) && defined(PROGRAMS_MANAGER_FILE_ALREADY_EXISTS)
  #undef PROGRAMS_MANAGER_FILE_ALREADY_EXISTS
#endif
#if defined(_WIN32) && defined(PROGRAMS_MANAGER_FILE_DOES_NOT_EXIST)
  #undef PROGRAMS_MANAGER_FILE_DOES_NOT_EXIST
#endif
#if defined(_WIN32) && defined(CREDENTIALS_FILE_ERROR)
  #undef CREDENTIALS_FILE_ERROR
#endif
#if defined(_WIN32) && defined(CREDENTIALS_UNKNOWN_ERROR)
  #undef CREDENTIALS_UNKNOWN_ERROR
#endif
#if defined(_WIN32) && defined(SYSTEM_API_CLIENT_UNKNOWN_ERROR)
  #undef SYSTEM_API_CLIENT_UNKNOWN_ERROR
#endif
#if defined(_WIN32) && defined(SYSTEM_API_CLIENT_INVALID_ROBOT_NAME)
  #undef SYSTEM_API_CLIENT_INVALID_ROBOT_NAME
#endif
#if defined(_WIN32) && defined(SYSTEM_API_CLIENT_REQUEST_FAILED)
  #undef SYSTEM_API_CLIENT_REQUEST_FAILED
#endif
#if defined(_WIN32) && defined(SYSTEM_API_CLIENT_UNKNOWN_COMMAND)
  #undef SYSTEM_API_CLIENT_UNKNOWN_COMMAND
#endif
#if defined(_WIN32) && defined(SYSTEM_API_CLIENT_COMMAND_FAILED)
  #undef SYSTEM_API_CLIENT_COMMAND_FAILED
#endif
#if defined(_WIN32) && defined(DATABASE_DB_ERROR)
  #undef DATABASE_DB_ERROR
#endif
#if defined(_WIN32) && defined(DATABASE_SETTINGS_UNKNOWN)
  #undef DATABASE_SETTINGS_UNKNOWN
#endif
#if defined(_WIN32) && defined(DATABASE_SETTINGS_TYPE_MISMATCH)
  #undef DATABASE_SETTINGS_TYPE_MISMATCH
#endif
#if defined(_WIN32) && defined(DATABASE_FILE_PATH_UNKNOWN)
  #undef DATABASE_FILE_PATH_UNKNOWN
#endif
#if defined(_WIN32) && defined(REPORTS_UNABLE_TO_SEND)
  #undef REPORTS_UNABLE_TO_SEND
#endif
#if defined(_WIN32) && defined(REPORTS_SENDING_FAIL)
  #undef REPORTS_SENDING_FAIL
#endif
#if defined(_WIN32) && defined(REPORTS_FETCHING_FAIL)
  #undef REPORTS_FETCHING_FAIL
#endif
#if defined(_WIN32) && defined(REPORTS_SERVICE_UNREACHABLE)
  #undef REPORTS_SERVICE_UNREACHABLE
#endif
#if defined(_WIN32) && defined(SOUND_FILE_NOT_FOUND)
  #undef SOUND_FILE_NOT_FOUND
#endif
#if defined(_WIN32) && defined(PROTECTED_SOUND_NAME)
  #undef PROTECTED_SOUND_NAME
#endif
#if defined(_WIN32) && defined(INVALID_SOUND_NAME)
  #undef INVALID_SOUND_NAME
#endif
#if defined(_WIN32) && defined(INVALID_SOUND_FORMAT)
  #undef INVALID_SOUND_FORMAT
#endif
#if defined(_WIN32) && defined(SOUND_TIMEOUT)
  #undef SOUND_TIMEOUT
#endif
#if defined(_WIN32) && defined(MISSING_I2C)
  #undef MISSING_I2C
#endif

  enum {
    SUCCESS = 1,
    CANCELLED = 2,
    PREEMPTED = 3,
    REJECTED = 4,
    NO_CONNECTION = 5,
    GOAL_TIMEOUT = 6,
    FAILURE = -1,
    ABORTED = -3,
    STOPPED = -4,
    BAD_HARDWARE_VERSION = -10,
    ROS_ERROR = -20,
    FILE_ALREADY_EXISTS = -30,
    FILE_NOT_FOUND = -31,
    UNKNOWN_COMMAND = -50,
    NOT_IMPLEMENTED_COMMAND = -51,
    INVALID_PARAMETERS = -52,
    HARDWARE_FAILURE = -110,
    HARDWARE_NOT_OK = -111,
    LEARNING_MODE_ON = -112,
    CALIBRATION_NOT_DONE = -113,
    DIGITAL_IO_PANEL_ERROR = -114,
    LED_MANAGER_ERROR = -115,
    BUTTON_ERROR = -116,
    WRONG_MOTOR_TYPE = -117,
    TTL_WRITE_ERROR = -118,
    TTL_READ_ERROR = -119,
    CAN_WRITE_ERROR = -120,
    CAN_READ_ERROR = -121,
    NO_CONVEYOR_LEFT = -122,
    NO_CONVEYOR_FOUND = -123,
    CONVEYOR_ID_INVALID = -124,
    CALIBRATION_IN_PROGRESS = -125,
    VIDEO_STREAM_ON_OFF_FAILURE = -170,
    VIDEO_STREAM_NOT_RUNNING = -171,
    OBJECT_NOT_FOUND = -172,
    MARKERS_NOT_FOUND = -173,
    ARM_COMMANDER_FAILURE = -220,
    GOAL_STILL_ACTIVE = -221,
    JOG_CONTROLLER_ENABLED = -222,
    CONTROLLER_PROBLEMS = -223,
    SHOULD_RESTART = -224,
    JOG_CONTROLLER_FAILURE = -225,
    COLLISION = -226,
    PAUSE_TIMEOUT = -227,
    CANCEL_PAUSE = -228,
    PLAN_FAILED = -230,
    NO_PLAN_AVAILABLE = -231,
    INVERT_KINEMATICS_FAILURE = -232,
    TOOL_FAILURE = -251,
    TOOL_ID_INVALID = -252,
    TOOL_NOT_CONNECTED = -253,
    TOOL_ROS_INTERFACE_ERROR = -254,
    POSES_HANDLER_CREATION_FAILED = -300,
    POSES_HANDLER_REMOVAL_FAILED = -301,
    POSES_HANDLER_READ_FAILURE = -302,
    POSES_HANDLER_COMPUTE_FAILURE = -303,
    DYNAMIC_FRAME_EDIT_FAILED = -305,
    DYNAMIC_FRAME_CREATION_FAILED = -306,
    CONVERT_FAILED = -307,
    WORKSPACE_CREATION_FAILED = -308,
    TRAJECTORY_HANDLER_CREATION_FAILED = -310,
    TRAJECTORY_HANDLER_REMOVAL_FAILED = -311,
    TRAJECTORY_HANDLER_RENAME_FAILURE = -312,
    TRAJECTORY_HANDLER_EXECUTE_REGISTERED_FAILURE = -313,
    TRAJECTORY_HANDLER_EXECUTE_FAILURE = -314,
    TRAJECTORY_HANDLER_GET_TRAJECTORY_FAILURE = -315,
    TRAJECTORY_HANDLER_GET_TRAJECTORY_LIST_FAILURE = -316,
    PROGRAMS_MANAGER_FAILURE = -320,
    PROGRAMS_MANAGER_READ_FAILURE = -321,
    PROGRAMS_MANAGER_UNKNOWN_LANGUAGE = -325,
    PROGRAMS_MANAGER_NOT_RUNNABLE_LANGUAGE = -326,
    PROGRAMS_MANAGER_EXECUTION_FAILED = -327,
    PROGRAMS_MANAGER_STOPPING_FAILED = -328,
    PROGRAMS_MANAGER_AUTORUN_FAILURE = -329,
    PROGRAMS_MANAGER_WRITING_FAILURE = -330,
    PROGRAMS_MANAGER_FILE_ALREADY_EXISTS = -331,
    PROGRAMS_MANAGER_FILE_DOES_NOT_EXIST = -332,
    CREDENTIALS_FILE_ERROR = -400,
    CREDENTIALS_UNKNOWN_ERROR = -401,
    SYSTEM_API_CLIENT_UNKNOWN_ERROR = -440,
    SYSTEM_API_CLIENT_INVALID_ROBOT_NAME = -441,
    SYSTEM_API_CLIENT_REQUEST_FAILED = -442,
    SYSTEM_API_CLIENT_UNKNOWN_COMMAND = -443,
    SYSTEM_API_CLIENT_COMMAND_FAILED = -444,
    DATABASE_DB_ERROR = -460,
    DATABASE_SETTINGS_UNKNOWN = -461,
    DATABASE_SETTINGS_TYPE_MISMATCH = -462,
    DATABASE_FILE_PATH_UNKNOWN = -463,
    REPORTS_UNABLE_TO_SEND = -470,
    REPORTS_SENDING_FAIL = -471,
    REPORTS_FETCHING_FAIL = -472,
    REPORTS_SERVICE_UNREACHABLE = -473,
    SOUND_FILE_NOT_FOUND = -500,
    PROTECTED_SOUND_NAME = -501,
    INVALID_SOUND_NAME = -502,
    INVALID_SOUND_FORMAT = -503,
    SOUND_TIMEOUT = -504,
    MISSING_I2C = -510,
  };


  typedef boost::shared_ptr< ::niryo_robot_msgs::CommandStatus_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::niryo_robot_msgs::CommandStatus_<ContainerAllocator> const> ConstPtr;

}; // struct CommandStatus_

typedef ::niryo_robot_msgs::CommandStatus_<std::allocator<void> > CommandStatus;

typedef boost::shared_ptr< ::niryo_robot_msgs::CommandStatus > CommandStatusPtr;
typedef boost::shared_ptr< ::niryo_robot_msgs::CommandStatus const> CommandStatusConstPtr;

// constants requiring out of line definition

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::niryo_robot_msgs::CommandStatus_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::niryo_robot_msgs::CommandStatus_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::niryo_robot_msgs::CommandStatus_<ContainerAllocator1> & lhs, const ::niryo_robot_msgs::CommandStatus_<ContainerAllocator2> & rhs)
{
  return lhs.val == rhs.val;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::niryo_robot_msgs::CommandStatus_<ContainerAllocator1> & lhs, const ::niryo_robot_msgs::CommandStatus_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace niryo_robot_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::niryo_robot_msgs::CommandStatus_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::niryo_robot_msgs::CommandStatus_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::niryo_robot_msgs::CommandStatus_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::niryo_robot_msgs::CommandStatus_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::niryo_robot_msgs::CommandStatus_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::niryo_robot_msgs::CommandStatus_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::niryo_robot_msgs::CommandStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "6e77aa3752958b447895f4f64d2f4fcd";
  }

  static const char* value(const ::niryo_robot_msgs::CommandStatus_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x6e77aa3752958b44ULL;
  static const uint64_t static_value2 = 0x7895f4f64d2f4fcdULL;
};

template<class ContainerAllocator>
struct DataType< ::niryo_robot_msgs::CommandStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "niryo_robot_msgs/CommandStatus";
  }

  static const char* value(const ::niryo_robot_msgs::CommandStatus_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::niryo_robot_msgs::CommandStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 val\n"
"\n"
"# overall behavior\n"
"int32 SUCCESS = 1\n"
"int32 CANCELLED = 2\n"
"int32 PREEMPTED = 3\n"
"int32 REJECTED = 4\n"
"int32 NO_CONNECTION = 5\n"
"int32 GOAL_TIMEOUT = 6\n"
"\n"
"\n"
"int32 FAILURE = -1\n"
"int32 ABORTED = -3\n"
"int32 STOPPED = -4\n"
"\n"
"int32 BAD_HARDWARE_VERSION = -10\n"
"int32 ROS_ERROR = -20\n"
"\n"
"int32 FILE_ALREADY_EXISTS = -30\n"
"int32 FILE_NOT_FOUND = -31\n"
"\n"
"\n"
"int32 UNKNOWN_COMMAND = -50\n"
"int32 NOT_IMPLEMENTED_COMMAND = -51\n"
"int32 INVALID_PARAMETERS = -52\n"
"\n"
"# - Hardware\n"
"int32 HARDWARE_FAILURE = -110\n"
"int32 HARDWARE_NOT_OK = -111\n"
"int32 LEARNING_MODE_ON = -112\n"
"int32 CALIBRATION_NOT_DONE = -113\n"
"int32 DIGITAL_IO_PANEL_ERROR = -114\n"
"int32 LED_MANAGER_ERROR = -115\n"
"int32 BUTTON_ERROR = -116\n"
"int32 WRONG_MOTOR_TYPE = -117\n"
"int32 TTL_WRITE_ERROR = -118\n"
"int32 TTL_READ_ERROR = -119\n"
"int32 CAN_WRITE_ERROR = -120\n"
"int32 CAN_READ_ERROR = -121\n"
"int32 NO_CONVEYOR_LEFT = -122\n"
"int32 NO_CONVEYOR_FOUND = -123\n"
"int32 CONVEYOR_ID_INVALID = -124\n"
"int32 CALIBRATION_IN_PROGRESS = -125\n"
"\n"
"# - Vision\n"
"int32 VIDEO_STREAM_ON_OFF_FAILURE = -170\n"
"int32 VIDEO_STREAM_NOT_RUNNING = -171\n"
"int32 OBJECT_NOT_FOUND = -172\n"
"int32 MARKERS_NOT_FOUND = -173\n"
"\n"
"# - Commander\n"
"# Arm Commander\n"
"int32 ARM_COMMANDER_FAILURE = -220\n"
"int32 GOAL_STILL_ACTIVE = -221\n"
"int32 JOG_CONTROLLER_ENABLED = -222\n"
"int32 CONTROLLER_PROBLEMS = -223\n"
"int32 SHOULD_RESTART = -224\n"
"int32 JOG_CONTROLLER_FAILURE = -225\n"
"\n"
"int32 COLLISION = -226\n"
"\n"
"int32 PAUSE_TIMEOUT= -227\n"
"int32 CANCEL_PAUSE= -228\n"
"\n"
"int32 PLAN_FAILED = -230\n"
"int32 NO_PLAN_AVAILABLE = -231\n"
"int32 INVERT_KINEMATICS_FAILURE = -232\n"
"\n"
"# Tool Commander\n"
"int32 TOOL_FAILURE = -251\n"
"int32 TOOL_ID_INVALID = -252\n"
"int32 TOOL_NOT_CONNECTED = -253\n"
"int32 TOOL_ROS_INTERFACE_ERROR = -254\n"
"\n"
"# - Pose Handlers\n"
"int32 POSES_HANDLER_CREATION_FAILED = -300\n"
"int32 POSES_HANDLER_REMOVAL_FAILED = -301\n"
"int32 POSES_HANDLER_READ_FAILURE = -302\n"
"int32 POSES_HANDLER_COMPUTE_FAILURE = -303\n"
"\n"
"int32 DYNAMIC_FRAME_EDIT_FAILED = -305\n"
"int32 DYNAMIC_FRAME_CREATION_FAILED = -306\n"
"int32 CONVERT_FAILED = -307\n"
"\n"
"int32 WORKSPACE_CREATION_FAILED = -308\n"
"\n"
"# - Trajectory Handler\n"
"int32 TRAJECTORY_HANDLER_CREATION_FAILED = -310\n"
"int32 TRAJECTORY_HANDLER_REMOVAL_FAILED = -311\n"
"int32 TRAJECTORY_HANDLER_RENAME_FAILURE = -312\n"
"int32 TRAJECTORY_HANDLER_EXECUTE_REGISTERED_FAILURE = -313\n"
"int32 TRAJECTORY_HANDLER_EXECUTE_FAILURE = -314\n"
"int32 TRAJECTORY_HANDLER_GET_TRAJECTORY_FAILURE = -315\n"
"int32 TRAJECTORY_HANDLER_GET_TRAJECTORY_LIST_FAILURE = -316\n"
"\n"
"# - Programs Manager\n"
"int32 PROGRAMS_MANAGER_FAILURE = -320\n"
"int32 PROGRAMS_MANAGER_READ_FAILURE = -321\n"
"int32 PROGRAMS_MANAGER_UNKNOWN_LANGUAGE = -325\n"
"int32 PROGRAMS_MANAGER_NOT_RUNNABLE_LANGUAGE = -326\n"
"int32 PROGRAMS_MANAGER_EXECUTION_FAILED = -327\n"
"int32 PROGRAMS_MANAGER_STOPPING_FAILED = -328\n"
"int32 PROGRAMS_MANAGER_AUTORUN_FAILURE = -329\n"
"int32 PROGRAMS_MANAGER_WRITING_FAILURE = -330\n"
"int32 PROGRAMS_MANAGER_FILE_ALREADY_EXISTS = -331\n"
"int32 PROGRAMS_MANAGER_FILE_DOES_NOT_EXIST = -332\n"
"\n"
"\n"
"# - Credentials\n"
"int32 CREDENTIALS_FILE_ERROR = -400\n"
"int32 CREDENTIALS_UNKNOWN_ERROR = -401\n"
"\n"
"# - System Api Client\n"
"int32 SYSTEM_API_CLIENT_UNKNOWN_ERROR = -440\n"
"int32 SYSTEM_API_CLIENT_INVALID_ROBOT_NAME = -441\n"
"int32 SYSTEM_API_CLIENT_REQUEST_FAILED = -442\n"
"int32 SYSTEM_API_CLIENT_UNKNOWN_COMMAND = -443\n"
"int32 SYSTEM_API_CLIENT_COMMAND_FAILED = -444\n"
"\n"
"# - Database\n"
"int32 DATABASE_DB_ERROR = -460\n"
"int32 DATABASE_SETTINGS_UNKNOWN = -461\n"
"int32 DATABASE_SETTINGS_TYPE_MISMATCH = -462\n"
"int32 DATABASE_FILE_PATH_UNKNOWN = -463\n"
"\n"
"\n"
"# - Reports\n"
"int32 REPORTS_UNABLE_TO_SEND = -470\n"
"int32 REPORTS_SENDING_FAIL = -471\n"
"int32 REPORTS_FETCHING_FAIL = -472\n"
"int32 REPORTS_SERVICE_UNREACHABLE = -473\n"
"\n"
"# - Sound interface\n"
"int32 SOUND_FILE_NOT_FOUND = -500\n"
"int32 PROTECTED_SOUND_NAME = -501\n"
"int32 INVALID_SOUND_NAME = -502\n"
"int32 INVALID_SOUND_FORMAT = -503\n"
"int32 SOUND_TIMEOUT = -504\n"
"\n"
"# - I2C interface\n"
"int32 MISSING_I2C = -510\n"
;
  }

  static const char* value(const ::niryo_robot_msgs::CommandStatus_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::niryo_robot_msgs::CommandStatus_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.val);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct CommandStatus_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::niryo_robot_msgs::CommandStatus_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::niryo_robot_msgs::CommandStatus_<ContainerAllocator>& v)
  {
    s << indent << "val: ";
    Printer<int32_t>::stream(s, indent + "  ", v.val);
  }
};

} // namespace message_operations
} // namespace ros

#endif // NIRYO_ROBOT_MSGS_MESSAGE_COMMANDSTATUS_H
