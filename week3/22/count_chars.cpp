#include "main.ih"

size_t count_chars()
{
    size_t char_count = 0;
    string line;
    while (getline(std::cin, line)) 
        char_count += line.length() + !cin.eof();
    return char_count;
}