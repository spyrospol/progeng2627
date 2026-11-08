#include <iostream>
#include <vector>

int main()
{
    std::vector<int> v;
    int n, x;
    std::cout << "enter size of vector n" << std::endl;
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        std::cout << "enter a number" << std::endl;
        std::cin >> x;
        v.push_back(x);
    }

    int t;
    std::cout << "enter less than t" << std::endl;
    std::cin >> t;
    for (int i = 0; i <= v.size() - 1; i++)
    {
        if (v[i] < t)
        {
            std::cout << v[i] << std::endl;
        }
    }
}