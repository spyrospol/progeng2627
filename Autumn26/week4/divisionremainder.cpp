#include <iostream>

void division(int a, int b, int &d, int &r)
{
    d = a / b;
    r = a % b;
}

int main()
{
    int a, b, d, r;
    std::cout << "enter a divided by b" << std::endl;
    std::cin >> a >> b;

    division(a, b, d, r);
    std::cout << "the division is " << d << " and the perimeter is " << r;
}