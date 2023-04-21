# Set CMAKE Version, Define Project
cmake_minimum_required(VERSION 3.1...3.21)

# Set the project name and version
project(MultiplyTest VERSION 1.0)

# Include the CTest module
include(CTest)

# Set C++ standard to C++17
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_CXX_EXTENSIONS OFF)

# Enable testing
enable_testing()

# Add subdirectories
add_subdirectory(Src)
add_subdirectory(Test)


