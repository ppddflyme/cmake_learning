#include "message.h"

int main () {
  message_class hello("Hello");
  std::cout << hello << std::endl;
  message_class bye("bye");
  std::cout << bye << std::endl;
  return 0;
}
