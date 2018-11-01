#ifndef IOHANDLER_H
#define IOHANDLER_H

#include "../basepair/basepair.h"
#include <fstream>
#include <istream>

// the binary format is as follows:
//  the head, which contains
//   'd', followed by the length of the file in basepairs
//  the body
//   which contains the binary representation of the base pairs

class IOHandler
{
    // stream to the output file
    std::ofstream d_fstream;

    // points to write_binary or write_human
    void (IOHandler::*d_write_ptr)(BasePair bases[4]);

    // determines whether the program is writing binary or human
    bool d_writing_binary;

    // current position
    size_t d_count = 0;

    // total size of the read file (only used for binary files)
    size_t d_size = 0;
public:
    IOHandler(bool to_binary, std::string const &path);
    void start(std::istream &is);

private:
    void close(size_t num_base_pairs);

    void read_binary(std::istream &is); // parses a binary file
    void read_human(std::istream &is);  // parses a human readable file

    void write_binary(BasePair bases[4]); // writes a binary file
    void write_human(BasePair bases[4]);  // writes a human readable file
};

#endif