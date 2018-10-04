// expecting the value to compute (lhs + rhs) for, and the a-term (i.e., square root estimate)
// of all but the least significant pair of digits of that value.

#include "main.ih"

size_t estimateB(size_t pq, size_t lhs)
{
    return (pq - 100 * lhs * lhs) / (20 * lhs);
}
