#ifndef INCLUDED_ENUMS_
#define INCLUDED_ENUMS_

enum RAM
{
    SIZE = 20
};

    // all opcodes recognized by the CPU. They must also be known by the
    // tokenizer, which is why they are `escalated' to a separate header file.
enum class Opcode
{
    MOV = 0,
    ADD = 1,
    SUB = 2,
    MUL = 3,
    DIV = 4,
    NEG = 5,
    DSP = 6,
    ERR,
    STOP,
};

    // the various operand types
    // used for array indexing
enum class OperandType
{
    SYNTAX = 10,            // syntax error while specifying an operand
    REGISTER = 0,           // register index
    MEMORY = 1,             // memory location (= index)
    VALUE = 2,              // direct value
};

#endif
