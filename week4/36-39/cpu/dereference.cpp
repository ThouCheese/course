#include "cpu.ih"

// takes an operand of any type and returns that value that it represents
int CPU::dereference(Operand operand) const
{

    switch (operand.type) {
        case OperandType::VALUE:
            return operand.value;
        case OperandType::REGISTER:
            return d_registers[operand.value];
        case OperandType::MEMORY:
            return d_memory.load(operand.value);
        default:
            error();
            return 0;
    }
}
