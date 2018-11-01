#include "iohandler.ih"

void IOHandler::read_human(istream &is)
{
    char cur_char;
    while (not is.eof())
    {
        BasePair bases[4];
        for (size_t iter = 0; iter < 4; ++iter)
        {
            is >> cur_char;
            bases[iter] = BasePair(cur_char);
        }
        (this->*d_write_ptr)(bases);
    }
}