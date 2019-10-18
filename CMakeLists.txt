cmake_minimum_required (VERSION 2.6)
project (Celestial-Contention)
 
# configure a header file to pass some of the CMake settings
# to the source code
configure_file (
  "${PROJECT_SOURCE_DIR}/HelloWorld.h"
  "${PROJECT_BINARY_DIR}/HelloWorld.h"
)
 
# add the binary tree to the search path for include files
# so that we will find main.h
include_directories("${PROJECT_BINARY_DIR}")
 
# add the executable
add_executable(Celestial-Contention main.cpp HelloWorld.cpp)
