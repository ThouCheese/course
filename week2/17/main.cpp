#include <iostream>

void print_bitwise(size_t value, size_t length)
{
    for (size_t index = length; index-- != 0;)
        std::cout << ((value & (1 << index)) >> index);
    std::cout << '\n';
}

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        std::cerr << "Usage: rotate number [ror:rol]\n";
        return 1;
    }
    // create c++ strings from the arguments
    std::string number_string{argv[1]};
    bool ror = std::string{argv[2]} == "ror";
    // initialize the import variables to 0
    size_t value = 0;
    // prevent IRE
    size_t length = number_string.length();
    // read the string containig 1's and 0's into a size_t
    for (size_t index = 0; index != length; ++index)
        value |= (number_string[length - index - 1] - '0') << index;

    size_t newValue = value ?
        // shift the word right by 1 and then insert the bit that dropped of at the left
        newValue = (value >> 1) & ~(1 << (length - 1)) | ((value & 1) << (length - 1)) :
        // shift the word left by 1 and then insert the 
        newValue = (value << 1) | (((value << 1) & ~1) << (length -1));
    print_bitwise(newValue, length);
}