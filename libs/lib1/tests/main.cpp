#include <iostream>
#include <lib1/lib1.h>

int main(int, char **) {
  std::cout << "Running tests...\n";
  Lib1* lib1 = new Lib1();
  return lib1->sum(4,4) == 8 ? 0 : 1;
  return Lib1::sum_static(5, 5) == 10 ? 0 : 1;
}
