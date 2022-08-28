# Minimum CMake version
cmake_minimum_required(VERSION 3.5)

# Include cmake path
include($ENV{IDF_PATH}/tools/cmake/project.cmake)

# Name of the project
project(esp32-cpp-template)

# Eigen library directory
add_subdirectory(eigen-3.4.0)