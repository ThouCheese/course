#include "charcount.ih"

void CharCount::add(char ch)
{
    d_char_info.ptr[d_work_index].count++;
}