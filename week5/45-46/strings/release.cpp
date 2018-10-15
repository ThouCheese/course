#include "strings.ih"

StringsData Strings::release()
{
    StringsData data(d_size, d_str);
    Strings();
    return data;
}