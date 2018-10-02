#include "cpu.ih"

void CPU::add()
{
    Operand operand1 = d_tokenizer.operand();
    Operand operand2 = d_tokenizer.operand();
    int sum = load(operand1) + load(operand2);
    store(operand1, sum);
}
