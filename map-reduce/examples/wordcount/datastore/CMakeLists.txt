set(DATASTORE Datastore)

add_library(${DATASTORE}
  ./Datastore.cpp
  ./Datastore.h
)

# include(FetchContent)
# FetchContent_Declare(
    # gRPC
    # GIT_REPOSITORY https://github.com/grpc/grpc
    # GIT_TAG        v1.49.0
# )
# 
# set(FETCHCONTENT_QUIET OFF)
# FetchContent_MakeAvailable(gRPC)
# 
find_package(MapReduce REQUIRED)
# find_package(gRPC CONFIG REQUIRED)

target_link_libraries(${DATASTORE}
PRIVATE
    MapReduce
    # grpc++
)

# Proto file
# get_filename_component(datastore_proto "./proto/datastore.proto" ABSOLUTE)
# get_filename_component(datastore_proto_path "${datastore_proto}" PATH)
# 
# set(ds_proto_srcs "${CMAKE_CURRENT_BINARY_DIR}/datastore.pb.cc")
# set(ds_proto_headers "${CMAKE_CURRENT_BINARY_DIR}/datastore.pb.h")
# set(ds_grpc_srcs "${CMAKE_CURRENT_BINARY_DIR}/datastore.grpc.pb.cc")
# set(ds_grpc_headers "${CMAKE_CURRENT_BINARY_DIR}/datastore.grpc.pb.h")
# 
# message(orif ${_PROTOBUF_PROTOC})


# add_custom_command(
    # OUTPUT "${ds_proto_srcs}" "${ds_proto_hdrs}" "${ds_grpc_srcs}" "${ds_grpc_hdrs}"
    # COMMAND ${_PROTOBUF_PROTOC}
    # ARGS --grpc_out "${CMAKE_CURRENT_BINARY_DIR}"
      # --cpp_out "${CMAKE_CURRENT_BINARY_DIR}"
      # -I "${ds_proto_path}"
      # --plugin=protoc-gen-grpc="${_GRPC_CPP_PLUGIN_EXECUTABLE}"
      # "${ds_proto}"
    # DEPENDS "${ds_proto}")

# Include generated *.pb.h files
# target_include_directories(${DATASTORE}
# PRIVATE
  # ${CMAKE_CURRENT_BINARY_DIR}
# )
# 
# ds_grpc_proto
# add_library(ds_grpc_proto
    # ${ds_grpc_srcs}
    # ${ds_grpc_hdrs}
    # ${ds_proto_srcs}
    # ${ds_proto_hdrs})
# 
# target_link_libraries(ds_grpc_proto
    # ${_REFLECTION}
    # ${_GRPC_GRPCPP}
    # ${_PROTOBUF_LIBPROTOBUF})
# 
# Targets datatstore_[async_](client|server)
# foreach(_target
  # datatstore_client datatstore_server 
  # datatstore_callback_client datatstore_callback_server)
  # add_executable(${_target} "${_target}.cc")
  # target_link_libraries(${_target}
    # ds_grpc_proto
    # ${_REFLECTION}
    # ${_GRPC_GRPCPP}
    # ${_PROTOBUF_LIBPROTOBUF})
# endforeach()
