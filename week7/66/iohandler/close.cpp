#include "iohandler.ih"

void IOHandler::close(size_t num_base_pairs)
{
    if (d_writing_binary)
    {
        d_fstream.seekp(1);  // go back to the second character
        d_fstream << num_base_pairs;  // write the length
    }
    d_fstream.close();
}