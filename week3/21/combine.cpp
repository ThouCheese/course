#include "main.h"

ReturnValues combine(int argc, char const *argv[])
{
    ReturnValues result{false, 0, ""};
    if (argc == 1)
        return result;
    result.nr = std::stoul(argv[1]);
    if (argc < result.nr or result.nr == 0)
        return result;
    result.value = argv[result.nr - 1];
    result.ok = true;
    return result;
}