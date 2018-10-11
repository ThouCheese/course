#include "cpu.ih"

// computes the result of the division of two operands, and stores
// the result in the left hand operand
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
