#include "cpu/cpu.h"

int main()
{
    Memory memory;
    CPU cpu(memory);
    cpu.run();
}