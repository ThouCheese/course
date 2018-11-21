#include "main.ih"

void handle_input(bool &all, string &path, int argc, char const *argv[])
{
    if (argc == 2)
    {
        if (argv[1] == string("-a"))
            all = true;
        else
            path = argv[1];        
    }
    else if (argc == 3)
    {
        if (argv[1] == string("-a"))
            all = true, path = argv[2];
        else
            all = true, path = argv[1];
    }
    else if (argc > 3) 
        cerr << "Usage: program [-a] [path to pacct]\n", exit(1);
}
