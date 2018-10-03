#include "cpu.ih"

bool CPU::one_operand()
{
    d_op1 = d_tokenizer.operand();
    if (d_op1.type == OperandType::SYNTAX)
        return error();
    return true;
}