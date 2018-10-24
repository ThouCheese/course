#include "main.ih"

void print(size_t number_of_prints, int argc)
{
    ostream out(0);
    out.rdbuf(cout.rdbuf());
    out.setstate(ios::failbit);
    for (size_t iter = 0; iter != number_of_prints; ++iter)
        // if (out.good())
            out << "Nr. of command line arguments " << argc << '\n';
}