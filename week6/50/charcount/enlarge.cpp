#include "charcount.ih"

void CharCount::enlarge()
{
    Char *old = d_char_info.ptr;
    d_char_info.ptr = raw_capacity(d_capacity * 2);

    for (size_t index = 0; index != d_capacity; ++index)
    {
        d_char_info.ptr[index] = old[index];
        old[index].~Char();
    }
    operator delete(old);
    d_capacity *= 2;
}