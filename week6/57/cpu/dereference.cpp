#include "cpu.ih"
#include "../enums/enums.h"

int CPU::value_fn(Operand val, int registers[NREGISTERS], Memory &mem)
{
    return val.value;
}

int CPU::register_fn(Operand val, int reg[NREGISTERS], Memory &mem)
{
    return reg[val.value];
}

int CPU::memory_fn(Operand val, int registers[NREGISTERS], Memory &mem)
{
    return mem.load(val.value);
}

int (*CPU::fn_list[3])(CPU::Operand op, int list[], Memory &mem) = 
    {&CPU::value_fn, &CPU::register_fn, &CPU::  memory_fn};

int CPU::dereference(Operand const &value)
{
    return (*fn_list[static_cast<int>(value.type)])(value, d_register, d_memory);
}
