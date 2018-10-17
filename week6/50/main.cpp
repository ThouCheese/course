#include "main.ih"

int main()
{
    CharCount counter;
    counter.count(std::cin);
    for (size_t index = 0; index != counter.info().nChar; ++index)
    {
        showChar(counter.info().ptr[index].ch);
        cout << " found " << counter.info().ptr[index].count << " times\n";
    }
    cout << "capacity was " << counter.capacity() << '\n';
}
