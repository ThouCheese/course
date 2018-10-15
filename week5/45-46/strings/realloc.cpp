#include "strings.ih"

void Strings::realloc(size_t new_size)
{
    string *old = d_str;
    d_str = new string[new_size];
    if (old)
        for (size_t index = 0; index != d_size and index != new_size; ++index)
            d_str[index] = old[index];
    d_size = new_size;
    if (old)
        delete[] old;
}