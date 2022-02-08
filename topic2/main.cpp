#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> vec{2, 5, 6, 8, 1, 3, 4, 0};

int main()
{
    // Lambda for output to cout
    auto print = [](int n)->void {std::cout << n << ' '; };

    std::for_each(vec.begin(), vec.end(), print);
    std::cout << std::endl;

    // Lambda for sort and cout iterations

    int count = 0;
    auto sort = [&count](int a, int b)-> bool 
    { 
        ++ count;
        return a < b;
    };

    std::sort(vec.begin(), vec.end(), sort);
    std::for_each(vec.begin(), vec.end(), print);
    std::cout << std::endl;
    std::cout << "Iterations: " << count << std::endl;

    return 0;
}