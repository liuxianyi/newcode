cmake_minimum_required(VERSION 2.10)
project(MyProject)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_BUILD_TYPE Debug)

add_subdirectory(newcode/code0328)

add_executable(MyProject main.cc)