#include "main.h"

int main()
{
    size_t constexpr size = 5;
    Person list[size];
    read_all(list, size);
    print_all(list, size);
}