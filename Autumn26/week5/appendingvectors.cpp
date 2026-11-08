#include <iostream>
#include <vector>

void append_vectors(const std::vector<int> &vin1, const std::vector<int> &vin2, std::vector<int> &vout)
{
    vout.clear(); // don't assume vout arrives empty

    for (int i = 0; i < vin1.size(); i++)
    {
        vout.push_back(vin1[i]);
    }
    for (int i = 0; i < vin2.size(); i++)
    {
        vout.push_back(vin2[i]);
    }
}

void print_vector(const std::vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        std::cout << v[i] << " ";
    }
    std::cout << std::endl;
}

int main()
{
    std::vector<int> a{1, 7, 3, 4};
    std::vector<int> b{2, -2, 19};
    std::vector<int> empty;
    std::vector<int> out;

    // example from the exercise
    append_vectors(a, b, out);
    print_vector(out); // 1 7 3 4 2 -2 19
    std::cout << (out == std::vector<int>{1, 7, 3, 4, 2, -2, 19}) << std::endl;

    // out is NOT empty here: checks that old contents are discarded
    append_vectors(b, a, out);
    std::cout << (out == std::vector<int>{2, -2, 19, 1, 7, 3, 4}) << std::endl;

    // edge cases
    append_vectors(empty, b, out);
    std::cout << (out == b) << std::endl;
    append_vectors(a, empty, out);
    std::cout << (out == a) << std::endl;
    append_vectors(empty, empty, out);
    std::cout << (out.size() == 0) << std::endl;
}