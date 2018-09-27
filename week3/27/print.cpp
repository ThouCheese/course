#include "main.h"

void print(bool bits[])
{
    for (size_t index = 0; index != nTotal; ++index)
        if (bits[index])
            std::cout << (index + 1);
    std::cout << '\n';
}
