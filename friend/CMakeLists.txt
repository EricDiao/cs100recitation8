cmake_minimum_required(VERSION 3.5)
project(friend)

set(CMAKE_CXX_STANDARD 11)

set(friend_SRCS main.cpp MyVector.cpp MyVector.hpp)
add_executable(friend ${friend_SRCS})
