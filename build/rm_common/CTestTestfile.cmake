# CMake generated Testfile for 
# Source directory: /home/youngmoney/rm/hero/src/rm_common
# Build directory: /home/youngmoney/rm/hero/build/rm_common
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(_ctest_rm_common_gtest_lqr_test "/home/youngmoney/rm/hero/build/rm_common/catkin_generated/env_cached.sh" "/usr/bin/python3" "/opt/ros/noetic/share/catkin/cmake/test/run_tests.py" "/home/youngmoney/rm/hero/build/rm_common/test_results/rm_common/gtest-lqr_test.xml" "--return-code" "/home/youngmoney/rm/hero/devel/.private/rm_common/lib/rm_common/lqr_test --gtest_output=xml:/home/youngmoney/rm/hero/build/rm_common/test_results/rm_common/gtest-lqr_test.xml")
set_tests_properties(_ctest_rm_common_gtest_lqr_test PROPERTIES  _BACKTRACE_TRIPLES "/opt/ros/noetic/share/catkin/cmake/test/tests.cmake;160;add_test;/opt/ros/noetic/share/catkin/cmake/test/gtest.cmake;98;catkin_run_tests_target;/opt/ros/noetic/share/catkin/cmake/test/gtest.cmake;37;_catkin_add_google_test;/home/youngmoney/rm/hero/src/rm_common/CMakeLists.txt;100;catkin_add_gtest;/home/youngmoney/rm/hero/src/rm_common/CMakeLists.txt;0;")
subdirs("gtest")
