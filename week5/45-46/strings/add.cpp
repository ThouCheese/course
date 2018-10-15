#include "strings.ih"

void Strings::add(string the_next_string)
{
    realloc(d_size + 1);
    d_str[d_size - 1] = the_next_string;
}