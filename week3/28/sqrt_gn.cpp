#include "main.ih"

size_t sqrtGn(size_t input)
{
    if (input / 100 == 0)
        return lookupSqrt(input);
    else
    {
        size_t test = sqrtGn(input / 100);
        size_t a = nextSqrt(input, test);
        return a;
    }
}