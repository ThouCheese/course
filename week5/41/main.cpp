#include <iostream>

extern char **environ;

int main(int argc, char *argv[])
{
    int offset = environ - argv;

    for (char **arg_ptr = argv; *arg_ptr and *(arg_ptr + offset); ++arg_ptr)
        std::cout << *(arg_ptr + offset) << '\n';

    for (char **env_ptr = environ; *env_ptr and *(env_ptr - offset); ++env_ptr)
        std::cout << *(env_ptr - offset) << '\n';
}
