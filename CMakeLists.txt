cmake_minimum_required(VERSION 3.15)
project(ActivitiesRegister)

set(CMAKE_CXX_STANDARD 14)

add_executable(ActivitiesRegister main.cpp Time.cpp Time.h Date.cpp Date.h Activity.cpp Activity.h Register.cpp Register.h)