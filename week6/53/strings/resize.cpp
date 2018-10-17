#include "strings.ih"


// reserves capacity, initializes it, then updates d_capacity
void Strings::resize(size_t capacity)
{
    reserve(capacity);
    if (capacity > d_capacity)
        for (size_t index = d_capacity; index != capacity; ++index)
            d_str[index] = new string;
    d_capacity = capacity;  
}