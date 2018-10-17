#include "strings.ih"

void Strings::destroy()
{
    for (size_t index = 0; index != d_size; ++index)
        d_str[index].~basic_string();
    operator delete(d_str);
}