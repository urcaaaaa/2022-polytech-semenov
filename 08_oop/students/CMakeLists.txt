cmake_minimum_required(VERSION 3.12 FATAL_ERROR)
project(students LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 17)

include(doctest.cmake)
add_executable(test students.cpp)
target_link_libraries(tests PRIVATE doctest)