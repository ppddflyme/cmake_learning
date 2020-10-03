cmake_minimum_required(VERSION 3.8) 

project(add_library_testing C CXX)

add_library(messge_class SHARED message.cc)

add_executable(add_library_testing main.cc)

target_link_libraries(add_library_testing messge_class)
