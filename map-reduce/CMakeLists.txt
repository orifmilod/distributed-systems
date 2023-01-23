cmake_minimum_required(VERSION 3.25)
project(MapReduce)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_library(${PROJECT_NAME} INTERFACE
    ./include/MapReduce/Map.h
    ./include/MapReduce/Reduce.h
    ./include/MapReduce/Logger.h
    ./include/MapReduce/Job.h
)

target_include_directories(${PROJECT_NAME}
INTERFACE
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

# add_subdirectory(examples)
