#include "strings.ih"

Strings::Strings(Strings &&other)
    :
        d_size(other.d_size),
        d_capacity(other.d_capacity),
        d_str(other.d_str)
{
    other.d_str = NULL;
    other.d_size = 0;
}