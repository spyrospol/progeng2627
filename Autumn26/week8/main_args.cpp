#include <iostream>

// argc is the number of command line arguments
// argv is an array of C-style strings
// we'll see what this means more in detail later on

int main(int argc, char *argv[])
{

    for (int i = 0; i < argc; i++)
    {
        std::cout << argv[i] << std::endl;
    }
}