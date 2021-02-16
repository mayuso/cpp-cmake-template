#include <iostream>
#include <lib1/lib1-pub-header.h>

int main(int, char **) {
  std::cout << "Running tests...\n";
  return lib1::sum(5, 5) == 10 ? 0 : 1;
}
