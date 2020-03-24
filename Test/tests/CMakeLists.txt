add_subdirectory(lib/googletest-master)
set(gtest_SOURCE_DIR, lib/googletest-master)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

set(SOURCE_TEST_FILES ActivityTest.cpp DateTest.cpp TimeTest.cpp)
add_executable(runAllTests ${SOURCE_TEST_FILES})
target_link_libraries(runAllTests gtest gtest_main lib)