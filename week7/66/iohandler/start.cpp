#include "iohandler.ih"

void IOHandler::start(istream &is)
{
    if (d_writing_binary)
        d_fstream << 'd' << 0ul;

    if (is.peek() == 'b')
        read_binary(is);
    else
        read_human(is);
}
