project(WordCount)

add_executable(${PROJECT_NAME}
    main.cpp
    wc.h
    wc.cpp
)

# TODO: Check the needed components
find_package(Boost COMPONENTS program_options serialization log REQUIRED)
# find_package(MPI REQUIRED)

message("${CMAKE_BINARY_DIR}/src/CMakeFiles/Export/02c30d046d7d1af4df1a66523a64c9b0/MapReduceConfig.cmake")

find_package(MapReduce REQUIRED 
    PATHS ../../build/src/CMakeFiles/Export/02c30d046d7d1af4df1a66523a64c9b0/)
# add_subdirectory(datastore)

message("Milad ${MapReduce_FOUND}")
message("Milad ${MapReduce_INCLUDE_DIR}")

if(NOT Boost_FOUND)
    message (SEND_ERROR "Boost libraries are required to build this example.")
endif()

# WordCount
target_link_libraries(${PROJECT_NAME}
PRIVATE
    MapReduce
    ${Boost_LIBRARIES}
    # ${MPI_CXX_LIBRARIES}
)

target_include_directories(${PROJECT_NAME}
PRIVATE
    ${Boost_INCLUDE_DIRS} 
    # ${MPI_INCLUDE_PATH}
    ${CMAKE_CURRENT_SOURCE_DIR}
)

install(TARGETS ${PROJECT_NAME} ${DATASTORE} RUNTIME DESTINATION bin)
file(COPY ../data/ DESTINATION "${CMAKE_CURRENT_BINARY_DIR}/data")
