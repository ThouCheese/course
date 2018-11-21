#include "strings.ih"

void Strings::iterate(char **environLike)
{
    cout << d_n_iter << '\n';
    while (d_n_iter--)
    {
        resize(1);
        d_size = 0;
        d_capacity = 1;

        for (size_t iter = 0; *(environLike + iter); ++iter)
            add(environLike[iter]);
    }
}
