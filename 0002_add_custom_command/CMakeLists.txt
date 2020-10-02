cmake_minimum_required(VERSION 3.8)

project(get_filename_component C CXX)
if(UNIX)
  message(STATUS "build output.cc")
  set(output "output")
  set(src_output "")
  set(path_output "")
  get_filename_component(src_output "output.cc" ABSOLUTE)
  get_filename_component(path_output "${src_output}" PATH)
  message(STATUS "path_output:" ${path_output})
  set(CMD "g++ -o ${output} ${src_output}")
  message(STATUS ${CMD})
  execute_process(COMMAND g++ -o ${output} ${src_output} 
	  WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
	  )
  set(outputstr "")
  execute_process(COMMAND ${CMAKE_CURRENT_BINARY_DIR}/${output} -h
	  WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
	  OUTPUT_VARIABLE outputstr
	  )
  message(STATUS "outputstr:" ${outputstr})
  
  set(header_file "test.h")

  add_custom_command(
  	  OUTPUT ${header_file} 
  	  COMMAND cp 
 	  ARGS ${CMAKE_SOURCE_DIR}/${header_file} ${CMAKE_CURRENT_BINARY_DIR}/${header_file}
  	  )
  #add_custom_command(
  #	  OUTPUT ${outputstr}
  #	  COMMAND ${output}
  #	  ARGS -h
  #	  DEPENDS ${output}
  #	  )
endif(UNIX)

#for test.h
#include_directories(${CMAKE_BINARY_DIR})
add_executable(get_filename_component test.cc ${header_file})
