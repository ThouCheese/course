#ifndef STRINGS_H
#define STRINGS_H

#include "../stringsdata/stringsdata.h"
#include <string>
#include <istream>

class Strings 
{
    size_t d_size = 0;                    // number of stored strings
    size_t d_capacity = 0;
    std::string *d_str = 0;               // pointer to internal data
public:
    Strings();
    Strings(std::istream &in);
    Strings(char **env);
    Strings(int argc, char *argv[]);
    ~Strings();
    size_t size() const;
    std::string const &at(size_t index) const;
    std::string &at(size_t index);
    StringsData release(); // danger! leaks!
    void add(std::string the_next_string);

    size_t capacity() const;

private:
    std::string *data();

    // replaces the body of `Strings(char **env)` for reuse
    void init(int argc, char **argv);
    void reserve(size_t capacity);
    void resize(size_t capacity);
    static std::string *raw_memory(size_t capacity);
    void destroy();
    void ensure_capacity();

    std::string &at_backdoor(size_t index) const;
    void realloc(size_t new_size);
};

#endif // STRINGS_H
