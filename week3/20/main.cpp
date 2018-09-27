#include "main.h"

int main(int argc, char *argv[])
{
    bool period = false;
    for (size_t index = 1; index != argc; ++index)
        if (std::string{argv[index]}.find('.') != std::string::npos)
        {
            period = true;
            break;
        }
    if (period)
    {
        double result = 0;
        for (size_t index = 1; index != argc; ++index)
            result += sum(result, std::stod(argv[index]));
        std::cout << result << '\n';
    }
    else
    {
        int result = 0;
        for (size_t index = 1; index != argc; ++index)
            result += sum(result, std::stoi(argv[index]));
        std::cout << result << '\n';
    }
}