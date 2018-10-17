#include "strings.ih"

string *Strings::raw_strings(size_t capacity) const
{
    return static_cast<string *>(operator new(capacity * sizeof(string)));
}