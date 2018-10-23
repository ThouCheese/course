#include "cpu.ih"

void CPU::register_store_fn(Operand const &lhs, 
                            int value, 
                            int registers[NREGISTERS], 
                            Memory &memory)
{
    registers[lhs.value] = value;
}

void CPU::memory_store_fn(Operand const &lhs, 
                          int value, 
                          int registers[NREGISTERS], 
                          Memory &memory)
{
    memory.store(lhs.value, value);
}

void CPU::store(Operand const &lhs, int value)
{
    void (*fn_list[2])(Operand const &lhs, 
                       int value, 
                       int registers[NREGISTERS], 
                       Memory &memory) = {register_store_fn, memory_store_fn};
    fn_list[static_cast<size_t>(lhs.type)];
}   