project(GEOLIB)
set(SOURCES Point2D.cpp circle.cpp square.cpp triangle.cpp shape.cpp) # set the SOURCE var for reusability
add_library(GeometicsLib STATIC ${SOURCES})
target_include_directories(GeometicsLib PUBLIC include)



message("\nin sub-level cmake")
message(CMAKE_SOURCE_DIR:\t${CMAKE_SOURCE_DIR})
message(PROJECT_SOURCE_DIR:\t${PROJECT_SOURCE_DIR})
message(CMAKE_BINARY_DIR:\t${CMAKE_BINARY_DIR})
message(PROJECT_BINARY_DIR:\t${PROJECT_BINARY_DIR})
message(CMAKE_INSTALL_PREFIX:\t${CMAKE_INSTALL_PREFIX})
message(CMAKE_PROJECT_NAME:\t${CMAKE_PROJECT_NAME})
message(PROJECT_NAME:\t\t${PROJECT_NAME})