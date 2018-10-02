#include "cpu.ih"

void CPU::neg()
{
    Operand operand1 = d_tokenizer.operand();
    store(operand1, -load(operand1));
}
