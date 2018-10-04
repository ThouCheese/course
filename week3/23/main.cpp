#include "main.ih"

int main()
{
    size_t env_length = get_env_len();
    string list[env_length];
    for (size_t index = 0; index != env_length; ++index)
        list[index] = string{environ[index]};

    quicksort(list, 0, env_length - 1);

    for (size_t index = 0; index != env_length; ++index)
        cout << list[index] << '\n';
}
