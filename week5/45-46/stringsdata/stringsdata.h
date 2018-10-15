#ifndef STRINGSDATA_H
#define STRINGSDATA_H

#include <cstddef>
#include <string>

struct StringsData 
{
    size_t size;
    std::string *ptr;

    StringsData(size_t size, std::string *ptr);
};

#endif // STRINGSDATA_H
