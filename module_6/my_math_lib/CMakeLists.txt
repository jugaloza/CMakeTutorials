cmake_minimum_required(VERSION 3.22.0)


add_library(my_math src/addition.cpp
                    src/division.cpp)               

#target_include_directories(my_math PUBLIC include)
target_include_directories(my_math PUBLIC 
$<INSTALL_INTERFACE:include>
$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>)
#message(${CMAKE_CURRENT_SOURCE_DIR})
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/include/my_math/addition.hpp ${CMAKE_CURRENT_SOURCE_DIR}/include/my_math/division.hpp DESTINATION ${CMAKE_INSTALL_PREFIX}/include/my_math)

install(TARGETS my_math  EXPORT my_export DESTINATION ${CMAKE_INSTALL_PREFIX}/lib/my_math)

install(EXPORT my_export FILE my_math-config.cmake DESTINATION ${CMAKE_INSTALL_PREFIX}/lib/my_math)