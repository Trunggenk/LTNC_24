cmake_minimum_required(VERSION 3.27)
project(Baitaphacckerrank)

set(CMAKE_CXX_STANDARD 17)
file(GLOB_RECURSE SOURCES1 "ch1/*.cpp")
file(GLOB_RECURSE SOURCES2 "ch2/*.cpp")
file(GLOB_RECURSE SOURCES3 "ch3/*.cpp")
file(GLOB_RECURSE SOURCES4 "ch4/*.cpp")
file(GLOB_RECURSE SOURCES5 "ch5/*.cpp")

add_executable(Baitaphacckerrank
        all.h
        ${SOURCES1}
        ${SOURCES2}
        ${SOURCES3}
        ${SOURCES4}
        ${SOURCES5}
        ch5/Sets-STL.cpp
)