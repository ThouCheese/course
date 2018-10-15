#include "charcount.ih"

void CharCount::insert(char ch)
{
    Char *old = d_char_info.ptr;
    d_char_info.ptr = new Char[++d_char_info.nChar];

    size_t index;
    for (index = 0; index != d_work_index; ++index)
        d_char_info.ptr[index] = old[index];
    d_char_info.ptr[d_work_index] = Char(ch, 1);
    while (++index != d_char_info.nChar)
        d_char_info.ptr[index] = old[index - 1];

    delete[] old;
}