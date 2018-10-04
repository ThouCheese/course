#include "main.ih"

int main(int argc, char const *argv[])
{
    if (argc != 3)
    {
        cerr << "Usage: program nTotal nRequired\n";
        return 1;
    }
    nTotal = std::stoul(argv[1]);
    nRequired = std::stoul(argv[2]);
    if (nTotal < nRequired) 
    {
        cerr << "nTotal must be greater than nRequired\n";
        return 1;
    }
    bool bits[nTotal];
    combis(0, bits);
}
