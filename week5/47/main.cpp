#include "main.ih"

int main()
{
    int argc = 3;
    char *argv[] = {"hoi", "wat", "niet"};
    Strings strings1{environ};
    Strings strings2{argc, argv};
    string_swap(strings1, strings2);
    Filter filter1{strings1};
    Filter filter2{strings2};
    filter1.display();
    filter2.display();
}