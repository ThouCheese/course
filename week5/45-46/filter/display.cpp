#include "filter.ih"

void Filter::display()
{
    size_t line_num = 0;
    string line;
    while (true)
    {
        if (not this->getline(line))
            return; // all lines were empty
        if (line.find_first_not_of(" \t") != string::npos) // non empty
            break;
    }
    cout << line << '\n';

    size_t n_empty = 0; // number of empty lines
    while (this->getline(line))
        if (line.find_first_not_of(" \t") == string::npos)
            ++n_empty;
        else
        {
            cout << string(n_empty, '\n') << line << '\n';
            n_empty = 0;
        }
}
