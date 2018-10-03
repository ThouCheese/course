#include "main.ih"

void populate_sorted(size_t const n_people,
                     Subject *subjects)
{
    for (size_t n_person = 0; n_person != n_people; ++n_person)
    {
        size_t index = 0;
        for (; index != n_person; ++index)
            if (not subjects[index].brown)
                break;
        // cout << index << '\n';
        insert(subjects, Subject{random() % 2, n_person}, index, n_people);
    }
}
