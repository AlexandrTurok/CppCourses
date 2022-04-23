#include <iostream>
#include <stdexcept>


double div_d(double a, double b)
{
    if (b == 0)
        throw std::overflow_error("Divide by zero exception");
    return a/b;
}

int main()
{
    double a, b;
    std::cout << "Input a and b: ";
    std::cin >> a >> b;

    if(std::cin.fail())
    {
        std::cerr << "Error input." << std::endl;
        std::exit(-1);
    }
    try
    {
        double c = div_d(a, b);
        std::cout << c << std::endl;
    }
    catch(std::overflow_error const& e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}