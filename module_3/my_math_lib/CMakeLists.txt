cmake_minimum_required(VERSION 3.22.0)


add_library(my_math src/addition.cpp
                    src/division.cpp)               

target_include_directories(my_math PUBLIC include)