#include "cpu.ih"

CPU::CPU(Memory memory)
    :
        NREGISTERS(20),
        d_memory(memory)
{
    d_registers = new int[NREGISTERS];
}
