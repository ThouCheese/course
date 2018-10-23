#include "strings.ih"

string &Strings::at_backdoor(size_t index) const
{
    static string empty{};
    return index < d_size ? d_str[index] : empty; 
}
