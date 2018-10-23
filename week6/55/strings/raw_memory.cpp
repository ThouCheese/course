#include "strings.ih"

string *Strings::raw_memory(size_t capacity)
{
    return static_cast<string *>(operator new(capacity * sizeof(string)));
}