#include "main.h"

bool structCall(int argc, char const *argv[])
{
    ReturnValues local = combine(argc, argv);
    if (not local.ok)
    {
        cerr << "Usage: program <number> [arguments]\n";
        return false;
    }
    cout << "Value at " << local.nr << " is " << local.value << '\n';
    return true;
}
