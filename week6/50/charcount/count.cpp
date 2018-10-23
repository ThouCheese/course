#include "charcount.ih"

void CharCount::count(std::istream &in)
{
    char ch;
    cin >> noskipws;

    static void (CharCount::*fn_list[3])(char) = 
        {&CharCount::insert, &CharCount::append, &CharCount::add};

    while (cin >> ch)
    {
        Action action = locate(ch);
        (this->*fn_list[action])(ch);
    }
}
