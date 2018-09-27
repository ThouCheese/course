#include "main.h"

void count_words()
{
    size_t result = 0;
    while (true) 
    {
        std::string line;
        if (not getline(std::cin, line))
            break;
        size_t words_in_string = 0;
        bool was_space = true;
        for (char ch : line)
        {
            if (ch == ' ')
            {
                if (not was_space)
                    words_in_string += 1;
            }
            else
                was_space = false;
        }
        result += words_in_string + not was_space;
    }
    std::cout << result << '\n';
}
