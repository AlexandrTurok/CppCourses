#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
#include <ctime>  
#include <functional>
#include "Int.h"

template <class it, class T, typename _Compare>
it my_find(it start, it end, T val, _Compare comp)
{
    for (;start != end; start++)
    {
        if(comp(*start, val))
            return start;
    }
    return end;
}

template <class it, typename _Compare>
void my_sort(it start, it end, _Compare comp)
{
    for(size_t i=0; i < end-start; ++i)
    {
        for (size_t j=0; j < end-start-1; ++j){
            if (comp(*(start + i), *(start +j))){
                auto temp = *(start + i);
                *(start + i) = *(start +j) ;
                *(start + j) = temp;
            }
        }
    }
}


int main ()
{
    std::mt19937 gen(time(0));

    std::vector<Int> vec(100);
    std::generate(vec.begin(), vec.end(), gen);

    std::cout << "Created vector: " << '\n';
    std::for_each(vec.begin(), vec.end(), [](Int a){ std::cout << a << ' ';});
    std::cout << "\n\n";

    int counter = 0;
    auto val = my_find(vec.begin(), vec.end(), vec[5], [&counter](Int a, Int b){counter++; return a == b;});

    std::cout << "Find value:  " << vec[5] << '\n';
    if(val != vec.end()){
        std::cout<< "value found: " << *val << '\n';
    }
    else
        std::cout<< "Not found" << '\n';
    std::cout << "Iterations was done: " << counter << "\n\n";

    //Make a compy of vector
    std::vector<Int> vec2(vec);
    // Sorting
    // My sorting algoritm
    counter = 0;
    my_sort(vec.begin(), vec.end(), [&counter](Int a, Int b){if(a<b) counter++; return a < b;});
    std::for_each(vec.begin(), vec.end(), [](Int a){ std::cout << a << ' ';});
    std::cout << '\n';
    std::cout << "Iterations for sorting in my algorithm was done: " << counter << "\n\n";

    // Standard sorting algorithm
    counter = 0;
    std::sort(vec2.begin(), vec2.end(), [&counter](Int a, Int b){if(a<b) counter++; return a < b;});
    std::for_each(vec2.begin(), vec2.end(), [](Int a){ std::cout << a << ' ';});
    std::cout << '\n';
    std::cout << "Iterations for sorting in standard algorithm was done: " << counter << "\n\n";


    return 0;
}