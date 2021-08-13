cmake_minimum_required(VERSION 3.19)
project(hello_ctest C)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_FLAGS "-fexec-charset=CP949 -g -W -Wall")

add_subdirectory(lib)
add_subdirectory(src)
add_subdirectory(test)

include (CTest)
add_test(test-1 test/test_hello)
add_test(test-2 test/test_hello)
add_test(test-3 test/test_hello)