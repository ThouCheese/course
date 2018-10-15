#include "strings.ih"

Strings::Strings(int argc, char *argv[])
    :
        d_size(argc),
        d_str(new string[argc])
{
    for (size_t index = 0; index != static_cast<size_t>(argc); ++index)
        d_str[index] = argv[index];
}