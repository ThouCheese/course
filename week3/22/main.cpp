#include "main.ih"

int main(int const argc, char const *argv[])
{
    if (err(argc, argv))
        return 1;
    size_t count = 0;
    switch (argv[1][1]) {
        case 'c':
            count = count_chars();
            break;
        case 'w':
            count = count_words();
            break;
        case 'l':
            count = count_lines();
            break;
        default:
            cerr << "Unknown option " << argv[1][1] << '\n';
            return 1;
    }
    cout << count << '\n';
}
