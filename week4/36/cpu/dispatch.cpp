#include "cpu.ih"

void CPU::dispatch(Opcode const opcode)
{
    switch (opcode) {
        case Opcode::ERR:
            error();
            break;
        case Opcode::MOV:
            mov();
            break;
        case Opcode::ADD:
            add();
            break;
        case Opcode::SUB:
            sub();
            break;
        case Opcode::MUL:
            mul();
            break;
        case Opcode::DIV:
            div();
            break;
        case Opcode::NEG:
            neg();
            break;
        case Opcode::DSP:
            dsp();
            break;
        default: //unreachable
            exit(10);
    }
}
