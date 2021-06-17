#include "Test.h"
#include <lib1/lib1.h>

int main(int, char **) {
  Lib1* lib1 = new Lib1();
  ASSERT_EQUAL(lib1->sum(4,4), 8);
  ASSERT_EQUAL(Lib1::sum_static(5, 5), 10);
}
