#ifndef CHARCOUNT_H
#define CHARCOUNT_H

#include "../enums/action.h"
#include "../charinfo/charinfo.h"
#include <iostream>

class CharCount 
{
    size_t d_work_index = 0;
    size_t d_capacity = 10;
    size_t theoretical_max = 1000;
    CharInfo d_char_info;
public:
    CharCount();
    ~CharCount();
    void count(std::istream &in);
    CharInfo const &info() const;
    size_t capacity() const;

private:
    Action locate(char ch);
    void add(char ch);
    void insert(char ch);
    void append(char ch);
    Char *raw_capacity(size_t capacity) const; // leaky!
    void enlarge();
};

#endif // CHARCOUNT_H
