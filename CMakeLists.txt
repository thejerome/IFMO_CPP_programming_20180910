cmake_minimum_required(VERSION 3.12)
project(IFMO_CPP_programming_20180910)

set(CMAKE_CXX_STANDARD 14)

include_directories(src/main/cpp)

add_executable(IFMO_CPP_programming_20180910
        src/main/cpp/main.cpp
        src/main/cpp/t00_hello.cpp
        src/main/cpp/t00_hello.h
        src/main/cpp/t01_squirrels.cpp
        src/main/cpp/t01_squirrels.h
        src/main/cpp/t02_squirrels2.cpp
        src/main/cpp/t02_squirrels2.h
        src/main/cpp/t03_last_number.cpp
        src/main/cpp/t03_last_number.h
        src/main/cpp/t04_first_number.cpp
        src/main/cpp/t04_first_number.h
        src/main/cpp/t05_tens_number.cpp
        src/main/cpp/t05_tens_number.h
        src/main/cpp/t06_3digits.cpp
        src/main/cpp/t06_3digits.h
        src/main/cpp/t07_pies.cpp
        src/main/cpp/t07_pies.h
        src/main/cpp/t08_watch.cpp
        src/main/cpp/t08_watch.h
        src/main/cpp/t09_snail.cpp
        src/main/cpp/t09_snail.h)
