
#include <iostream>
#include "Int.h"

int main()
{
    Int a(10);
    std::cout << "After initialisation a=" << a << '\n';
    Int b(a);
    std::cout << "b(a);      b=" << b << '\n';

    Int c;
    c = a + b;
    std::cout << "c = a + b; c=" << c << '\n';
    c = a - b;
    std::cout << "c = a - b; c=" << c << '\n';
    c = a * b;
    std::cout << "c = a * b; c=" << c << '\n';
    c = a / b;     
    std::cout << "c = a / b; c=" << c << '\n';
    c = a + 2;
    std::cout << "c = a + 2; c=" << c << '\n';
    c = a - 1;
    std::cout << "c = a - 1; c=" << c << '\n';
    c = a / 2;
    std::cout << "c = a / 2; c=" << c << '\n';
    c = a * 2;
    std::cout << "c = a * 2; c=" << c << '\n';



    return 0;
}
