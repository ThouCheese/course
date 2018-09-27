#include <iostream>

int main()
{
    while (true)
    {
        std::cout << "? ";
        std::string line;
        if (not getline(std::cin, line))
            break;
        if (not line.empty())
        {
            std::cout << line << '\n';
            break;
        }
    }
    size_t empty_lines = 0;
    while (true)
    {
        std::cout << "? ";
        std::string line;
        if (not getline(std::cin, line))
            break;
        if (line.empty())
            ++empty_lines;
        else
        {
            for (size_t index = 0; index != empty_lines; ++index)
                std::cout << '\n';
            std::cout << line << '\n';
        }
    }
}