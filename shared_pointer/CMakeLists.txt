cmake_minimum_required(VERSION 3.5)
project(shared_pointer)

set(CMAKE_CXX_STANDARD 11)

set(shared_pointer_SRCS main.cpp TestClass.cpp TestClass.hpp SharedPointer.cpp SharedPointer.hpp SharedPointerController.cpp SharedPointerController.hpp)
add_executable(shared_pointer ${shared_pointer_SRCS})
