cmake_minimum_required(VERSION 3.8)

project(CMAKE_SYSTEM_NAME_testing C CXX)

if (CMAKE_SYSTEM_NAME STREQUAL "Linux")
  message(STATUS "CMAKE_SYSTEM_NAME:" ${CMAKE_SYSTEM_NAME})
elseif (CMAKE_SYSTEM_NAME STREQUAL "Windows")
  message(STATUS "CMAKE_SYSTEM_NAME:" ${CMAKE_SYSTEM_NAME})
elseif (CMAKE_SYSTEM_NAME STREQUAL "Darwin")  
  message(STATUS "CMAKE_SYSTEM_NAME:" ${CMAKE_SYSTEM_NAME})
else()
  message(STATUS "CMAKE_SYSTEM_NAME:" ${CMAKE_SYSTEM_NAME})
endif()
