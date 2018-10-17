#include "charcount.ih"

void CharCount::append(char ch)
{
    if (++d_char_info.nChar == d_capacity)
        enlarge();
    d_char_info.ptr[d_char_info.nChar - 1] = Char(ch, 1);
}
