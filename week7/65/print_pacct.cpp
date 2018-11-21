#include "main.ih"
#include <fstream>

void print_pacct(bool all, string &pacct_path)
{
    ifstream stream{pacct_path};
    size_t count = 0;
    cout << pacct_path << '\n';
    while (stream)
    {
        char bytes[sizeof(ACCT_V3)];
        for (size_t index = 0; index < sizeof(ACCT_V3); ++index)
            stream >> bytes[index];
        ACCT_V3 acct = *reinterpret_cast<ACCT_V3 *>(bytes);

        if (all or acct.ac_exitcode)
            acct.print();
    }
}
