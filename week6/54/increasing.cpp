#include "main.ih"

int increasing(string const **string1, string const **string2)
{
    return (*string1)->compare(**string2);
}
