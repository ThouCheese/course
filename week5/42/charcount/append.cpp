#include "charcount.ih"

void CharCount::append(char ch)
{
    Char *old = d_char_info.ptr;
    if (not old)
    {
        d_char_info.nChar = 1;
        d_char_info.ptr = new Char[1];
        d_char_info.ptr[0] = Char(ch, 1);
        return;
    }
    d_char_info.ptr = new Char[++d_char_info.nChar];
    for (size_t index = 0; index != d_char_info.nChar - 1; ++index)
        d_char_info.ptr[index] = old[index];
    delete[] old;
    d_char_info.ptr[d_char_info.nChar - 1] = Char(ch, 1);
}
