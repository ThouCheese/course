#include "main.ih"

bool structCall(int argc, char const *argv[])
{
    ReturnValues local = combine(argc, argv);
    if (not local.ok)
    {
        cerr << "Usage: program <number> [arguments]\n";
        return false;
    }
    print_struct(local);
    return true;
}
