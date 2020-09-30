cmake_minimum_required(VERSION 3.8)

project(get_filename_component C CXX)
#ABSOLUTE  = Full path to file
get_filename_component(test_file "test.cc" ABSOLUTE)
message(STATUS "test_file:" ${test_file})
#REALPATH  = Full path to existing file with symlinks resolved
get_filename_component(test_file_REALPATH "test.cc" REALPATH)
message(STATUS "test_file_REALPATH:" ${test_file_REALPATH})
#PATH      = Legacy alias for DIRECTORY (use for CMake <= 2.8.11)
get_filename_component(test_file_path "${test_file}" PATH)
message(STATUS "test_file_path:" ${test_file_path})
#NAME      = File name without directory
get_filename_component(test_file_name "${test_file}" NAME)
message(STATUS "test_file_name:" ${test_file_name})
#DIRECTORY = Directory without file name
get_filename_component(test_file_dir "${test_file}" DIRECTORY)
message(STATUS "test_file_dir:" ${test_file_dir})
#EXT       = File name longest extension (.b.c from d/a.b.c)
get_filename_component(test_file_ext "${test_file}" EXT)
message(STATUS "test_file_ext:" ${test_file_ext})
#NAME_WE   = File name without directory or longest extension
get_filename_component(test_file_name_we "${test_file}" NAME_WE)
message(STATUS "test_file_name_we:" ${test_file_name_we})
#LAST_EXT  = File name last extension (.c from d/a.b.c)
get_filename_component(test_file_last_ext "${test_file}" LAST_EXT)
message(STATUS "test_file_last_ext:" ${test_file_last_ext})
#NAME_WLE  = File name without directory or last extension
get_filename_component(test_file_name_wle "${test_file}" NAME_WLE)
message(STATUS "test_file_name_wle:" ${test_file_name_wle})


add_executable(get_filename_component test.cc)
