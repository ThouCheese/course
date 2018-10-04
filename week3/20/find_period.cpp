#include "main.ih"

bool contains_period(size_t argc, char *argv[])
{
    for (size_t index = 0; index != argc; ++index)
        if (std::string{argv[index]}.find('.') != std::string::npos)
            return true;
    return false;
}