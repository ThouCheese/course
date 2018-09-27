#include "main.h"

void count_chars()
{
    size_t result = 0;
    while (true) 
    {
        std::string line;
        if (not getline(std::cin, line))
            break;
        result += line.length() + 1;
    }
    std::cout << result << '\n';
}