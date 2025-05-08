cmake_minimum_required(VERSION 3.10)
project(calculator)

set(CMAKE_CXX_STANDARD 20)

include_directories(include)
add_executable(calculator
    main.cpp
)
