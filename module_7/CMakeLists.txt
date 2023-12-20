cmake_minimum_required(VERSION 3.0.0)

Project(Calculator VERSION 1.0.0)

include(my_module.cmake)

message(CMAKE_VERSION=${CMAKE_VERSION})
message(CMAKE_VERSION=${CMAKE_MAJOR_VERSION})
message(CMAKE_VERSION=${CMAKE_MINOR_VERSION})
message(CMAKE_VERSION=${CMAKE_PATCH_VERSION})
