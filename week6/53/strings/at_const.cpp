#include "strings.ih"

string const &Strings::at(size_t index) const
{
    return at_backdoor(index);
}