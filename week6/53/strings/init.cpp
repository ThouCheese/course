#include "strings.ih"

// this constructor functionality is encapuslated in a separate function to
// enable easy reuse of code in string3 and strings4
void Strings::init(int argc, char **argv)
{
    resize(argc);
    d_capacity = argc;
    for (char **ptr = argv; ptr != argv + argc; ++ptr)
        add(string(*ptr));
}