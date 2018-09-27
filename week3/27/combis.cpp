#include "main.h"

void combis(int idx, bool bits[])
{
    size_t cur_total = 0;
    for (size_t index = 0; idx > int(index); ++index)
        cur_total += bits[index];
    for (size_t index = idx; index != nTotal;)
    {   
        ++index;
        if (cur_total + (nTotal - index) < nRequired - 1)
            break;
        bits[index] = true;
        combis(index, bits);
        bits[index] = false;
    }
    if (idx == -1)
        return;
    if (cur_total >= nRequired)
        print(bits);
}
