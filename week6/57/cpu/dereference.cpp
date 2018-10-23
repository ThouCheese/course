#include "cpu.ih"
#include "../enums/enums.h"

int CPU::value_fn(Operand const &val)
{
    return val.value;
}

int CPU::register_fn(Operand const &val)
{
    return d_register[val.value];
}

int CPU::memory_fn(Operand const &val)
{
    return d_memory.load(val.value);
}

int CPU::dereference(Operand const &value)
{
    int (CPU::*fn_list[3])(Operand const &op) = 
        {&CPU::value_fn, &CPU::register_fn, &CPU::memory_fn};
    return (this->*fn_list[static_cast<size_t>(value.type)])(value);
}
