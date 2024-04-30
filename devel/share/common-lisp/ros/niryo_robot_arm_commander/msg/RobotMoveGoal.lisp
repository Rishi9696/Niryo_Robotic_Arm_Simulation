; Auto-generated. Do not edit!


(cl:in-package niryo_robot_arm_commander-msg)


;//! \htmlinclude RobotMoveGoal.msg.html

(cl:defclass <RobotMoveGoal> (roslisp-msg-protocol:ros-message)
  ((cmd
    :reader cmd
    :initarg :cmd
    :type niryo_robot_arm_commander-msg:ArmMoveCommand
    :initform (cl:make-instance 'niryo_robot_arm_commander-msg:ArmMoveCommand)))
)

(cl:defclass RobotMoveGoal (<RobotMoveGoal>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <RobotMoveGoal>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'RobotMoveGoal)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name niryo_robot_arm_commander-msg:<RobotMoveGoal> is deprecated: use niryo_robot_arm_commander-msg:RobotMoveGoal instead.")))

(cl:ensure-generic-function 'cmd-val :lambda-list '(m))
(cl:defmethod cmd-val ((m <RobotMoveGoal>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader niryo_robot_arm_commander-msg:cmd-val is deprecated.  Use niryo_robot_arm_commander-msg:cmd instead.")
  (cmd m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <RobotMoveGoal>) ostream)
  "Serializes a message object of type '<RobotMoveGoal>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'cmd) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <RobotMoveGoal>) istream)
  "Deserializes a message object of type '<RobotMoveGoal>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'cmd) istream)
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<RobotMoveGoal>)))
  "Returns string type for a message object of type '<RobotMoveGoal>"
  "niryo_robot_arm_commander/RobotMoveGoal")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'RobotMoveGoal)))
  "Returns string type for a message object of type 'RobotMoveGoal"
  "niryo_robot_arm_commander/RobotMoveGoal")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<RobotMoveGoal>)))
  "Returns md5sum for a message object of type '<RobotMoveGoal>"
  "2d39b2971840f650e8ac87919a337d73")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'RobotMoveGoal)))
  "Returns md5sum for a message object of type 'RobotMoveGoal"
  "2d39b2971840f650e8ac87919a337d73")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<RobotMoveGoal>)))
  "Returns full string definition for message of type '<RobotMoveGoal>"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%# goal~%niryo_robot_arm_commander/ArmMoveCommand cmd~%~%================================================================================~%MSG: niryo_robot_arm_commander/ArmMoveCommand~%int32 JOINTS = 0            # uses joints ~%int32 POSE = 1              # uses position and rpy ~%int32 POSITION = 2          # uses position~%int32 RPY = 3               # uses rpy~%int32 POSE_QUAT = 4         # uses position and orientation~%int32 LINEAR_POSE = 5       # uses position and rpy~%int32 SHIFT_POSE = 6        # uses shift~%int32 SHIFT_LINEAR_POSE = 7 # uses shift~%int32 EXECUTE_TRAJ = 8      # uses dist_smoothing, list_poses~%int32 DRAW_SPIRAL = 9~%int32 DRAW_CIRCLE = 10~%int32 EXECUTE_FULL_TRAJ = 11~%int32 EXECUTE_RAW_TRAJ = 12~%~%int32 cmd_type~%~%float64[] joints~%geometry_msgs/Point position~%niryo_robot_msgs/RPY rpy~%geometry_msgs/Quaternion orientation~%niryo_robot_arm_commander/ShiftPose shift~%~%geometry_msgs/Pose[] list_poses~%float32 dist_smoothing~%~%trajectory_msgs/JointTrajectory trajectory~%~%float64[] args~%~%================================================================================~%MSG: geometry_msgs/Point~%# This contains the position of a point in free space~%float64 x~%float64 y~%float64 z~%~%================================================================================~%MSG: niryo_robot_msgs/RPY~%# roll, pitch and yaw~%~%float64 roll~%float64 pitch~%float64 yaw~%~%================================================================================~%MSG: geometry_msgs/Quaternion~%# This represents an orientation in free space in quaternion form.~%~%float64 x~%float64 y~%float64 z~%float64 w~%~%================================================================================~%MSG: niryo_robot_arm_commander/ShiftPose~%int32 axis_number~%float64 value~%~%================================================================================~%MSG: geometry_msgs/Pose~%# A representation of pose in free space, composed of position and orientation. ~%Point position~%Quaternion orientation~%~%================================================================================~%MSG: trajectory_msgs/JointTrajectory~%Header header~%string[] joint_names~%JointTrajectoryPoint[] points~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%string frame_id~%~%================================================================================~%MSG: trajectory_msgs/JointTrajectoryPoint~%# Each trajectory point specifies either positions[, velocities[, accelerations]]~%# or positions[, effort] for the trajectory to be executed.~%# All specified values are in the same order as the joint names in JointTrajectory.msg~%~%float64[] positions~%float64[] velocities~%float64[] accelerations~%float64[] effort~%duration time_from_start~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'RobotMoveGoal)))
  "Returns full string definition for message of type 'RobotMoveGoal"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%# goal~%niryo_robot_arm_commander/ArmMoveCommand cmd~%~%================================================================================~%MSG: niryo_robot_arm_commander/ArmMoveCommand~%int32 JOINTS = 0            # uses joints ~%int32 POSE = 1              # uses position and rpy ~%int32 POSITION = 2          # uses position~%int32 RPY = 3               # uses rpy~%int32 POSE_QUAT = 4         # uses position and orientation~%int32 LINEAR_POSE = 5       # uses position and rpy~%int32 SHIFT_POSE = 6        # uses shift~%int32 SHIFT_LINEAR_POSE = 7 # uses shift~%int32 EXECUTE_TRAJ = 8      # uses dist_smoothing, list_poses~%int32 DRAW_SPIRAL = 9~%int32 DRAW_CIRCLE = 10~%int32 EXECUTE_FULL_TRAJ = 11~%int32 EXECUTE_RAW_TRAJ = 12~%~%int32 cmd_type~%~%float64[] joints~%geometry_msgs/Point position~%niryo_robot_msgs/RPY rpy~%geometry_msgs/Quaternion orientation~%niryo_robot_arm_commander/ShiftPose shift~%~%geometry_msgs/Pose[] list_poses~%float32 dist_smoothing~%~%trajectory_msgs/JointTrajectory trajectory~%~%float64[] args~%~%================================================================================~%MSG: geometry_msgs/Point~%# This contains the position of a point in free space~%float64 x~%float64 y~%float64 z~%~%================================================================================~%MSG: niryo_robot_msgs/RPY~%# roll, pitch and yaw~%~%float64 roll~%float64 pitch~%float64 yaw~%~%================================================================================~%MSG: geometry_msgs/Quaternion~%# This represents an orientation in free space in quaternion form.~%~%float64 x~%float64 y~%float64 z~%float64 w~%~%================================================================================~%MSG: niryo_robot_arm_commander/ShiftPose~%int32 axis_number~%float64 value~%~%================================================================================~%MSG: geometry_msgs/Pose~%# A representation of pose in free space, composed of position and orientation. ~%Point position~%Quaternion orientation~%~%================================================================================~%MSG: trajectory_msgs/JointTrajectory~%Header header~%string[] joint_names~%JointTrajectoryPoint[] points~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%string frame_id~%~%================================================================================~%MSG: trajectory_msgs/JointTrajectoryPoint~%# Each trajectory point specifies either positions[, velocities[, accelerations]]~%# or positions[, effort] for the trajectory to be executed.~%# All specified values are in the same order as the joint names in JointTrajectory.msg~%~%float64[] positions~%float64[] velocities~%float64[] accelerations~%float64[] effort~%duration time_from_start~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <RobotMoveGoal>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'cmd))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <RobotMoveGoal>))
  "Converts a ROS message object to a list"
  (cl:list 'RobotMoveGoal
    (cl:cons ':cmd (cmd msg))
))