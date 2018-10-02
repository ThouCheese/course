#include "main.h"

void print_all(Person const people[], size_t const size)
{
    for (size_t index = 0; index != size; ++index)
    {   
        Person person = people[index];
        person.insert(std::cout);
    }
}