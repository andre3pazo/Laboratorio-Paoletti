cmake_minimum_required(VERSION 3.15)
project(ActivitiesRegister)

set(CMAKE_CXX_STANDARD 14)

add_executable(ActivitiesRegister main.cpp Time.cpp Time.h Date.cpp Date.h Activity.cpp Activity.h Register.cpp Register.h Test/tests/TimeTest.cpp Test/tests/TimeTest.h Test/tests/DateTest.cpp Test/tests/DateTest.h)

add_subdirectory(Test/lib/googletest-master)
include_directories(Test/lib/googletest-master/googletest/include)
include_directories(Test/lib/googletest-master/googlemock/include)
target_link_libraries(ActivitiesRegister gtest gtest_main)

set(SOURCE_FILES Test/TimeTest.cpp Test/DateTest.cpp Test/RunAllTests.cpp)