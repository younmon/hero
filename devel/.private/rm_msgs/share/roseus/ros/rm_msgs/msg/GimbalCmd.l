;; Auto-generated. Do not edit!


(when (boundp 'rm_msgs::GimbalCmd)
  (if (not (find-package "RM_MSGS"))
    (make-package "RM_MSGS"))
  (shadow 'GimbalCmd (find-package "RM_MSGS")))
(unless (find-package "RM_MSGS::GIMBALCMD")
  (make-package "RM_MSGS::GIMBALCMD"))

(in-package "ROS")
;;//! \htmlinclude GimbalCmd.msg.html
(if (not (find-package "GEOMETRY_MSGS"))
  (ros::roseus-add-msgs "geometry_msgs"))


(intern "*RATE*" (find-package "RM_MSGS::GIMBALCMD"))
(shadow '*RATE* (find-package "RM_MSGS::GIMBALCMD"))
(defconstant rm_msgs::GimbalCmd::*RATE* 0)
(intern "*TRACK*" (find-package "RM_MSGS::GIMBALCMD"))
(shadow '*TRACK* (find-package "RM_MSGS::GIMBALCMD"))
(defconstant rm_msgs::GimbalCmd::*TRACK* 1)
(intern "*DIRECT*" (find-package "RM_MSGS::GIMBALCMD"))
(shadow '*DIRECT* (find-package "RM_MSGS::GIMBALCMD"))
(defconstant rm_msgs::GimbalCmd::*DIRECT* 2)

(defun rm_msgs::GimbalCmd-to-symbol (const)
  (cond
        ((= const 0) 'rm_msgs::GimbalCmd::*RATE*)
        ((= const 1) 'rm_msgs::GimbalCmd::*TRACK*)
        ((= const 2) 'rm_msgs::GimbalCmd::*DIRECT*)
        (t nil)))

(defclass rm_msgs::GimbalCmd
  :super ros::object
  :slots (_stamp _mode _rate_yaw _rate_pitch _bullet_speed _target_pos ))

(defmethod rm_msgs::GimbalCmd
  (:init
   (&key
    ((:stamp __stamp) (instance ros::time :init))
    ((:mode __mode) 0)
    ((:rate_yaw __rate_yaw) 0.0)
    ((:rate_pitch __rate_pitch) 0.0)
    ((:bullet_speed __bullet_speed) 0.0)
    ((:target_pos __target_pos) (instance geometry_msgs::PointStamped :init))
    )
   (send-super :init)
   (setq _stamp __stamp)
   (setq _mode (round __mode))
   (setq _rate_yaw (float __rate_yaw))
   (setq _rate_pitch (float __rate_pitch))
   (setq _bullet_speed (float __bullet_speed))
   (setq _target_pos __target_pos)
   self)
  (:stamp
   (&optional __stamp)
   (if __stamp (setq _stamp __stamp)) _stamp)
  (:mode
   (&optional __mode)
   (if __mode (setq _mode __mode)) _mode)
  (:rate_yaw
   (&optional __rate_yaw)
   (if __rate_yaw (setq _rate_yaw __rate_yaw)) _rate_yaw)
  (:rate_pitch
   (&optional __rate_pitch)
   (if __rate_pitch (setq _rate_pitch __rate_pitch)) _rate_pitch)
  (:bullet_speed
   (&optional __bullet_speed)
   (if __bullet_speed (setq _bullet_speed __bullet_speed)) _bullet_speed)
  (:target_pos
   (&rest __target_pos)
   (if (keywordp (car __target_pos))
       (send* _target_pos __target_pos)
     (progn
       (if __target_pos (setq _target_pos (car __target_pos)))
       _target_pos)))
  (:serialization-length
   ()
   (+
    ;; time _stamp
    8
    ;; uint8 _mode
    1
    ;; float64 _rate_yaw
    8
    ;; float64 _rate_pitch
    8
    ;; float64 _bullet_speed
    8
    ;; geometry_msgs/PointStamped _target_pos
    (send _target_pos :serialization-length)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; time _stamp
       (write-long (send _stamp :sec) s) (write-long (send _stamp :nsec) s)
     ;; uint8 _mode
       (write-byte _mode s)
     ;; float64 _rate_yaw
       (sys::poke _rate_yaw (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _rate_pitch
       (sys::poke _rate_pitch (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _bullet_speed
       (sys::poke _bullet_speed (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; geometry_msgs/PointStamped _target_pos
       (send _target_pos :serialize s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; time _stamp
     (send _stamp :sec (sys::peek buf ptr- :integer)) (incf ptr- 4)  (send _stamp :nsec (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;; uint8 _mode
     (setq _mode (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; float64 _rate_yaw
     (setq _rate_yaw (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _rate_pitch
     (setq _rate_pitch (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _bullet_speed
     (setq _bullet_speed (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; geometry_msgs/PointStamped _target_pos
     (send _target_pos :deserialize buf ptr-) (incf ptr- (send _target_pos :serialization-length))
   ;;
   self)
  )

(setf (get rm_msgs::GimbalCmd :md5sum-) "8bed4be5d11eafc7b7a7b054096b4208")
(setf (get rm_msgs::GimbalCmd :datatype-) "rm_msgs/GimbalCmd")
(setf (get rm_msgs::GimbalCmd :definition-)
      "uint8 RATE = 0
uint8 TRACK = 1
uint8 DIRECT = 2

time stamp
uint8 mode

# RATE
float64 rate_yaw
float64 rate_pitch

# TRACK/DIRECT
float64 bullet_speed
geometry_msgs/PointStamped target_pos

================================================================================
MSG: geometry_msgs/PointStamped
# This represents a Point with reference coordinate frame and timestamp
Header header
Point point

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
MSG: geometry_msgs/Point
# This contains the position of a point in free space
float64 x
float64 y
float64 z

")



(provide :rm_msgs/GimbalCmd "8bed4be5d11eafc7b7a7b054096b4208")


