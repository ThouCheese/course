#include "main.h"

int main(int argc, char const *argv[])
{
    size_t const n_people = std::stoul(argv[1]);
    size_t const seed = std::stoul(argv[2]);
    srandom(seed);

    Subject subjects[1000]; // vectors are NC right?

    for (size_t n_person = 0; n_person != n_people; ++n_person)
    {
        size_t index = 0;
        for (; index != n_person; ++index)
            if (not subjects[index].brown)
                break;
        std::cout << "inserting at " << index << '\n';
        insert(subjects, Subject{random() % 2, n_person}, index, n_people);
    }
    for (size_t index = 0; index != n_people; ++index)
        std::cout 
            << (index + 1) << ": "
            << (subjects[index].brown ? "brown (" : "blue (")
            << (subjects[index].order) << ")\n";
}
