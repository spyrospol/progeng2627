#include <iostream>
#include <cmath>

int sum(int x, int n);

int main()
{
    int x, n;
    std::cout << "enter X (base variable) then enter n (sum of n times)" << std::endl;
    std::cin >> x >> n;
    std::cout << "the sum equals: " << sum(x, n);
}

int sum(int x, int n)
{
    int total = 0;
    for (int i = 1; i <= n; i++)
    {
        total += std::pow(x, i);
    }
    return total;
}