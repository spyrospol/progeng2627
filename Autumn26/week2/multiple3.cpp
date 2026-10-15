#include <iostream>

int main()
{

    int n, div;
    std::cout << "please enter a number" << std::endl;
    std::cin >> n;

    div = n % 3;

    if (div == 0)
    {

        std::cout << "the number is a multiple of 3";
    }

    else
    {

        std::cout << "the number is not  multiple of 3";
    }
}