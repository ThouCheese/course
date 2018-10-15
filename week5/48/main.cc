#include "main.ih"

int main(int argc, char **argv)
{
    Data data;
    size_t count = 0;
    cout << "hi!\n";

    while (data.read())
    {
        cout << "Object " << ++count << ": ";
        data.display();
    }
}
