#include "charcount.ih"

void CharCount::insert(char ch)
{
    if (++d_char_info.nChar == d_capacity)
        enlarge();
    for (size_t index = d_capacity; --index != d_work_index;)
        d_char_info.ptr[index] = d_char_info.ptr[index - 1];
    d_char_info.ptr[d_work_index] = Char(ch);
}