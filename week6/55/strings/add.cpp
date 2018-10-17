#include "strings.ih"

void Strings::add(string the_next_string)
{
    ensure_capacity();
    new(d_str + d_size) string(the_next_string);
    ++d_size;
}
