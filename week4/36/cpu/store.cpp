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
        default:
            error();
    }
}
