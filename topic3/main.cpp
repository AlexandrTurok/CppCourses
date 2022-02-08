#include <iostream>
#include <vector>
#include <algorithm>

// Template function for summ vectors elements
template <class T>
std::vector<T> summ(const std::vector<T>& a, const std::vector<T>& b)
{
    std::vector<T> s;
    if (a.size() != b.size())
    {
        return s;
    }

    for(int i=0; i < a.size(); ++i)
    {
        s.push_back(a[i] + b[i]);
    }
    return s;
}

// Template lambda function for output vectors elements
template <class T>
auto print = [](T n)->void {std::cout << n << ' '; };


int main()
{
    std::vector<int> vi1{1, 2, 3, 4};
    std::vector<int> vi2{4, 3, 2, 1};

    std::vector<int> visum = summ<int>(vi1, vi2);

    std::for_each(visum.begin(), visum.end(), print<int>);
    std::cout << std::endl;

    std::vector<double> vd1{1.1, 2.2, 3.3, 4.4};
    std::vector<double> vd2{4.4, 3.3, 2.2, 1.1};

    std::vector<double> vdsum = summ<double>(vd1, vd2);

    std::for_each(vdsum.begin(), vdsum.end(), print<double>);
    std::cout << std::endl;



    return 0;
}