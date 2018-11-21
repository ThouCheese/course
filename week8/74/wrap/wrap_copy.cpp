#include "wrap.ih"

Wrap::Wrap(Wrap const &other)
:
    d_type(other.d_type)
{
    switch (d_type)
    {
        case DataType::STRINGS:
            d_type{other.get_strings()};
            break;
        case DataType::STRING:
            d_type{other.get_string()};
            break;
        case DataType::DOUBLE:
            d_type{other.get_value()};
            break;
    }
}
