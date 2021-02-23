#include <iostream>
#include <lib1/lib1.h>
#include <lib2/lib2.h>

int main(int, char **) {
    Lib1* lib1 = new Lib1();
    Lib2* lib2 = new Lib2();
    std::cout << "2 + 3 = " << lib1->sum(2, 3) << std::endl;
    std::cout << "4 + 5 = " << Lib1::sum_static(4, 5) << std::endl;
    std::cout << "2 * 3 = " << lib2->multiply(2, 3) << std::endl;
    std::cout << "4 * 5 = " << Lib2::multiply_static(4, 5) << std::endl;
    return 0;
}
