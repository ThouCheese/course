#include "main.ih"

int main()
{
    Strings str(environ);
    size_t size = str.size();
    for (size_t index = 0; index != size; ++index)
        cout << str.at(index) << '\n';
}