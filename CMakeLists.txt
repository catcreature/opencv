cmake_minimum_required(VERSION 3.0)
porject(OpencvExample)

# Find OpenCV package
find_package(OpenCV REQUIRED)

# Include directories for OpenCV
include_directories(${OpenCV_INCLUDE_DIRS})

# Create an executable
add_executable(OpencvExample main.cpp)

# Link OpenCV libraries
target_link_libraries(OpencvExample ${OpenCV_LIBS})

