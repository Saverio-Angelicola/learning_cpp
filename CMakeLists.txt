cmake_minimum_required(VERSION 3.10)

# Project name and C++ standard
project(Learning_cpp)
set(CMAKE_CXX_STANDARD 23)

# Source files
file(GLOB_RECURSE SOURCES "src/*.h")
file(GLOB_RECURSE SOURCES "src/*.cpp")
file(GLOB MAIN_FILE "./main.cpp")

include_directories(include)

# Add executable
add_executable(main ${SOURCES} ${MAIN_FILE})