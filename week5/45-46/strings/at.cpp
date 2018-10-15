#include "strings.ih"

string &Strings::at(size_t index)
{
    return at_backdoor(index);
}