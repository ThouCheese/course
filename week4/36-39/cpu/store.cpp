#include "cpu.ih"

void CPU::store(Operand const operand, size_t const value)
{
    switch (operand.type) {
        case OperandType::REGISTER:
            d_registers[operand.value] = value;
            break;
        case OperandType::MEMORY:
            d_memory.store(value, operand.value);
            break;
        case OperandType::SYNTAX:
            // do nothing, the tokenizer has already printed the error
            break;
        default:
            error();
    }
}
