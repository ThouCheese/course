#ifndef TOKENIZER_H
#define TOKENIZER_H

#include "../operand/operand.h"
#include "../enums/enums.h"
#include <string>

class Tokenizer 
{
    std::string d_line;
    // number of mem operands, raise syntax error if this is two
    size_t d_mem_operands;

public:
    Tokenizer() = default;
    Opcode opcode();
    Operand operand();
    void reset();

private:
    void read_input();
    std::string next_word();
};

#endif // TOKENIZER
