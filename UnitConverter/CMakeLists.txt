cmake_minimum_required(VERSION 3.20)
project(UnitConverter)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# 添加子目录 来调用下一级的CMakeLists.txt
add_subdirectory(unitlib)

add_executable(converter src/main.cpp)

target_link_libraries(converter PRIVATE unitlib)
