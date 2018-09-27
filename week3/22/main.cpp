#include "main.h"

int main(int argc, char const *argv[])
{
    if (argc != 2)
    {
        cerr << "Usage: Wc [-c, -w, -l]\n";
        return 1;
    }
    if (argv[1][0] != '-')
    {
        cerr << "Expected '-'\n";
        return 1;
    }
    switch (argv[1][1]) {
        case 'c':
            count_chars();
            break;
        case 'w':
            count_words();
            break;
        case 'l':
            count_lines();
            break;
        default:
            cerr << "Unknown instruction " << argv[1][1] << '\n';
            return 1;
    }
}
