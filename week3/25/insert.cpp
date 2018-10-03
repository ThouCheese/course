#include "main.ih"

void insert(Subject *subjects, 
            Subject subject,
            size_t position, 
            size_t length)
{
    for (size_t index = length - 1; index != position;)
    {
        --index;
        subjects[index + 1] = subjects[index];
    }
    subjects[position] = subject;
}