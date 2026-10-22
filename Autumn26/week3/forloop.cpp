#include <iostream>

int main()
{
    int x, n, sum = 1;
    std::cin >> x >> n;
    for (int i = 0; i < n; i++)
    {
        sum *= x;
    }

    std::cout << sum;
}