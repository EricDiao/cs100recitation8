cmake_minimum_required(VERSION 3.5)
project(map)

set(CMAKE_CXX_STANDARD 11)

set(map_SRCS map.cpp)
add_library(map ${map_SRCS})

set(map_test_SRCS main.cpp)
# While this really should be an executable,
# the fact that we do not require you implement the LinkedMap
# means you will have link problems if you attempt to link it into
# an executable, so leave it behind and make it a library
# The goal is to pass the semantic verifier, not the program run perfectly
add_library(map_test ${map_test_SRCS})
target_link_libraries(map_test map)
