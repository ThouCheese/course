#include "main.ih"

int main()
{
    string strs[] = {"hoi", "wie", "wil", "een", "string"};
    Sort sorter(&increasing);
    sorter.sort(strs, 5);
    for (string str : strs)
        cout << str << '\n';
}