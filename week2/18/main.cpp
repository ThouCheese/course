#include <iostream>

void process(std::string line, int *value)
{
    char leading_char = line[0];
    int operand = 0;
    if (leading_char != 'r')
        operand = strtol(line.substr(line.find(' ') + 1));
    switch (leading_char) 
    {
        case 's': // sto
            *value = operand;
            break;
        case 'a': // add
            *value += operand;
            break;
        case 's': // sub
            *value -= operand;
            break;
        case 'm': // mul
            *value *= operand;
            break;
        case 'd': // div
            if (operand == 0)
            {
                std::cerr << "div by zero\n";
                return;
            }
            *value /= operand;
            break;
        case ''
    }
}

int main()
{
    int value = 0;
    while (true)
    {
        std::cout << "? ";
        std::string line;
        if (not getline(std::cin, line))
            break;
        size_t space_pos = line.find(' ');
        std::string instruction = line.substr(0, space_pos);
        std::string value = line.substr(space_pos + 1);
        std::cout << "instruction is " << instruction 
                  << "\nvalue is " << value << '\n';
    }
}