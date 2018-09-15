#include <iostream>

int main()
{
    size_t value;
    std::cout << "give me your x: ";
    std::cin >> value;
    // if after subtracting one bit no two bits are the same we have
    // a power of two. This also works for zero, because of 
    // underflowing, so we manually check whether the value is no 0
    std::cout << (((value & (value - 1)) == 0) and value ? 
        "the value is an exact power of two\n" :
        "the value is not an exact power of two\n");
}
