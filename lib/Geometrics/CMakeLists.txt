add_library(GeometicsLib STATIC Point2D.cpp circle.cpp square.cpp triangle.cpp shape.cpp)
target_include_directories(GeometicsLib PUBLIC include)

message("in sub-level cmake")
message(${CMAKE_SOURCE_DIR})
message(${PROJECT_SOURCE_DIR})
message(${CMAKE_BINARY_DIR})
message(${PROJECT_BINARY_DIR})