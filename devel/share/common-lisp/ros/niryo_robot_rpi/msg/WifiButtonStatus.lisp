; Auto-generated. Do not edit!


(cl:in-package niryo_robot_rpi-msg)


;//! \htmlinclude WifiButtonStatus.msg.html

(cl:defclass <WifiButtonStatus> (roslisp-msg-protocol:ros-message)
  ((mode
    :reader mode
    :initarg :mode
    :type cl:fixnum
    :initform 0)
   (state
    :reader state
    :initarg :state
    :type cl:fixnum
    :initform 0))
)

(cl:defclass WifiButtonStatus (<WifiButtonStatus>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <WifiButtonStatus>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'WifiButtonStatus)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name niryo_robot_rpi-msg:<WifiButtonStatus> is deprecated: use niryo_robot_rpi-msg:WifiButtonStatus instead.")))

(cl:ensure-generic-function 'mode-val :lambda-list '(m))
(cl:defmethod mode-val ((m <WifiButtonStatus>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader niryo_robot_rpi-msg:mode-val is deprecated.  Use niryo_robot_rpi-msg:mode instead.")
  (mode m))

(cl:ensure-generic-function 'state-val :lambda-list '(m))
(cl:defmethod state-val ((m <WifiButtonStatus>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader niryo_robot_rpi-msg:state-val is deprecated.  Use niryo_robot_rpi-msg:state instead.")
  (state m))
(cl:defmethod roslisp-msg-protocol:symbol-codes ((msg-type (cl:eql '<WifiButtonStatus>)))
    "Constants for message type '<WifiButtonStatus>"
  '((:SHORT_PRESS . 1)
    (:LONG_PRESS . 2)
    (:VERY_LONG_PRESS . 3)
    (:IGNORE_PRESS . 4)
    (:PRESSED . 0)
    (:RELEASED . 1))
)
(cl:defmethod roslisp-msg-protocol:symbol-codes ((msg-type (cl:eql 'WifiButtonStatus)))
    "Constants for message type 'WifiButtonStatus"
  '((:SHORT_PRESS . 1)
    (:LONG_PRESS . 2)
    (:VERY_LONG_PRESS . 3)
    (:IGNORE_PRESS . 4)
    (:PRESSED . 0)
    (:RELEASED . 1))
)
(cl:defmethod roslisp-msg-protocol:serialize ((msg <WifiButtonStatus>) ostream)
  "Serializes a message object of type '<WifiButtonStatus>"
  (cl:let* ((signed (cl:slot-value msg 'mode)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 256) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    )
  (cl:let* ((signed (cl:slot-value msg 'state)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 256) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    )
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <WifiButtonStatus>) istream)
  "Deserializes a message object of type '<WifiButtonStatus>"
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'mode) (cl:if (cl:< unsigned 128) unsigned (cl:- unsigned 256))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'state) (cl:if (cl:< unsigned 128) unsigned (cl:- unsigned 256))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<WifiButtonStatus>)))
  "Returns string type for a message object of type '<WifiButtonStatus>"
  "niryo_robot_rpi/WifiButtonStatus")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'WifiButtonStatus)))
  "Returns string type for a message object of type 'WifiButtonStatus"
  "niryo_robot_rpi/WifiButtonStatus")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<WifiButtonStatus>)))
  "Returns md5sum for a message object of type '<WifiButtonStatus>"
  "b0e70f855953624e078a0ffee0bd4e2c")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'WifiButtonStatus)))
  "Returns md5sum for a message object of type 'WifiButtonStatus"
  "b0e70f855953624e078a0ffee0bd4e2c")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<WifiButtonStatus>)))
  "Returns full string definition for message of type '<WifiButtonStatus>"
  (cl:format cl:nil "int8 SHORT_PRESS = 1~%int8 LONG_PRESS = 2~%int8 VERY_LONG_PRESS = 3~%int8 IGNORE_PRESS = 4~%int8 mode~%~%int8 PRESSED = 0~%int8 RELEASED = 1~%int8 state~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'WifiButtonStatus)))
  "Returns full string definition for message of type 'WifiButtonStatus"
  (cl:format cl:nil "int8 SHORT_PRESS = 1~%int8 LONG_PRESS = 2~%int8 VERY_LONG_PRESS = 3~%int8 IGNORE_PRESS = 4~%int8 mode~%~%int8 PRESSED = 0~%int8 RELEASED = 1~%int8 state~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <WifiButtonStatus>))
  (cl:+ 0
     1
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <WifiButtonStatus>))
  "Converts a ROS message object to a list"
  (cl:list 'WifiButtonStatus
    (cl:cons ':mode (mode msg))
    (cl:cons ':state (state msg))
))
