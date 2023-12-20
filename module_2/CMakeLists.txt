cmake_minimum_required(VERSION 3.22.1)
project(Calculator_Project VERSION 1.0.0)

add_library(my_math
addition.cpp 
division.cpp)

add_executable(Calculator main.cpp)

add_executable(DuplicateCalculator main.cpp)

target_link_libraries(Calculator my_math)

target_link_libraries(DuplicateCalculator my_math)