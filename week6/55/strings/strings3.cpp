#include "strings.ih"

Strings::Strings(char **env)
{
    int amount = 0;
    while (*(env + amount))
        ++amount;
    init(amount, env);
}