#include "tokenizer.ih"

Opcode Tokenizer::opcode()
{
    // opcodes are always the start of an instruction, so read now
    reset();
    read_input();
    string op_str = next_word();
    if (op_str == "mov")
        return Opcode::MOV;
    else if (op_str == "add")
        return Opcode::ADD;
    else if (op_str == "sub")
        return Opcode::SUB;
    else if (op_str == "mul")
        return Opcode::MUL;
    else if (op_str == "div")
        return Opcode::DIV;
    else if (op_str == "neg")
        return Opcode::NEG;
    else if (op_str == "dsp")
        return Opcode::DSP;
    else if (op_str == "stop")
        return Opcode::STOP;
    reset();
    return Opcode::ERR;
}
