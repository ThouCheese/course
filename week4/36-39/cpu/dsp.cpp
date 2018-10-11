#include "cpu.ih"

// takes one operand and displays it
void CPU::dsp()
{
    if (not one_operand())
        return;
    cout << dereference(d_op1) << '\n';
}
