#include "main.ih"

int main()
{
    size_t size = 5;
    Person list[size];
    read_all(list, size);
    print_all(list, size);
}