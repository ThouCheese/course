#include "tokenizer.ih"

bool is_register(string const &word)
{
    if (word.length() != 1)
        return false;
    return isalpha(word[0]);
}

bool is_value(string const &word)
{
    for (char chr : word)
        if (not isdigit(chr))
            return false;
    return true;
}

bool is_memory(string const &word)
{
    if (word[0] != '@')
        return false;
    return is_value(word.substr(1));
}

Operand Tokenizer::operand()
{
    string op_str = next_word();
    if (is_memory(op_str))
    {
        if (++d_mem_operands == 2)
            return Operand{OperandType::SYNTAX};
        else
            return Operand{OperandType::MEMORY, std::stoi(op_str.substr(1))};
    }
    else if (is_value(op_str))
        return Operand{OperandType::VALUE, std::stoi(op_str)};
    else if (is_register(op_str))
        return Operand(OperandType::REGISTER, op_str[0] - 'a');
    return Operand{OperandType::SYNTAX};
}
