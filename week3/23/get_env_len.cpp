#include "main.ih"

size_t get_env_len()
{
    size_t length = 0;
    for (char **env = environ; *env; ++env)
        ++length;
    return length;
}