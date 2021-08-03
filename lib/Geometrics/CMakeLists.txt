set(SOURCES Point2D.cpp circle.cpp square.cpp triangle.cpp shape.cpp) # set the SOURCE var for reusability
add_library(GeometicsLib STATIC ${SOURCES})
target_include_directories(GeometicsLib PUBLIC include)


message("in sub-level cmake")
message(${CMAKE_SOURCE_DIR})
message(${PROJECT_SOURCE_DIR})
message(${CMAKE_BINARY_DIR})
message(${PROJECT_BINARY_DIR})
