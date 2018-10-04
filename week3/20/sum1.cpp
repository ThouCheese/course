#include "main.ih"

double sum(int argc, char *argv[], double result)
{
    for (size_t index = 0; index != argc; ++index)
        result += stod(argv[index]);
    return result;
}
