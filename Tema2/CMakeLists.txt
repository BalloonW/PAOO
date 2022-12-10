# CMakeList.txt : CMake project for Tema1, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)
set(myproject "shapes")
# project name
project (${myproject})

# define the executables
add_executable (${myproject} 
"src/shape.cpp" 
"src/shape.h" 
"src/square.h" 
"src/square.cpp"
 "main.cpp")
include_directories(src)

# TODO: Add tests and install targets if needed.
