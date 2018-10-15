#include "strings.ih"

Strings::Strings(istream &in)
    :
        Strings()
{
    string line;
    while (getline(in, line))
    {
        realloc(d_size + 1);
        d_str[d_size - 1] = line;
    }
}