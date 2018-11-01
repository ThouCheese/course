#include "iohandler.ih"

void IOHandler::write_human(BasePair bases[4])
{
    for (size_t iter = 0; iter < 4; ++iter)
        d_fstream << bases[iter].to_char();
}