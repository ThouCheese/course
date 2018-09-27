#include <iostream>
#include <ctype.h>

int main()
{
    std::string result;
    char initial = 0;
    if (isalpha(initial))
            result.push_back(initial);
    for (char character = 1; character != 0; ++character)
        if (isalpha(character))
            result.push_back(character);
    std::cout << result << '\n';
}
