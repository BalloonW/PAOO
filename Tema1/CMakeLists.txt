# CMakeList.txt : CMake project for Tema1, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)
set(myproject "tema1")
# project name
project (${myproject})

# define the executables
add_executable (${myproject} 
"src/shape.h" 
"src/square.h"
 "main.cpp")
include_directories(src)

# TODO: Add tests and install targets if needed.
