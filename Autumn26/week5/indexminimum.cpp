#include <iostream>
#include <vector>

int min_vector_element(const std::vector<double> &vin)
{
    if (vin.size() == 0)
    {
        return -1;
    }

    double min = vin[0];
    int mini = 0;

    for (int i = 1; i < vin.size(); i++)
    {
        if (vin[i] < min)
        {
            min = vin[i];
            mini = i;
        }
    }

    return mini;
}

int main()
{
    std::vector<double> empty;
    std::vector<double> v1{3, 0.5, -1};   // min at end
    std::vector<double> v2{-4, 2, 7};     // min at start (catches bug 3)
    std::vector<double> v3{5, 1, 9, 3};   // min in middle
    std::vector<double> v4{2, -1, 4, -1}; // tie -> first occurrence
    std::vector<double> v5{42};           // single element

    std::cout << (min_vector_element(empty) == -1) << std::endl;
    std::cout << (min_vector_element(v1) == 2) << std::endl;
    std::cout << (min_vector_element(v2) == 0) << std::endl;
    std::cout << (min_vector_element(v3) == 1) << std::endl;
    std::cout << (min_vector_element(v4) == 1) << std::endl;
    std::cout << (min_vector_element(v5) == 0) << std::endl;
}