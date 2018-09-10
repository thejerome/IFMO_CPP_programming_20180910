cmake_minimum_required(VERSION 3.12)
project(IFMO_CPP_programming_20180910)

set(CMAKE_CXX_STANDARD 14)

include_directories(src/main/cpp)

add_executable(IFMO_CPP_programming_20180910
        src/main/cpp/main.cpp
        src/main/cpp/t01_quad.cpp src/main/cpp/t01_quad.h src/main/cpp/t02_divisor.cpp src/main/cpp/t02_divisor.h src/main/cpp/t03_twos.cpp src/main/cpp/t03_twos.h src/main/cpp/t04_sum.cpp src/main/cpp/t04_sum.h src/main/cpp/t05_max.cpp src/main/cpp/t05_max.h src/main/cpp/t06_max_count.cpp src/main/cpp/t06_max_count.h src/main/cpp/t07_max_2.cpp src/main/cpp/t07_max_2.h src/main/cpp/t08_fibb.cpp src/main/cpp/t08_fibb.h src/main/cpp/t09_row.cpp src/main/cpp/t09_row.h src/main/cpp/t10_max_local.cpp src/main/cpp/t10_max_local.h)
