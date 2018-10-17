#include "strings.ih"

void Strings::add(string the_next_string)
{
    ensure_capacity();
    d_str[d_size] = new string(the_next_string);
    ++d_size;
}