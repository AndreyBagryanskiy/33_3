cmake_minimum_required(VERSION 3.27.0)
project("registry" VERSION 1.0)
set(CMAKE_CXX_STANDARD 17)

set(MY_INCLUDE_DIR ${CMAKE_SOURCE_DIR}/include)

add_executable(registry main.cpp ${MY_INCLUDE_DIR}/registry.h)


target_include_directories(registry PUBLIC ${MY_INCLUDE_DIR})
