#include "main.ih"

void print(bool bits[])
{
    for (size_t index = 0; index != nTotal; ++index)
        if (bits[index])
            std::cout << index;
    std::cout << '\n';
}
