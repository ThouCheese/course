#include "main.ih"

void combis(size_t idx, bool bits[])
{
    size_t cur_total = 0;
    for (size_t index = 0; index != idx; ++index)
        cur_total += bits[index];
    for (size_t index = idx; index != nTotal; ++index)
    {
        if (cur_total + (nTotal - index) < nRequired)
            break;
        bits[index] = true;
        combis(index + 1, bits);
        bits[index] = false;
    }
    if (cur_total >= nRequired)
        print(bits);
}
