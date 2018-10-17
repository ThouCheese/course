#include "main.ih"

void showChar(char ch)
{
    cout << '\'';
    switch (ch) {
        case '\t':
            cout << "\\t";
        break;
        case '\n':
            cout << "\\n";
        break;
        default:
            cout << ch;
    }
    cout << '\'';
}