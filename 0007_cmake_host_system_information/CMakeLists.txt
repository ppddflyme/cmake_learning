cmake_minimum_required(VERSION 3.8)

project(cmake_host_system_information C CXX)

foreach(key IN ITEMS
    NUMBER_OF_LOGICAL_CORES #Number of logical cores
    NUMBER_OF_PHYSICAL_CORES #Number of physical cores
    HOSTNAME #Hostname
    FQDN # Fully qualified domain name
    TOTAL_VIRTUAL_MEMORY  #Total virtual memory in MiB 1
    AVAILABLE_VIRTUAL_MEMORY #Available virtual memory in MiB 1
    TOTAL_PHYSICAL_MEMORY #Total physical memory in MiB 1
    AVAILABLE_PHYSICAL_MEMORY #Available physical memory in MiB 1
    IS_64BIT #One if processor is 64Bit
    HAS_FPU #One if processor has floating point unit
    HAS_MMX #One if processor supports MMX instructions
    HAS_MMX_PLUS #One if processor supports Ext. MMX instructions
    HAS_SSE #One if processor supports SSE instructions
    HAS_SSE2 #One if processor supports SSE2 instructions
    HAS_SSE_FP #One if processor supports SSE FP instructions
    HAS_SSE_MMX #One if processor supports SSE MMX instructions
    HAS_AMD_3DNOW #One if processor supports 3DNow instructions
    HAS_AMD_3DNOW_PLUS #One if processor supports 3DNow+ instructions
    HAS_IA64 #One if IA64 processor emulating x86
    HAS_SERIAL_NUMBER #One if processor has serial number
    PROCESSOR_SERIAL_NUMBER #Processor serial number
    PROCESSOR_NAME #Human readable processor name
    PROCESSOR_DESCRIPTION #Human readable full processor description
    OS_NAME #See CMAKE_HOST_SYSTEM_NAME
    OS_RELEASE #The OS sub-type e.g. on Windows Professional
    OS_VERSION #The OS build ID
    OS_PLATFORM #See CMAKE_HOST_SYSTEM_PROCESSOR		
		)
  cmake_host_system_information(RESULT _${key} QUERY ${key})
endforeach()
set(TEST_STRING "Hello world")
configure_file(config.h.in config.h @ONLY)
add_executable(cmake_host_system_information main.cc)
target_include_directories(cmake_host_system_information PRIVATE ${CMAKE_BINARY_DIR})


