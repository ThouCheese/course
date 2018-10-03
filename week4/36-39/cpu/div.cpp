#include "cpu.ih"

void CPU::div()
{
    if (not two_operands())
        return;
    size_t op2_val = dereference(d_op2);
    if (op2_val == 0)
        error();
    else
    {
        int result = dereference(d_op1) / op2_val;
        store(d_op1, result); 
    }
}
