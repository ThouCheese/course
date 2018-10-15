#ifndef STRINGS_H
#define STRINGS_H

#include "../stringsdata/stringsdata.h"
#include <string>
#include <istream>

class Strings 
{
    size_t d_size;                     // number of stored strings
    std::string *d_str;                // pointer to `d_str` strings
    std::string d_empty;
public:
    Strings();
    Strings(std::istream &in);
    Strings(char **env);
    Strings(int argc, char *argv[]);
    size_t size() const;
    std::string *data();
    std::string const &at(size_t index) const;
    std::string &at(size_t index);
    StringsData release(); // danger! leaks!
    void add(std::string the_next_string);

private:
    std::string &at_backdoor(size_t index) const;
    void realloc(size_t new_size);
};

#endif // STRINGS_H
