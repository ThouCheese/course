#include "cpu.ih"

void CPU::mov()
{
    Operand operand1 = d_tokenizer.operand();
    Operand operand2 = d_tokenizer.operand();
    store(operand1, load(operand2));
}
