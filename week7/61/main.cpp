#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;

ostream &now(ostream &os)
{
    time_t now = time(0);
    return os << put_time(localtime(&now), "%a %b %d %T %Y");
}

int main(int argc, char const *argv[])
{
    cout << now << '\n';
}
