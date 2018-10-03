#include "cpu.ih"

void CPU::sub()
{
    if (not two_operands())
        return;
    int result = dereference(d_op1) - dereference(d_op2);
    store(d_op1, result);
}
