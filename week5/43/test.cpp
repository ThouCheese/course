#include <iostream>

int main()
{
    char *argv[8] = {"12345678", 
                     "hoi doeg",
                     "hallo ga"};
    argv++[0];
    std::cout << *(++argv) << '\n';
}