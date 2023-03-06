cmake_minimum_required(VERSION 3.24)
project(TLWT)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(TLWT
        Main.cpp
        Main.h
        README.md)

set(SFML_STATIC_LIBRARIES TRUE)
set(SFML_DIR C:/SFML/lib/cmake/SFML)
find_package(SFML COMPONENTS system window graphics audio network REQUIRED)

include_directories(C:/SFML/include)
target_link_libraries(TLWT sfml-system sfml-window sfml-graphics sfml-audio)