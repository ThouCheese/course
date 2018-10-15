#include "strings.ih"

Strings::Strings(char **env)
    :
        Strings()
{
    while (*env)
        add(*(env++));
}