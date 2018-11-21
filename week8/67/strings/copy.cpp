#include "strings.ih"

Strings::Strings(Strings const &other)
	:
        Strings()
{
    resize(other.d_size);
    for (size_t index = 0; index < other.d_size; ++index)
        add(other.at(index));
}