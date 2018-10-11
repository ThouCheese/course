#ifndef CPU_H
#define CPU_H

#include "../memory/memory.h"
#include "../tokenizer/tokenizer.h"
#include "../operand/operand.h"
#include <cstddef>

class CPU 
{
    int d_registers[20];    // pointer to the array of registers
    Memory d_memory;        // memory objects for storage
    Tokenizer d_tokenizer;  // tokenizer that encapsulates parsing
    Operand d_op1;
    Operand d_op2;          // the operands on which the cpu will act 

public:
    CPU(Memory &memory);

    void run();

private:
    void dispatch(Opcode opcode);
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
    void store(Operand operand, size_t value);
    int dereference(Operand operand) const;
};

#endif // CPU
