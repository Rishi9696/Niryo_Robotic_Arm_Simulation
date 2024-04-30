;; Auto-generated. Do not edit!


(when (boundp 'niryo_robot_rpi::WifiButtonStatus)
  (if (not (find-package "NIRYO_ROBOT_RPI"))
    (make-package "NIRYO_ROBOT_RPI"))
  (shadow 'WifiButtonStatus (find-package "NIRYO_ROBOT_RPI")))
(unless (find-package "NIRYO_ROBOT_RPI::WIFIBUTTONSTATUS")
  (make-package "NIRYO_ROBOT_RPI::WIFIBUTTONSTATUS"))

(in-package "ROS")
;;//! \htmlinclude WifiButtonStatus.msg.html


(intern "*SHORT_PRESS*" (find-package "NIRYO_ROBOT_RPI::WIFIBUTTONSTATUS"))
(shadow '*SHORT_PRESS* (find-package "NIRYO_ROBOT_RPI::WIFIBUTTONSTATUS"))
(defconstant niryo_robot_rpi::WifiButtonStatus::*SHORT_PRESS* 1)
(intern "*LONG_PRESS*" (find-package "NIRYO_ROBOT_RPI::WIFIBUTTONSTATUS"))
(shadow '*LONG_PRESS* (find-package "NIRYO_ROBOT_RPI::WIFIBUTTONSTATUS"))
(defconstant niryo_robot_rpi::WifiButtonStatus::*LONG_PRESS* 2)
(intern "*VERY_LONG_PRESS*" (find-package "NIRYO_ROBOT_RPI::WIFIBUTTONSTATUS"))
(shadow '*VERY_LONG_PRESS* (find-package "NIRYO_ROBOT_RPI::WIFIBUTTONSTATUS"))
(defconstant niryo_robot_rpi::WifiButtonStatus::*VERY_LONG_PRESS* 3)
(intern "*IGNORE_PRESS*" (find-package "NIRYO_ROBOT_RPI::WIFIBUTTONSTATUS"))
(shadow '*IGNORE_PRESS* (find-package "NIRYO_ROBOT_RPI::WIFIBUTTONSTATUS"))
(defconstant niryo_robot_rpi::WifiButtonStatus::*IGNORE_PRESS* 4)
(intern "*PRESSED*" (find-package "NIRYO_ROBOT_RPI::WIFIBUTTONSTATUS"))
(shadow '*PRESSED* (find-package "NIRYO_ROBOT_RPI::WIFIBUTTONSTATUS"))
(defconstant niryo_robot_rpi::WifiButtonStatus::*PRESSED* 0)
(intern "*RELEASED*" (find-package "NIRYO_ROBOT_RPI::WIFIBUTTONSTATUS"))
(shadow '*RELEASED* (find-package "NIRYO_ROBOT_RPI::WIFIBUTTONSTATUS"))
(defconstant niryo_robot_rpi::WifiButtonStatus::*RELEASED* 1)
(defclass niryo_robot_rpi::WifiButtonStatus
  :super ros::object
  :slots (_mode _state ))

(defmethod niryo_robot_rpi::WifiButtonStatus
  (:init
   (&key
    ((:mode __mode) 0)
    ((:state __state) 0)
    )
   (send-super :init)
   (setq _mode (round __mode))
   (setq _state (round __state))
   self)
  (:mode
   (&optional __mode)
   (if __mode (setq _mode __mode)) _mode)
  (:state
   (&optional __state)
   (if __state (setq _state __state)) _state)
  (:serialization-length
   ()
   (+
    ;; int8 _mode
    1
    ;; int8 _state
    1
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; int8 _mode
       (write-byte _mode s)
     ;; int8 _state
       (write-byte _state s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; int8 _mode
     (setq _mode (sys::peek buf ptr- :char)) (incf ptr- 1)
     (if (> _mode 127) (setq _mode (- _mode 256)))
   ;; int8 _state
     (setq _state (sys::peek buf ptr- :char)) (incf ptr- 1)
     (if (> _state 127) (setq _state (- _state 256)))
   ;;
   self)
  )

(setf (get niryo_robot_rpi::WifiButtonStatus :md5sum-) "b0e70f855953624e078a0ffee0bd4e2c")
(setf (get niryo_robot_rpi::WifiButtonStatus :datatype-) "niryo_robot_rpi/WifiButtonStatus")
(setf (get niryo_robot_rpi::WifiButtonStatus :definition-)
      "int8 SHORT_PRESS = 1
int8 LONG_PRESS = 2
int8 VERY_LONG_PRESS = 3
int8 IGNORE_PRESS = 4
int8 mode

int8 PRESSED = 0
int8 RELEASED = 1
int8 state

")



(provide :niryo_robot_rpi/WifiButtonStatus "b0e70f855953624e078a0ffee0bd4e2c")


