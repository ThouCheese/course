#include "cpu.ih"

bool CPU::error() const
{
    std::cout << "syntax error\n";
    return false;
}