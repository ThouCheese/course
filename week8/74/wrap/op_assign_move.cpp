#include "wrap.ih"

Wrap &Wrap::operator=(Wrap &&other)
{
    Wrap copy{move(other)};
    swap(other);
    // prevent heap destruction
    &other = 0;
    return *this;
}
