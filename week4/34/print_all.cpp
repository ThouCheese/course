#include "main.ih"

void print_all(Person const people[], size_t const size)
{
    for (size_t index = 0; index != size; ++index)
        people[index].insert(std::cout);
}