add_library(GeometicsLib STATIC Point2D.cpp circle.cpp square.cpp triangle.cpp shape.cpp)
target_include_directories(GeometicsLib PUBLIC include)
