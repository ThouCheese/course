#include "charcount.ih"

void CharCount::count(std::istream &in)
{
    char ch;
    cin >> noskipws;

    while (cin >> ch)
    {
        Action action = locate(ch);
        if (action == Action::INSERT)
            insert(ch);
        else if (action == Action::APPEND)
            append(ch);
        else if (action == Action::ADD)
            add(ch);
        else
            cout << "oh noo!\n";
    }
}
