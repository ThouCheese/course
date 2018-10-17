#include "strings.ih"

// allocates additional capacity, without updating d_capacity, or
// intializing it. Dangerous and only used by resize
void Strings::reserve(size_t capacity)
{
    string **old = d_str;
    d_str = raw_pointers(capacity);
    if (old)
    {
        for (size_t index = 0; 
                    index != capacity and index != d_capacity; 
                    ++index)
            d_str[index] = old[index];
        delete[] old;
    }
}
