#include "cpu.ih"

bool CPU::two_operands()
{
    if (not one_operand())
        return false;
    d_op2 = d_tokenizer.operand();
    if (d_op2.type == OperandType::SYNTAX)
        return error();
    return true;
}
