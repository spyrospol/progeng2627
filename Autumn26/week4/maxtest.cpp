#include <iostream>

int max(int x, int y, int z)
{
    if (x >= y && x >= z)
    {
        return x;
    }

    else if (y > x && y > z)
    {
        return y;
    }

    else
    {
        return z;
    }
}

int main()
{
    std::cout << (max(4, 3, 1) == 4) << std::endl;
    std::cout << (max(4, 4, 5) == 5) << std::endl;
    std::cout << (max(-4, 3, -2) == 3) << std::endl;
    std::cout << (max(2, 12, 33) == 33) << std::endl;
}