cmake_minimum_required(VERSION 3.15)
project(01_LeetCode)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(00-Vector)

add_executable(01_LeetCode
        00-Vector/main.cpp
        00-Vector/MyVector.h)
