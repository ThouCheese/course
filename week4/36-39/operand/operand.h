#ifndef OPERAND_H
#define OPERAND_H

#include "../enums/enums.h"

// simple struct that contains an operand type and a operand value, e.g.
// `@2` -> `MEMORY 2`, or `b` -> `REGISTER 1`
struct Operand
{
    OperandType type;               
    int value;
    
    Operand(OperandType const type, int const value);
    Operand(OperandType const type);
    Operand() = default;
};

#endif // OPERAND_H
