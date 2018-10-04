#include "main.ih"

void read_all(Person people[], size_t const size)
{
    for (size_t index = 0; index != size; ++index)
    {   
        std::cout << '?';
        people[index].extract(std::cin);
    }
}