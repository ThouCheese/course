#include "strings.ih"

string **Strings::storageArea()
{
    if (d_size + 1 < d_capacity)        // enough room?
        return d_str;                   // return the current memory block

    d_capacity <<= 1;                   // double the capacity
    return (this->*d_enlarge_ptr)();                  // return ptr to the enlarged space
}

