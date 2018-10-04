#include "main.ih"

void swap(string *string1, string *string2)
{
    string *temp = string1;
    string1 = string2;
    string2 = temp;
}