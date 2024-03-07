cmake_minimum_required(VERSION 3.27)
project(Baitaphacckerrank)

set(CMAKE_CXX_STANDARD 17)
add_executable(Baitaphacckerrank ch1/main.cpp
        ch1/BasicDataTypes1.cpp
        ch1/Functions.cpp
        all.h
        ch1/arrayintroduction.cpp
        ch1/plusminus.cpp
        ch1/SherlockandArray.cpp
        "ch3/ch2/Find Digits .cpp"
        "ch3/ch2/Divisible Sum Pairs.cpp"
        ch3/Strings.cpp
        ch3/Staircase.cpp
        "ch3/Time Conversion.cpp"
        "ch3/CamelCase .cpp"
        test.cpp
        "ch3/HackerRank in a String.cpp"
        "ch3/Caesar Cipher.cpp"
        "Drawing Book.cpp"
        "Equalize the Array.cpp"
        palindromeIndex.cpp
        "Variable Sized Arrays.cpp"
        "Mystery Number.cpp"
        "ch4/Between Two Sets .cpp"
        "Falling Rocks.cpp")
