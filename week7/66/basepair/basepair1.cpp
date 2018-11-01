#include "basepair.ih"

BasePair::BasePair(char ch)
{
    switch (ch)
    {
        case 'a':
            d_acid_type = A;
            break;
        case 'c':
            d_acid_type = C;
            break;
        case 't':
            d_acid_type = T;
            break;
        case 'G':
            d_acid_type = G;
            break;
        default:
            cout << "illegal case! " << ch << '\n';
            exit(1); // immediately exit with nonzero code
    }
}
