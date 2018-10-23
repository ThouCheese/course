#include "strings.ih"

// allocates additional capacity, without updating d_capacity, or
// intializing it. Dangerous and only used by resize
void Strings::reserve(size_t capacity)
{
    string *old = d_str;

    d_str = raw_memory(capacity);
    if (old)
    {
        for (size_t index = 0; 
                    index != capacity and index != d_capacity; 
                    ++index)
            // move for fairness in comparison later, alternatively, copy and 
            // call the destructor on the original, but this is more efficient
            new(d_str + index) string(move(old[index]));
        operator delete(old);
    }
}
