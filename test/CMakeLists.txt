cmake_minimum_required(VERSION 3.19)
project(unit_test C)

include_directories(../lib)
add_executable(test_hello test.c)

add_dependencies(test_hello utility)
target_link_libraries(test_hello utility)