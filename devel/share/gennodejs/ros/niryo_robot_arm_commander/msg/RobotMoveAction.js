// Auto-generated. Do not edit!

// (in-package niryo_robot_arm_commander.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;
let RobotMoveActionGoal = require('./RobotMoveActionGoal.js');
let RobotMoveActionResult = require('./RobotMoveActionResult.js');
let RobotMoveActionFeedback = require('./RobotMoveActionFeedback.js');

//-----------------------------------------------------------

class RobotMoveAction {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.action_goal = null;
      this.action_result = null;
      this.action_feedback = null;
    }
    else {
      if (initObj.hasOwnProperty('action_goal')) {
        this.action_goal = initObj.action_goal
      }
      else {
        this.action_goal = new RobotMoveActionGoal();
      }
      if (initObj.hasOwnProperty('action_result')) {
        this.action_result = initObj.action_result
      }
      else {
        this.action_result = new RobotMoveActionResult();
      }
      if (initObj.hasOwnProperty('action_feedback')) {
        this.action_feedback = initObj.action_feedback
      }
      else {
        this.action_feedback = new RobotMoveActionFeedback();
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type RobotMoveAction
    // Serialize message field [action_goal]
    bufferOffset = RobotMoveActionGoal.serialize(obj.action_goal, buffer, bufferOffset);
    // Serialize message field [action_result]
    bufferOffset = RobotMoveActionResult.serialize(obj.action_result, buffer, bufferOffset);
    // Serialize message field [action_feedback]
    bufferOffset = RobotMoveActionFeedback.serialize(obj.action_feedback, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type RobotMoveAction
    let len;
    let data = new RobotMoveAction(null);
    // Deserialize message field [action_goal]
    data.action_goal = RobotMoveActionGoal.deserialize(buffer, bufferOffset);
    // Deserialize message field [action_result]
    data.action_result = RobotMoveActionResult.deserialize(buffer, bufferOffset);
    // Deserialize message field [action_feedback]
    data.action_feedback = RobotMoveActionFeedback.deserialize(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += RobotMoveActionGoal.getMessageSize(object.action_goal);
    length += RobotMoveActionResult.getMessageSize(object.action_result);
    length += RobotMoveActionFeedback.getMessageSize(object.action_feedback);
    return length;
  }

  static datatype() {
    // Returns string type for a message object
    return 'niryo_robot_arm_commander/RobotMoveAction';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '65947802fc4c83e896d9e035963131dc';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    # ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
    
    RobotMoveActionGoal action_goal
    RobotMoveActionResult action_result
    RobotMoveActionFeedback action_feedback
    
    ================================================================================
    MSG: niryo_robot_arm_commander/RobotMoveActionGoal
    # ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
    
    Header header
    actionlib_msgs/GoalID goal_id
    RobotMoveGoal goal
    
    ================================================================================
    MSG: std_msgs/Header
    # Standard metadata for higher-level stamped data types.
    # This is generally used to communicate timestamped data 
    # in a particular coordinate frame.
    # 
    # sequence ID: consecutively increasing ID 
    uint32 seq
    #Two-integer timestamp that is expressed as:
    # * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
    # * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
    # time-handling sugar is provided by the client library
    time stamp
    #Frame this data is associated with
    string frame_id
    
    ================================================================================
    MSG: actionlib_msgs/GoalID
    # The stamp should store the time at which this goal was requested.
    # It is used by an action server when it tries to preempt all
    # goals that were requested before a certain time
    time stamp
    
    # The id provides a way to associate feedback and
    # result message with specific goal requests. The id
    # specified must be unique.
    string id
    
    
    ================================================================================
    MSG: niryo_robot_arm_commander/RobotMoveGoal
    # ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
    # goal
    niryo_robot_arm_commander/ArmMoveCommand cmd
    
    ================================================================================
    MSG: niryo_robot_arm_commander/ArmMoveCommand
    int32 JOINTS = 0            # uses joints 
    int32 POSE = 1              # uses position and rpy 
    int32 POSITION = 2          # uses position
    int32 RPY = 3               # uses rpy
    int32 POSE_QUAT = 4         # uses position and orientation
    int32 LINEAR_POSE = 5       # uses position and rpy
    int32 SHIFT_POSE = 6        # uses shift
    int32 SHIFT_LINEAR_POSE = 7 # uses shift
    int32 EXECUTE_TRAJ = 8      # uses dist_smoothing, list_poses
    int32 DRAW_SPIRAL = 9
    int32 DRAW_CIRCLE = 10
    int32 EXECUTE_FULL_TRAJ = 11
    int32 EXECUTE_RAW_TRAJ = 12
    
    int32 cmd_type
    
    float64[] joints
    geometry_msgs/Point position
    niryo_robot_msgs/RPY rpy
    geometry_msgs/Quaternion orientation
    niryo_robot_arm_commander/ShiftPose shift
    
    geometry_msgs/Pose[] list_poses
    float32 dist_smoothing
    
    trajectory_msgs/JointTrajectory trajectory
    
    float64[] args
    
    ================================================================================
    MSG: geometry_msgs/Point
    # This contains the position of a point in free space
    float64 x
    float64 y
    float64 z
    
    ================================================================================
    MSG: niryo_robot_msgs/RPY
    # roll, pitch and yaw
    
    float64 roll
    float64 pitch
    float64 yaw
    
    ================================================================================
    MSG: geometry_msgs/Quaternion
    # This represents an orientation in free space in quaternion form.
    
    float64 x
    float64 y
    float64 z
    float64 w
    
    ================================================================================
    MSG: niryo_robot_arm_commander/ShiftPose
    int32 axis_number
    float64 value
    
    ================================================================================
    MSG: geometry_msgs/Pose
    # A representation of pose in free space, composed of position and orientation. 
    Point position
    Quaternion orientation
    
    ================================================================================
    MSG: trajectory_msgs/JointTrajectory
    Header header
    string[] joint_names
    JointTrajectoryPoint[] points
    
    ================================================================================
    MSG: trajectory_msgs/JointTrajectoryPoint
    # Each trajectory point specifies either positions[, velocities[, accelerations]]
    # or positions[, effort] for the trajectory to be executed.
    # All specified values are in the same order as the joint names in JointTrajectory.msg
    
    float64[] positions
    float64[] velocities
    float64[] accelerations
    float64[] effort
    duration time_from_start
    
    ================================================================================
    MSG: niryo_robot_arm_commander/RobotMoveActionResult
    # ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
    
    Header header
    actionlib_msgs/GoalStatus status
    RobotMoveResult result
    
    ================================================================================
    MSG: actionlib_msgs/GoalStatus
    GoalID goal_id
    uint8 status
    uint8 PENDING         = 0   # The goal has yet to be processed by the action server
    uint8 ACTIVE          = 1   # The goal is currently being processed by the action server
    uint8 PREEMPTED       = 2   # The goal received a cancel request after it started executing
                                #   and has since completed its execution (Terminal State)
    uint8 SUCCEEDED       = 3   # The goal was achieved successfully by the action server (Terminal State)
    uint8 ABORTED         = 4   # The goal was aborted during execution by the action server due
                                #    to some failure (Terminal State)
    uint8 REJECTED        = 5   # The goal was rejected by the action server without being processed,
                                #    because the goal was unattainable or invalid (Terminal State)
    uint8 PREEMPTING      = 6   # The goal received a cancel request after it started executing
                                #    and has not yet completed execution
    uint8 RECALLING       = 7   # The goal received a cancel request before it started executing,
                                #    but the action server has not yet confirmed that the goal is canceled
    uint8 RECALLED        = 8   # The goal received a cancel request before it started executing
                                #    and was successfully cancelled (Terminal State)
    uint8 LOST            = 9   # An action client can determine that a goal is LOST. This should not be
                                #    sent over the wire by an action server
    
    #Allow for the user to associate a string with GoalStatus for debugging
    string text
    
    
    ================================================================================
    MSG: niryo_robot_arm_commander/RobotMoveResult
    # ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
    # result
    int32 status
    string message
    
    ================================================================================
    MSG: niryo_robot_arm_commander/RobotMoveActionFeedback
    # ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
    
    Header header
    actionlib_msgs/GoalStatus status
    RobotMoveFeedback feedback
    
    ================================================================================
    MSG: niryo_robot_arm_commander/RobotMoveFeedback
    # ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
    # feedback
    niryo_robot_msgs/RobotState state
    
    
    ================================================================================
    MSG: niryo_robot_msgs/RobotState
    geometry_msgs/Point position
    niryo_robot_msgs/RPY rpy
    geometry_msgs/Quaternion orientation
    
    geometry_msgs/Twist twist
    float64 tcp_speed
    ================================================================================
    MSG: geometry_msgs/Twist
    # This expresses velocity in free space broken into its linear and angular parts.
    Vector3  linear
    Vector3  angular
    
    ================================================================================
    MSG: geometry_msgs/Vector3
    # This represents a vector in free space. 
    # It is only meant to represent a direction. Therefore, it does not
    # make sense to apply a translation to it (e.g., when applying a 
    # generic rigid transformation to a Vector3, tf2 will only apply the
    # rotation). If you want your data to be translatable too, use the
    # geometry_msgs/Point message instead.
    
    float64 x
    float64 y
    float64 z
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new RobotMoveAction(null);
    if (msg.action_goal !== undefined) {
      resolved.action_goal = RobotMoveActionGoal.Resolve(msg.action_goal)
    }
    else {
      resolved.action_goal = new RobotMoveActionGoal()
    }

    if (msg.action_result !== undefined) {
      resolved.action_result = RobotMoveActionResult.Resolve(msg.action_result)
    }
    else {
      resolved.action_result = new RobotMoveActionResult()
    }

    if (msg.action_feedback !== undefined) {
      resolved.action_feedback = RobotMoveActionFeedback.Resolve(msg.action_feedback)
    }
    else {
      resolved.action_feedback = new RobotMoveActionFeedback()
    }

    return resolved;
    }
};

module.exports = RobotMoveAction;
