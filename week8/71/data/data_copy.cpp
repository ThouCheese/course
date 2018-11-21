#include "data.ih"

Data::Data(Data const &data, DataType type)
{
    (this->*s_copy[static_cast<size_t>(type)])(data);
}