#include <iostream>
#include <vector>

int main()
{
    std::vector<int> v;
    int n;
    std::cout << "enter size of vector n" << std::endl;
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        std::cout << "enter a number" << std::endl;
        std::cin >> x;
        v.push_back(x);
    }

    int s, count = 0;
    std::cout << "enter less than s" << std::endl;
    std::cin >> s;

    std::vector<int> index;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == s)
        {
            count++;
            index.push_back(i);
        }
    }
    if (count == 0)
    {
        std::cout << "there are no occurrences of " << s << std::endl;
    }
    else
    {
        std::cout << "there are " << count << " occurrences of " << s << " at indices: " << std::endl;
        for (int i = 0; i < index.size(); i++)
        {
            std::cout << index[i] << std::endl;
        }
    }
}