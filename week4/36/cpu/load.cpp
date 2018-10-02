#include "cpu.ih"

int CPU::load(Operand const operand) const
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
