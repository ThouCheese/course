#include "main.ih"

bool err(int const argc, char const *argv[])
{
    if (argc != 2)
        cerr << "Usage: Wc [-c, -w, -l]\n";
    else if (argv[1][0] != '-')
        cerr << "Expected '-'\n";
    else
        return false;
    return true;
}
