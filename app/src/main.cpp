#include <iostream>
#include <lib1/lib1-pub-header.h>
#include <lib2/lib2-pub-header.h>

int main(int, char **) {
  std::cout << "2 + 3 = " << lib1::sum(2, 3) << std::endl;
  std::cout << "2 * 3 = " << lib2::multiply(2, 3) << std::endl;
  return 0;
}
