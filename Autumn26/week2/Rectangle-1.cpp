
#include <iostream>

int main()
{

    int x, y, P, A;

    std::cout << "enter length 1 of the rectangle" << std::endl;
    std::cin >> x;
    std::cout << "enter length 2" << std::endl;
    std::cin >> y;

    P = 2 * (x + y);
    A = x * y;

    std::cout << "the area of the rectangle is " << A
              << " and the perimeter is " << P << std::endl;
}