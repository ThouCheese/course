#include "acct_v3.ih"
#include <csignal>

void ACCT_V3::print() const
{
    cout << "'" << ac_comm << "' ";

    switch (ac_exitcode)
    {
        case SIGKILL:
            cout << "SIGKILL";
            break;
        case SIGTERM:
            cout << "SIGTERM";
            break;
        default:
            cout << ac_exitcode;
    }
    cout << '\n';
}