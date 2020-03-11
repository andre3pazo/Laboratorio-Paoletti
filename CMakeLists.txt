cmake_minimum_required(VERSION 3.15)
project(ActivitiesRegister)

set(CMAKE_CXX_STANDARD 14)

add_executable(ActivitiesRegister main.cpp Time.cpp Time.h Date.cpp Date.h Activity.cpp Activity.h Register.cpp Register.h Test/TimeTest.cpp Test/TimeTest.h Test/DateTest.cpp Test/DateTest.h)

add_subdirectory(C:/Users/andre/CLionProjects/ActivitiesRegister/Test/googletest)
set(SOURCE_FILES Test/TimeTest.cpp Test/DateTest.cpp Test/RunAllTests.cpp)
add_library(googletest ${SOURCE_FILES})
target_link_libraries(ActivitiesRegister googletest)