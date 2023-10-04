cmake_minimum_required(VERSION 3.26)
project(Section4Challenge)

set(CMAKE_CXX_STANDARD 14)

set(CMAKE_EXE_LINKER_FLAGS "-static")

add_executable(Section4Challenge main.cpp)
