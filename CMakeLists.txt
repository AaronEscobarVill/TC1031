cmake_minimum_required(VERSION 3.29)
project(TC1031)

set(CMAKE_CXX_STANDARD 17)

# Target 1: Semana 1 - AG01
add_executable(AG01_List Semana1/AG01/List.cpp)

# Target 2: Semana 1 - AG01-1
add_executable(AG01_ListT Semana1/AG01-1/ListT.cpp Semana1/AG01-1/ListT.h)

add_executable(AG02 Semana1/AG02/AG02.cpp)
