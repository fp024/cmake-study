cmake_minimum_required(VERSION 3.19)
project(hello_application C)

include_directories(../lib)
add_executable(hello main.c)

add_dependencies(hello utility)
target_link_libraries(hello utility)