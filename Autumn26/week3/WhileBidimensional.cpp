#include <iostream>

int main()
{
    int n, x = 0;
    std::cin >> n;
    while (x < n)
    {
        int c = 0;
        while (c < n)
        {
            std::cout << "*";
            c++;
        }
        std::cout << std::endl;
        x++;
    }
}
