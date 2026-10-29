#include <iostream>

void myswap(double &a, double &b)
{

    double tmp;
    tmp = a;
    a = b;
    b = tmp;
}

void sort_two_numbers(double &s1, double &s2)
{
    if (s2 <= s1)
    {
        myswap(s1, s2);
    }
}

int main()
{
    double n1, n2;
    std::cout << "please enter two numbers:" << std::endl;
    std::cin >> n1 >> n2;
    sort_two_numbers(n1, n2);
    std::cout << n1 << " " << n2 << std::endl;
}