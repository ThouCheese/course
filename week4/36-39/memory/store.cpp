#include "memory.ih"

void Memory::store(size_t const value, size_t const index)
{
    if (index >= RAM::SIZE)
        return;
    d_data[index] = value;
}
