#ifndef DATA_H
#define DATA_H

#include "strings/strings.h"
#include <string>

enum DataType
{
    STRINGS,
    STRING,
    DOUBLE,
};

union Data
{
private:
    Strings u_words;
    std::string u_word;
    double u_value;

    Data();
public:
    Data(Strings const &strings);
    Data(std::string const &str);
    Data(double value);
    Data(Data const &data, DataType type);
    Data(Data &&data, DataType type);
    ~Data();

    void destroy(DataType type);
    void copy(DataType type, Data &data, DataType other_type);
    void move(DataType type, Data &&data, DataType other_type);
    void swap(DataType type, Data &&data, DataType other_type);

    Strings &get_strings(); // allow modifications
    std::string &get_string();
    double &get_value();
private:
    void destroy_words();
    void destroy_word();
    void destroy_value(); // not necessary, but consistent

    void copy_words(Data const &other);
    void copy_word(Data const &other);
    void copy_value(Data const &other);

    static void (Data::*s_copy[])(Data const &other);

};

#endif