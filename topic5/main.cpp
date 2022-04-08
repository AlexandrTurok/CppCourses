
#include <iostream>
#include "Int.h"

int main()
{
    Int a(1);
    Int b = a;

    a = 9;

    Int c = a + b;
    c = a - b;
    c = a * b;
    c = a / b;
    c = a + 2;
    c = a - 1;
    c = c / 2;
    c = c * 2;



    std::cout << a << std::endl;
    std::cout << b << std::endl;

    return 0;
}
