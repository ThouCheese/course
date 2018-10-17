#include "filter.ih"

bool Filter::getline(string &line)
{
    if (d_index == d_strings.size())
        return false;
    line = d_strings.at(d_index++);
    return true;
}