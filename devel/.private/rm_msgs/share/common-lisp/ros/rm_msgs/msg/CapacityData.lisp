; Auto-generated. Do not edit!


(cl:in-package rm_msgs-msg)


;//! \htmlinclude CapacityData.msg.html

(cl:defclass <CapacityData> (roslisp-msg-protocol:ros-message)
  ((chassis_power
    :reader chassis_power
    :initarg :chassis_power
    :type cl:fixnum
    :initform 0)
   (buffer_power
    :reader buffer_power
    :initarg :buffer_power
    :type cl:fixnum
    :initform 0)
   (limit_power
    :reader limit_power
    :initarg :limit_power
    :type cl:fixnum
    :initform 0)
   (cap_power
    :reader cap_power
    :initarg :cap_power
    :type cl:float
    :initform 0.0)
   (is_online
    :reader is_online
    :initarg :is_online
    :type cl:boolean
    :initform cl:nil)
   (stamp
    :reader stamp
    :initarg :stamp
    :type cl:real
    :initform 0))
)

(cl:defclass CapacityData (<CapacityData>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <CapacityData>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'CapacityData)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name rm_msgs-msg:<CapacityData> is deprecated: use rm_msgs-msg:CapacityData instead.")))

(cl:ensure-generic-function 'chassis_power-val :lambda-list '(m))
(cl:defmethod chassis_power-val ((m <CapacityData>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader rm_msgs-msg:chassis_power-val is deprecated.  Use rm_msgs-msg:chassis_power instead.")
  (chassis_power m))

(cl:ensure-generic-function 'buffer_power-val :lambda-list '(m))
(cl:defmethod buffer_power-val ((m <CapacityData>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader rm_msgs-msg:buffer_power-val is deprecated.  Use rm_msgs-msg:buffer_power instead.")
  (buffer_power m))

(cl:ensure-generic-function 'limit_power-val :lambda-list '(m))
(cl:defmethod limit_power-val ((m <CapacityData>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader rm_msgs-msg:limit_power-val is deprecated.  Use rm_msgs-msg:limit_power instead.")
  (limit_power m))

(cl:ensure-generic-function 'cap_power-val :lambda-list '(m))
(cl:defmethod cap_power-val ((m <CapacityData>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader rm_msgs-msg:cap_power-val is deprecated.  Use rm_msgs-msg:cap_power instead.")
  (cap_power m))

(cl:ensure-generic-function 'is_online-val :lambda-list '(m))
(cl:defmethod is_online-val ((m <CapacityData>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader rm_msgs-msg:is_online-val is deprecated.  Use rm_msgs-msg:is_online instead.")
  (is_online m))

(cl:ensure-generic-function 'stamp-val :lambda-list '(m))
(cl:defmethod stamp-val ((m <CapacityData>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader rm_msgs-msg:stamp-val is deprecated.  Use rm_msgs-msg:stamp instead.")
  (stamp m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <CapacityData>) ostream)
  "Serializes a message object of type '<CapacityData>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'chassis_power)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'buffer_power)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'limit_power)) ostream)
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'cap_power))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'is_online) 1 0)) ostream)
  (cl:let ((__sec (cl:floor (cl:slot-value msg 'stamp)))
        (__nsec (cl:round (cl:* 1e9 (cl:- (cl:slot-value msg 'stamp) (cl:floor (cl:slot-value msg 'stamp)))))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __sec) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __sec) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __sec) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __sec) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 0) __nsec) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __nsec) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __nsec) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __nsec) ostream))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <CapacityData>) istream)
  "Deserializes a message object of type '<CapacityData>"
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'chassis_power)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'buffer_power)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'limit_power)) (cl:read-byte istream))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'cap_power) (roslisp-utils:decode-single-float-bits bits)))
    (cl:setf (cl:slot-value msg 'is_online) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:let ((__sec 0) (__nsec 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __sec) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __sec) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __sec) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __sec) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 0) __nsec) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __nsec) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __nsec) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __nsec) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'stamp) (cl:+ (cl:coerce __sec 'cl:double-float) (cl:/ __nsec 1e9))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<CapacityData>)))
  "Returns string type for a message object of type '<CapacityData>"
  "rm_msgs/CapacityData")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'CapacityData)))
  "Returns string type for a message object of type 'CapacityData"
  "rm_msgs/CapacityData")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<CapacityData>)))
  "Returns md5sum for a message object of type '<CapacityData>"
  "c2ee01400115ac8523ac26598ec5c41b")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'CapacityData)))
  "Returns md5sum for a message object of type 'CapacityData"
  "c2ee01400115ac8523ac26598ec5c41b")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<CapacityData>)))
  "Returns full string definition for message of type '<CapacityData>"
  (cl:format cl:nil "uint8 chassis_power~%uint8 buffer_power~%uint8 limit_power~%float32 cap_power~%bool is_online~%~%time stamp~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'CapacityData)))
  "Returns full string definition for message of type 'CapacityData"
  (cl:format cl:nil "uint8 chassis_power~%uint8 buffer_power~%uint8 limit_power~%float32 cap_power~%bool is_online~%~%time stamp~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <CapacityData>))
  (cl:+ 0
     1
     1
     1
     4
     1
     8
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <CapacityData>))
  "Converts a ROS message object to a list"
  (cl:list 'CapacityData
    (cl:cons ':chassis_power (chassis_power msg))
    (cl:cons ':buffer_power (buffer_power msg))
    (cl:cons ':limit_power (limit_power msg))
    (cl:cons ':cap_power (cap_power msg))
    (cl:cons ':is_online (is_online msg))
    (cl:cons ':stamp (stamp msg))
))
