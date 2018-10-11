#include "main.ih"

int main()
{
    int square[10][10];
    int (*row)[10] = square;
    inv_identity(square);
    for (size_t irow = 0; irow != 10; ++irow)
    {
        for (size_t icolumn = 0; icolumn != 10; ++icolumn)
            cout << square[irow][icolumn] << ' ';
        cout << '\n';
    }
}