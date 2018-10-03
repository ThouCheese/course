#ifndef CPU_H
#define CPU_H

#include "../memory/memory.h"
#include "../tokenizer/tokenizer.h"
#include <cstddef>

class CPU 
{
    size_t NREGISTERS;
    int *d_registers;
    Memory d_memory;
    Tokenizer d_tokenizer;
    Operand d_op1, d_op2;

public:
    CPU(Memory memory);

    void run();

private:
    void dispatch(Opcode const opcode);
    void mov();
    void add();
    void sub();
    void mul();
    void div();
    void neg();
    void dsp();
    bool error() const;
    bool one_operand();
    bool two_operands();

    // these functions abstract loading and storing over operand types
    void store(Operand const operand, size_t const value);
    int dereference(Operand const operand) const;
};

#endif // CPU
