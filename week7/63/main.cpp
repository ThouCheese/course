#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char const *argv[])
{
    double value = 12.04;
    ios_base::fmtflags flags{ios::adjustfield | ios::floatfield}; 
    cout 
        << setw(15) << value << '\n'
        << setw(15) << left << value << '\n'
        << setw(15) << right << value << '\n'
        << setw(15) << fixed << setprecision(1) << value << '\n'
        << setw(15) << setprecision(4) << value << '\n'
        << resetiosflags(flags) << setw(15) << value << '\n';
}
