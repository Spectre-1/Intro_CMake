# Set CMAKE Version, Define Project
cmake_minimum_required(VERSION 3.1...3.21)

# Set the project name and version
project(Hello_Headers VERSION 1.0)

# Set C++ standard to C++17
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_CXX_EXTENSIONS OFF)

# source variable with link to all cpp files to compile
set(SOURCES
    Src/Hello.cpp
    Src/main.cpp
    )

# add executable
# First Agrument is the name of the executable
# Second Argument is the source files
# Which we set at Set(SOURCES)
add_executable(Hello_Headers ${SOURCES})

target_include_directories(Hello_Headers 
    PRIVATE
    ${PROJECT_SOURCE_DIR}/Include
    )