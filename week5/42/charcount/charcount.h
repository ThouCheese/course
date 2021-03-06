#ifndef CHARCOUNT_H
#define CHARCOUNT_H

#include "../enums/action.h"
#include "../charinfo/charinfo.h"
#include <iostream>

class CharCount 
{
    size_t d_work_index = 0;
    CharInfo d_char_info;
public:
    void count(std::istream &in);
    CharInfo const &info() const;

private:
    Action locate(char ch);
    void add(char ch);
    void insert(char ch);
    void append(char ch);
};

#endif // CHARCOUNT_H
