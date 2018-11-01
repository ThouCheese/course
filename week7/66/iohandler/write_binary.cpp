#include "iohandler.ih"

void IOHandler::write_binary(BasePair bases[4])
{
    d_fstream << *reinterpret_cast<char *>(bases);
}