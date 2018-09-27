#include <iostream>

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

        // the third character is unique, so we can make a switch. We default to
        // 'a' if the length of the instruction is not 3, so as to hit the 
        // default case of the unknown instruction
        char unique_char = instruction.length() == 3 ? line[2] : 'a';
        int operand = 0;
        if (unique_char != 't')
            operand = stoi(line.substr(line.find(' ') + 1));
        switch (unique_char) 
        {
            case 'o': // sto
                value = operand;
                break;
            case 'd': // add
                value += operand;
                break;
            case 'b': // sub
                value -= operand;
                break;
            case 'l': // mul
                value *= operand;
                break;
            case 'v': // div
                if (operand == 0)
                {
                    std::cerr << "div by zero\n";
                    continue;
                }
                value /= operand;
                break;
            case 't': // ret
                return 0;
                break;
            default:
                std::cout << "No instruction `" << instruction;
        }
        std::cout << value << '\n';
    }
}