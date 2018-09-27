#include <iostream>
#include <stdlib.h>
#include <vector>

using namespace std;

struct Subject
{
    bool brown;
    size_t order;
};

void insert(Subject *subjects, 
            Subject &&subject,
            size_t position, 
            size_t length);
