#include <iostream>

int main()
{
    char *ptr = "hoi\n";
    char arr[] = "hoi\n";
    ptr[1] = '0';
    arr[1] = '0';
    ++arr;
    std::cout << *ptr << '\n';
    std::cout << *arr << '\n';
}