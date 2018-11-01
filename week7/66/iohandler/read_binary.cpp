#include "iohandler.ih"

// takes an istream to a binary file and moves the istream past the
// 
size_t strip_head(istream &is)
{
    char letter_b;
    is >> letter_b;
    uint64_t size;
    is >> size;
    return size;
}

void IOHandler::read_binary(istream &is)
{
    d_size = strip_head(is);
    char current_char;
    while (is >> current_char)
        (this->*d_write_ptr)(reinterpret_cast<BasePair *>(current_char));
    close(d_count);
}
