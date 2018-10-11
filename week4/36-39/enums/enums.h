#ifndef ENUMS_H
#define ENUMS_H

// this enum represents the size of the RAM.
enum RAM
{
    SIZE = 20
};

// the complete set of opertions that our CPU can handle
enum Opcode
{
    ERR,
    MOV,
    ADD,
    SUB,
    MUL,
    DIV,
    NEG,
    DSP,
    STOP
};

// used by the tokenizer to represent what type of operand the user
// entered
enum OperandType
{
    SYNTAX,
    VALUE,
    REGISTER,
    MEMORY
};

#endif // ENUMS_H