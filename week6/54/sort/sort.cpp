#include "sort.ih"

void Sort::sort(std::string *start, size_t count) const
{   
    qsort(start, count, sizeof(string *), 
        reinterpret_cast<int (*)(void const *, void const *)>
            (d_fn_ptr));
}