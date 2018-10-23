#include "cpu.ih"

void CPU::register_store_fn(Operand const &lhs, int value)
{
    d_register[lhs.value] = value;
}

void CPU::memory_store_fn(Operand const &lhs, int value)
{
    d_memory.store(lhs.value, value);
}

void CPU::store(Operand const &lhs, int value)
{
    static void (CPU::*fn_list[2])(Operand const &lhs, int value) = 
        {&CPU::register_store_fn, &CPU::memory_store_fn};
    (this->*fn_list[static_cast<size_t>(lhs.type)])(lhs, value);
}   