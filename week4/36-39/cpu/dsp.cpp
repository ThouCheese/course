#include "cpu.ih"

void CPU::dsp()
{
    if (not one_operand())
        return;
    cout << dereference(d_op1) << '\n';
}
