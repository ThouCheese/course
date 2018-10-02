#ifndef OPERAND_H
#define OPERAND_H

#include "../enums/enums.h"

struct Operand
{
    OperandType type;
    int value;
    
    Operand(OperandType const type, int const value);
    Operand(OperandType const type);
};

#endif // OPERAND_H
