#include <iostream>

int main()
{
    size_t line_number = 0;
    size_t lines_printed = 0;
    while (true)
    {
        std::string line;
        if (not getline(std::cin, line))
            break;
        bool empty = line == "";
        if (line_number == 0 and empty)
            continue;
        ++line_number;
        if (not empty)
        {
            while (++lines_printed != line_number)
                std::cout << '\n';
            std::cout << line << '\n';
        }

    }
}
