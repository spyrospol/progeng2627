#include <iostream>

int main()
{
    int n, i = 0, max;
    std::cin >> n;
    max = n;

    while (n != 1)
    {
        if (n % 2 == 0)
        {
            n = n / 2;
        }

        else
        {
            n = 3 * n + 1;
        }
        std::cout << n << "\t";
        i++;
        if (n > max)
        {
            max = n;
        }
    }
    std::cout << i << " steps taken" << std::endl;
    std::cout << "max number calculated was: " << max;
}