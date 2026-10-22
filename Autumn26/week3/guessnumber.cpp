#include <iostream>

int main()
{
    int min, max, n, x;

    std::cout << "what is the minimum?" << std::endl;
    std::cin >> min;
    std::cout << "what is the maximum?" << std::endl;
    std::cin >> max;

    x = (min + max) / 2;
    std::cout << "is your number " << x << "?" << std::endl;
    std::cout << "higher (1), lower (-1), or correct (0)?" << std::endl;
    std::cin >> n;

    while (n != 0)
    {
        if (n == 1)
            min = x + 1; // the number is above x, so x is ruled out
        else if (n == -1)
            max = x - 1; // the number is below x, so x is ruled out

        if (min > max)
        {
            std::cout << "that's impossible, you must have answered wrong" << std::endl;
            return 1;
        }

        x = (min + max) / 2;
        std::cout << "is your number " << x << "?" << std::endl;
        std::cout << "higher (1), lower (-1), or correct (0)?" << std::endl;
        std::cin >> n;
    }

    std::cout << "found it: " << x << std::endl;
}