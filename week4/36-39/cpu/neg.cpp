#include "cpu.ih"

void CPU::neg()
{
    if (not one_operand())
        return;
    store(d_op1, -dereference(d_op1));
}
