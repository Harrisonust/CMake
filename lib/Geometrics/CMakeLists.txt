project(GEOLIB)
set(SOURCES Point2D.cpp circle.cpp square.cpp triangle.cpp shape.cpp) # set the SOURCE var for reusability
add_library(GeometicsLib STATIC ${SOURCES})
target_include_directories(GeometicsLib PUBLIC include)



message("\nin sub-level cmake")
message(CMAKE_SOURCE_DIR:\t\t${CMAKE_SOURCE_DIR})
message(PROJECT_SOURCE_DIR:\t\t${PROJECT_SOURCE_DIR})
message(CMAKE_CURRENT_SOURCE_DIR:\t${CMAKE_CURRENT_SOURCE_DIR})
message(CMAKE_BINARY_DIR:\t\t${CMAKE_BINARY_DIR})
message(PROJECT_BINARY_DIR:\t\t${PROJECT_BINARY_DIR})
message(CMAKE_INSTALL_PREFIX:\t\t${CMAKE_INSTALL_PREFIX})
message(CMAKE_PROJECT_NAME:\t\t${CMAKE_PROJECT_NAME})
message(PROJECT_NAME:\t\t\t${PROJECT_NAME})