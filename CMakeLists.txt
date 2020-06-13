cmake_minimum_required(VERSION 3.15)
project(Blue_World)

set(CMAKE_CXX_STANDARD 14)

add_executable(Blue_World src/BlueWorld.cpp src/BlueWorld.h)
add_executable(disassembler src/disassembler.cpp src/disassembler.h src/main_disassembler.cpp)