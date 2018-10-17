#include "charcount.ih"

CharCount::~CharCount()
{
    for (size_t index = 0; index != d_char_info.nChar; ++index)
        d_char_info.ptr[index].~Char();
    operator delete(d_char_info.ptr);
}