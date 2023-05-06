# CMake generated Testfile for 
# Source directory: /Users/spectre/Desktop/Intro_CMake-CTest/CTest+GTest/Tests
# Build directory: /Users/spectre/Desktop/Intro_CMake-CTest/CTest+GTest/build/Tests
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test([=[multiply_gtests]=] "multiply_test")
set_tests_properties([=[multiply_gtests]=] PROPERTIES  _BACKTRACE_TRIPLES "/Users/spectre/Desktop/Intro_CMake-CTest/CTest+GTest/Tests/CMakeLists.txt;20;add_test;/Users/spectre/Desktop/Intro_CMake-CTest/CTest+GTest/Tests/CMakeLists.txt;0;")
subdirs("../_deps/googletest-build")
