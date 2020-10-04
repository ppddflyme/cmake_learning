#include <iostream>

int main() {
#ifdef LINUX	
  std::cout << "Hello world Linux" << std::endl;
#elif WINDOWS 
  std::cout << "Hello world windows" << std::endl;  
#elif DARWIN
  std::cout << "Hello world windows" << std::endl;
#else
  std::cout << "Hello world unknown system" << std::endl;  
#endif  
  return 0;
}
