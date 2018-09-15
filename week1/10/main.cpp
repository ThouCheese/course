#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
    size_t value = stoul(argv[1], 0, 16);   // initialize hexadecimal value
    size_t nibble = stoul(argv[2]);         // nibble to replace
    size_t replacement = stoul(argv[3]) % 16;   // new nibble (= 0 .. 15)

    value = value & ~(0xF << nibble * 4);
    value += replacement << nibble * 4;

    cout << hex << value << '\n';       // show the new value
}
