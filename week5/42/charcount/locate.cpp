#include "charcount.ih"

Action CharCount::locate(char ch)
{
    if (not d_char_info.ptr)
        return Action::APPEND;
    for (size_t index = 0; index != d_char_info.nChar; ++index)
    {
        char cur_char = d_char_info.ptr[index].ch;
        if (cur_char == ch)
        {
            d_work_index = index;
            return Action::ADD;
        }
        else if (cur_char > ch)
        {
            d_work_index = index;
            return Action::INSERT;
        }
    }
    return Action::APPEND;
}