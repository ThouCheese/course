#include "main.ih"

size_t partition(string list[], size_t left, size_t right)
{
    string pivot = list[left];
    size_t pivot_new = left;
    for (size_t index = left + 1; index != right + 1; ++index)
    {
        size_t char_pos = 0;
        while (tolower(list[index][char_pos]) == tolower(pivot[char_pos]))
            ++char_pos;

        if (list[index][char_pos] < pivot[char_pos])
            swap(list[++pivot_new], list[index]);
    }
    swap(list[pivot_new], list[left]);
    return pivot_new;
}