#include "cpu.ih"

void CPU::add()
{
    if (not two_operands())
        return;
    int sum = dereference(d_op1) + dereference(d_op2);
    store(d_op1, sum);
}
