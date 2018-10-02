#include "cpu.ih"

void CPU::run()
{
    while (true)
    {
        Opcode opcode = d_tokenizer.opcode();
        if (opcode == Opcode::STOP)
            break;
        dispatch(opcode);
    }
}
