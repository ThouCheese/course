#include "strings.ih"

StringsData Strings::release()
{
    resize(d_size); // scratch all trailing memory
    StringsData data(d_size, d_str);
    d_str = 0;
    d_size = 0;
    d_capacity = 0;
    return data;
}