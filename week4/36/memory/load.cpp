#include "memory.ih"

size_t Memory::load(size_t const index) const
{
    if (index >= RAM::SIZE)
        return 0;
    return d_data[index];
}
