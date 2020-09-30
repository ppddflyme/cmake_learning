cmake_minimum_required(VERSION 3.8)

project(get_filename_component C CXX)
get_filename_component(test_file "test.cc" ABSOLUTE)
message(STATUS "test_file:" ${test_file})
get_filename_component(test_file_path "${test_file}" PATH)
message(STATUS "test_file_path:" ${test_file_path})

add_executable(get_filename_component test.cc)
