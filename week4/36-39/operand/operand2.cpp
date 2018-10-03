#include "operand.ih"

Operand::Operand(OperandType const type, int const value)
    :
        type{type},
        value{value}
{}
    