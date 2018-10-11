#include "cpu.ih"

// takes one operands and flips its sign
void CPU::neg()
{
    if (not one_operand())
        return;
    store(d_op1, -dereference(d_op1));
}
