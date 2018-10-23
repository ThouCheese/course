#ifndef CHAR_H
#define CHAR_H

#include <cstddef>

struct Char 
{
    char ch;
    size_t count = 1;

    Char() = default;
    Char(char ch);
};

#endif // CHAR_H
