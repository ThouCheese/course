#include <iostream>

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        std::cerr << "Usage: rotate number [ror:rol]\n";
        return 1;
    }
    // create c++ strings from the arguments
    std::string const number_string{argv[1]};
    bool const ror = std::string{argv[2]} == "ror";
    // prevent IRE by precomputing the leading position
    size_t const l_pos = number_string.length() - 1;
    // initialize the import variables to 0
    size_t const value = std::stoul(number_string, 0, 2);

    size_t const shifted = ror ?
        value >> 1 :
        value << 1;

    size_t const newValue = ror ?
        // shift the word right by 1 and then insert the bit 
        // that dropped of at the left
        shifted & ~(1 << l_pos) | value & 1 << l_pos :
        // shift the word left by 1 and then insert the dropped of at then
        // right in the position l_pos, then clear the leftmost byte
        shifted | (value >> l_pos) & ~(1 << l_pos);

    for (size_t index = l_pos + 1; index-- != 0;)
        std::cout << ((newValue & (1 << index)) >> index);
    std::cout << '\n';
}
