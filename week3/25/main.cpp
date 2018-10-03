#include "main.ih"

int main(int argc, char const *argv[])
{
    if (argc != 3)
    {
        cerr << "Usage: program n_people seed";
        return 1;
    }
    size_t const n_people = std::stoul(argv[1]);
    size_t const seed = std::stoul(argv[2]);
    srandom(seed);
    Subject *subjects = new Subject[n_people];
    populate_sorted(n_people, subjects);
    print_subjects(subjects, n_people);
}
