#include "cpu.ih"

// handler function that extracts two operands from the tokenizer,
// and stores then in the members d_op1 and d_op2
bool CPU::two_operands()
{
    if (not one_operand())
        return false;
    d_op2 = d_tokenizer.operand();
    if (d_op2.type == OperandType::SYNTAX)
        return error();
    return true;
}
