#include "main.ih"

int main()
{
    // Strings str(environ);
    // for (size_t index = 0; index != str.size(); ++index)
    //     cout << str.data()[index] << '\n';
    

    for (size_t iter = 0; iter != 1000; ++iter)
    {
        Strings env(environ);

        for (size_t rept = 0; rept != 100; ++rept)
        {
            for (char **ptr = environ; *ptr; ++ptr)
                env.add(*ptr);
        }
    } 
}