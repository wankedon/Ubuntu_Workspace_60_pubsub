option(arm64 "This is a option for arm64" OFF)

include_directories(./)
include_directories(${PROJECT_SOURCE_DIR}/PchHeader)
include_directories(${PROJECT_SOURCE_DIR}/Proto)
include_directories(${PROJECT_SOURCE_DIR}/DistComm)
include_directories(${PROJECT_SOURCE_DIR}/Utility)

file(GLOB_RECURSE SRC_LIST "*.c*")
file(GLOB_RECURSE HEADER_LIST ${PROJECT_SOURCE_DIR}/PchHeader/*.cpp)
file(GLOB_RECURSE PROTO_LIST ${PROJECT_SOURCE_DIR}/Proto/*.cc)
file(GLOB_RECURSE DISTCOMM_LIST ${PROJECT_SOURCE_DIR}/DistComm/*.cpp)
file(GLOB_RECURSE UTILITY_LIST ${PROJECT_SOURCE_DIR}/Utility/*.cpp)

if(arm64)
#file(GLOB LIB_CZMQ_LIST "/home/forlinx/Workspace/czmq/installed/lib/lib*.a*")#czmq
#file(GLOB LIB_LIST "/home/forlinx/Workspace/vcpkg/installed/arm64-linux/lib/lib*.a*")#vcpkg
else()
#file(GLOB LIB_CZMQ_LIST "/usr/local/lib/lib*.a*")#czmq
#file(GLOB LIB_LIST "/home/forlinx/Workspace/vcpkg/installed/x64-linux/lib/lib*.a*")#vcpkg
file(GLOB LIB_LIST "/home/forlinx/Workspace/60_pubsub/publisher/lib/lib*.a*")#lib
endif()

add_executable(ZCZHPublisher ${SRC_LIST} ${PROTO_LIST} ${DISTCOMM_LIST} ${UTILITY_LIST} ${HEADER_LIST})
target_link_libraries(ZCZHPublisher ${LIB_LIST} dl pthread) 
