#include "main.ih"

void print_subjects(Subject const *subjects, size_t const size)
{
    for (size_t index = 0; index != size; ++index)
        std::cout 
            << (index + 1) << ": "
            << (subjects[index].brown ? "brown (" : "blue (")
            << (subjects[index].order) << ")\n";
}