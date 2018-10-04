#include "main.ih"

size_t count_lines()
{
    size_t line_count = 0;
    string line;
    while (getline(std::cin, line)) 
        line_count += 1;
    return line_count;
}
