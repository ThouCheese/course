#include "main.h"

void insert(Subject *subjects, 
            Subject &&subject,
            size_t position, 
            size_t length)
{
    for (size_t index = length; index != position;)
    {
        --index;
        std::cout << "Moving " << (index + 1) << " to " << index << '\n';
        subjects[index + 1] = subjects[index];
    }
    subjects[position] = subject;
}