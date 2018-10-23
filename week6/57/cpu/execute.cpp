#include "cpu.ih"

bool CPU::execute(Opcode opcode)
{
    if (opcode == Opcode::STOP)
        return false;
    if (opcode == Opcode::ERR)
        return error();
    static void (CPU::*fn_list[7])() = {&CPU::mov, &CPU::add, &CPU::sub, 
                                        &CPU::mul, &CPU::div, &CPU::neg, 
                                        &CPU::dsp};
    (this->*fn_list[static_cast<size_t>(opcode)])();
    return true;                // continue
}