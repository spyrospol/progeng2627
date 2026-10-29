#include <iostream>
#include <cmath>

void calculator(double w, double h, double &A, double &P)
{
    P = 2 * (w + h);
    A = w * h;
}

int main()
{
    double x1, x2, area, perimeter;
    std::cout << "enter width and height" << std::endl;
    std::cin >> x1 >> x2;

    calculator(x1, x2, area, perimeter);
    std::cout << "the area is " << area << " and the perimeter is " << perimeter;
}