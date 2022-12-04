project("WordCount")

add_executable(${PROJECT_NAME}
    wc.h
    wc.cpp
    main.cpp
)

find_package(Boost COMPONENTS program_options mpi serialization log REQUIRED)
find_package(MPI REQUIRED)

# find_package(MapReduce)

if(NOT Boost_FOUND)
    message (SEND_ERROR "Boost libraries are required to build this example.")
endif()
 
message("ORIF  ${CMAKE_SOURCE_DIR}/src/include")


target_link_libraries(${PROJECT_NAME}
PRIVATE
    MapReduce
    ${Boost_LIBRARIES}
    ${MPI_CXX_LIBRARIES}
)

target_include_directories(${PROJECT_NAME}
PRIVATE
    ${CMAKE_SOURCE_DIR}/src/include
    ${Boost_INCLUDE_DIRS} 
    ${MPI_INCLUDE_PATH}
)
