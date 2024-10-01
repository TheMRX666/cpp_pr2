cmake_minimum_required(VERSION 3.29)
project(pr2)

set(CMAKE_CXX_STANDARD 20)

add_executable(pr2 main.cpp
        romb/romb.cpp
        romb/romb.h)
