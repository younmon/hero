# CMake generated Testfile for 
# Source directory: /home/youngmoney/rm/hero/src/hero_chassis_controller
# Build directory: /home/youngmoney/rm/hero/build/hero_chassis_controller
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(_ctest_hero_chassis_controller_gtest_hero_chassis_controller-test "/home/youngmoney/rm/hero/build/hero_chassis_controller/catkin_generated/env_cached.sh" "/usr/bin/python3" "/opt/ros/noetic/share/catkin/cmake/test/run_tests.py" "/home/youngmoney/rm/hero/build/hero_chassis_controller/test_results/hero_chassis_controller/gtest-hero_chassis_controller-test.xml" "--return-code" "/home/youngmoney/rm/hero/devel/.private/hero_chassis_controller/lib/hero_chassis_controller/hero_chassis_controller-test --gtest_output=xml:/home/youngmoney/rm/hero/build/hero_chassis_controller/test_results/hero_chassis_controller/gtest-hero_chassis_controller-test.xml")
set_tests_properties(_ctest_hero_chassis_controller_gtest_hero_chassis_controller-test PROPERTIES  _BACKTRACE_TRIPLES "/opt/ros/noetic/share/catkin/cmake/test/tests.cmake;160;add_test;/opt/ros/noetic/share/catkin/cmake/test/gtest.cmake;98;catkin_run_tests_target;/opt/ros/noetic/share/catkin/cmake/test/gtest.cmake;37;_catkin_add_google_test;/home/youngmoney/rm/hero/src/hero_chassis_controller/CMakeLists.txt;131;catkin_add_gtest;/home/youngmoney/rm/hero/src/hero_chassis_controller/CMakeLists.txt;0;")
subdirs("gtest")
