# Set the minimum required version of CMake
cmake_minimum_required(VERSION 3.1)

# Set the project name and version
project(Hello_CTest VERSION 1.0)

# Set C++ standard to C++17
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_CXX_EXTENSIONS OFF)

# Find the GTest library
include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)

# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

# Enable testing
enable_testing()

# Add the executable
add_executable(
    Hello_CTest
    Multiply_Test.cpp
)
target_link_libraries(
    Hello_CTest
    GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(hello_test)