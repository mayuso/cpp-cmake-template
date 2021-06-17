#include "Test.h"

#include <lib2/lib2.h>

int main(int, char **) {

  Lib2* lib2 = new Lib2();
  ASSERT_EQUAL(Lib2::multiply_static(5, 5), 25);
  ASSERT_EQUAL(Lib2::multiply_static(4, 4), 16);
}
