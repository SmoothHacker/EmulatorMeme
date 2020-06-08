cmake_minimum_required(VERSION 3.15)
project(Blue_World)

set(CMAKE_CXX_STANDARD 14)

add_executable(Blue_World src/main.cpp src/BlueWorld.cpp src/BlueWorld.h src/disassembler.cpp src/disassembler.h)