#include <iostream>
#include "config.h"
using std::cout;
using std::endl;

int main() {
  cout << "NUMBER_OF_LOGICAL_CORES:" <<  NUMBER_OF_LOGICAL_CORES <<endl; //Number of logical cores
  cout << "NUMBER_OF_PHYSICAL_CORES:" << NUMBER_OF_PHYSICAL_CORES <<endl; //Number of physical cores
  cout << "HOSTNAME:" << HOSTNAME <<endl; //Hostname
  cout << "FQDN:" << FQDN <<endl; // Fully qualified domain name
  cout << "TOTAL_VIRTUAL_MEMORY:" << TOTAL_VIRTUAL_MEMORY  <<endl; //Total virtual memory in MiB 1
  cout << "AVAILABLE_VIRTUAL_MEMORY:" << AVAILABLE_VIRTUAL_MEMORY <<endl; //Available virtual memory in MiB 1
  cout << "TOTAL_PHYSICAL_MEMORY:" << TOTAL_PHYSICAL_MEMORY <<endl; //Total physical memory in MiB 1
  cout << "AVAILABLE_PHYSICAL_MEMORY:" << AVAILABLE_PHYSICAL_MEMORY <<endl; //Available physical memory in MiB 1
  cout << "IS_64BIT:" << IS_64BIT <<endl; //One if processor is 64Bit
  cout << "HAS_FPU:" << HAS_FPU <<endl; //One if processor has floating point unit
  cout << "HAS_MMX:" << HAS_MMX <<endl; //One if processor supports MMX instructions
  cout << "HAS_MMX_PLUS:" << HAS_MMX_PLUS <<endl; //One if processor supports Ext. MMX instructions
  cout << "HAS_SSE:" << HAS_SSE <<endl; //One if processor supports SSE instructions
  cout << "HAS_SSE2:" << HAS_SSE2 <<endl; //One if processor supports SSE2 instructions
  cout << "HAS_SSE_FP:" << HAS_SSE_FP <<endl; //One if processor supports SSE FP instructions
  cout << "HAS_SSE_MMX:" << HAS_SSE_MMX <<endl; //One if processor supports SSE MMX instructions
  cout << "HAS_AMD_3DNOW:" << HAS_AMD_3DNOW <<endl; //One if processor supports 3DNow instructions
  cout << "HAS_AMD_3DNOW_PLUS:" << HAS_AMD_3DNOW_PLUS <<endl; //One if processor supports 3DNow+ instructions
  cout << "HAS_IA64:" << HAS_IA64 <<endl; //One if IA64 processor emulating x86
  cout << "HAS_SERIAL_NUMBER:" << HAS_SERIAL_NUMBER <<endl; //One if processor has serial number
  cout << "PROCESSOR_SERIAL_NUMBER:" << PROCESSOR_SERIAL_NUMBER <<endl; //Processor serial number
  cout << "PROCESSOR_NAME:" << PROCESSOR_NAME <<endl; //Human readable processor name
  cout << "PROCESSOR_DESCRIPTION:" << PROCESSOR_DESCRIPTION <<endl; //Human readable full processor description
  cout << "OS_NAME:" << OS_NAME <<endl; //See CMAKE_HOST_SYSTEM_NAME
  cout << "OS_RELEASE:" << OS_RELEASE <<endl; //The OS sub-type e.g. on Windows Professional
  cout << "OS_VERSION:" << OS_VERSION <<endl; //The OS build ID
  cout << "OS_PLATFORM:" << OS_PLATFORM <<endl; //See CMAKE_HOST_SYSTEM_PROCESSOR	
  cout << "TEST_STRING:" << TEST_STRING << endl; // njust for test
  return 0;
}

