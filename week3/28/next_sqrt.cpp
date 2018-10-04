#include "main.ih"

size_t nextSqrt(size_t pq, size_t lhs)
{
    size_t best = estimateB(pq, lhs);
    size_t sqrt = 10 * lhs + best;
    while (sqrt * sqrt > pq)
        sqrt = 10 * lhs + --best;
    return sqrt;
}
