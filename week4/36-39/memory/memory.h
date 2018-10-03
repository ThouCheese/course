#ifndef MEMORY_H
#define MEMORY_H

#include <cstddef>

class Memory 
{
    int *d_data;
public:
    Memory();

    size_t load(size_t const index) const;
    void store(size_t const value, size_t const index);

private:
    
};

#endif // MEMORY
