#include "iohandler.ih"

IOHandler::IOHandler(bool to_binary, string const &path)
    :
        d_writing_binary(to_binary),
        d_fstream{path, ofstream::out}
{
    cout << d_writing_binary << '\n';
    d_write_ptr = d_writing_binary ?
        &IOHandler::write_binary : &IOHandler::write_human;
}
