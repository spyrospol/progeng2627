#include <iostream>
#include <vector>

int main()
{
    std::vector<int> v;
    int x;
    v.push_back(10);
    v.push_back(2);
    v.push_back(3);
    x = v[0] * (v[1] + v[2]);
    std::cout << x;
}