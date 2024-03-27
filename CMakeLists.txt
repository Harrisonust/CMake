cmake_minimum_required(VERSION 3.6)
# specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# set the project name and version
project(myproject VERSION 1.0)

# compile main
add_executable(main src/main.cpp)

# include library version 1
add_library(HandyMath SHARED lib/HandyMath/handy_math.cpp) # compile .cpp
target_include_directories(HandyMath PUBLIC lib/HandyMath/include) # inlcude .h
target_link_libraries(main PUBLIC HandyMath)

# include library version 2(recursive cmakelists)
add_subdirectory(lib/Geometrics) # sub-cmakelists will handle all its compile stuff
target_link_libraries(main PUBLIC GeometicsLib) # link the library

# # include external lib
# find_library(EXTERNAL_LIB
#     NAMES 
#         external.so
#     PATHS 
#         /Users/luoshiheng/Code/C_Programing/external_Cmake_lib
# )
# if ( NOT EXTERNAL_LIB )
#         message( WARNING "library NOT FOUND - the respective targets won't be build")
# else()
#         message( STATUS "library : ${EXTERNAL_LIB}")
# endif( NOT EXTERNAL_LIB )

# target_include_directories(main PUBLIC /Users/luoshiheng/Code/C_Programing/external_Cmake_lib/lib)
# target_link_libraries(main PUBLIC ${EXTERNAL_LIB})

# check platform
if(APPLE)
    message(\nPLATFORM:\t"APPLE")
endif()

if(WIN32)
    message(\nPLATFORM:\t"WIN32")
endif()

if(UNIX)
    message(\nPLATFORM:\t"UNIX")
endif()

# set variable and run if-else statement
# set(TEST_VAR "dekl")

# if (DEFINED TEST_VAR)
#     message(${TEST_VAR})
# else()
#     message("NOT DEFINED")
# endif()


# define function and call it
# function(FOO PARA PARA2 PARA3)
#     message(${PARA})
#     message(${PARA2})
#     message(${PARA3})
# endfunction(FOO)

# FOO("ede" dd d)

# call built-in function
# string(TOUPPER ${TEST_VAR} TEST_VAR)
# message(${TEST_VAR})

configure_file(include/path.h.in ${PROJECT_BINARY_DIR}/path.h )
# include "pure header"
target_include_directories(main PUBLIC include ${PROJECT_BINARY_DIR})

message("\nin top-level cmake")
message(CMAKE_SOURCE_DIR:\t\t${CMAKE_SOURCE_DIR})
message(PROJECT_SOURCE_DIR:\t\t${PROJECT_SOURCE_DIR})
message(CMAKE_CURRENT_SOURCE_DIR:\t${CMAKE_CURRENT_SOURCE_DIR})
message(CMAKE_BINARY_DIR:\t\t${CMAKE_BINARY_DIR})
message(PROJECT_BINARY_DIR:\t\t${PROJECT_BINARY_DIR})
message(CMAKE_INSTALL_PREFIX:\t\t${CMAKE_INSTALL_PREFIX})
message(CMAKE_PROJECT_NAME:\t\t${CMAKE_PROJECT_NAME})
message(PROJECT_NAME:\t\t\t${PROJECT_NAME})

# install(TARGETS GeometicsLib DESTINATION self-test)

# do testing
# enable_testing()
# add_executable(testing_code src/main.cpp)
# target_link_libraries(testing_code GeometricsLib HandyMathLib)
# target_include_directories(testing_code PUBLIC include ${PROJECT_BINARY_DIR} )
# add_test(test_all testing_code)
