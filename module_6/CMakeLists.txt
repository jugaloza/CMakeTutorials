cmake_minimum_required(VERSION 3.22.1)
project(Calculator_Project VERSION 1.0.0)

add_subdirectory(my_math_lib)

add_executable(Calculator main.cpp)

target_link_libraries(Calculator my_math)

#set(Name Alice CACHE STRING "Added Name variable as cache persistent variable")
set(Name Bob CACHE STRING "Added Name variable as cache persistent variable")
message($CACHE{Name})

