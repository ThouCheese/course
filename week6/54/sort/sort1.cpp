#include "sort.ih"

Sort::Sort(int (*fn_ptr)(std::string**, std::string**))
    :
        d_fn_ptr(fn_ptr)
{}
