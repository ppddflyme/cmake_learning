cmake_minimum_required(VERSION 3.8)

project(target_compile_definitions C CXX)

add_executable(target_compile_definitions main.cc)


#We should point out that add_definitions will impact the
#entire project, while target_compile_definitions just
#impact the specified target.
#PRIVATE qualifier: only be applied to the given target and not by
#                   other targets consuming it.
#INTERFACE qualifier: compile definitions on a given target will only
#                     be aplied to targets consuming it.
#PUBLIC qualifier: compile definitions will be applied to the given target
#                  and all other targets consuming it.

if(CMAKE_SYSTEM_NAME STREQUAL "Linux")
  message(STATUS "system:" ${CMAKE_SYSTEM_NAME})
  #target_compile_definitions(target_compile_definitions PUBLIC "LINUX")
  add_definitions("-DLINUX")
elseif(CMAKE_SYSTEM_NAME STREQUAL "Windows")
  message(STATUS "system:" ${CMAKE_SYSTEM_NAME})
  #target_compile_definitions(target_compile_definitions PUBLIC "WINDOWS")
  add_definitions("-DWINDOWS")
elseif(CMAKE_SYSTEM_NAME STREQUAL "Dawin")
  message(STATUS "system:" ${CMAKE_SYSTEM_NAME})	
  #target_compile_definitions(target_compile_definitions PUBLIC "DAWIN")
  add_definitions("-DDAWIN")
else()
  message(STATUS "Unknown system")
endif()  

