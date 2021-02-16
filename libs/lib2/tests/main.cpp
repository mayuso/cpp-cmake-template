#include <iostream>
#include <lib2/lib2-pub-header.h>

int main(int, char **) {
  std::cout << "Running tests...\n";
  return lib2::multiply(5, 5) == 25  ? 0 : 1;
}
