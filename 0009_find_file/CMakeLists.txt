cmake_minimum_required(VERSION 3.8)

project(find_file CXX)

#find_file(result
#	  NAMES main.cc
#	  PATHS ${CMAKE_CURRENT_SOURCE_DIR}
#	  NO_DEFAULT_PATH
#	  )
find_file(result main.cc ${CMAKE_CURRENT_SOURCE_DIR})
message(STATUS "result:" ${result})
