#include "cpu.ih"

void CPU::mul()
{
    Operand operand1 = d_tokenizer.operand();
    Operand operand2 = d_tokenizer.operand();
    int result = load(operand1) * load(operand2);
    store(operand1, result);
}
