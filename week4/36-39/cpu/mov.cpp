#include "cpu.ih"

// takes two operands and moves the value of the rhs into the lhs
void CPU::mov()
{
    if (not two_operands())
        return;
    store(d_op1, dereference(d_op2));
}
