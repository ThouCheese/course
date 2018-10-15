#include "main.ih"

int main()
{
    Strings str(environ);
    Filter filter(str);
    filter.display();
}