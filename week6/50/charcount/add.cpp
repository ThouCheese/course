#include "charcount.ih"

// takes the Char struct at d_work_index, and increments its count
void CharCount::add(char ch)
{
    ++d_char_info.ptr[d_work_index].count;
}