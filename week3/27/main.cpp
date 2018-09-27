#include "main.h"

int main(int argc, char const *argv[])
{
    if (argc != 3)
    {
        cerr << "Usage: program nTotal nRequired";
        return 1;
    }
    nTotal = std::stoul(argv[1]);
    nRequired = std::stoul(argv[2]);
    if (nTotal < nRequired) 
    {
        cerr << "nTotal must be greater than nRequired\n";
        return 1;
    }
    bool *bits = new bool[nTotal];
    combis(-1, bits);
}
