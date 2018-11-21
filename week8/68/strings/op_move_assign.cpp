#include "strings.ih"

Strings &Strings::operator=(Strings &&other)
{
    return *this = Strings(move(other));
}