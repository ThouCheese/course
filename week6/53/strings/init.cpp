#include "strings.ih"

void Strings::init(int argc, char **argv)
{
    resize(argc);
    for (char **ptr = argv; ptr != argv + argc; ++ptr)
        add(string(*ptr));
}