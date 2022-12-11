project(WordCount)
set(DATASTORE Datastore)

add_executable(${PROJECT_NAME}
    main.cpp
    wc.h
    wc.cpp
)

# TODO: Check the needed components
find_package(Boost COMPONENTS program_options mpi serialization log REQUIRED)
find_package(MPI REQUIRED)

find_package(MapReduce)

if(NOT Boost_FOUND)
    message (SEND_ERROR "Boost libraries are required to build this example.")
endif()

# WordCount
target_link_libraries(${PROJECT_NAME}
PRIVATE
    MapReduce
    ${Boost_LIBRARIES}
    ${MPI_CXX_LIBRARIES}
)

target_include_directories(${PROJECT_NAME}
PRIVATE
    ${Boost_INCLUDE_DIRS} 
    ${MPI_INCLUDE_PATH}
    ${CMAKE_CURRENT_SOURCE_DIR}
)


# Datastore
add_executable(${DATASTORE}
    ./Datastore.h
    ./Datastore.cpp
)

target_link_libraries(${DATASTORE}
PRIVATE
    MapReduce
)

install(TARGETS ${PROJECT_NAME} ${DATASTORE} RUNTIME DESTINATION bin)
file(COPY ../data/ DESTINATION "${CMAKE_CURRENT_BINARY_DIR}/data")
