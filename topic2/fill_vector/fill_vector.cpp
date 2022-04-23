#include <vector>
#include <algorithm>
#include <iostream>

void show_vector(auto vec)
{
    for (auto val : vec)
    {
        std::cout << val << ' ';
    }
    std::cout << '\n';
}

int main()
{
    // Fill a vector
    std::vector<int>  vec1{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    show_vector(vec1);
    auto half_vec = vec1.begin() + vec1.size()/2;
    std::vector<int> vec2(vec1.size()/2);
    //Fill vec2 with second part of vec1
    std::copy(half_vec, vec1.end(), vec2.begin());// assign
    show_vector(vec2);
    return 0;
}