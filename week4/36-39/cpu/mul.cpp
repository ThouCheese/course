#include "cpu.ih"

void CPU::mul()
{
    if (not two_operands())
        return;
    int result = dereference(d_op1) * dereference(d_op2);
    store(d_op1, result);
}
