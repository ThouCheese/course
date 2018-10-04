#include "main.ih"

int main(int argc, char *argv[])
{
    --argc;
    ++argv;
    if (contains_period(argc, argv))
        cout << sum(argc, argv, 0.0) << '\n';
    else
        cout << sum(argc, argv, 0) << '\n';
}
