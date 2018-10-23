#include "strings.ih"

string **Strings::raw_pointers(size_t capacity)
{

    return new string*[capacity];
}