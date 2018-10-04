#include "main.ih"

int sum(int argc, char *argv[], int result)
{
    for (size_t index = 0; index != argc; ++index)
        result += stoi(argv[index]);
    return result;
}
