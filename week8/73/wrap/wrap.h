#ifndef WRAP_H
#define WRAP_H

#include "../data/data.h"
// #include "../strings/strings.h"
#include <string>
typedef int Strings;

class Wrap
{
    DataType d_type;
    Data d_data;
public:
    Wrap(Strings &strings);
    Wrap(std::string &string);
    Wrap(double value);
    Wrap(Wrap &other);
    Wrap(Wrap &&other);
    ~Wrap();

    Wrap operator=(Wrap &other);
    Wrap operator=(Wrap &&other);

    DataType get_type() const;
    Strings const &get_strings() const;
    std::string const &get_string() const;
    double get_double() const;

private:
    void swap(Wrap &other);
};

#endif
