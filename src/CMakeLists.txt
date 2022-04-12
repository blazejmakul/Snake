cmake_minimum_required(VERSION 3.17)
project(src)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(src
        cpoint.h
        main.cpp
        screen.cpp
        screen.h
        snake.cpp
        snake.h
        winsys.cpp
        winsys.h)
