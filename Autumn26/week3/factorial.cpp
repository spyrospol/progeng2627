#include <iostream>

int main()
{
    int n, sum = 1;
    std::cout << "enter a number" << std::endl;
    std::cin >> n;

    if (n < 0)
    {

        std::cout << "factiorial is not defined for negative numbers" << std::endl;
    }
    for (int i = 2; i <= n; i++)
    {
        sum *= i;
    }

    std::cout << n << "! = " << sum;
}