#include "tokenizer.ih"

void Tokenizer::reset()
{
    // should be not be necessary but lets not let ourselves be surprised
    d_line = ""; 
    d_mem_operands = 0;

    cin.clear();
}
