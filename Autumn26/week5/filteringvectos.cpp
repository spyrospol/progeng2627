#include <iostream>
#include <vector>

void filter_v(const std::vector<double> &vin, double t, std::vector<double> &vout)
{
    vout.clear(); // don't assume vout arrives empty

    for (int i = 0; i < vin.size(); i++)
    {
        if (vin[i] < t)
        {
            vout.push_back(vin[i]);
        }
    }
}

void print_vector(const std::vector<double> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        std::cout << v[i] << " ";
    }
    std::cout << std::endl;
}

int main()
{
    std::vector<double> v{3, 0.5, -1, 7.2, 2, 5};
    std::vector<double> empty;
    std::vector<double> out;

    filter_v(v, 3, out);
    print_vector(out);                                                  // 0.5 -1 2
    std::cout << (out == std::vector<double>{0.5, -1, 2}) << std::endl; // strict: 3 excluded, order kept

    filter_v(v, 100, out);                // out not empty here: old contents must go
    std::cout << (out == v) << std::endl; // all pass

    filter_v(v, -5, out);
    std::cout << (out.size() == 0) << std::endl; // none pass

    filter_v(empty, 3, out);
    std::cout << (out.size() == 0) << std::endl; // empty input
}