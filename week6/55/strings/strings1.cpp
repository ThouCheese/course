#include "strings.ih"

Strings::Strings()
{
    d_capacity = 1;
    d_size = 0;
    reserve(1);
}
