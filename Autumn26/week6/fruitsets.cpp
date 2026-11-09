#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <cstdlib>

int search_vector(std::string s, const std::vector<std::string> &vin)
{
    for (int i = 0; i < vin.size(); i++)
    {
        if (vin[i] == s)
        {
            return i;
        }
    }
    return -1;
}

void union_vector(const std::vector<std::string> &vin1, const std::vector<std::string> &vin2, std::vector<std::string> &vout)
{
    vout.clear();

    for (int i = 0; i < vin1.size(); i++)
    {
        if (search_vector(vin1[i], vout) == -1)
        { // skip duplicates
            vout.push_back(vin1[i]);
        }
    }
    for (int i = 0; i < vin2.size(); i++)
    {
        if (search_vector(vin2[i], vout) == -1)
        { // only add if not already there
            vout.push_back(vin2[i]);
        }
    }
}

void intersection_vector(const std::vector<std::string> &vin1, const std::vector<std::string> &vin2, std::vector<std::string> &vout)
{
    vout.clear();

    for (int i = 0; i < vin1.size(); i++)
    {
        if (search_vector(vin1[i], vin2) != -1 && // in both
            search_vector(vin1[i], vout) == -1)
        { // not added yet
            vout.push_back(vin1[i]);
        }
    }
}

int main()
{
    std::string name1, name2;
    std::cout << "first input file: ";
    std::cin >> name1;
    std::cout << "second input file: ";
    std::cin >> name2;

    std::ifstream infile1, infile2;
    infile1.open(name1);
    if (!infile1.is_open())
    {
        std::cout << "error opening " << name1 << std::endl;
        return EXIT_FAILURE;
    }
    infile2.open(name2);
    if (!infile2.is_open())
    {
        std::cout << "error opening " << name2 << std::endl;
        return EXIT_FAILURE;
    }

    std::vector<std::string> w1, w2;
    std::string tmp;

    while (infile1 >> tmp)
    {
        w1.push_back(tmp);
    }
    infile1.close();

    while (infile2 >> tmp)
    {
        w2.push_back(tmp);
    }
    infile2.close();

    std::vector<std::string> u, in;
    union_vector(w1, w2, u);
    intersection_vector(w1, w2, in);

    std::ofstream outu, outi;
    outu.open("union.txt");
    if (!outu.is_open())
    {
        std::cout << "error opening union.txt" << std::endl;
        return EXIT_FAILURE;
    }
    for (int i = 0; i < u.size(); i++)
    {
        outu << u[i] << std::endl;
    }
    outu.close();

    outi.open("intersection.txt");
    if (!outi.is_open())
    {
        std::cout << "error opening intersection.txt" << std::endl;
        return EXIT_FAILURE;
    }
    for (int i = 0; i < in.size(); i++)
    {
        outi << in[i] << std::endl;
    }
    outi.close();
}