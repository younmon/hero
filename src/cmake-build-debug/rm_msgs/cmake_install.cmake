# Install script for directory: /home/youngmoney/rm/work4.0/src/rm_msgs

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Debug")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rm_msgs/msg" TYPE FILE FILES
    "/home/youngmoney/rm/work4.0/src/rm_msgs/msg/ActuatorState.msg"
    "/home/youngmoney/rm/work4.0/src/rm_msgs/msg/BalanceState.msg"
    "/home/youngmoney/rm/work4.0/src/rm_msgs/msg/DbusData.msg"
    "/home/youngmoney/rm/work4.0/src/rm_msgs/msg/ChassisCmd.msg"
    "/home/youngmoney/rm/work4.0/src/rm_msgs/msg/ShootCmd.msg"
    "/home/youngmoney/rm/work4.0/src/rm_msgs/msg/GimbalCmd.msg"
    "/home/youngmoney/rm/work4.0/src/rm_msgs/msg/GimbalDesError.msg"
    "/home/youngmoney/rm/work4.0/src/rm_msgs/msg/LpData.msg"
    "/home/youngmoney/rm/work4.0/src/rm_msgs/msg/KalmanData.msg"
    "/home/youngmoney/rm/work4.0/src/rm_msgs/msg/MovingAverageData.msg"
    "/home/youngmoney/rm/work4.0/src/rm_msgs/msg/SuperCapacitor.msg"
    "/home/youngmoney/rm/work4.0/src/rm_msgs/msg/GpioData.msg"
    "/home/youngmoney/rm/work4.0/src/rm_msgs/msg/TofRadarData.msg"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rm_msgs/srv" TYPE FILE FILES
    "/home/youngmoney/rm/work4.0/src/rm_msgs/srv/ContinousDetectorSwitch.srv"
    "/home/youngmoney/rm/work4.0/src/rm_msgs/srv/StatusChange.srv"
    "/home/youngmoney/rm/work4.0/src/rm_msgs/srv/CameraStatus.srv"
    "/home/youngmoney/rm/work4.0/src/rm_msgs/srv/EnableImuTrigger.srv"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rm_msgs/msg/detection" TYPE FILE FILES
    "/home/youngmoney/rm/work4.0/src/rm_msgs/msg/detection/TargetDetection.msg"
    "/home/youngmoney/rm/work4.0/src/rm_msgs/msg/detection/TargetDetectionArray.msg"
    "/home/youngmoney/rm/work4.0/src/rm_msgs/msg/detection/TrackData.msg"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rm_msgs/msg/referee" TYPE FILE FILES
    "/home/youngmoney/rm/work4.0/src/rm_msgs/msg/referee/CapacityData.msg"
    "/home/youngmoney/rm/work4.0/src/rm_msgs/msg/referee/GameRobotStatus.msg"
    "/home/youngmoney/rm/work4.0/src/rm_msgs/msg/referee/GameStatus.msg"
    "/home/youngmoney/rm/work4.0/src/rm_msgs/msg/referee/StateCmd.msg"
    "/home/youngmoney/rm/work4.0/src/rm_msgs/msg/referee/EngineerCmd.msg"
    "/home/youngmoney/rm/work4.0/src/rm_msgs/msg/referee/GameRobotHp.msg"
    "/home/youngmoney/rm/work4.0/src/rm_msgs/msg/referee/PowerHeatData.msg"
    "/home/youngmoney/rm/work4.0/src/rm_msgs/msg/referee/EventData.msg"
    "/home/youngmoney/rm/work4.0/src/rm_msgs/msg/referee/DartStatus.msg"
    "/home/youngmoney/rm/work4.0/src/rm_msgs/msg/referee/IcraBuffDebuffZoneStatus.msg"
    "/home/youngmoney/rm/work4.0/src/rm_msgs/msg/referee/SupplyProjectileAction.msg"
    "/home/youngmoney/rm/work4.0/src/rm_msgs/msg/referee/DartRemainingTime.msg"
    "/home/youngmoney/rm/work4.0/src/rm_msgs/msg/referee/RobotHurt.msg"
    "/home/youngmoney/rm/work4.0/src/rm_msgs/msg/referee/ShootData.msg"
    "/home/youngmoney/rm/work4.0/src/rm_msgs/msg/referee/BulletRemaining.msg"
    "/home/youngmoney/rm/work4.0/src/rm_msgs/msg/referee/RfidStatus.msg"
    "/home/youngmoney/rm/work4.0/src/rm_msgs/msg/referee/DartClientCmd.msg"
    "/home/youngmoney/rm/work4.0/src/rm_msgs/msg/referee/ManualToReferee.msg"
    "/home/youngmoney/rm/work4.0/src/rm_msgs/msg/referee/RadarData.msg"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rm_msgs/action" TYPE FILE FILES "/home/youngmoney/rm/work4.0/src/rm_msgs/action/Engineer.action")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rm_msgs/msg" TYPE FILE FILES
    "/home/youngmoney/rm/work4.0/src/cmake-build-debug/devel/share/rm_msgs/msg/EngineerAction.msg"
    "/home/youngmoney/rm/work4.0/src/cmake-build-debug/devel/share/rm_msgs/msg/EngineerActionGoal.msg"
    "/home/youngmoney/rm/work4.0/src/cmake-build-debug/devel/share/rm_msgs/msg/EngineerActionResult.msg"
    "/home/youngmoney/rm/work4.0/src/cmake-build-debug/devel/share/rm_msgs/msg/EngineerActionFeedback.msg"
    "/home/youngmoney/rm/work4.0/src/cmake-build-debug/devel/share/rm_msgs/msg/EngineerGoal.msg"
    "/home/youngmoney/rm/work4.0/src/cmake-build-debug/devel/share/rm_msgs/msg/EngineerResult.msg"
    "/home/youngmoney/rm/work4.0/src/cmake-build-debug/devel/share/rm_msgs/msg/EngineerFeedback.msg"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rm_msgs/cmake" TYPE FILE FILES "/home/youngmoney/rm/work4.0/src/cmake-build-debug/rm_msgs/catkin_generated/installspace/rm_msgs-msg-paths.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES "/home/youngmoney/rm/work4.0/src/cmake-build-debug/devel/include/rm_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roseus/ros" TYPE DIRECTORY FILES "/home/youngmoney/rm/work4.0/src/cmake-build-debug/devel/share/roseus/ros/rm_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/common-lisp/ros" TYPE DIRECTORY FILES "/home/youngmoney/rm/work4.0/src/cmake-build-debug/devel/share/common-lisp/ros/rm_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/gennodejs/ros" TYPE DIRECTORY FILES "/home/youngmoney/rm/work4.0/src/cmake-build-debug/devel/share/gennodejs/ros/rm_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND "/usr/bin/python3" -m compileall "/home/youngmoney/rm/work4.0/src/cmake-build-debug/devel/lib/python3/dist-packages/rm_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3/dist-packages" TYPE DIRECTORY FILES "/home/youngmoney/rm/work4.0/src/cmake-build-debug/devel/lib/python3/dist-packages/rm_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/youngmoney/rm/work4.0/src/cmake-build-debug/rm_msgs/catkin_generated/installspace/rm_msgs.pc")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rm_msgs/cmake" TYPE FILE FILES "/home/youngmoney/rm/work4.0/src/cmake-build-debug/rm_msgs/catkin_generated/installspace/rm_msgs-msg-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rm_msgs/cmake" TYPE FILE FILES
    "/home/youngmoney/rm/work4.0/src/cmake-build-debug/rm_msgs/catkin_generated/installspace/rm_msgsConfig.cmake"
    "/home/youngmoney/rm/work4.0/src/cmake-build-debug/rm_msgs/catkin_generated/installspace/rm_msgsConfig-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rm_msgs" TYPE FILE FILES "/home/youngmoney/rm/work4.0/src/rm_msgs/package.xml")
endif()

