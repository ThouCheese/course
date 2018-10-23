#include "charcount.ih"

Action CharCount::locate(char ch)
{
    if (not d_char_info.ptr)
        return Action::APPEND;
    for (size_t index = 0; index != d_char_info.nChar; ++index)
    {
        char cur_char = d_char_info.ptr[index].ch;
        if (cur_char == ch) // set d_work_index to the right value, return ADD
            return d_work_index = index, Action::ADD;
        else if (cur_char > ch) // same but with INSERT
            return d_work_index = index, Action::INSERT;
    }
    return Action::APPEND;
}