cmake_minimum_required(VERSION 3.5)
project(00-Vector)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp MyVector.h)
add_executable(00-Vector ${SOURCE_FILES})
