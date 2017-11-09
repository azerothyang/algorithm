cmake_minimum_required(VERSION 3.8)
project(algorithm)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Student.cpp Student.h SortTestHelper.h)
add_executable(algorithm ${SOURCE_FILES})