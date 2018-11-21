#include "wrap.ih"

Wrap::~Wrap()
{
    switch (d_type)
    {
        case DataType::STRINGS:
            d_data.destroy_words();
            break;
        case DataType::STRING:
            d_data.destroy_word();
            break;
        case DataType::DOUBLE:
            d_data.destroy_value();
            break;
    }
    d_type.~Data();
}