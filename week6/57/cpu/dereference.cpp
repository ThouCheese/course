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

int CPU::dereference(Operand const &value)
{
    int (*fn_list[3])(Operand op, int list[], Memory &mem) = 
        {&value_fn, &register_fn, &memory_fn};
    return (*fn_list[static_cast<int>(value.type)])(value, d_register, d_memory);
}
