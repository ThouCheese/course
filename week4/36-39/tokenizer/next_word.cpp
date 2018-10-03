#include "tokenizer.ih"

string Tokenizer::next_word()
{
    size_t space_pos = d_line.find(' ');
    string opstr = d_line.substr(0, space_pos);
    d_line.erase(0, space_pos + 1);
    return opstr;
}
