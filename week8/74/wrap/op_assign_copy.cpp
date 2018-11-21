#include "wrap.ih"

Wrap &Wrap::operator=(Wrap const &other)
{
    Wrap copy{other};
    swap(other);
    return *this;
}
