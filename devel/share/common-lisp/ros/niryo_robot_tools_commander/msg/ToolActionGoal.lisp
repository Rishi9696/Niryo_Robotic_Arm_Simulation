; Auto-generated. Do not edit!


(cl:in-package niryo_robot_tools_commander-msg)


;//! \htmlinclude ToolActionGoal.msg.html

(cl:defclass <ToolActionGoal> (roslisp-msg-protocol:ros-message)
  ((header
    :reader header
    :initarg :header
    :type std_msgs-msg:Header
    :initform (cl:make-instance 'std_msgs-msg:Header))
   (goal_id
    :reader goal_id
    :initarg :goal_id
    :type actionlib_msgs-msg:GoalID
    :initform (cl:make-instance 'actionlib_msgs-msg:GoalID))
   (goal
    :reader goal
    :initarg :goal
    :type niryo_robot_tools_commander-msg:ToolGoal
    :initform (cl:make-instance 'niryo_robot_tools_commander-msg:ToolGoal)))
)

(cl:defclass ToolActionGoal (<ToolActionGoal>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <ToolActionGoal>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'ToolActionGoal)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name niryo_robot_tools_commander-msg:<ToolActionGoal> is deprecated: use niryo_robot_tools_commander-msg:ToolActionGoal instead.")))

(cl:ensure-generic-function 'header-val :lambda-list '(m))
(cl:defmethod header-val ((m <ToolActionGoal>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader niryo_robot_tools_commander-msg:header-val is deprecated.  Use niryo_robot_tools_commander-msg:header instead.")
  (header m))

(cl:ensure-generic-function 'goal_id-val :lambda-list '(m))
(cl:defmethod goal_id-val ((m <ToolActionGoal>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader niryo_robot_tools_commander-msg:goal_id-val is deprecated.  Use niryo_robot_tools_commander-msg:goal_id instead.")
  (goal_id m))

(cl:ensure-generic-function 'goal-val :lambda-list '(m))
(cl:defmethod goal-val ((m <ToolActionGoal>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader niryo_robot_tools_commander-msg:goal-val is deprecated.  Use niryo_robot_tools_commander-msg:goal instead.")
  (goal m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <ToolActionGoal>) ostream)
  "Serializes a message object of type '<ToolActionGoal>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'header) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'goal_id) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'goal) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <ToolActionGoal>) istream)
  "Deserializes a message object of type '<ToolActionGoal>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'header) istream)
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'goal_id) istream)
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'goal) istream)
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<ToolActionGoal>)))
  "Returns string type for a message object of type '<ToolActionGoal>"
  "niryo_robot_tools_commander/ToolActionGoal")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'ToolActionGoal)))
  "Returns string type for a message object of type 'ToolActionGoal"
  "niryo_robot_tools_commander/ToolActionGoal")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<ToolActionGoal>)))
  "Returns md5sum for a message object of type '<ToolActionGoal>"
  "36ec4154609382148015c53b13318a6c")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'ToolActionGoal)))
  "Returns md5sum for a message object of type 'ToolActionGoal"
  "36ec4154609382148015c53b13318a6c")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<ToolActionGoal>)))
  "Returns full string definition for message of type '<ToolActionGoal>"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%~%Header header~%actionlib_msgs/GoalID goal_id~%ToolGoal goal~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%string frame_id~%~%================================================================================~%MSG: actionlib_msgs/GoalID~%# The stamp should store the time at which this goal was requested.~%# It is used by an action server when it tries to preempt all~%# goals that were requested before a certain time~%time stamp~%~%# The id provides a way to associate feedback and~%# result message with specific goal requests. The id~%# specified must be unique.~%string id~%~%~%================================================================================~%MSG: niryo_robot_tools_commander/ToolGoal~%# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%# goal~%niryo_robot_tools_commander/ToolCommand cmd~%~%================================================================================~%MSG: niryo_robot_tools_commander/ToolCommand~%# Gripper~%int8 OPEN_GRIPPER = 1~%int8 CLOSE_GRIPPER = 2~%~%# Vacuump pump~%int8 PULL_AIR_VACUUM_PUMP = 10~%int8 PUSH_AIR_VACUUM_PUMP = 11~%~%# Tools controlled by digital I/Os~%int8 SETUP_DIGITAL_IO = 20~%int8 ACTIVATE_DIGITAL_IO = 21~%int8 DEACTIVATE_DIGITAL_IO = 22~%~%uint8 cmd_type~%~%# Gripper1= 11, Gripper2=12, Gripper3=13, VaccuumPump=31, Electromagnet=30~%int8 tool_id~%~%# if gripper Ned1/One~%uint16 speed~%~%# if gripper Ned2~%uint8 max_torque_percentage~%uint8 hold_torque_percentage~%~%# if vacuum pump or electromagnet grove~%bool activate~%~%# if tool is set by digital outputs (electromagnet)~%string gpio~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'ToolActionGoal)))
  "Returns full string definition for message of type 'ToolActionGoal"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%~%Header header~%actionlib_msgs/GoalID goal_id~%ToolGoal goal~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%string frame_id~%~%================================================================================~%MSG: actionlib_msgs/GoalID~%# The stamp should store the time at which this goal was requested.~%# It is used by an action server when it tries to preempt all~%# goals that were requested before a certain time~%time stamp~%~%# The id provides a way to associate feedback and~%# result message with specific goal requests. The id~%# specified must be unique.~%string id~%~%~%================================================================================~%MSG: niryo_robot_tools_commander/ToolGoal~%# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%# goal~%niryo_robot_tools_commander/ToolCommand cmd~%~%================================================================================~%MSG: niryo_robot_tools_commander/ToolCommand~%# Gripper~%int8 OPEN_GRIPPER = 1~%int8 CLOSE_GRIPPER = 2~%~%# Vacuump pump~%int8 PULL_AIR_VACUUM_PUMP = 10~%int8 PUSH_AIR_VACUUM_PUMP = 11~%~%# Tools controlled by digital I/Os~%int8 SETUP_DIGITAL_IO = 20~%int8 ACTIVATE_DIGITAL_IO = 21~%int8 DEACTIVATE_DIGITAL_IO = 22~%~%uint8 cmd_type~%~%# Gripper1= 11, Gripper2=12, Gripper3=13, VaccuumPump=31, Electromagnet=30~%int8 tool_id~%~%# if gripper Ned1/One~%uint16 speed~%~%# if gripper Ned2~%uint8 max_torque_percentage~%uint8 hold_torque_percentage~%~%# if vacuum pump or electromagnet grove~%bool activate~%~%# if tool is set by digital outputs (electromagnet)~%string gpio~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <ToolActionGoal>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'header))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'goal_id))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'goal))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <ToolActionGoal>))
  "Converts a ROS message object to a list"
  (cl:list 'ToolActionGoal
    (cl:cons ':header (header msg))
    (cl:cons ':goal_id (goal_id msg))
    (cl:cons ':goal (goal msg))
))
