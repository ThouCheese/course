#include "strings.ih"

void Strings::destroy()
{
    for (size_t index = 0; index != d_size; ++index)
        delete d_str[index];
    delete[] d_str;
}