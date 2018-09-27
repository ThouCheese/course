#include <iostream>

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        std::cerr << "Usage: program NUMBER\n";
        return 1;
    }
    std::string const repeated_part = " * " + std::string(argv[1]) + " = ";
    size_t const table_number = std::stoul(argv[1]);
    for (size_t index = 0; index != 10;)
    {
        ++index;
        std::cout << index << repeated_part << index * table_number << '\n';
    }
}
