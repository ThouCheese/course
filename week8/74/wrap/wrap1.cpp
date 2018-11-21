#include "wrap.ih"

Wrap::Wrap(Strings const &strings)
:
    d_data(strings),
    d_type(DataType::STRINGS)
{}