#include "cpu.ih"

// infinite loop that continuously extracts opcodes from the tokenizer, 
// then calls dispatch to select the apropriate function
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
