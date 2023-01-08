# CMake generated Testfile for 
# Source directory: /home/youngmoney/rm/hero/src/control_toolbox-melodic-devel
# Build directory: /home/youngmoney/rm/hero/build/control_toolbox
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(_ctest_control_toolbox_gtest_pid_tests "/home/youngmoney/rm/hero/build/control_toolbox/catkin_generated/env_cached.sh" "/usr/bin/python3" "/opt/ros/noetic/share/catkin/cmake/test/run_tests.py" "/home/youngmoney/rm/hero/build/control_toolbox/test_results/control_toolbox/gtest-pid_tests.xml" "--return-code" "/home/youngmoney/rm/hero/devel/.private/control_toolbox/lib/control_toolbox/pid_tests --gtest_output=xml:/home/youngmoney/rm/hero/build/control_toolbox/test_results/control_toolbox/gtest-pid_tests.xml")
set_tests_properties(_ctest_control_toolbox_gtest_pid_tests PROPERTIES  _BACKTRACE_TRIPLES "/opt/ros/noetic/share/catkin/cmake/test/tests.cmake;160;add_test;/opt/ros/noetic/share/catkin/cmake/test/gtest.cmake;98;catkin_run_tests_target;/opt/ros/noetic/share/catkin/cmake/test/gtest.cmake;37;_catkin_add_google_test;/home/youngmoney/rm/hero/src/control_toolbox-melodic-devel/CMakeLists.txt;68;catkin_add_gtest;/home/youngmoney/rm/hero/src/control_toolbox-melodic-devel/CMakeLists.txt;0;")
subdirs("gtest")
