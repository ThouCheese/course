#include "strings.ih"

void Strings::ensure_capacity()
{
    if (d_capacity <= d_size)
        resize(d_capacity * 2);
}