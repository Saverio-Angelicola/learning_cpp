cmake_minimum_required(VERSION 3.10)

# Project name and C++ standard
project(Learning_cpp)
set(CMAKE_CXX_STANDARD 23)

# Source files
file(GLOB_RECURSE SOURCES "src/*.cpp")

# Include directories (if you have headers in "include/")
include_directories(include)

#Include tests directories
include_directories(tests)

# Add executable
add_executable(main ${SOURCES})