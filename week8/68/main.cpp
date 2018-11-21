#include "main.ih"

int main(int argc, char const *argv[])
{
    if (argc != 2 and argc != 3)
    {
        cerr << "Usage: program iterations [move]\n";
        return 1;
    }
    bool move = argc == 3; // don't care what you put there
    cout << move << '\n';
    size_t iterations = stoul(argv[1]);
    Strings strs{iterations, not move};
    strs.iterate(environ);
}
