#include <iostream>
#include <string.h>
using std::cout;

int main(int argc, char ** argv) {
  if (argc < 2) {
    return -1;
  }
  if (strncmp(argv[1], "-h", strlen(argv[1])) == 0) {
    cout << "output.cc";
  } else {
    return -1;
  }
  return 0;
}
