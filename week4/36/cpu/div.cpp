#include "cpu.ih"

void CPU::div()
{
    Operand operand1 = d_tokenizer.operand();
    Operand operand2 = d_tokenizer.operand();
    size_t op2_val = load(operand2);
    if (op2_val == 0)
        error();
    else
    {
        int result = load(operand1) / op2_val;
        store(operand1, result); 
    }
}
