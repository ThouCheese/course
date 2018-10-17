#include "strings.ih"

Strings::Strings(char **env)
    :
        Strings()
{
    int amount = 0;
    while (*(env + amount))
        ++amount;
    init(amount, env);
}