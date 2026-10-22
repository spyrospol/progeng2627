#include <iostream>

int main()
{
    int n, sum = 0;
    std::cout << "enter a number:" << std::endl;
    std::cin >> n;

    while (n != 0)
    {
        sum = n + sum;
        std::cout << "the sum so far is:" << std::endl;
        std::cout << sum << std::endl;
        std::cout << "enter a number:" << std::endl;
        std::cin >> n;
    }
}