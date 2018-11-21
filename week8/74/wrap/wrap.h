#ifndef WRAP_H
#define WRAP_H

#include "../data/data.h"
// #include "../strings/strings.h"
#include <string>
typedef int Strings;

class Wrap
{
    DataType::Data d_data;
    DataType d_type;
public:
    Wrap(Strings const &strings);
    Wrap(std::string const &str);
    Wrap(double value);
    Wrap(Wrap const &other);
    Wrap(Wrap &&other);
    ~Wrap();

    Wrap &operator=(Wrap &other);
    Wrap &operator=(Wrap &&other);

    DataType get_type() const;
    Strings const &get_strings() const;
    std::string const &get_string() const;
    double get_value() const;
private:
    void swap(Wrap &other);
};

#endif
