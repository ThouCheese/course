#include "cpu.ih"

// handles storage into several types of operands
void CPU::store(Operand operand, size_t value)
{
    switch (operand.type) {
        case OperandType::REGISTER:
            d_registers[operand.value] = value; // the cpu is responsible
            break;                              // for storing
        case OperandType::MEMORY:
            d_memory.store(value, operand.value); // delegate storing to
            break;                                // the memory object
        case OperandType::SYNTAX:
            // do nothing, the tokenizer has already given an error
            break;
        default:
            error();
    }
}
