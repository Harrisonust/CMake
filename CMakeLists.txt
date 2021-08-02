cmake_minimum_required(VERSION 3.6)
# specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# set the project name and version
project(myproject VERSION 1.0)

# compile main
add_executable(main src/main.cpp)

# include "pure header"
target_include_directories(main PUBLIC include)

# include library with .cpp and .h files version 1
add_library(HandyMathLib STATIC lib/HandyMath/handy_math.cpp) # compile .cpp
target_include_directories(HandyMathLib PUBLIC lib/HandyMath/include) # inlcude .h
target_link_libraries(main PUBLIC HandyMathLib)

# include library with .cpp and .h files version 2(recursive cmakelists)
add_subdirectory(lib/Geometrics) # sub-cmakelists will handle all the compile stuff
target_link_libraries(main PUBLIC GeometicsLib) # link the library

set(TEST_VAR "dekl")

if (DEFINED TEST_VAR)
    message(${TEST_VAR})
else()
    message("NOT DEFINED")
endif()

if(APPLE)
    message("USING APPLE")
else()
    message("NOT USING APPLE")
endif()

function(FOO PARA PARA2 PARA3)
    message(${PARA})
    message(${PARA2})
    message(${PARA3})
endfunction(FOO)

FOO("ede" dd d)

string(TOUPPER ${TEST_VAR} TEST_VAR)
message(${TEST_VAR})