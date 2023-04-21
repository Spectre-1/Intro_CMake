# Set CMAKE Version, Define Project
cmake_minimum_required(VERSION 3.1...3.21)

# Set the project name and version
project(RendererManagerTest VERSION 1.0)

# Include the CTest module
include(CTest)

# Enable testing
enable_testing()

# Define a test executable for RendererManager_Test.cpp
add_executable(RendererManagerTest RendererManager_Test.cpp)

# Link the test executable with the Renderer library
target_link_libraries(RendererManagerTest PRIVATE Renderer)

# Add the tests to CTest
add_test(NAME RendererManagerTest COMMAND RendererManagerTest)
