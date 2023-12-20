cmake_minimum_required(VERSION 3.22.0)

project(My_Math_Test VERSION 1.0.0)

find_package(my_math)

if (my_math_FOUND)
    message("My math package is found")
    add_executable(calc main.cpp)
    target_link_libraries(calc my_math)
else()
    message(FATAL_ERROR "package not found")
endif()