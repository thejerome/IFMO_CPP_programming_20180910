cmake_minimum_required(VERSION 3.12)
project(IFMO_CPP_programming_20180910)

set(CMAKE_CXX_STANDARD 14)

include_directories(src/main/cpp)

add_executable(IFMO_CPP_programming_20180910
        src/main/cpp/main.cpp
        src/main/cpp/t01_max3.cpp
        src/main/cpp/t01_max3.h
        src/main/cpp/t02_triangle.cpp
        src/main/cpp/t02_triangle.h
        src/main/cpp/t03_equal3.cpp
        src/main/cpp/t03_equal3.h
        src/main/cpp/t04_chess_rook.cpp
        src/main/cpp/t04_chess_rook.h
        src/main/cpp/t05_chess_king.cpp
        src/main/cpp/t05_chess_king.h
        src/main/cpp/t06_chess_bishop.cpp
        src/main/cpp/t06_chess_bishop.h
        src/main/cpp/t07_chess_queen.cpp
        src/main/cpp/t07_chess_queen.h
        src/main/cpp/t08_chess_knight.cpp
        src/main/cpp/t08_chess_knight.h
        src/main/cpp/t09_choco.cpp
        src/main/cpp/t09_choco.h
        src/main/cpp/t10_sort3.cpp
        src/main/cpp/t10_sort3.h
        src/main/cpp/t11_boxes.cpp
        src/main/cpp/t11_boxes.h)
