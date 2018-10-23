#include "strings.ih"


// reserves capacity, initializes it, then updates d_capacity
void Strings::resize(size_t capacity)
{
    reserve(capacity);
    for (size_t index = d_capacity; index < capacity; ++index)
        new(d_str + index) string;
    d_capacity = capacity;  
}