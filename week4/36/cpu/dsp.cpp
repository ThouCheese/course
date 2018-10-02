#include "cpu.ih"

void CPU::dsp()
{
    Operand operand1 = d_tokenizer.operand();
    cout << load(operand1) << '\n';
}
