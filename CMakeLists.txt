cmake_minimum_required(VERSION 3.6)
# specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# set the project name and version
project(myproject VERSION 1.0)

# compile main
add_executable(myprogram src/main.cpp)

# include self-defined pure header
target_include_directories(myprogram PUBLIC include)

#include self-defined library with .cpp and .h files version 1
add_library(HandyMathLib STATIC lib/HandyMath/handy_math.cpp)
target_include_directories(HandyMathLib PUBLIC lib/HandyMath/include)
target_link_libraries(myprogram PUBLIC HandyMathLib)
