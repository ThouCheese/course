#include "strings.ih"

Strings &Strings::operator=(Strings const &other)
{
    Strings copy{other};
    swap(copy);
    return *this;
}