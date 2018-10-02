#include "main.h"

void read_all(Person people[], size_t const size)
{
    for (size_t index = 0; index != size; ++index)
    {   
        Person person = people[index];
        std::cout << '?';
        person.extract(std::cin);
    }
}