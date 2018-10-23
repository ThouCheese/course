#include "strings.ih"

// allocates additional capacity, without updating d_capacity, or
// intializing it. Dangerous and only used by resize
string **reserve(string **old, string **new_mem, size_t capacity)
{
    if (old)
    {
        for (size_t index = 0; index != capacity; ++index)
            new_mem[index] = old[index];
        delete[] old;
    }
    return new_mem;
}

// reserves capacity, initializes it, then updates d_capacity
// also perfectly happy to reduce size
void Strings::resize(size_t capacity)
{
    d_str = reserve(d_str, raw_pointers(capacity), 
                    capacity > d_capacity ? capacity : d_capacity);
    for (size_t index = d_capacity; index < capacity; ++index)
        d_str[index] = new string;
    d_capacity = capacity;  
}