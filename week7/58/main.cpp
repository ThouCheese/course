#include "main.ih"

int main(int argc, char const *argv[])
{
    if (argc < 2)
    {
        cerr << "Usage: program number\n";
        return 1;
    }
    print(stoul(argv[1]), argc);
}
