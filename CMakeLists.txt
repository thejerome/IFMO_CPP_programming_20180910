cmake_minimum_required(VERSION 3.12)
project(IFMO_CPP_programming_20180910)

set(CMAKE_CXX_STANDARD 14)

include_directories(src/main/cpp)

add_executable(IFMO_CPP_programming_20180910
        src/main/cpp/main.cpp
        src/main/cpp/minus.cpp
        src/main/cpp/minus.h
        src/main/cpp/plus.cpp
        src/main/cpp/plus.h)
