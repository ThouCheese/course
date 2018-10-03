#include "cpu.ih"

void CPU::mov()
{
    if (not two_operands())
        return;
    store(d_op1, dereference(d_op2));
}
