#include <iostream>
#include <lib2/lib2.h>

int main(int, char **) {
  std::cout << "Running tests...\n";
  Lib2* lib2 = new Lib2();
  return lib2->multiply(4, 4) == 16  ? 0 : 1;
  return Lib2::multiply_static(5, 5) == 25  ? 0 : 1;
}
