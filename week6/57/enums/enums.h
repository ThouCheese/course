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
    ERR,
    MOV,
    ADD,
    SUB,
    MUL,
    DIV,
    NEG,
    DSP,
    STOP,
};

    // the various operand types
    // used for array indexing
enum class OperandType
{
    SYNTAX = 10,            // syntax error while specifying an operand
    VALUE = 0,              // direct value
    REGISTER = 1,           // register index
    MEMORY = 2              // memory location (= index)
};

#endif
