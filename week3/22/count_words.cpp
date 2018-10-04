#include "main.ih"

size_t count_words()
{
    size_t word_count = 0;
    string line;
    while (getline(std::cin, line)) 
    {
        size_t words_in_string = 0;
        bool was_space = true;
        for (char ch : line)
            if (ch == ' ')
            {
                if (not was_space)
                    words_in_string += 1;
            }
            else
                was_space = false;
        word_count += words_in_string + not was_space;
    }
    return word_count;
}
    