;; Auto-generated. Do not edit!


(when (boundp 'rm_msgs::EngineerGoal)
  (if (not (find-package "RM_MSGS"))
    (make-package "RM_MSGS"))
  (shadow 'EngineerGoal (find-package "RM_MSGS")))
(unless (find-package "RM_MSGS::ENGINEERGOAL")
  (make-package "RM_MSGS::ENGINEERGOAL"))

(in-package "ROS")
;;//! \htmlinclude EngineerGoal.msg.html


(defclass rm_msgs::EngineerGoal
  :super ros::object
  :slots (_step_queue_name ))

(defmethod rm_msgs::EngineerGoal
  (:init
   (&key
    ((:step_queue_name __step_queue_name) "")
    )
   (send-super :init)
   (setq _step_queue_name (string __step_queue_name))
   self)
  (:step_queue_name
   (&optional __step_queue_name)
   (if __step_queue_name (setq _step_queue_name __step_queue_name)) _step_queue_name)
  (:serialization-length
   ()
   (+
    ;; string _step_queue_name
    4 (length _step_queue_name)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; string _step_queue_name
       (write-long (length _step_queue_name) s) (princ _step_queue_name s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; string _step_queue_name
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _step_queue_name (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;;
   self)
  )

(setf (get rm_msgs::EngineerGoal :md5sum-) "e30ffeaaa0cfd516d274467b24b53a8a")
(setf (get rm_msgs::EngineerGoal :datatype-) "rm_msgs/EngineerGoal")
(setf (get rm_msgs::EngineerGoal :definition-)
      "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
# goal
string step_queue_name

")



(provide :rm_msgs/EngineerGoal "e30ffeaaa0cfd516d274467b24b53a8a")

