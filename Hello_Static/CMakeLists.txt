# Set CMAKE Version, Define Project
cmake_minimum_required(VERSION 3.1...3.21)

# Set the project name and version
project(Hello_library VERSION 1.0)

# Set C++ standard to C++17
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_CXX_EXTENSIONS OFF)

# Add library
add_library(Hello_library 
    STATIC 
    Src/Hello.cpp
    )

target_include_directories(Hello_library 
    PUBLIC
    ${PROJECT_SOURCE_DIR}/include
    )


# Add executable
# First Agrument is the name of the executable
# Second Argument is the source files
# Which we set at Set(SOURCES)
add_executable(Hello_binary 
    Src/main.cpp
    )

target_link_libraries(Hello_binary
    PRIVATE
    Hello_library
    )