#include "main.h"

void fun2(string const &s)
{
    size_t sum = 0;
    for (size_t idx = 0; idx < s.length(); ++idx)
        sum += s[idx];
}
