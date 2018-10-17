#ifndef FILTER_H
#define FILTER_H

#include "../strings/strings.h"

class Filter 
{
    Strings const &d_strings; // store a reference because a value is woefully inefficient
    size_t d_index = 0;
public:
    Filter(Strings const &strings);
    void display();
private:
    bool getline(std::string &line);
};

#endif // FILTER_H
