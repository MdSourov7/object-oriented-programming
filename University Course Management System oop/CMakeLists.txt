cmake_minimum_required(VERSION 4.0)
project(University_Course_Management_System_oop)

set(CMAKE_CXX_STANDARD 26)

add_executable(University_Course_Management_System_oop main.cpp
        Student.h
        Student.cpp
        Teacher.h
        Teacher.cpp
        Course.h
        Course.cpp)
