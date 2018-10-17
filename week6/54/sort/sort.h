#ifndef SORT_H
#define SORT_H

#include <string>

class Sort
{
    int (*d_fn_ptr)(std::string**, std::string**);

public:
    Sort(int (*fn_ptr)(std::string**, std::string**));
    void sort(std::string *start, size_t count) const;
};

#endif // SORT_H

