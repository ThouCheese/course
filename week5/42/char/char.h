#ifndef CHAR_H
#define CHAR_H

#include <cstddef>

struct Char 
{
    char ch;
    size_t count;

    Char() = default;
    Char(char ch, size_t count);
};

#endif // CHAR_H
