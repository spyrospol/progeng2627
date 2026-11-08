#include <iostream>
#include <vector>
#include <cmath>

int search_vector(int n, const std::vector<int> &vin)
{

    if (vin.size() == 0)
    {
        return -1;
    }

    for (int i = 1; i < vin.size(); i++)
    {
        if (vin[i] == n)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    std::vector<int> empty;
    std::vector<int> v{4, 7, 2, 7, 9};

    std::cout << (search_vector(3, empty) == -1) << std::endl; // empty vector
    std::cout << (search_vector(4, v) == 0) << std::endl;      // first element
    std::cout << (search_vector(9, v) == 4) << std::endl;      // last element
    std::cout << (search_vector(2, v) == 2) << std::endl;      // middle
    std::cout << (search_vector(7, v) == 1) << std::endl;      // duplicate -> first occurrence
    std::cout << (search_vector(5, v) == -1) << std::endl;     // not present
}