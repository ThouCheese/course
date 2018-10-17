#include "charcount.ih"

Char *CharCount::raw_capacity(size_t capacity) const
{
    return static_cast<Char *>(operator new(sizeof(CharCount) * capacity));
}