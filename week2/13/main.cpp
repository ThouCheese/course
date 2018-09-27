#include <iostream>

int main(int argc, char *argv[])
{

    bool const correct_way = argc == 2 && argv[1] == std::string("ok");
    size_t counter = 0;
    while (true)
    {
        std::cout << "? ";
        std::string line;
        if (not getline(std::cin, line))
            break;
        if (not correct_way)
            ++counter;
        if (std::cin.eof())
            break;
        if (correct_way)
            ++counter;
    }
    std::cout << "\nread " << counter << " lines\n";
}