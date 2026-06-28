cmake_minimum_required(VERSION 4.0)
project(ownership_oop_problem)

set(CMAKE_CXX_STANDARD 26)

add_executable(ownership_oop_problem main.cpp
        Shared_Account.h
        Class.h
        Shared_Account.cpp
        Class.cpp)
