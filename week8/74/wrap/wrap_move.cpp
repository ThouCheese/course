#include "wrap.ih"

Wrap::Wrap(Wrap &&wrap)
:
    d_type(other.d_type)
{
    switch (d_type)
    {
        case DataType::STRINGS:
            d_type{move(other.get_strings())};
            break;
        case DataType::STRING:
            d_type{move(other.get_string())};
            break;
        case DataType::DOUBLE:
            d_type{move(other.get_value())};
            break;
    }
}