#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <string>

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        std::cout << "error in file name" << std::endl;
        return EXIT_FAILURE;
    }

    std::ifstream infile;
    infile.open(argv[1]);

    if (!infile.is_open())
    {
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    std::string tmp;
    while (infile >> tmp)
    {
        std::cout << tmp;
    }

    infile.close();
}