#include "strings.ih"

string **Strings::raw_pointers(size_t capacity) const
{

    return new string*[capacity];
}