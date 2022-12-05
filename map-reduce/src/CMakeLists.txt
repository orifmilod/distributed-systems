project("MapReduce")

add_library(${PROJECT_NAME} INTERFACE
    ./include/MapReduce/Map.h
    ./include/MapReduce/Reduce.h
    ./include/MapReduce/Logger.h
    ./include/MapReduce/Job.h
)

target_include_directories(${PROJECT_NAME}
INTERFACE
    "${CMAKE_CURRENT_SOURCE_DIR}/include/MapReduce/"
)

set_target_properties(${PROJECT_NAME} PROPERTIES LINKER_LANGUAGE CXX)
